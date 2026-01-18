// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PlayerCharacter.h"
#include "Characters/StatsComponent.h"
#include "Characters/PlayerActionsComponent.h"
#include "Combat/BlockingComponent.h"
#include "Combat/TraceComponent.h"
#include "Combat/CombatComponent.h"
#include "Combat/LockOnComponent.h"
#include "Animations/PlayerAnimInstance.h"
#include "Characters/EStat.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//instantiating components via code
	statsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	playerActionsComponent = CreateDefaultSubobject<UPlayerActionsComponent>(TEXT("Player Action Component"));
	blockingComponent = CreateDefaultSubobject<UBlockingComponent>(TEXT("Blocking Component"));
	traceComponent = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	combatComponent = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
	lockOnComponent = CreateDefaultSubobject<ULockOnComponent>(TEXT("LockOn Component"));

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	playerAnim = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
float APlayerCharacter::GetDamage()
{
	return EStat::Strength;
}

bool APlayerCharacter::HasStamina(float staminaCost)
{
	return statsComponent->stats[EStat::Stamina] >= staminaCost;	//shorthand for returning a true or false value
}

