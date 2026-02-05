// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/LookAtPlayerComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
ULookAtPlayerComponent::ULookAtPlayerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULookAtPlayerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULookAtPlayerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!canRotate) { return; }

	AActor* ownerRef{ GetOwner() };	//get reference to owner of component
	FVector ownerPos{ ownerRef->GetActorLocation() };	//get position of owner

	APlayerController* playerController{ GetWorld()->GetFirstPlayerController() };	//get the player controller
	APawn* playerPawn{ playerController->GetPawn() };	//get the pawn attached to the player controller (the player pawn)

	FVector playerPos{ playerPawn->GetActorLocation() };	//get player position

	FRotator desiredRotation{ UKismetMathLibrary::FindLookAtRotation(ownerPos, playerPos) };	//rotation between the owner of this component and the player
	FRotator currentRotation{ ownerRef->GetActorRotation() };

	FRotator newRotation{ UKismetMathLibrary::RInterpTo_Constant(currentRotation, desiredRotation, DeltaTime, speed) };	//interpolate between the current and desired rotation

	FRotator newYawOnlyRotation{ currentRotation.Pitch, newRotation.Yaw, currentRotation.Roll };	//disable yaw (up and down) rotation, we dont need it

	ownerRef->SetActorRotation(newYawOnlyRotation);	//actually setting the rotation
}

