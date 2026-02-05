// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/EnemyProjectileComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UEnemyProjectileComponent::UEnemyProjectileComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemyProjectileComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEnemyProjectileComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEnemyProjectileComponent::SpawnProjectile(FName spawnPosComponentName, TSubclassOf<AActor> projectileClass)
{
	USceneComponent* spawnPointComp{ Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(spawnPosComponentName)) };
	FVector spawnPos{ spawnPointComp->GetComponentLocation() };

	FVector playerPos{ GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation() };

	FRotator spawnRot{UKismetMathLibrary::FindLookAtRotation(spawnPos, playerPos)};	//rotate in the direction of the player (or whatever the target is)

	GetWorld()->SpawnActor(projectileClass, &spawnPos, &spawnRot);
}

