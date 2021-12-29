// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientPlayerPawn.h"

AClientPlayerPawn::AClientPlayerPawn() : Super()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bAllowTickOnDedicatedServer = true;
	PrimaryActorTick.bTickEvenWhenPaused = true;
	PrimaryActorTick.SetTickFunctionEnable(true);

	//NetworkComponent = CreateDefaultSubobject<UClientPlayerPawnNetworkComponent>(TEXT("Network"));
}
