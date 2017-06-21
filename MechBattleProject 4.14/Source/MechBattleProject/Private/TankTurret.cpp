// Fill out your copyright notice in the Description page of Project Settings.

#include "MechBattleProject.h"
#include "TankTurret.h"


// Sets default values for this component's properties
UTankTurret::UTankTurret()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UTankTurret::Rotate(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, DecreaseBarrelSpeed, IncreaseBarrelSpeed);
	auto RotationChange = RelativeSpeed * MaxTurretRotation * GetWorld()->DeltaTimeSeconds;
	auto NewRotation = RelativeRotation.Yaw + RotationChange;

	SetRelativeRotation(FRotator(0, NewRotation, 0));
}

