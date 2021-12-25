// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientPlayerPawnNetworkComponent.h"

bool UClientPlayerPawnNetworkComponent::UDPUpdate(float DeltaTime)
{
	// receive transform information (position, rotation), hence update owner's. 
	UDPMessage msg;

	int addressSize = sizeof(m_address);
	int count = recvfrom(m_socket, (char*)&msg, sizeof(UDPMessage), 0,
		(sockaddr*)&m_address, &addressSize);
	if (count < 0)
	{
		//die("recvfrom failed");
		return false;
	}
	if (count != sizeof(UDPMessage))
	{
		//die("received odd-sized message");
		return false;
	}

	if (msg.playerID != GetOwner()->GetUniqueID())
	{
		// display message
		return false;
	}

	// Modify owner's transform according to received message
	GetOwner()->SetActorLocation(msg.location);
	GetOwner()->SetActorRotation(msg.rotation);

	return true;
}

void UClientPlayerPawnNetworkComponent::Predict()
{

}