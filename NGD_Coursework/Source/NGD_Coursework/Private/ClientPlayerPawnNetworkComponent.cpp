// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientPlayerPawnNetworkComponent.h"

void UClientPlayerPawnNetworkComponent::TCPUpdate(float DeltaTime)
{
	// send and receive game events
}

void UClientPlayerPawnNetworkComponent::UDPUpdate(float DeltaTime)
{
	// receive transform information (position, rotation), hence update owner's. 
}