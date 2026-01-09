// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TraceComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOULSPROJECT_API UTraceComponent : public UActorComponent
{
	GENERATED_BODY()

	USkeletalMeshComponent* skeletalComp;	//the skeletal mesh component
	
	UPROPERTY(EditAnywhere)
	FName socketStart;	//name of the socket where the trace begins

	UPROPERTY(EditAnywhere)
	FName socketEnd;	//name of the socket where the trace ends

	UPROPERTY(EditAnywhere)
	FName socketRotation;	//socket rotation

	UPROPERTY(EditAnywhere)
	double boxCollisionLength{ 30.0 };

	UPROPERTY(EditAnywhere)
	bool debugMode{ false };

	TArray<AActor*> targetsToIgnore;

public:	
	// Sets default values for this component's properties
	UTraceComponent();

	UPROPERTY(VisibleAnywhere)
	bool isAttacking{ false };

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void ResetAttackTraceComp();
};
