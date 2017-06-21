// Fill out your copyright notice in the Description page of Project Settings.

#include "MechBattleProject.h"
#include "TankAimingComponent.h"
#include "TankBarrel.h"
#include "HeavyProjectile.h"
#include "TankTrack.h"
#include "Tank.h"


// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// No need to protect points as added at construction
	TankAimingComponent = CreateDefaultSubobject<UTankAimingComponent>(FName("Aiming Component"));
}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
}

void ATank::Fire()
{
	UE_LOG(LogTemp, Warning, TEXT("FIRE"));

	bool isReloaded = (FPlatformTime::Seconds() - LastFireTime) > ReloadTimeInSeconds;
	if (TankBarrel && isReloaded)
	{
		auto ProjectileLocation = TankBarrel->GetSocketLocation(FName("Projectile"));
		auto ProjectileRotation = TankBarrel->GetSocketRotation(FName("Projectile"));
		auto HeavyProjectile = GetWorld()->SpawnActor<AHeavyProjectile>(HeavyProjectileBlueprint, ProjectileLocation, ProjectileRotation);

		HeavyProjectile->LaunchHeavyProjectile(LaunchSpeed);
		LastFireTime = FPlatformTime::Seconds();
	}
}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
}

void ATank::AimAt(FVector HitLocation)
{
	TankAimingComponent->AimAt(HitLocation, LaunchSpeed);
}

void ATank::SetTurretReference(UTankTurret* TurretToSet)
{
	TankAimingComponent->SetTankTurretReference(TurretToSet);
}

void ATank::SetBarrelReference(UTankBarrel* BarrelToSet)
{
	TankAimingComponent->SetTankBarrelReference(BarrelToSet);
	TankBarrel = BarrelToSet;
}
