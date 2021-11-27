// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerPawnNetworkComponent.h"
#include "ClientPlayerPawnNetworkComponent.generated.h"

/**
 * 
 */
UCLASS()
class NGD_COURSEWORK_API UClientPlayerPawnNetworkComponent : public UPlayerPawnNetworkComponent
{
	GENERATED_BODY()

private:
	virtual void TCPUpdate(float DeltaTime) override;
	virtual void UDPUpdate(float DeltaTime) override;
	void PredictPosition();
};