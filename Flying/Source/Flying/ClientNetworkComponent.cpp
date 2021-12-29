// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientNetworkComponent.h"

bool UClientNetworkComponent::UDPUpdate(float DeltaTime)
{
	if (!m_UDP_socket)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(
			"missing UDP socket"
		)), true);
		return false;
	}

	UDPMessage msg;

	int addressSize = sizeof(m_address);
	int count = recvfrom(m_UDP_socket, (char*)&msg, sizeof(UDPMessage), 0,
		(sockaddr*)&m_address, &addressSize);
	if (count < 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(
			"recvfrom failed"
		)), true);
		return false;
	}
	if (count != sizeof(UDPMessage))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(
			"received odd-sized message"
		)), true);
		return false;
	}

	if (msg.playerID != GetOwner()->GetUniqueID())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(
			"player ID mismatch"
		)), true);
		return false;
	}

	// Modify owner's transform according to received message
	GetOwner()->SetActorLocation(msg.location);
	GetOwner()->SetActorRotation(msg.rotation);

	return true;
}

void UClientNetworkComponent::Predict(float DeltaTime)
{

}