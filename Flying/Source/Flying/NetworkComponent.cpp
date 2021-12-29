// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkComponent.h"

UNetworkComponent::UNetworkComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	m_ip = "127.0.0.1";
	m_port = 4444;
}

void UNetworkComponent::BeginPlay()
{
	Super::BeginPlay();

	m_owner = GetOwner<APawn>();

	// Initialize winsock
	if (!Initialize())
	{
		// 
		return;
	}

	// UDP connect
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

	Disconnect();
}

bool UNetworkComponent::UDPUpdate(float DeltaTime)
{
	// No definition here as UPlayerPawnNetworkComponent is effectively abstract. 
	return false;
}

bool UNetworkComponent::UDPConnect()
{
	m_UDP_socket = socket(AF_INET, SOCK_DGRAM, 0);
	if (m_UDP_socket == INVALID_SOCKET)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT(
			"UDP socket failed"
		)), true);
		return false;
	}

	m_address.sin_family = AF_INET;
	m_address.sin_port = htons(m_port);
	m_address.sin_addr.s_addr = inet_addr(TCHAR_TO_ANSI(*m_ip));

	return true;
}

bool UNetworkComponent::Initialize()
{
	WSADATA w;
	int error = WSAStartup(0x0202, &w);
	if (error != 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT(
			"WSAStartup failed"
		)), true);
		return false;
	}
	if (w.wVersion != 0x0202)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT(
			"Wrong WinSock version"
		)), true);
		return false;
	}

	return true;
}

void UNetworkComponent::Disconnect()
{
	closesocket(m_UDP_socket);
	closesocket(m_TCP_socket);
	WSACleanup();
}

