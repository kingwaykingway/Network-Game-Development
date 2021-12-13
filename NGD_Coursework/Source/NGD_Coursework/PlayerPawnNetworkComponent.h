// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// custom includes
#include <winsock2.h>
//#include <Runtime/Networking/Public/Interfaces/IPv4/IPv4Address.h>
//#include "FReceiveThread.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerPawnNetworkComponent.generated.h"


struct UDPMessage
{
	int playerID;
	FVector location;
	FRotator rotation;
};

enum TCPEventType
{
	Fire, 
	Hit, 
	Death
};

UCLASS( Abstract, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NGD_COURSEWORK_API UPlayerPawnNetworkComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerPawnNetworkComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void UDPUpdate(float DeltaTime);

	//bool Connect(FString ip, int32 port);
	//bool Send(FString msg);
	//bool Receive();

	APawn* m_owner;
	int m_playerID;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	FSocket* m_socket;
	//FString m_ip;
	//int32 m_port;
	sockaddr_in m_address;
	//TSharedPtr<FReceiveThread> receiveThread;
		
};

