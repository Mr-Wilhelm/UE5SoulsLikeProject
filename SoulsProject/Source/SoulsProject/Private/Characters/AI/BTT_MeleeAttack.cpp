// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AI/BTT_MeleeAttack.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Interfaces/Fighter.h"
#include "GameFramework/Character.h"

EBTNodeResult::Type UBTT_MeleeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	bIsFinished = false;

	float distance{ OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance")) };

	AAIController* AIRef{ OwnerComp.GetAIOwner()};

	if (distance > attackRadius)
	{
		APawn* playerRef{ GetWorld()->GetFirstPlayerController()->GetPawn() };
		FAIMoveRequest moveRequest{ playerRef }; //move request toward the player for the AI
		moveRequest.SetUsePathfinding(true);	//lets AI use pathfinding
		moveRequest.SetAcceptanceRadius(acceptanceRadius);

		AIRef->MoveTo(moveRequest);
		AIRef->SetFocus(playerRef);

		AIRef->ReceiveMoveCompleted.AddUnique(moveDelegate);
	}

	else
	{
		IFighter* fighterRef{ Cast<IFighter>(AIRef->GetCharacter()) };
		fighterRef->Attack();

		FTimerHandle AttackTimerHandle;

		AIRef->GetCharacter()->GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &UBTT_MeleeAttack::FinishAttackTask, fighterRef->GetAnimationDuration(), false);
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
