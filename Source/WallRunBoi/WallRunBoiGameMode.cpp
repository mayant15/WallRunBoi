// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "WallRunBoiGameMode.h"
#include "WallRunBoiHUD.h"
#include "WallRunBoiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWallRunBoiGameMode::AWallRunBoiGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/Actors/BP_Character_Base"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWallRunBoiHUD::StaticClass();
}
