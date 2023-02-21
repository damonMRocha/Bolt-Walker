// Copyright Epic Games, Inc. All Rights Reserved.

#include "BoltStriderGameMode.h"
#include "BoltStriderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABoltStriderGameMode::ABoltStriderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
