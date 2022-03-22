// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


APawnTank::APawnTank()
{
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    SpringArm->SetupAttachment(RootComponent);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void APawnTank::BeginPlay()
{
	Super::BeginPlay();
	
    tankPlayerController = Cast<APlayerController>(GetController());
}

// Called every frame
void APawnTank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if(tankPlayerController)
    {
        FHitResult hitResult;

        tankPlayerController->GetHitResultUnderCursor(
            ECollisionChannel::ECC_Visibility,
            false, 
            hitResult);

        APawnBase::RotateTurretFunction(hitResult.ImpactPoint);          
    }

    Rotate();
    Move();
}

void APawnTank::HandleDestruction()
{
    Super::HandleDestruction();
    SetActorHiddenInGame(true);
    SetActorTickEnabled(false);
}


// Called to bind functionality to input
void APawnTank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &APawnTank::CalculateMoveInput);
    PlayerInputComponent->BindAxis(TEXT("Turn"), this, &APawnTank::CalculateRotateInput);

    PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &APawnTank::Fire);

}

void APawnTank::CalculateMoveInput(float _value) 
{
    MoveDirection = FVector(_value * moveSpeed * GetWorld()->DeltaTimeSeconds, 0, 0);
}

void APawnTank::CalculateRotateInput(float _value) 
{
    float rotateAmount = _value * rotateSpeed * GetWorld()->DeltaTimeSeconds;
    FRotator rotation = FRotator(0, rotateAmount, 0);
    RotationDirection = FQuat(rotation);
}

void APawnTank::Move() 
{
    AddActorLocalOffset(MoveDirection, true);
}

void APawnTank::Rotate() 
{
    AddActorLocalRotation(RotationDirection, true);
}

