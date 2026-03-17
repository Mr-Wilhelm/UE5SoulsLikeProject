// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BTT_ChargeAttack.generated.h"

/**
 * 
 */
UCLASS()
class SOULSPROJECT_API UBTT_ChargeAttack : public UBTTaskNode
{
	GENERATED_BODY()

	AAIController* controllerRef;

	ACharacter* characterRef;

	class UBossAnimInstance* bossAnimInstance;

	UPROPERTY(EditAnywhere)
	float acceptanceRadius{ 100.0f };

	FScriptDelegate MoveCompletedDelegate;

	float originalWalkSpeed;

	UPROPERTY(EditAnywhere)
	float chargeSpeed{ 2000.0f };

	bool taskFinished{ false };

protected:
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
public:
	UBTT_ChargeAttack();	//constructor

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	void ChargeAtPlayer();

	UFUNCTION()
	void HandleMoveCompleted();

	UFUNCTION()
	void FinishAttackTask();
};
