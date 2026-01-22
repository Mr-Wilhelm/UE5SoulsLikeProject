// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/EStat.h"
#include "StatsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOULSPROJECT_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	double staminaRegen{ 10.0 };

	UPROPERTY(VisibleAnywhere)
	bool canRegen{ true };

	UPROPERTY(EditAnywhere)
	float staminaDelayDuration{ 2.0 };



public:	
	// Sets default values for this component's properties
	UStatsComponent();

	UPROPERTY(EditAnywhere);
	TMap<TEnumAsByte<EStat>, float> stats;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void ReduceHealth(float damageToTake);

	UFUNCTION(BlueprintCallable)
	void ReduceStamina(float amount);

	UFUNCTION(BlueprintCallable)
	void RegenStamina();
	

	UFUNCTION(BlueprintCallable)
	void EnableRegen();

};
