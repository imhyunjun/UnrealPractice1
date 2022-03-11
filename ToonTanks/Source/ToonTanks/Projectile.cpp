// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	projectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	projectileMovement->MaxSpeed = 1300.f;
	projectileMovement->InitialSpeed = 1300.f;
	
	RootComponent = projectileMesh;

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	projectileMesh->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnHit(UPrimitiveComponent* _hitComp, AActor* _otherActor, UPrimitiveComponent* _otherComp, FVector _normalImpulse, const FHitResult& _hit)
{
	// UE_LOG(LogTemp, Warning, TEXT("Hit"));
	// UE_LOG(LogTemp, Warning, TEXT("HitComp : %s"), *_hitComp->GetName());
	// UE_LOG(LogTemp, Warning, TEXT("OtherActor : %s"), *_otherActor->GetName());
	// UE_LOG(LogTemp, Warning, TEXT("OtherComp : %s"), *_otherComp->GetName());

	auto myOwner = GetOwner();
	if(myOwner)
	{
		auto myOwnerInstigator = myOwner->GetInstigatorController();
		auto damageTypeClass = UDamageType::StaticClass();

		if(_otherActor && _otherActor != this && _otherActor != myOwner)
		{
			UGameplayStatics::ApplyDamage(_otherActor, damage, myOwnerInstigator, this, damageTypeClass);
			Destroy();
		}
	}
}

