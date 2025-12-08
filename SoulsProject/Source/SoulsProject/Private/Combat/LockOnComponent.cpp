// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/LockOnComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"	//the class we defined in the header
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/SpringArmComponent.h"

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

	targetActor = outResult.GetActor();

	controller->SetIgnoreLookInput(true);	//ignores the look input, making the camera static
	movementComp->bOrientRotationToMovement = false;	//character shouldn't rotate in their direction of movement.
	movementComp->bUseControllerDesiredRotation = true;	//these are behaviours, hence the "b" at the start

	springArmComp->TargetOffset = FVector{0.0f, 0.0f, 50.0f};
}

void ULockOnComponent::EndLockon()
{
	targetActor = nullptr;

	movementComp->bOrientRotationToMovement = true;
	movementComp->bUseControllerDesiredRotation = false;

	springArmComp->TargetOffset = FVector{ 0.0f, 0.0f, 0.0f };

	controller->ResetIgnoreLookInput();	//just reset everything, this apparently works easier?
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

	targetLocation.Z -= 75.0f;

	FRotator lockOnRotation{ UKismetMathLibrary::FindLookAtRotation(currentLocation, targetLocation) };	//lock rotation on to end point from start point

	controller->SetControlRotation(lockOnRotation);	//set controller rotation to lockOnRotation
}

