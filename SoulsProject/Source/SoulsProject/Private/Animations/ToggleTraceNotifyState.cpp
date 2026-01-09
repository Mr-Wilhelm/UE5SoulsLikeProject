// Fill out your copyright notice in the Description page of Project Settings.


#include "Animations/ToggleTraceNotifyState.h"
#include "Combat/TraceComponent.h"

void UToggleTraceNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	bool retFlag;
	SetIsAttacking(true, MeshComp, retFlag);
	if (retFlag) return;
}

void UToggleTraceNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	bool retFlag;
	SetIsAttacking(false, MeshComp, retFlag);
	if (retFlag) return;
}
/// <summary>
/// This is a guard against Animation Notification previews in the editor
/// Without this function, the engine will crash when previewing an Animation Montage during an Animation Notification
/// Stops crashing if not in the world, or if the owner is invalid, or if the trace component is invalid.
/// Also sets the IsAttacking value
/// </summary>
/// <param name="val"></param>
/// <param name="MeshComp"></param>
/// <param name="retFlag"></param>
void UToggleTraceNotifyState::SetIsAttacking(bool val,USkeletalMeshComponent* MeshComp, bool& retFlag)
{

	retFlag = true;
	if (!MeshComp) { return; }

	UWorld* world = MeshComp->GetWorld();
	if (!world || !world->IsGameWorld()) { return; }

	AActor* owner = MeshComp->GetOwner();
	if (!IsValid(owner)) { return; }

	UTraceComponent* traceComp = owner->FindComponentByClass<UTraceComponent>();
	if (!IsValid(traceComp)) { return; }

	traceComp->isAttacking = val;
	retFlag = false;
}
