// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LockOnComponent.generated.h"

//an event taking in one parameter --- Signature distinguishes the delegate type from  a delegate instance
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnUpdatedTargetSignature, ULockOnComponent, onUpdatedTargetDelegate, AActor*, newTargetActorRef );

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOULSPROJECT_API ULockOnComponent : public UActorComponent
{
	GENERATED_BODY()

	ACharacter* ownerRef;	//using ACharacter and not AActor because ACharacter contains a function
	APlayerController* controller;
	class UCharacterMovementComponent* movementComp;

	class USpringArmComponent* springArmComp;


public:	
	// Sets default values for this component's properties
	ULockOnComponent();

	AActor* targetActor;

	UPROPERTY(BlueprintAssignable)
	FOnUpdatedTargetSignature onUpdatedTargetDelegate;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
		void StartLockon(float lockonRange = 750.0f);

	UFUNCTION(BlueprintCallable)
		void EndLockon();

	UFUNCTION(BlueprintCallable)
		void ToggleLockon(float lockonRange = 750.0f);

	UPROPERTY(EditAnywhere)
		double breakDistance{ 1000.0f };

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
