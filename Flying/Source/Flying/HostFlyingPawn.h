// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "HostNetworkComponent.h"

#include "CoreMinimal.h"
#include "FlyingPawn.h"
#include "HostFlyingPawn.generated.h"

/**
 * 
 */
UCLASS(Config = Game)
class FLYING_API AHostFlyingPawn : public AFlyingPawn
{
	GENERATED_BODY()

	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UHostNetworkComponent* NetworkComponent;

public:
	AHostFlyingPawn();

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
