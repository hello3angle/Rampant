// Copyright Epic Games, Inc. All Rights Reserved.

#include "StandardGameMode.h"
#include "StandardCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStandardGameMode::AStandardGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
