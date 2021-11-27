// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// custom includes
#include "WinSock.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerPawnNetworkComponent.generated.h"


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

	virtual void TCPUpdate(float DeltaTime);
	virtual void UDPUpdate(float DeltaTime);

	APawn* owner;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};

//struct Transform
// my transform 
