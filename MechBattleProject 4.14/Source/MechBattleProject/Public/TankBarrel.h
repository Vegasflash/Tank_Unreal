// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class MECHBATTLEPROJECT_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MaxDegreesPerSecond = 5;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MinBarrelElevation = 0;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MaxBarrelElevation = 40;



public:
	// -1 is max downard speed and +1 is max upward speed
	void Elevate(float RelativeSpeed);

	float DecreaseBarrelSpeed = -1;
	float IncreaseBarrelSpeed = 1;

		
};
