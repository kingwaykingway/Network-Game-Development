// Copyright Epic Games, Inc. All Rights Reserved.

#include "NGD_CourseworkGameMode.h"
#include "PlayerPawn.h"
#include "HostPlayerPawn.h"

ANGD_CourseworkGameMode::ANGD_CourseworkGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AHostPlayerPawn::StaticClass();
}
