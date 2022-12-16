// Copyright Epic Games, Inc. All Rights Reserved.

#include "mp2GameMode.h"
#include "mp2Character.h"
#include "UObject/ConstructorHelpers.h"

Amp2GameMode::Amp2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
