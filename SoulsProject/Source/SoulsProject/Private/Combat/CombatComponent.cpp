// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/CombatComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UCombatComponent::UCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	characterRef = GetOwner<ACharacter>();
	
}


// Called every frame
void UCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCombatComponent::ComboAttack()
{
	characterRef->PlayAnimMontage(attackAnims[comboCounter]); //play anim montage at the index
	comboCounter++;	//increment indexx

	int maxCombo{ attackAnims.Num() };	//.Num gets the number of elements in the array. This is a TArray function
	comboCounter = UKismetMathLibrary::Wrap(comboCounter, -1, maxCombo - 1);	//wrap around the array, restarting just before the first index (0) and ending at maxCombo - 1
}

