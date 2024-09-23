// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SizeShiftPlayerController.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class SIZESHIFT_API ASizeShiftPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputMappingContext* InputMappingContext;

protected:

	virtual void BeginPlay() override;
};
