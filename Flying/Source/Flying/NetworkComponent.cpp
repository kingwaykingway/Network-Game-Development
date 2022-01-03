// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkComponent.h"
#include <Flying/FlyingPawn.h>

UNetworkComponent::UNetworkComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	//m_ip = "255.255.255.255";
	//m_ip = "0.0.0.0";
	m_ip = "127.0.0.1";
	m_port = 8888;
	//m_port = 4444;

	printDetailMessage = true;
	printErrorMessage = true;
}

void UNetworkComponent::BeginPlay()
{
	Super::BeginPlay();

	m_owner = GetOwner<APawn>();

	// Initialize winsock
	//if (!Initialize())
	//{
	//	// 
	//	return;
	//}

	// UDPPacket connect
	if (!UDPConnect())
	{

	}
	
}


// Called every frame
void UNetworkComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UDPUpdate(DeltaTime);
}

void UNetworkComponent::BeginDestroy()
{
	Super::BeginDestroy();

	//Disconnect();
}

bool UNetworkComponent::UDPUpdate(float DeltaTime)
{
	// No definition here as UPlayerPawnNetworkComponent is effectively abstract. 
	return false;
}

bool UNetworkComponent::UDPConnect()
{
	//m_UDP_socket = socket(AF_INET, SOCK_DGRAM, 0);
	//if (m_UDP_socket == INVALID_SOCKET)
	//{
	//	if (printErrorMessage)
	//	{
	//		m = "UDPPacket socket failed";
	//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, m, true);
	//	}
	//	return false;
	//}

	//m_address.sin_family = AF_INET;
	//m_address.sin_port = htons(m_port);
	//m_address.sin_addr.s_addr = inet_addr(TCHAR_TO_ANSI(*m_ip));

	m_UDP_socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)
		->CreateSocket(NAME_DGram, TEXT("default"), false);
	int32 UDPMessageSize = sizeof(UDPMessage);

	m_UDP_socket->SetBroadcast();
	m_UDP_socket->SetReuseAddr(false);
	m_UDP_socket->SetRecvErr();
	m_UDP_socket->SetReceiveBufferSize(UDPMessageSize, UDPMessageSize);
	m_UDP_socket->SetSendBufferSize(UDPMessageSize, UDPMessageSize);
	m_UDP_socket->SetNonBlocking();
	bool bCanBindAll = true;

	FIPv4Address::Parse(m_ip, m_address);
	TSharedRef<FInternetAddr> addr 
		= ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr.Get().SetIp(m_address.Value);
	//addr.Get().SetPort(m_port);

	for (int32 i = 4444; i < 8888; i++)
	{
		m_port = i;
		addr.Get().SetPort(m_port);
		if (m_UDP_socket->Bind(*addr))
		{
			m = GetName() + ": UDP connected. " + '\n'
				+ "IP address: " + m_ip + '\n'
				+ "port: " + FString::FromInt(m_port) + '\n'
				//+ "player ID: " + FString::FromInt(GetOwner()->GetUniqueID()) + '\n'
				+ "player ID: " + FString::FromInt(Cast<AFlyingPawn>(GetOwner())->GetPlayerID()) + '\n'
			;
			GEngine->AddOnScreenDebugMessage(-1, 1000.0f, FColor::Yellow, m, true);
			return true;
		}
	}

	if (printErrorMessage)
	{
		m = GetName() + ": UDP connection failed. " + '\n';
		GEngine->AddOnScreenDebugMessage(-1, 1000.0f, FColor::Red, m, true);
	}

	//if (m_UDP_socket->Bind(*addr) && printDetailMessage)
	//{
	//	m = GetName() + ": UDP connected. " + '\n'
	//		+ "IP address: " + m_ip + '\n'
	//		+ "port: " + FString::FromInt(m_port) + '\n'
	//		//+ "player ID: " + FString::FromInt(GetOwner()->GetUniqueID()) + '\n'
	//		+ "player ID: " + FString::FromInt(Cast<AFlyingPawn>(GetOwner())->GetPlayerID()) + '\n'
	//	;
	//	GEngine->AddOnScreenDebugMessage(-1, 1000.0f, FColor::Yellow, m, true);
	//	return true;
	//}
	//else if (printErrorMessage)
	//{
	//	m = GetName() + ": UDP connection failed. " + '\n'
	//		+ +"IP address: " + m_ip + '\n'
	//		+ "port: " + FString::FromInt(m_port) + '\n'
	//	;
	//	GEngine->AddOnScreenDebugMessage(-1, 1000.0f, FColor::Red, m, true);
	//}
	return false;
}


//bool UNetworkComponent::Initialize()
//{
//	WSADATA w;
//	int error = WSAStartup(0x0202, &w);
//	if (error != 0)
//	{
//		if (printErrorMessage)
//		{
//			m = "WSAStartup failed";
//			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, m, true);
//		}
//		return false;
//	}
//	if (w.wVersion != 0x0202)
//	{
//		if (printErrorMessage)
//		{
//			m = "Wrong WinSock version";
//			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, m, true);
//		}
//		return false;
//	}
//
//	return true;
//}

void UNetworkComponent::Disconnect()
{
	m_UDP_socket->Close();
	//closesocket(m_UDP_socket);
	//closesocket(m_TCP_socket);
	//WSACleanup();
}
