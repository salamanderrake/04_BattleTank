// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankBarrel.h"

void UTankBarrel::Elevate( float ReletiveSpeed)
{
  // Move the barrel the right amount this frame
  // Given a max elevation speed, and the frame time
  auto Time = GetWorld()->GetTimeSeconds();
  UE_LOG(LogTemp, Warning, TEXT("%f: DegreesPerSecond: %f"), Time, ReletiveSpeed)
}