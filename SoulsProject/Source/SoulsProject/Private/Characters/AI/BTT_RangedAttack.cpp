// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AI/BTT_RangedAttack.h"
#include "AIController.h"
#include "GameFramework/Character.h"

EBTNodeResult::Type UBTT_RangedAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ACharacter* characterRef{ OwnerComp.GetAIOwner() -> GetPawn<ACharacter>()};

	if (!IsValid(characterRef)) { return EBTNodeResult::Failed; }

	characterRef->PlayAnimMontage(animMontage);

	return EBTNodeResult::Succeeded;
}
