// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ClientNetworkComponent.h"

#include "CoreMinimal.h"
#include "FlyingPawn.h"
#include "ClientFlyingPawn.generated.h"

/**
 * 
 */
UCLASS(Config = Game)
class FLYING_API AClientFlyingPawn : public AFlyingPawn
{
	GENERATED_BODY()
	
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UClientNetworkComponent* NetworkComponent;

public:
	AClientFlyingPawn();
};
