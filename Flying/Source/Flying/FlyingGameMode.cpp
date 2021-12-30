// Copyright Epic Games, Inc. All Rights Reserved.


#include "FlyingGameMode.h"
#include "FlyingPawn.h"
#include "HostFlyingPawn.h"
#include "ClientFlyingPawn.h"

#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>

AActor* player;

AFlyingGameMode::AFlyingGameMode()
{
	// set default pawn class to our flying pawn
	//DefaultPawnClass = AFlyingPawn::StaticClass();
	DefaultPawnClass = AHostFlyingPawn::StaticClass();
}

void AFlyingGameMode::StartPlay()
{
	Super::StartPlay();

	FString m;

	const FVector location = FVector(2000.0, 0.0, 1100.0);
	const FRotator rotation = FRotator(0.0, 0.0, 0.0);
	const FActorSpawnParameters param;

	player = GetWorld()->SpawnActor(AClientFlyingPawn::StaticClass(), &location, &rotation, param);
	//AActor* player = GetWorld()->SpawnActor(APlayerPawn::StaticClass(), &location, &rotation, param);
	//GetWorld()->GetFirstPlayerController()->Possess(Cast<AHostPlayerPawn>(player));

	//TArray<AActor*> FoundActors;
	//UGameplayStatics::GetAllActorsOfClass(
	//	GetWorld(), AHostPlayerPawn::StaticClass(), FoundActors);

	//player = UGameplayStatics::GetActorOfClass(
	//	GetWorld(), AHostFlyingPawn::StaticClass());

	if (!player)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White,
			"shit"
		);
		return;
	}
	//GetWorld()->GetFirstPlayerController()->Possess(Cast<AClientFlyingPawn>(player));

	AController* c1 = GetWorld()->GetFirstPlayerController();
	AController* c2 = Cast<APawn>(player)->GetController();
	APlayerController* c3 = Cast<APlayerController>(c2);

	//for (FConstPlayerControllerIterator it = GetWorld()->GetPlayerControllerIterator(); 
	//	it; ++it)
	//{
	//	APlayerController* pc = *it;
	//}

	//m = FString::FromInt(
	//	UGameplayStatics::GetPlayerControllerID(c3)
	//);

	//UGameplayStatics::SetPlayerControllerID
	UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	//m = FString::FromInt(GetWorld()->GetNumPlayerControllers());
	//m = c1 == c2 ? "true" : "false";
	//m = FString::FromInt(GetWorld()->GetPlayerControllerIterator().GetIndex());
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, m);

	int i = 0;
	APawn* p;
	while (true)
	{
		p = UGameplayStatics::GetPlayerPawn(GetWorld(), i);
		if (!p) break;
		m = FString::FromInt(i) 
			+ ", " + FString::FromInt(p->GetUniqueID()) 
			+ ", " + p->GetName();
		GEngine->AddOnScreenDebugMessage(-1, 1000.0f, FColor::White, m);
		i++;
	}
}