// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawnNetworkComponent.h"

// Sets default values for this component's properties
UPlayerPawnNetworkComponent::UPlayerPawnNetworkComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerPawnNetworkComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	owner = GetOwner<APawn>();
}


// Called every frame
void UPlayerPawnNetworkComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	TCPUpdate(DeltaTime);
	UDPUpdate(DeltaTime);
}

void UPlayerPawnNetworkComponent::TCPUpdate(float DeltaTime)
{
	// No definition here as UPlayerPawnNetworkComponent is effectively abstract. 
}

void UPlayerPawnNetworkComponent::UDPUpdate(float DeltaTime)
{
	// No definition here as UPlayerPawnNetworkComponent is effectively abstract. 
}