// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SOULSPROJECT_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float currentVelocity{0.0f};	//Direct initialization, prevents C++ from auto converting values declared.

	UFUNCTION(BlueprintCallable)
	void UpdateVelocity();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool isInCombat{ false };

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float currentDirection{ 0.0f };

public:
	UFUNCTION(BlueprintCallable)
	void HandleUpdatedTarget(AActor* newTargetActor);

	UFUNCTION(BlueprintCallable)
	void UpdateDirection();
};
