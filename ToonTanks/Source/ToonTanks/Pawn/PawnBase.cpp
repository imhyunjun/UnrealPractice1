// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnBase.h"
#include "Components/CapsuleComponent.h"
#include "DrawDebugHelpers.h"
#include "ToonTanks/Projectile.h"

// Sets default values
APawnBase::APawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule COllider"));
	RootComponent = CapsuleComp;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(RootComponent);

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	TurretMesh->SetupAttachment(BaseMesh);

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSpawnPoint"));
	ProjectileSpawnPoint->SetupAttachment(TurretMesh);

}

void APawnBase::RotateTurretFunction(FVector _lookAtTarget)
{
	FVector toTarget = _lookAtTarget - TurretMesh->GetComponentLocation();
	
	//땅과평행하게 회전
	//첫번째 방법
	//FRotator lookAtRotation = toTarget.Rotation();
	// lookAtRotation.Pitch = 0.f;
	// lookAtRotation.Roll = 0.f;

	//두번째
	FRotator lookAtRotation = FRotator(0.f, toTarget.Rotation().Yaw, 0.f);
	TurretMesh->SetWorldRotation(lookAtRotation);
}

void APawnBase::Fire()
{
	FVector projectileSpawnPointLocation = ProjectileSpawnPoint->GetComponentLocation();
	FRotator rotation = ProjectileSpawnPoint->GetComponentRotation();

	auto projectile = GetWorld()->SpawnActor<AProjectile>(proectileClass, projectileSpawnPointLocation, rotation);
	projectile->SetOwner(this);
    // DrawDebugSphere(
    //         GetWorld(),
    //         projectileSpawnPointLocation,
    //         25.f,
    //         12,
    //         FColor::Red,
    //         false,
    //         3.f
    //     );
}

