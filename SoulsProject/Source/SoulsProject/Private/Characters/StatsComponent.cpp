// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/StatsComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values for this component's properties
UStatsComponent::UStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStatsComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UStatsComponent::ReduceHealth(float damageToTake)
{
	if (stats[EStat::Health] <= 0.0f) { return; }

	stats[EStat::Health] -= damageToTake;
	stats[EStat::Health] = UKismetMathLibrary::FClamp(stats[EStat::Health], 0, stats[EStat::MaxHealth]);	//clamp health between 0 and max health so it doesn't go below 0 or above max
}

void UStatsComponent::ReduceStamina(float amount)
{
	stats[EStat::Stamina] -= amount;
	stats[EStat::Stamina] = UKismetMathLibrary::FClamp(stats[EStat::Stamina], 0, stats[EStat::MaxStamina]);

	canRegen = false;

	FLatentActionInfo latentInfo
	{
		0, 100, TEXT("EnableRegen"), this
	};

	UKismetSystemLibrary::RetriggerableDelay
	(
		GetWorld(),
		staminaDelayDuration,
		latentInfo
	);
}

void UStatsComponent::RegenStamina()
{
	if (!canRegen) { return; }

	stats[EStat::Stamina] = UKismetMathLibrary::FInterpTo_Constant
	(
		stats[EStat::Stamina],
		stats[EStat::MaxStamina],
		GetWorld()->DeltaTimeSeconds,
		staminaRegen
	);
}

void UStatsComponent::EnableRegen()
{
	canRegen = true;
}

