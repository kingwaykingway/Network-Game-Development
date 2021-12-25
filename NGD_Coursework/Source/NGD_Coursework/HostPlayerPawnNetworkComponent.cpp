// Fill out your copyright notice in the Description page of Project Settings.


#include "HostPlayerPawnNetworkComponent.h"

bool UHostPlayerPawnNetworkComponent::UDPUpdate(float DeltaTime)
{
	// broadcast transform information (position, rotation)
	UDPMessage msg;
	msg.playerID = GetOwner()->GetUniqueID();
	msg.location = GetOwner()->GetTransform().GetLocation();
	msg.rotation = GetOwner()->GetTransform().GetRotation();
	
	//char buffer[sizeof(UDPMessage)];

	int count = sendto(m_socket, (const char*)&msg, sizeof(UDPMessage), 0,
		(const sockaddr*)&m_address, sizeof(m_address));
	if (count != sizeof(UDPMessage))
	{
		// sentto failed
		return false;
	}

	return true;
}