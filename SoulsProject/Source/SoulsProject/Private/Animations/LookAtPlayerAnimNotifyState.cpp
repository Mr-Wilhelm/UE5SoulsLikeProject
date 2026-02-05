// Fill out your copyright notice in the Description page of Project Settings.


#include "Animations/LookAtPlayerAnimNotifyState.h"
#include "Characters/LookAtPlayerComponent.h"

void ULookAtPlayerAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	AActor* ownerRef{ MeshComp->GetOwner() };
	if (!IsValid(ownerRef)) { return; }

	ULookAtPlayerComponent* rotationComp{ ownerRef->FindComponentByClass<ULookAtPlayerComponent>() };
	if (!IsValid(rotationComp)) { return; }

	rotationComp->canRotate = true;

}

void ULookAtPlayerAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	AActor* ownerRef{ MeshComp->GetOwner() };
	if (!IsValid(ownerRef)) { return; }

	ULookAtPlayerComponent* rotationComp{ ownerRef->FindComponentByClass<ULookAtPlayerComponent>() };
	if (!IsValid(rotationComp)) { return; }

	rotationComp->canRotate = false;
}
