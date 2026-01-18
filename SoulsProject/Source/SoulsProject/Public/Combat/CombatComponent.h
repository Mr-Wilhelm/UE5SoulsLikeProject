// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CombatComponent.generated.h"

//this is how you delcare an event
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(
	FOnAttackPerformedSignature, 
	UCombatComponent,
	onAttackPerformedDelegate,
	float, staminaToDrain
);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOULSPROJECT_API UCombatComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<UAnimMontage*> attackAnims;

	ACharacter* characterRef;

	UPROPERTY(VisibleAnywhere)	//can be viewed but not edited
	int comboCounter{ 0 };

	bool canAttack{ true };

	UPROPERTY(EditAnywhere);
	float staminaCost{ 5.0f };

public:	
	// Sets default values for this component's properties
	UCombatComponent();

	UPROPERTY(BlueprintAssignable)
	FOnAttackPerformedSignature onAttackPerformedDelegate;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void ComboAttack();

	UFUNCTION(BlueprintCallable)
	void ResetAttackCombatComp();
};
