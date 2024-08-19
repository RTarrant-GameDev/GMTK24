// Fill out your copyright notice in the Description page of Project Settings.


#include "SizeShiftGameModeBase.h"
#include <Kismet/GameplayStatics.h>
#include "SizeShiftPlayerCharacter.h"
#include "EnemyTurretPawn.h"

void ASizeShiftGameModeBase::ActorDied(AActor *DeadActor)
{
	if (DeadActor == PlayerCharacter)
	{
		UE_LOG(LogTemp, Display, TEXT("Player is dead"));
	}
	else if (AEnemyTurretPawn* DestroyedTurret = Cast<AEnemyTurretPawn>(DeadActor))
	{
		DestroyedTurret->HandleDestruction();
	}
}

void ASizeShiftGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	HandleGameStart();
}

void ASizeShiftGameModeBase::HandleGameStart()
{
	PlayerCharacter = Cast<ASizeShiftPlayerCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
}
