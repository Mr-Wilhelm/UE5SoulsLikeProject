// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/AI/BTT_ChargeAttack.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "Animations/BossAnimInstance.h"

UBTT_ChargeAttack::UBTT_ChargeAttack()
{
	bNotifyTick = true;	//enable tick for this task

}

void UBTT_ChargeAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	bool canCharge{ OwnerComp.GetBlackboardComponent()->GetValueAsBool(TEXT("CanCharge")) };

	if (canCharge)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("CanCharge"), false);
		ChargeAtPlayer();
	}
}

EBTNodeResult::Type UBTT_ChargeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	controllerRef = OwnerComp.GetAIOwner();
	characterRef = controllerRef->GetCharacter();
	bossAnimInstance = Cast<UBossAnimInstance>(characterRef->GetMesh()->GetAnimInstance());

	bossAnimInstance->isCharging = true;

	OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("CanCharge"), false);	//get blackboard variable and set value

	return EBTNodeResult::InProgress;
}

void UBTT_ChargeAttack::ChargeAtPlayer()
{
	UE_LOG(LogTemp, Warning, TEXT("Charging"));
}
