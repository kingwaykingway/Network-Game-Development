// Fill out your copyright notice in the Description page of Project Settings.


#include "HostNetworkComponent.h"
#include <Flying/FlyingPawn.h>
#include <Flying/HostFlyingPawn.h>


UHostNetworkComponent::UHostNetworkComponent()
{
	printDetailMessage = false;
	printErrorMessage = true;
}

bool UHostNetworkComponent::UDPUpdate(float DeltaTime)
{
	//m = GetName() + ": UDP update";
	//GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Cyan, m, true);

	if (!m_UDP_socket)
	{
		if (printErrorMessage)
		{
			m = "missing UDP socket";
			GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, m, true);
		}
		return false;
	}

	UDPMessage msg;
	//msg.playerID = GetOwner()->GetUniqueID();
	msg.playerID = Cast<AHostFlyingPawn>(GetOwner())->GetPlayerID();
	msg.location = GetOwner()->GetTransform().GetLocation();
	msg.rotation = GetOwner()->GetTransform().GetRotation();
	//msg.speed = Cast<AFlyingPawn>(GetOwner())->GetCurrentForwardSpeed();

	int count = sendto(m_UDP_socket, (const char*)&msg, sizeof(UDPMessage), 0,
		(const sockaddr*)&m_address, sizeof(m_address));
	if (count != sizeof(UDPMessage))
	{
		if (printErrorMessage)
		{
			m = "sendto failed";
			GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, m, true);
		}
		return false;
	}

	if (printDetailMessage)
	{
		m = GetName() + ": UDP packet sent" + '\n'
			+ "playerID: " + FString::FromInt(msg.playerID) + '\n'
			+ "location: " + msg.location.ToString() + '\n'
			+ "rotation: " + msg.rotation.ToString() + '\n'
			//+ "speed: " + FString::SanitizeFloat(msg.speed) + '\n'
		;
		GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Cyan, m, true);
	}

	return true;
}