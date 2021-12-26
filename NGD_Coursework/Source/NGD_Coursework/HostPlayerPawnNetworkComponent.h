// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerPawnNetworkComponent.h"
#include "HostPlayerPawnNetworkComponent.generated.h"

/**
 * 
 */
UCLASS()
class NGD_COURSEWORK_API UHostPlayerPawnNetworkComponent : public UPlayerPawnNetworkComponent
{
	GENERATED_BODY()

public:
	//UHostPlayerPawnNetworkComponent();
	
private:
	virtual bool UDPUpdate(float DeltaTime) override;
};
