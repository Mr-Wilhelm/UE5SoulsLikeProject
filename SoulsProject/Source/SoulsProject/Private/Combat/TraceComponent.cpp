// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/TraceComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Interfaces/Fighter.h"

// Sets default values for this component's properties
UTraceComponent::UTraceComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTraceComponent::BeginPlay()
{
	Super::BeginPlay();


	skeletalComp = GetOwner() -> FindComponentByClass<USkeletalMeshComponent>();	//assign to skeletal mesh of whatever the component is attached to
	
}


// Called every frame
void UTraceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!isAttacking) { return; }

	FVector socketStartPos{ skeletalComp->GetSocketLocation(socketStart) };
	FVector socketEndPos{ skeletalComp->GetSocketLocation(socketEnd) };
	FQuat socketRotationPos{ skeletalComp->GetSocketQuaternion(socketRotation) };

	TArray<FHitResult> outResults;	//TArrays have built in functions for searching through it.

	double weaponDistance{ FVector::Distance(socketStartPos, socketEndPos) };
	FVector boxHalf{ boxCollisionLength, boxCollisionLength, weaponDistance };	//get box dimensions
	boxHalf /= 2;	//half the dimensions to actually get half

	FCollisionShape Box{ FCollisionShape::MakeBox(boxHalf) };	//declare a box shape for the weapon trace

	FCollisionQueryParams ignoreParams{ FName {TEXT("Ignore Params")}, false, GetOwner() };	//ignore the owner

	bool hasFoundTargets{ GetWorld()->SweepMultiByChannel(outResults, 
		socketStartPos, 
		socketEndPos, 
		socketRotationPos, 
		ECollisionChannel::ECC_GameTraceChannel1, //channel you want to trace through
		Box) };	//sweep trace using the box shape

	if (debugMode)
	{
		FVector centerPoint{ UKismetMathLibrary::VLerp(socketStartPos, socketEndPos, 0.5f) };

		UKismetSystemLibrary::DrawDebugBox(
			GetWorld(),
			centerPoint,
			Box.GetExtent(),
			hasFoundTargets ? FLinearColor::Green : FLinearColor::Red, //turnary operator. Checks the bool value. If true, uses value on the left of the colon, if false, uses the value on the right of the colon.
			socketRotationPos.Rotator(),	//Rotation value needs to be of type FRotator, our variable is of FQuat
			1.0f,	//box lifetime
			2.0f);	//box thickness
	}

	if (outResults.Num() == 0) { return; }	//if nothing is hit, return early

	float characterDmg{ 0.0f };	//variable for the characters damage

	IFighter* fighterRef{ Cast<IFighter>(GetOwner()) };	//get a reference to the fighter interface

	if (fighterRef)
	{
		characterDmg = fighterRef->GetDamage();	//run the GetDamage function for that character
	}

	FDamageEvent targetDamageEvent;

	for (const FHitResult& hit: outResults)	//foreach loop, adding & ensures that we get a reference to the variable, which is faster than making a copy
	{
		AActor* targetActor{ hit.GetActor() }; 

		if (targetsToIgnore.Contains(targetActor)) { continue; }	//using continue keyword to ensure the function doesn't instantly end.
		targetActor->TakeDamage( //This is a built in Actor function
			characterDmg,	//damage amount to apply
			targetDamageEvent,	//damage event
			GetOwner()->GetInstigatorController(),	//the controller of the damage
			GetOwner()	//the actor responsible for the damage
		);

		targetsToIgnore.AddUnique(targetActor);	//AddUnique ensures the value being added is not in the array
	}
}

void UTraceComponent::ResetAttackTraceComp()
{
	targetsToIgnore.Empty();
}

