// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // put new includes above

// forward declaration
class UTankBarrel; 
class UTankAimingComponent;
class AHeavyProjectile;

UCLASS()
class MECHBATTLEPROJECT_API ATank : public APawn
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = Firing)
	void Fire();

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetBarrelReference(UTankBarrel* BarrelToSet);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetTurretReference(UTankTurret* TurretToSet);

	void AimAt(FVector HitLocation);

protected:
	UTankAimingComponent* TankAimingComponent = nullptr;

private:
	// Sets default values for this pawn's properties
	ATank();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	// Local barrel reference for spawning projectile
	UTankBarrel* TankBarrel = nullptr;

	float LaunchSpeed = 8000; // Sensible starting value 1000 m/s

	UPROPERTY(EditDefaultsOnly, Category = firing)
		TSubclassOf<AHeavyProjectile> HeavyProjectileBlueprint;

	UPROPERTY(EditDefaultsOnly, Category = firing)
	float ReloadTimeInSeconds = 3;

	double LastFireTime = 0;
};
