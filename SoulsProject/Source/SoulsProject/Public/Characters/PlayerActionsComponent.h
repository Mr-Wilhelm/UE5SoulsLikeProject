// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerActionsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(
	FOnSprintSignature,
	UPlayerActionsComponent,
	onSprintDelegate,
	float, cost
);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOULSPROJECT_API UPlayerActionsComponent : public UActorComponent
{
	GENERATED_BODY()

	ACharacter* characterRef;

	class IPlayerInterface* playerInterfaceRef;

	class UCharacterMovementComponent* movementComp;
	


	UPROPERTY(EditAnywhere)
	float sprintCost{ 5.0f };

	UPROPERTY(EditAnywhere)
	float walkSpeed{ 300.0f };

	UPROPERTY(EditAnywhere)
	float sprintSpeed{ 500.0f };

public:	
	// Sets default values for this component's properties
	UPlayerActionsComponent();

	UPROPERTY(BlueprintAssignable)
	FOnSprintSignature onSprintDelegate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULockOnComponent* lockOnComponent;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void Sprint();

	UFUNCTION(BlueprintCallable)
	void Walk();
		
};
