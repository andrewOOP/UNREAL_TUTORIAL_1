// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "IntroToCPPGameMode.h"
#include "IntroToCPPHUD.h"
#include "IntroToCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIntroToCPPGameMode::AIntroToCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AIntroToCPPHUD::StaticClass();
}
