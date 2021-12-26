// Fill out your copyright notice in the Description page of Project Settings.


#include "HostPlayerPawnNetworkComponent.h"

//UHostPlayerPawnNetworkComponent::UHostPlayerPawnNetworkComponent() : Super()
//{
//	m_ip = "127.0.0.1";
//	m_port = 4444;
//}

// broadcast transform information (position, rotation)
bool UHostPlayerPawnNetworkComponent::UDPUpdate(float DeltaTime)
{
	if (!m_UDP_socket)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(
			"missing UDP socket"
		)), true);
		return false;
	}

	UDPMessage msg;
	msg.playerID = GetOwner()->GetUniqueID();
	msg.location = GetOwner()->GetTransform().GetLocation();
	msg.rotation = GetOwner()->GetTransform().GetRotation();
	
	//char buffer[sizeof(UDPMessage)];

	int count = sendto(m_UDP_socket, (const char*)&msg, sizeof(UDPMessage), 0,
		(const sockaddr*)&m_address, sizeof(m_address));
	if (count != sizeof(UDPMessage))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(
			"sendto failed"
		)), true);
		return false;
	}

	return true;
}