// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <winsock2.h>

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NetworkComponent.generated.h"


struct UDPMessage
{
	uint32 playerID;
	FVector location;
	FQuat rotation;
	float speed;
};

enum EventType { Fire, Hit, Death };

struct TCPMessage
{
	uint32 playerID;
	EventType eventType;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Abstract )
class FLYING_API UNetworkComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNetworkComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void BeginDestroy() override;

protected:
	UPROPERTY(Category = Network, EditAnywhere)
	FString m_ip;

	UPROPERTY(Category = Network, EditAnywhere)
	int32 m_port;

	sockaddr_in m_address;
	SOCKET m_UDP_socket, m_TCP_socket;

	//TSharedPtr<FReceiveThread> receiveThread;

	virtual bool UDPUpdate(float DeltaTime);

	//bool Connect(FString ip, int32 port);
	bool UDPConnect();
	//bool Send(FString msg);
	//bool Send();
	//bool Receive();

	APawn* m_owner;
	int m_playerID;

private:
	bool Initialize();
	void Disconnect();

protected:
	// debug message
	FString m;
	bool printDetailMessage;
	bool printErrorMessage;
};
