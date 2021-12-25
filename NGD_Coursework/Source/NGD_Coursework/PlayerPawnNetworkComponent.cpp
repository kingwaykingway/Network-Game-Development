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
	m_owner = GetOwner<APawn>();

	// connect
	Connect();

}


// Called every frame
void UPlayerPawnNetworkComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	UDPUpdate(DeltaTime);
}

void UPlayerPawnNetworkComponent::UDPUpdate(float DeltaTime)
{
	// No definition here as UPlayerPawnNetworkComponent is effectively abstract. 
}

bool UPlayerPawnNetworkComponent::Connect()
{
	m_address.sin_family = AF_INET;
	m_address.sin_port = htons(m_port);
	m_address.sin_addr.s_addr = inet_addr(TCHAR_TO_ANSI(*m_ip));

	return false;
}
