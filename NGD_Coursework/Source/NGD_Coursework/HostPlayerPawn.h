// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "HostPlayerPawnNetworkComponent.h"

#include "CoreMinimal.h"
#include "PlayerPawn.h"
#include "HostPlayerPawn.generated.h"

/**
 * 
 */
UCLASS(Config = Game)
class NGD_COURSEWORK_API AHostPlayerPawn : public APlayerPawn
{
	GENERATED_BODY()

	//UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	//class UHostPlayerPawnNetworkComponent* NetworkComponent;
	
public:
	AHostPlayerPawn();

	//virtual void Tick(float DeltaSeconds) override;

protected:
	// Begin APawn overrides
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override; // Allows binding actions/axes to functions
	// End APawn overrides

	/** Bound to the thrust axis */
	void ThrustInput(float Val);

	/** Bound to the vertical axis */
	void MoveUpInput(float Val);

	/** Bound to the horizontal axis */
	void MoveRightInput(float Val);
};
