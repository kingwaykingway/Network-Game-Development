// Copyright Epic Games, Inc. All Rights Reserved.

#include "NGD_CourseworkGameMode.h"
#include "NGD_CourseworkPawn.h"

ANGD_CourseworkGameMode::ANGD_CourseworkGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ANGD_CourseworkPawn::StaticClass();
}
