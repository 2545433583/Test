// Copyright Epic Games, Inc. All Rights Reserved.

#include "ccccGameMode.h"
#include "ccccHUD.h"
#include "ccccCharacter.h"
#include "UObject/ConstructorHelpers.h"

AccccGameMode::AccccGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AccccHUD::StaticClass();
}
