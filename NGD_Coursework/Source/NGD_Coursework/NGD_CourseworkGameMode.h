// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NGD_CourseworkGameMode.generated.h"

UCLASS(MinimalAPI)
class ANGD_CourseworkGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANGD_CourseworkGameMode();

protected:

	virtual void StartPlay() override;

	//UFUNCTION(BlueprintNativeEvent, Category = Game)
	//AActor* FindPlayerStart(AController* Player, const FString& IncomingName = TEXT("")) override;
};



