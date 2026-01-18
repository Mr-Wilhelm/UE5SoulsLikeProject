// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PlayerActionsComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/PlayerInterface.h"


// Sets default values for this component's properties
UPlayerActionsComponent::UPlayerActionsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerActionsComponent::BeginPlay()
{
	Super::BeginPlay();

	characterRef = GetOwner<ACharacter>();	//get owner
	movementComp = characterRef->GetCharacterMovement();	//get the movement component, this is a built in Unreal Engine thing

	if (!characterRef->Implements<UPlayerInterface>()) { return; }	//check if this uses the player interface

	playerInterfaceRef = Cast<IPlayerInterface>(characterRef);	//cast to the player interface which belongs to the character
	
}


// Called every frame
void UPlayerActionsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerActionsComponent::Sprint()
{
	if (!playerInterfaceRef->HasStamina(sprintCost))
	{ 
		Walk();
		return;
	}

	if (movementComp->Velocity.Equals(FVector::ZeroVector, 1)) { return; }

	movementComp->MaxWalkSpeed = sprintSpeed;

	onSprintDelegate.Broadcast(sprintCost * GetWorld()->GetDeltaSeconds());	//framerate independence!
}

void UPlayerActionsComponent::Walk()
{
	movementComp->MaxWalkSpeed = walkSpeed;
}

