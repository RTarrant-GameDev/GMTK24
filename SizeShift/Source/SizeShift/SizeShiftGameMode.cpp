// Copyright Epic Games, Inc. All Rights Reserved.

#include "SizeShiftGameMode.h"
#include "SizeShiftCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASizeShiftGameMode::ASizeShiftGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
