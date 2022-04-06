// Fill out your copyright notice in the Description page of Project Settings.


#include "ToonTanksGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "PawnTank.h"
#include "PawnTurret.h"
#include "ToonTanksPlayerController.h"

void AToonTanksGameMode::BeginPlay()
{
    Super::BeginPlay();
    HandleGameStart();   
}

void AToonTanksGameMode::ActorDied(AActor* _deadActor)
{
    if(_deadActor == tank)
    {
        tank->HandleDestruction();

        if(toonTanksPlayerController)
        {
            // tank->DisableInput(tank->GetTankPlayerController());
            // tank->GetTankPlayerController()->bShowMouseCursor = false;
            toonTanksPlayerController->SetPlayerEnabledState(false);
            GameOver(false);
        }
    }
    else if(APawnTurret* destroyTurret = Cast<APawnTurret>(_deadActor))
    {
        destroyTurret->HandleDestruction();
        targetTowers--;
        if(!targetTowers)
        {
            GameOver(true);
        }
    }
}

void AToonTanksGameMode::HandleGameStart()
{
    tank = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
    toonTanksPlayerController = Cast<AToonTanksPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

    targetTowers = GetTargetTowerCount();

    StartGame();

    if(toonTanksPlayerController)
    {
        toonTanksPlayerController->SetPlayerEnabledState(false);

        FTimerHandle playerEnableTimerHandle;
        FTimerDelegate playerEnableTimerDelegate = FTimerDelegate::CreateUObject(
            toonTanksPlayerController,
            &AToonTanksPlayerController::SetPlayerEnabledState,
            true);
        
        GetWorldTimerManager().SetTimer(
            playerEnableTimerHandle,
            playerEnableTimerDelegate,
            startDelay,
            false
        );
    }
}

int32 AToonTanksGameMode::GetTargetTowerCount()
{
    TArray<AActor*> towers;
    UGameplayStatics::GetAllActorsOfClass(this, APawnTurret::StaticClass(), towers);
    return towers.Num();
}

