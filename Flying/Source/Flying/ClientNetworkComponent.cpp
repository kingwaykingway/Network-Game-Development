// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientNetworkComponent.h"
#include <Flying/ClientFlyingPawn.h>


UClientNetworkComponent::UClientNetworkComponent()
{
	//m_ip = "0.0.0.0";
	//m_port = 8888;

	printDetailMessage = true;
	printErrorMessage = true;
}

bool UClientNetworkComponent::UDPUpdate(float DeltaTime)
{
	if (!m_UDP_socket)
	{
		if (printErrorMessage)
		{
			m = "missing UDP socket" + '\n';
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, m, true);
		}
		return false;
	}

	//uint8 i = 0;
	//uint8* data = &i;
	UDPMessage msg;

	int addressSize = sizeof(m_address);
	//int count = recvfrom(m_UDP_socket, (char*)&msg, sizeof(UDPMessage), 0,
	//	(sockaddr*)&m_address, &addressSize);
	FIPv4Address::Parse(m_ip, m_address);
	TSharedRef<FInternetAddr> addr 
		= ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	//addr.Get().SetIp(m_address.Value);
	//addr.Get().SetPort(m_port);
	int32 bytes_sent = 0;
	//if (count < 0)
	if (m_UDP_socket->RecvFrom((uint8*)&msg, sizeof(UDPMessage), bytes_sent, *addr)
		!= 0)
	{
		if (printErrorMessage)
		{
			m = FString() + "recvfrom failed" + '\n'
				+ "IP address: " + m_ip + '\n'
				+ "port: " + FString::FromInt(m_port) + '\n';
			GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, m, true);
		}
		return false;
	}
	//if (count != sizeof(UDPMessage))
	//{
	//	if (printErrorMessage)
	//	{
	//		m = "received odd-sized message";
	//		GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Red, m, true);
	//	}
	//	return false;
	//}

	//TArray<uint8> temp = TArray<uint8>(data, sizeof(data));
	//msg = *(UDPMessage*)UTF8_TO_TCHAR(temp.GetData());

	//if (msg.playerID != GetOwner()->GetUniqueID())
	//if (msg.playerID != Cast<AClientFlyingPawn>(GetOwner())->GetPlayerID())
	//{
	//	if (printErrorMessage)
	//	{
	//		m = "player ID mismatch";
	//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, m, true);
	//	}
	//	return false;
	//}

	// Modify owning actor's transform according to received message
	//GetOwner()->SetActorLocation(msg.location);
	//GetOwner()->SetActorRotation(msg.rotation);

	if (printDetailMessage)
	{
		m = GetName() + ": UDP packet received from " + addr.Get().ToString(false) 
					+ ":" + FString::FromInt(addr.Get().GetPort()) + '\n'
			+ "mesage length: " + FString::FromInt(sizeof(msg)) + '\n'
			//+ "data: " + reinterpret_cast<char*>(&msg) + '\n'
			//+ "data: " + UTF8_TO_TCHAR(data) + '\n'
			+ "data: " + (char*)&msg + '\n'
			//+ "data: " + FString::FromInt(*(uint8*)&msg) + '\n'
			//+ "playerID: " + FString::FromInt(msg.playerID) + '\n'
			//+ "location: " + msg.location.ToString() + '\n'
			//+ "rotation: " + msg.rotation.ToString() + '\n'
			//+ "speed: " + FString::SanitizeFloat(msg.speed) + '\n'
		;
		GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Magenta, m, true);
	}

	return true;
}

void UClientNetworkComponent::Predict(float DeltaTime)
{

}