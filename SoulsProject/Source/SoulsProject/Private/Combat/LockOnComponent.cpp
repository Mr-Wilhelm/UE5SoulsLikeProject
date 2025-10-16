// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/LockOnComponent.h"

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

	// ...
	
}

void ULockOnComponent::StartLockon(float lockonRange)
{
	FHitResult outResult;
	FVector currentLocation{ GetOwner()->GetActorLocation() }; //get owner because this is on a component
	FCollisionShape sphere{ FCollisionShape::MakeSphere(lockonRange) };	//makes a sphere with a radius of 750.0f
	FCollisionQueryParams ignoreParams{ FName{TEXT("Ignore Collision Params")}, false, GetOwner()};	//ignores the owner (the player) so you can't lock on to yourself

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

	UE_LOG(LogTemp, Warning, TEXT("Actor Detected: %s"), *outResult.GetActor()->GetName());
}


// Called every frame
void ULockOnComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

