// Fill out your copyright notice in the Description page of Project Settings.

#include "MechBattleProject.h"
#include "Tank.h"
#include "PlayerTankController.h"

void APlayerTankController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayController not posessing a tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT(" PlayerController posessing: %s"), *(ControlledTank->GetName()))
	}
	UE_LOG(LogTemp, Warning, TEXT("swag"))
}

//Tick
void APlayerTankController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
}
	
    

ATank* APlayerTankController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void APlayerTankController::AimTowardsCrosshair()
{
	if (!GetControlledTank())
	{
		return;
	}
	FVector HitLocation; // Out Parameter

	if (GetSightRayHitLocation(HitLocation)) // Has "Side-Effect", is going to line trace
	{
		//UE_LOG(LogTemp, Warning, TEXT("Hit direction: %s"), *HitLocation.ToString())

			GetControlledTank()->AimAt(HitLocation);
	}
}

// Get world location of linetrace through crosshair, true if hits landscape
bool APlayerTankController::GetSightRayHitLocation(FVector& HitLocation) const
{
	// Find the crosshair position
	int32 ViewportSizeX, ViewportSizeY;
	GetViewportSize(ViewportSizeX, ViewportSizeY);

	auto ScreenLocation = FVector2D(ViewportSizeX * CrossHairXLocation, ViewportSizeY * CrossHairYLocation);

	// De-project the screen position of the crosshair to a world direction
	FVector LookDirection;
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		// Line trace along that direction and see waht we hit (up to max range)
		GetLookVectorHitLocation(LookDirection, HitLocation);
	}
	return true;
}

bool APlayerTankController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const
{
	FVector CameraWorldLocation; // To be discarded

	return DeprojectScreenPositionToWorld( ScreenLocation.X, ScreenLocation.Y, CameraWorldLocation, LookDirection);
}

bool APlayerTankController::GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation ) const
{
	FHitResult HitResult;
	auto StartLocation = PlayerCameraManager->GetCameraLocation();
	auto EndLocation = StartLocation + (LookDirection * LineTraceRange);
	if(GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECollisionChannel::ECC_Visibility))
	{
		HitLocation = HitResult.Location;
		return true;
	}
	HitLocation = FVector(0);
	return false; // Line trace didn't succeed
}




