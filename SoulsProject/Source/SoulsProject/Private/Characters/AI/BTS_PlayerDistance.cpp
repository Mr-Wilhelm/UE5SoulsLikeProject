// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AI/BTS_PlayerDistance.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTS_PlayerDistance::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	FVector currentPos{ OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation() };

	FVector playerPos{ GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation() };

	float distance{ static_cast<float>(FVector::Distance(currentPos, playerPos)) }; //static casting into a float because we're storing the value in our blackboard

	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(TEXT("Distance"), distance);
}
