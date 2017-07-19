// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "DoubleWhammyGameMode.h"
#include "DoubleWhammyHUD.h"
#include "DoubleWhammyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADoubleWhammyGameMode::ADoubleWhammyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADoubleWhammyHUD::StaticClass();
}
