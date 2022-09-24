// Copyright Epic Games, Inc. All Rights Reserved.

#include "RampantGameMode.h"
#include "RampantCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARampantGameMode::ARampantGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
