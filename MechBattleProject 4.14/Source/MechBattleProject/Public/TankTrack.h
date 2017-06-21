// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * TankTrack is used to tweak MAX/MIN driving FORCE, and apply FORCE to the tank
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class MECHBATTLEPROJECT_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = Input)
	void SetThrottle(float Throttle);

private:

	// Max Firce oer track, in Newtons
	UPROPERTY(EditDefaultsOnly)
		float TrackMaxDrivingForce = 400000; // realistic 40 ton tank being pushed


	
	
};
