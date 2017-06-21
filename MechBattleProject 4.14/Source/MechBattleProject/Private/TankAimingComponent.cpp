// Fill out your copyright notice in the Description page of Project Settings.

#include "MechBattleProject.h"
#include "TankBarrel.h"
#include "TankTurret.h"
#include "TankAimingComponent.h"


// Sets default values for this component's properties
UTankAimingComponent::UTankAimingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTankAimingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTankAimingComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

void UTankAimingComponent::AimAt(FVector HitLocation, float LaunchSpeed)
{
	if (!TankBarrel) { return; } // if Can't find a tank barrel
	FVector OutLaunchVelocity;
	FVector StartLocation = TankBarrel->GetSocketLocation(FName("Projectile"));
	FVector EndLocation;
	// Calculate the outlaunch velocity
	bool bHaveAimSolution = UGameplayStatics::SuggestProjectileVelocity
	(
		this,
		OutLaunchVelocity,
		StartLocation,
		HitLocation,
		LaunchSpeed,
		false,
		0,
		0,
		ESuggestProjVelocityTraceOption::DoNotTrace // DONT TOUCH PARAMETER OR YOU BREAK GAME
	);
		if(bHaveAimSolution)
		{
			auto AimDirection = OutLaunchVelocity.GetSafeNormal();
			UE_LOG(LogTemp, Warning, TEXT("Aim solution found"))
			MoveBarrelTowards(AimDirection);
		}
		else
		{
			auto Time = GetWorld()->GetTimeSeconds();
			UE_LOG(LogTemp, Error, TEXT("NO aim solve found"), Time)
		}

}

void UTankAimingComponent::MoveBarrelTowards(FVector AimDirection)
{

	// Get Component barrel
	// Get Component Turret
	auto BarrelRotator = TankBarrel->GetForwardVector().Rotation();
	auto AimAsRotator = AimDirection.Rotation();
	auto DeltaRotator = AimAsRotator - BarrelRotator;

	TankBarrel->Elevate(DeltaRotator.Pitch);
	TankTurret->Rotate(DeltaRotator.Yaw);
	// Work-out the difference between the current barrel rotation, and AimDirection
	// rotate the turret and barrel positions to match the Crosshair's target
}

void UTankAimingComponent::SetTankTurretReference(UTankTurret* TurretToSet)
{
	if (!TurretToSet)
	{
		return;
	}
	
	TankTurret = TurretToSet;
}

void UTankAimingComponent::SetTankBarrelReference(UTankBarrel* BarrelToSet)
{
	if (!BarrelToSet)
	{
		return;
	}
	TankBarrel = BarrelToSet;
}

