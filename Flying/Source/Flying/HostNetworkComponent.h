// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NetworkComponent.h"
#include "HostNetworkComponent.generated.h"

/**
 * 
 */
UCLASS(Config = Game)
class FLYING_API UHostNetworkComponent : public UNetworkComponent
{
	GENERATED_BODY()

private:
	virtual bool UDPUpdate(float DeltaTime) override;
};
