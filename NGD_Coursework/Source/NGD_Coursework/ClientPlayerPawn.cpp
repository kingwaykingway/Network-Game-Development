// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientPlayerPawn.h"

AClientPlayerPawn::AClientPlayerPawn()
{
	NetworkComponent = CreateDefaultSubobject<UClientPlayerPawnNetworkComponent>(TEXT("Network"));
}
