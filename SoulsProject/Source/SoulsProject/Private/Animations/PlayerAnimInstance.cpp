#include "Animations/PlayerAnimInstance.h"

void UPlayerAnimInstance::UpdateVelocity()
{
	APawn* pawnRef{ TryGetPawnOwner() };	//assign the pawn to a variable
	
	if(!IsValid(pawnRef))
		{return; }

	FVector velocity{ pawnRef->GetVelocity() };	//get the velocity component of the pawn

	currentVelocity = static_cast<float>(velocity.Length());	//not a newly created variable, so no direct initialisation
}

void UPlayerAnimInstance::HandleUpdatedTarget(AActor* newTargetActor)
{
	isInCombat = IsValid(newTargetActor);
}

void UPlayerAnimInstance::UpdateDirection()
{
	APawn* pawnRef{ TryGetPawnOwner() };

	if (!IsValid(pawnRef)) { return; }
	if (!isInCombat) { return; }

	currentDirection = CalculateDirection(pawnRef->GetVelocity(), pawnRef->GetActorRotation()); //pre-made function available from the animation class
}
