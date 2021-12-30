// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientFlyingPawn.h"

AClientFlyingPawn::AClientFlyingPawn()
{
	NetworkComponent = CreateDefaultSubobject<UClientNetworkComponent>(TEXT("ClientNetworkComponent"));
}
