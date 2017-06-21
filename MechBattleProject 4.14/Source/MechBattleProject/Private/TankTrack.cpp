// Fill out your copyright notice in the Description page of Project Settings.

#include "MechBattleProject.h"
#include "TankTrack.h"

void UTankTrack::SetThrottle(float Throttle)
{
	auto ForceApplied = GetForwardVector() * TrackMaxDrivingForce * Throttle;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation); // Parameters take force IN and force Location
}




