// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LockOnComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOULSPROJECT_API ULockOnComponent : public UActorComponent
{
	GENERATED_BODY()

	ACharacter* ownerRef;	//using ACharacter and not AActor because ACharacter contains a function
	APlayerController* controller;
	class UCharacterMovementComponent* movementComp;

public:	
	// Sets default values for this component's properties
	ULockOnComponent();



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		void StartLockon(float lockonRange = 750.0f);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
