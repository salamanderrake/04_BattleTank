// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank/Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
  
  UPROPERTY(EditAnywhere)
  float CrossHairXLocation = 0.5f;
    
  UPROPERTY(EditAnywhere)
  float CrossHairYLocation = 0.3333f;
    
  virtual void BeginPlay() override;
  virtual void Tick( float DeltaTime ) override;
  ATank* GetControlledTank() const;
	void AimTowardsCrosshair();
  bool GetSightRayHitLocation(FVector& HitLocation) const;
  bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

    
};
