// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "Tank/Tank.h"
#include "Components/TankAimingComponent.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay() 
{
  Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);
  
  ATank* ControlledTank = Cast<ATank>(GetPawn());
  ATank* PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
  
  if(ensure(PlayerTank))
  {
    MoveToActor(PlayerTank, AcceptanceRadius);
    // ControlledTank->GetTankAimingComponent()->AimAt(PlayerTank->GetActorLocation());
    // ControlledTank->GetTankAimingComponent()->Fire(); // Todo: don't fire at every frame.
  }
}
