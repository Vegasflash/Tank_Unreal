// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "HeavyProjectile.generated.h"

UCLASS()
class MECHBATTLEPROJECT_API AHeavyProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHeavyProjectile();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void LaunchHeavyProjectile(float LaunchSpeed);

private:

	UProjectileMovementComponent* HeavyProjectileMovement = nullptr;


};
