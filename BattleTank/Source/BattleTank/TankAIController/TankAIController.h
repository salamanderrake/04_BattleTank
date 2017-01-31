// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "AIController.h"
#include "TankAIController.generated.h"

// Forward Declarations
class ATank;

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:

  ATank* GetControlledTank() const;
  void BeginPlay() override;
  virtual void Tick( float DeltaTime ) override;
  
private:  
  ATank* PlayerControlledTank = nullptr;

  ATank* GetPlayerTank() const;
  
  void AimTowardsPlayer();
	
};
