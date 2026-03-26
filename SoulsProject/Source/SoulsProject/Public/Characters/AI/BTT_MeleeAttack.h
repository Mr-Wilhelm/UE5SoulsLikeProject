// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_MeleeAttack.generated.h"
/**
 * 
 */
UCLASS()
class SOULSPROJECT_API UBTT_MeleeAttack : public UBTTaskNode
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float attackRadius{ 200.0f };

	UPROPERTY(EditAnywhere)
	float acceptanceRadius{ 100.0f };	//must be lower than attack radius

	FScriptDelegate moveDelegate;	//a delegate that allows us to store a function

	bool bIsFinished{ false };
	
public:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:

	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

public:

	UBTT_MeleeAttack();

	UFUNCTION()
	void FinishAttackTask();
};
