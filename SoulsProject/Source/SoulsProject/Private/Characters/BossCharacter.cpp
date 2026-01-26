// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BossCharacter.h"
#include "Characters/StatsComponent.h"
#include "AIController.h"	//this include needs some funky stuff in the project.build file to not give errors
#include "BehaviorTree/BlackboardComponent.h"

// Sets default values
ABossCharacter::ABossCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	statsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
}

// Called when the game starts or when spawned
void ABossCharacter::BeginPlay()
{
	Super::BeginPlay();

	blackboardComp = GetController<AAIController>() -> GetBlackboardComponent();
	blackboardComp->SetValueAsEnum(
		TEXT("CurrentState"),	//Key Name
		initialState	//value to change to
	);
}

// Called every frame
void ABossCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABossCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABossCharacter::DetectPawn(APawn* pawnDetected, APawn* pawnToFind)
{
	EEnemyState currentState{ static_cast<EEnemyState>(blackboardComp->GetValueAsEnum(TEXT("CurrentState"))) };

	if (pawnDetected != pawnToFind || currentState != EEnemyState::Idle) { return; }

	blackboardComp->SetValueAsEnum(TEXT("CurrentState"), EEnemyState::Range);
}

