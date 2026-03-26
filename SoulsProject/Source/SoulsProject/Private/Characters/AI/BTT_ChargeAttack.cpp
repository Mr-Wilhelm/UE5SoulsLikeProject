// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/AI/BTT_ChargeAttack.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "Animations/BossAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Characters/EEnemyState.h"

UBTT_ChargeAttack::UBTT_ChargeAttack()
{
	bNotifyTick = true;	//enable tick for this task

	MoveCompletedDelegate.BindUFunction(this, "HandleMoveCompleted");
}

void UBTT_ChargeAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	bool canCharge{ OwnerComp.GetBlackboardComponent()->GetValueAsBool(TEXT("CanCharge")) };

	if (canCharge)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("CanCharge"), false);
		ChargeAtPlayer();
	}

	if (!taskFinished) { return; }

	OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyState::Melee);

	controllerRef->ReceiveMoveCompleted.Remove(MoveCompletedDelegate);	//remove delegate so it doesn't keep firing after task is finished

	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);	//finishes the task
}

EBTNodeResult::Type UBTT_ChargeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	controllerRef = OwnerComp.GetAIOwner();
	characterRef = controllerRef->GetCharacter();
	bossAnimInstance = Cast<UBossAnimInstance>(characterRef->GetMesh()->GetAnimInstance());

	bossAnimInstance->isCharging = true;

	OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("CanCharge"), false);	//get blackboard variable and set value

	taskFinished = false;

	return EBTNodeResult::InProgress;
}

void UBTT_ChargeAttack::ChargeAtPlayer()
{
	APawn* playerRef{ GetWorld()->GetFirstPlayerController()->GetPawn() };

	FVector playerPos{ playerRef->GetActorLocation() };

	FAIMoveRequest moveRequest{ playerPos };
	moveRequest.SetUsePathfinding(true);	//set use pathfinding to true. Lets the AI use pathfinding to get to the player
	moveRequest.SetAcceptanceRadius(acceptanceRadius); //AI stops when within acceptance radius of player

	controllerRef->MoveTo(moveRequest);	//move to the player
	controllerRef->SetFocus(playerRef);	//look at the player

	controllerRef->ReceiveMoveCompleted.AddUnique(MoveCompletedDelegate);

	originalWalkSpeed = characterRef->GetCharacterMovement()->MaxWalkSpeed;	//store original walk speed
	characterRef->GetCharacterMovement()->MaxWalkSpeed = chargeSpeed;	//set walk speed to charge speed
}

void UBTT_ChargeAttack::HandleMoveCompleted()
{
	bossAnimInstance->isCharging = false;

	FTimerHandle attackTimerHandle;

	characterRef->GetWorldTimerManager().SetTimer(attackTimerHandle, this, &UBTT_ChargeAttack::FinishAttackTask, 1.0f, false);	//run FinishAttackTask after set time

	characterRef->GetCharacterMovement()->MaxWalkSpeed = originalWalkSpeed;	//reset walk speed to original walk speed
}

void UBTT_ChargeAttack::FinishAttackTask()
{
	UE_LOG(LogTemp, Warning, TEXT("Task Finished"));
	taskFinished = true;
}
