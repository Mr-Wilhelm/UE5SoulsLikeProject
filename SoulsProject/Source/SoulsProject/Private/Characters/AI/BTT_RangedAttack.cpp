// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AI/BTT_RangedAttack.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/EEnemyState.h"

EBTNodeResult::Type UBTT_RangedAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ACharacter* characterRef{ OwnerComp.GetAIOwner() -> GetPawn<ACharacter>()};

	if (!IsValid(characterRef)) { return EBTNodeResult::Failed; }

	characterRef->PlayAnimMontage(animMontage);

	double randomVal{ UKismetMathLibrary::RandomFloat() };	//this returns a double and not a float for some reason?

	if (randomVal > threshold)
	{
		threshold = 0.9;
		OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyState::Charge);
	}
	else
	{
		threshold -= 0.1;
	}

	return EBTNodeResult::Succeeded;
}
