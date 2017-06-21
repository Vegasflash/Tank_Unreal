// Fill out your copyright notice in the Description page of Project Settings.

#include "MechBattleProject.h"
#include "HeavyProjectile.h"


// Sets default values
AHeavyProjectile::AHeavyProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HeavyProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(FName("Heavy Projectile Movement"));
	HeavyProjectileMovement->bAutoActivate = false;
}

// Called when the game starts or when spawned
void AHeavyProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AHeavyProjectile::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AHeavyProjectile::LaunchHeavyProjectile(float LaunchSpeed)
{
	UE_LOG(LogTemp, Warning, TEXT("FirePower is: "), LaunchSpeed);
	HeavyProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * LaunchSpeed);
	HeavyProjectileMovement->Activate();
}

