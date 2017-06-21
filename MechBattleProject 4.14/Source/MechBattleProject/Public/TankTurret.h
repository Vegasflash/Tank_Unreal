// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/SceneComponent.h"
#include "TankTurret.generated.h"


UCLASS( meta=(BlueprintSpawnableComponent) )
class MECHBATTLEPROJECT_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()

private:	
	// Sets default values for this component's properties
	UTankTurret();

	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MaxTurretRotation = 20;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MinBarrelElevation = 0;

	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MaxBarrelElevation = 40;

public:

	void Rotate(float RelativeSpeed);

	float DecreaseBarrelSpeed = -1;
	float IncreaseBarrelSpeed = 1;

		
	
};
