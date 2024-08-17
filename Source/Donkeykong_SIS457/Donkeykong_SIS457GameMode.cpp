// Copyright Epic Games, Inc. All Rights Reserved.

#include "Donkeykong_SIS457GameMode.h"
#include "Donkeykong_SIS457Character.h"
#include "UObject/ConstructorHelpers.h"

ADonkeykong_SIS457GameMode::ADonkeykong_SIS457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
