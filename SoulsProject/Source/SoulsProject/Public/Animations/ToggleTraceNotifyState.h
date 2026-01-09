// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Combat/TraceComponent.h"
#include "ToggleTraceNotifyState.generated.h"


/**
 * 
 */
UCLASS()
class SOULSPROJECT_API UToggleTraceNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;	//begin anim notification

	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

	void SetIsAttacking(bool val, USkeletalMeshComponent* MeshComp, bool& retFlag);
};
