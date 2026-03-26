// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AI/BTT_MeleeAttack.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

EBTNodeResult::Type UBTT_MeleeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	bIsFinished = false;

	float distance{ OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance")) };

	if (distance > attackRadius)
	{
		APawn* playerRef{ GetWorld()->GetFirstPlayerController()->GetPawn() };
		FAIMoveRequest moveRequest{ playerRef }; //move request toward the player for the AI
		moveRequest.SetUsePathfinding(true);	//lets AI use pathfinding
		moveRequest.SetAcceptanceRadius(acceptanceRadius);

		OwnerComp.GetAIOwner()->MoveTo(moveRequest);
		OwnerComp.GetAIOwner()->SetFocus(playerRef);

		OwnerComp.GetAIOwner()->ReceiveMoveCompleted.AddUnique(moveDelegate);
	}

	return EBTNodeResult::InProgress;
}

void UBTT_MeleeAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	if (!bIsFinished) { return; }

	OwnerComp.GetAIOwner()->ReceiveMoveCompleted.Remove(moveDelegate);

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);	//finish the task
}

UBTT_MeleeAttack::UBTT_MeleeAttack()
{
	moveDelegate.BindUFunction(this, "FinishAttackTask");	//bind the delegate to the function that will finish the task

	bNotifyTick = true;	//enable tick for this task
}

void UBTT_MeleeAttack::FinishAttackTask()
{
	bIsFinished = true;
}
