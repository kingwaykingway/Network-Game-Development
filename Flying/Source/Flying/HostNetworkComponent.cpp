// Fill out your copyright notice in the Description page of Project Settings.


#include "HostNetworkComponent.h"
#include <Flying/FlyingPawn.h>
#include <Flying/HostFlyingPawn.h>


UHostNetworkComponent::UHostNetworkComponent()
{
	//m_ip = "127.0.0.1";
	//m_port = 8888;

	printDetailMessage = true;
	printErrorMessage = true;
}

bool UHostNetworkComponent::UDPUpdate(float DeltaTime)
{
	//m = GetName() + ": UDPPacket update";
	//GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Cyan, m, true);

	if (!m_UDP_socket)
	{
		if (printErrorMessage)
		{
			m = "missing UDP socket" + '\n';
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

	char* data = (char*)&msg;
	//int count = sendto(m_UDP_socket, (const char*)&msg, sizeof(UDPMessage), 0,
	//	(const sockaddr*)&m_address, sizeof(m_address));
	FIPv4Address::Parse(m_ip, m_address);
	TSharedRef<FInternetAddr> addr 
		= ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr.Get().SetIp(m_address.Value);
	addr.Get().SetPort(m_port);
	int32 bytes_sent = 0;
	//if (count != sizeof(UDPMessage))
	if (m_UDP_socket->SendTo((uint8*)TCHAR_TO_UTF8(data), sizeof(UDPMessage), bytes_sent, *addr)
		!= 0)
	{
		if (printErrorMessage)
		{
			m = FString() + "sendto failed" + '\n'
				+ "IP address: " + m_ip + '\n'
				+ "port: " + FString::FromInt(m_port) + '\n'
			;
			GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, m, true);
		}
		return false;
	}

	if (printDetailMessage)
	{
		m = GetName() + ": UDP packet sent" + '\n'
			+ "mesage length: " + FString::FromInt(sizeof(msg)) + '\n'
			+ "data: " + data + '\n'
			+ "playerID: " + FString::FromInt(msg.playerID) + '\n'
			+ "location: " + msg.location.ToString() + '\n'
			+ "rotation: " + msg.rotation.ToString() + '\n'
			//+ "speed: " + FString::SanitizeFloat(msg.speed) + '\n'
		;
		//int32* im = (int32*)&msg;
		GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Cyan, m, true);
	}

	return true;
}