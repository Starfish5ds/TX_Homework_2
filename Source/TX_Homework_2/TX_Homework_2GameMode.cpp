// Copyright Epic Games, Inc. All Rights Reserved.

#include "TX_Homework_2GameMode.h"
#include "TX_Homework_2Character.h"
#include "UObject/ConstructorHelpers.h"

ATX_Homework_2GameMode::ATX_Homework_2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
