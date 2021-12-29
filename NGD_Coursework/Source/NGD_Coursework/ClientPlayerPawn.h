// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ClientPlayerPawnNetworkComponent.h"

#include "CoreMinimal.h"
#include "PlayerPawn.h"
#include "ClientPlayerPawn.generated.h"

/**
 * 
 */
UCLASS(Config = Game)
class NGD_COURSEWORK_API AClientPlayerPawn : public APlayerPawn
{
	GENERATED_BODY()
	
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UClientPlayerPawnNetworkComponent* NetworkComponent;

public:
	AClientPlayerPawn();

};
