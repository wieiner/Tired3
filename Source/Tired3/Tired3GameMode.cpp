// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tired3GameMode.h"
#include "Tired3Character.h"
#include "UObject/ConstructorHelpers.h"

ATired3GameMode::ATired3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
