// Fill out your copyright notice in the Description page of Project Settings.


#include "Combat/EnemyProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AEnemyProjectile::AEnemyProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InitialLifeSpan = 5.0f;
}

// Called when the game starts or when spawned
void AEnemyProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyProjectile::HandleBeginOverlap(AActor* otherActor)
{
	APawn* pawnRef{ Cast<APawn>(otherActor) };

	if (!pawnRef->IsPlayerControlled()) { return; }

	FindComponentByClass<UParticleSystemComponent>() -> SetTemplate(hitTemplate);
	FindComponentByClass<UProjectileMovementComponent>()->StopMovementImmediately();	//built in function on projectile movement class to stop the movement

	FTimerHandle deathTimerHandle{};	//this is just a unique identifier for timers, it can be left blank  so long as it has a unique variable name

	GetWorldTimerManager().SetTimer( //Returns an instance of the FTimeManager class, and sets a timer with the handle
		deathTimerHandle,	//handle name
		this,	//The object to call the timer function on
		&AEnemyProjectile::DestroyProjectile,	//the function to call
		0.5f);		//after x amount of time

	FindComponentByClass<USphereComponent>()->SetCollisionEnabled(ECollisionEnabled::NoCollision); //disable collision

	FDamageEvent projectileDamageEvent{};

	pawnRef->TakeDamage(
		projectileDamage,	//damage quantity
		projectileDamageEvent,	//damage event (again, its just a unique identifier)
		pawnRef->GetController(),	//event instigator (what is taking the damage)
		this);	//damage cause (what is causing the damage)
}

void AEnemyProjectile::DestroyProjectile()
{
	Destroy();	//destroy the projectile to prevent memory leaks
}

