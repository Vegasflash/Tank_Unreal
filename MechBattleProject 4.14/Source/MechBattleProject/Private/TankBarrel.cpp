// Fill out your copyright notice in the Description page of Project Settings.

#include "MechBattleProject.h"
#include "TankBarrel.h"

void UTankBarrel::Elevate(float RelativeSpeed)
{
	// apply a Frotation on the X axis(Pitch) to the barrel * slow speed
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, DecreaseBarrelSpeed, IncreaseBarrelSpeed);
	auto ElevationChange = RelativeSpeed * MaxBarrelElevation * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;
	auto Elevation = FMath::Clamp<float>(RawNewElevation, MinBarrelElevation, MaxBarrelElevation);

	SetRelativeRotation(FRotator(Elevation, 0, 0));
}


