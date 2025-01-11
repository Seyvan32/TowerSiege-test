// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ATurret::ATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Create and set up components
    BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    RootComponent = BaseMesh;

    BarrelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelMesh"));
    BarrelMesh->SetupAttachment(BaseMesh);

    FiringPoint = CreateDefaultSubobject<USceneComponent>(TEXT("FiringPoint"));
    FiringPoint->SetupAttachment(BarrelMesh);

    // Initialize variables
    RotationSpeed = 100.0f;
    bCanFire = true;
}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Rotate the turret to face the target location
void ATurret::RotateTurret(FVector TargetLocation)
{
    FVector Direction = TargetLocation - GetActorLocation();
    FRotator TargetRotation = UKismetMathLibrary::MakeRotFromX(Direction);
    FRotator SmoothRotation = FMath::RInterpTo(BarrelMesh->GetComponentRotation(), TargetRotation, GetWorld()->DeltaTimeSeconds, RotationSpeed);
    BarrelMesh->SetWorldRotation(SmoothRotation);
}

// Fire a projectile
void ATurret::Fire()
{
    if (bCanFire && FiringPoint)
    {
        // TODO: Spawn projectile (we'll implement this next)
        bCanFire = false;

        // Set up cooldown timer
        GetWorldTimerManager().SetTimer(FireCooldownTimer, this, &ATurret::ResetFireCooldown, 0.5f, false);
    }
}

void ATurret::ResetFireCooldown()
{
    bCanFire = true;
}

