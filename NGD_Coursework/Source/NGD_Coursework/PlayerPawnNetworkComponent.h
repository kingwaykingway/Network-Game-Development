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
	uint32 playerID;
	FVector location;
	FQuat rotation;
};

enum EventType {  Fire, Hit, Death  };

struct TCPMessage
{
	uint32 playerID;
	EventType eventType;
};

UCLASS( Abstract, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NGD_COURSEWORK_API UPlayerPawnNetworkComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY(Category = Network, EditAnywhere)
	FString m_ip;

	UPROPERTY(Category = Network, EditAnywhere)
	int32 m_port;

protected:
	sockaddr_in m_address;
	SOCKET m_socket;

public:	
	// Sets default values for this component's properties
	UPlayerPawnNetworkComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual bool UDPUpdate(float DeltaTime);

	//bool Connect(FString ip, int32 port);
	bool UDPConnect();
	//bool Send(FString msg);
	//bool Send();
	//bool Receive();

	APawn* m_owner;
	int m_playerID;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	//TSharedPtr<FReceiveThread> receiveThread;
		
};

