// Copyright Epic Games, Inc. All Rights Reserved.

#include "NGD_CourseworkGameMode.h"
#include "PlayerPawn.h"
#include "HostPlayerPawn.h"

ANGD_CourseworkGameMode::ANGD_CourseworkGameMode()
{
	// set default pawn class to our flying pawn
	//DefaultPawnClass = APlayerPawn::StaticClass();
	//DefaultPawnClass = AHostPlayerPawn::StaticClass();
}

void ANGD_CourseworkGameMode::StartPlay()
{
	const FVector location = FVector(6046.243164, 3.556587, 1100.000000);
	const FRotator rotation = FRotator(0.000000, -179.999893, -0.000000);
	const FActorSpawnParameters param;

	GetWorld()->SpawnActor(AHostPlayerPawn::StaticClass(), &location, &rotation, param
		//, nullptr, true, false, nullptr, nullptr, true, nullptr, true
	);
}

//AActor* ANGD_CourseworkGameMode::FindPlayerStart(AController* Player, const FString& IncomingName)
//{
//	return nullptr;
//}
