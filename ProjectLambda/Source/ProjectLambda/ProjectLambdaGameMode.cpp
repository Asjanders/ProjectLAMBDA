// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectLambdaGameMode.h"
#include "ProjectLambdaHUD.h"
#include "ProjectLambdaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectLambdaGameMode::AProjectLambdaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjectLambdaHUD::StaticClass();
}
