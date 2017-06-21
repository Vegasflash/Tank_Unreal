// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "AIController.h"
#include "TankAIController.generated.h"

//Forward Declaration

class ATank;
/**
 * 
 */
UCLASS()
class MECHBATTLEPROJECT_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;
};
