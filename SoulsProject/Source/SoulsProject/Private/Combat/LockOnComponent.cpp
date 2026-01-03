// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/LockOnComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"	//the class we defined in the header
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/SpringArmComponent.h"
#include "Interfaces/Enemy.h"

// Sets default values for this component's properties
ULockOnComponent::ULockOnComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULockOnComponent::BeginPlay()
{
	Super::BeginPlay();

	ownerRef = GetOwner<ACharacter>();
	controller = GetWorld()->GetFirstPlayerController();	//grabs the first controller, which will be the player. Useful if there are multiple controllers
	movementComp = ownerRef->GetCharacterMovement();

	springArmComp = ownerRef->FindComponentByClass<USpringArmComponent>();
}

void ULockOnComponent::StartLockon(float lockonRange)
{
	FHitResult outResult;	//what the trace hits
	FVector currentLocation{ ownerRef->GetActorLocation() }; //get owner because this is on a component
	FCollisionShape sphere{ FCollisionShape::MakeSphere(lockonRange) };	//makes a sphere with a radius of 750.0f
	FCollisionQueryParams ignoreParams{ FName{TEXT("Ignore Collision Params")}, false, ownerRef };	//ignores the owner (the player) so you can't lock on to yourself

	//SweepMultiByChannel() --- Returns all shapes in the collision

	bool hasFoundTarget{ GetWorld()->SweepSingleByChannel(	//checks a shape and returns the single first blocking hit, only returns one.
		outResult,	//trace hit
		currentLocation,	//start location
		currentLocation,	//end location
		FQuat::Identity,	//rotation
		ECollisionChannel::ECC_GameTraceChannel1,	//The channel to trace
		sphere,		//trace shape
		ignoreParams) };	//what to ignore

	if (!hasFoundTarget) { return; }

	if (!outResult.GetActor()->Implements<UEnemy>()) { return; }	//sanity check - if enemy has no interface, do not lock on

	targetActor = outResult.GetActor();

	controller->SetIgnoreLookInput(true);	//ignores the look input, making the camera static
	movementComp->bOrientRotationToMovement = false;	//character shouldn't rotate in their direction of movement.
	movementComp->bUseControllerDesiredRotation = true;	//these are behaviours, hence the "b" at the start
	
	ownerRef->GetCharacterMovement()->MaxWalkSpeed = combatWalkSpeed;

	springArmComp->TargetOffset = FVector{0.0f, 0.0f, 50.0f};

	IEnemy::Execute_OnSelect(targetActor);	//execute the interface function with name after the underscore (e.g. Execute_FunctionName() )

	onUpdatedTargetDelegate.Broadcast(targetActor);	//broadcast this event (tell other classes it has occurred)
}

void ULockOnComponent::EndLockon()
{
	IEnemy::Execute_OnDeselect(targetActor);

	targetActor = nullptr;	//basically just reset all the values coded in LockOn

	movementComp->bOrientRotationToMovement = true;
	movementComp->bUseControllerDesiredRotation = false;

	ownerRef->GetCharacterMovement()->MaxWalkSpeed = freeWalkSpeed;

	springArmComp->TargetOffset = FVector{ 0.0f, 0.0f, 0.0f };

	controller->ResetIgnoreLookInput();	//just reset everything, this apparently works easier?

	onUpdatedTargetDelegate.Broadcast(targetActor);
}

void ULockOnComponent::ToggleLockon(float lockonRange)
{
	if (IsValid(targetActor)) 
	{
		EndLockon();
	}
	else
	{
		StartLockon();
	}
}


// Called every frame
void ULockOnComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!IsValid(targetActor)) { return; }	//check if there is a valid enemy to lock on to

	FVector currentLocation = { ownerRef->GetActorLocation() };	//start pos
	FVector targetLocation = { targetActor->GetActorLocation() };	//end pos

	double targetDistance = FVector::Distance(currentLocation, targetLocation);

	if (targetDistance >= breakDistance)
	{
		EndLockon();
		return;
	}

	targetLocation.Z -= 75.0f;

	FRotator lockOnRotation{ UKismetMathLibrary::FindLookAtRotation(currentLocation, targetLocation) };	//lock rotation on to end point from start point

	controller->SetControlRotation(lockOnRotation);	//set controller rotation to lockOnRotation
}

