// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Projectile.generated.h"

UCLASS()
class TOONTANKS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	UStaticMeshComponent* projectileMesh;
	UPROPERTY(VisibleAnywhere, Category = "Movement")
	UProjectileMovementComponent* projectileMovement;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* _hitComp, AActor* _otherActor, UPrimitiveComponent* _otherComp, FVector _normalImpulse, const FHitResult& _hit);

	UPROPERTY(EditAnywhere)
	float damage = 50.f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
