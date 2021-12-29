// Copyright Epic Games, Inc. All Rights Reserved.

#include "NGD_CourseworkGameMode.h"
#include "PlayerPawn.h"
#include "HostPlayerPawn.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>

AActor* player;

ANGD_CourseworkGameMode::ANGD_CourseworkGameMode()
{
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;

	// set default pawn class to our flying pawn
	//DefaultPawnClass = APlayerPawn::StaticClass();
	DefaultPawnClass = AHostPlayerPawn::StaticClass();
}

void ANGD_CourseworkGameMode::StartPlay()
{
	const FVector location = FVector(6046.0, 0.0, 1100.0);
	const FRotator rotation = FRotator(0.0, -180.0, 0.0);
	const FActorSpawnParameters param;

	//AActor* player = GetWorld()->SpawnActor(AHostPlayerPawn::StaticClass(), &location, &rotation, param);
	//AActor* player = GetWorld()->SpawnActor(APlayerPawn::StaticClass(), &location, &rotation, param);
	//GetWorld()->GetFirstPlayerController()->Possess(Cast<AHostPlayerPawn>(player));

	//TArray<AActor*> FoundActors;
	//UGameplayStatics::GetAllActorsOfClass(
	//	GetWorld(), AHostPlayerPawn::StaticClass(), FoundActors);

	player = UGameplayStatics::GetActorOfClass(
		GetWorld(), AHostPlayerPawn::StaticClass());
	if (!player)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, 
			"shit"
		);
		return;
	}
	GetWorld()->GetFirstPlayerController()->Possess(Cast<AHostPlayerPawn>(player));
	player->PrimaryActorTick.bStartWithTickEnabled = true;
	player->PrimaryActorTick.bCanEverTick = true;
}

//void ANGD_CourseworkGameMode::Tick(float DeltaSeconds)
//{
//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, 
//		"game mode tick"
//	);
//
//	Super::Tick(DeltaSeconds);
//}

//AActor* ANGD_CourseworkGameMode::FindPlayerStart(AController* Player, const FString& IncomingName)
//{
//	return nullptr;
//}
