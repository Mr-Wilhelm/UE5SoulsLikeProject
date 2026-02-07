// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_RangedAttack.generated.h"

/**
 * 
 */
UCLASS()
class SOULSPROJECT_API UBTT_RangedAttack : public UBTTaskNode
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* animMontage;	//using pointer for more memory efficiency.

	double threshold{ 0.9 };

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
