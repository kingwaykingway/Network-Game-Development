// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlyingGameMode.h"
#include "FlyingPawn.h"
#include "HostFlyingPawn.h"

AFlyingGameMode::AFlyingGameMode()
{
	// set default pawn class to our flying pawn
	//DefaultPawnClass = AFlyingPawn::StaticClass();
	DefaultPawnClass = AHostFlyingPawn::StaticClass();
}
