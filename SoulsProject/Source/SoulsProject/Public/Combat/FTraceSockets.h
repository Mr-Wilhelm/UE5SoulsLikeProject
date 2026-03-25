// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FTraceSockets.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct SOULSPROJECT_API FTraceSockets
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere)
	FName socketStart;	//name of the socket where the trace begins

	UPROPERTY(EditAnywhere)
	FName socketEnd;	//name of the socket where the trace ends

	UPROPERTY(EditAnywhere)
	FName socketRotation;	//socket rotation
};
