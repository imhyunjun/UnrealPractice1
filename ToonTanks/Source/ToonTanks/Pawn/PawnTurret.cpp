// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTurret.h"
#include "PawnTank.h"
#include "Kismet/GameplayStatics.h"

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

    GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);
    
    PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APawnTurret::CheckFireCondition()
{
    //If player == null || is dad then bail
    //if player is in range then fire

    if(!PlayerPawn) return;
    if(ReturnDistanceToPlayer() <= FireRange)
    {
        //Fire
        UE_LOG(LogTemp, Warning, TEXT("Fire"));
    }
    
}

float APawnTurret::ReturnDistanceToPlayer()
{
    if(!PlayerPawn) return 0.0f;

    float distance = FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());
    return distance;
}


