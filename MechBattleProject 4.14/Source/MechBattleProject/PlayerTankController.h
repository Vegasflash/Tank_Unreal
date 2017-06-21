// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "GameFramework/PlayerController.h"
#include "PlayerTankController.generated.h" 

// Forward Delcaration

class ATank;

/**
 * 
 */
UCLASS()
class MECHBATTLEPROJECT_API APlayerTankController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	// Start the tank moving the barrel so that a shot would hit what is aimed at
	void APlayerTankController::AimTowardsCrosshair();

	bool APlayerTankController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

	APlayerTankController*  TankController;

	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.3333;

	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000;

private:

	
	// Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& HitLocation) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

};
