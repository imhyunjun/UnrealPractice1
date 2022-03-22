// Fill out your copyright notice in the Description page of Project Settings.


#include "ToonTanksGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "PawnTank.h"
#include "PawnTurret.h"

void AToonTanksGameMode::BeginPlay()
{
    Super::BeginPlay();
    tank = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void AToonTanksGameMode::ActorDied(AActor* _deadActor)
{
    if(_deadActor == tank)
    {
        tank->HandleDestruction();

        if(tank->GetTankPlayerController())
        {
            tank->DisableInput(tank->GetTankPlayerController());
            tank->GetTankPlayerController()->bShowMouseCursor = false;
        }
    }
    else if(APawnTurret* destroyTurret = Cast<APawnTurret>(_deadActor))
    {
        destroyTurret->HandleDestruction();
    }
}

