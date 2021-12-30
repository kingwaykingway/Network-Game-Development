// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientNetworkComponent.h"
#include <Flying/ClientFlyingPawn.h>


UClientNetworkComponent::UClientNetworkComponent()
{
	printDetailMessage = false;
	printErrorMessage = true;
}

bool UClientNetworkComponent::UDPUpdate(float DeltaTime)
{
	if (!m_UDP_socket)
	{
		if (printErrorMessage)
		{
			m = "missing UDP socket";
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, m, true);
		}
		return false;
	}

	UDPMessage msg;

	int addressSize = sizeof(m_address);
	int count = recvfrom(m_UDP_socket, (char*)&msg, sizeof(UDPMessage), 0,
		(sockaddr*)&m_address, &addressSize);
	if (count < 0)
	{
		if (printErrorMessage)
		{
			m = "recvfrom failed";
			GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, m, true);
		}
		return false;
	}
	if (count != sizeof(UDPMessage))
	{
		if (printErrorMessage)
		{
			m = "received odd-sized message";
			GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, m, true);
		}
		return false;
	}

	//if (msg.playerID != GetOwner()->GetUniqueID())
	if (msg.playerID != Cast<AClientFlyingPawn>(GetOwner())->GetPlayerID())
	{
		if (printErrorMessage)
		{
			m = "player ID mismatch";
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, m, true);
		}
		return false;
	}

	// Modify owner's transform according to received message
	GetOwner()->SetActorLocation(msg.location);
	GetOwner()->SetActorRotation(msg.rotation);

	if (printDetailMessage)
	{
		m = GetName() + ": UDP packet received" + '\n'
			+ "playerID: " + FString::FromInt(msg.playerID) + '\n'
			+ "location: " + msg.location.ToString() + '\n'
			+ "rotation: " + msg.rotation.ToString() + '\n'
			//+ "speed: " + FString::SanitizeFloat(msg.speed) + '\n'
		;
		GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Magenta, m, true);
	}

	return true;
}

void UClientNetworkComponent::Predict(float DeltaTime)
{

}