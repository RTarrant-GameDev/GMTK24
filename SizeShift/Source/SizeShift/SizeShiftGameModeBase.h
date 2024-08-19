// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SizeShiftGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SIZESHIFT_API ASizeShiftGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	void ActorDied(AActor* DeadActor);

protected:
	virtual void BeginPlay() override;

private:
	class ASizeShiftPlayerCharacter* PlayerCharacter;

	void HandleGameStart();
};
