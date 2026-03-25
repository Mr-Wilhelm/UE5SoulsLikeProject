// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/Enemy.h"
#include "Characters/EEnemyState.h"
#include "Interfaces/Fighter.h"
#include "BossCharacter.generated.h"

UCLASS()
class SOULSPROJECT_API ABossCharacter : public ACharacter, public IEnemy, public IFighter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EEnemyState> initialState;

	class UBlackboardComponent* blackboardComp;

public:
	// Sets default values for this character's properties
	ABossCharacter();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* statsComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UEnemyProjectileComponent* enemyProjectileComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULookAtPlayerComponent* lookAtPlayerComponent;

	FScriptDelegate MoveCompletedDelegate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float GetDamage() override;	//this means that this will override the GetDamage function from the Fighter Interface

	UFUNCTION(BlueprintCallable)
	void DetectPawn(APawn* pawnDetected, APawn* pawnToFind);

};
