// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/PlayerInterface.h"
#include "Interfaces/Fighter.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class SOULSPROJECT_API APlayerCharacter : public ACharacter, public IPlayerInterface, public IFighter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* statsComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULockOnComponent* lockOnComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPlayerActionsComponent* playerActionsComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTraceComponent* traceComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UBlockingComponent* blockingComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCombatComponent* combatComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
	class UPlayerAnimInstance* playerAnim;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float GetDamage() override;	//this means that this will override the GetDamage function from the Fighter Interface

	virtual bool HasStamina(float staminaCost) override; //overrides the HasStamina function from the player interface. We use player interface because the boss doesn't use stamina, only the player



};
