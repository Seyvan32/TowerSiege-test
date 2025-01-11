// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseTurrent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "Projectile.h"

// Sets default values
ABaseTurrent::ABaseTurrent()
{
    // Set this pawn to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Create and set up components
    BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    RootComponent = BaseMesh;

    BarrelMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelMesh"));
    BarrelMesh->SetupAttachment(BaseMesh);

    FiringPoint = CreateDefaultSubobject<USceneComponent>(TEXT("FiringPoint"));
    FiringPoint->SetupAttachment(BarrelMesh);

    // Create camera components
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    SpringArmComponent->SetupAttachment(RootComponent);
    SpringArmComponent->bDoCollisionTest = false; // Disable/Enable collision testing for smoother camera movement
    SpringArmComponent->TargetArmLength = 2000.0f; // Adjust distance
    SpringArmComponent->SetRelativeRotation(FRotator(-30.0f, 0.0f, 0.0f)); // Angle of the camera

    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    CameraComponent->SetupAttachment(SpringArmComponent);

    // Set Spring Arm properties
    SpringArmComponent->TargetArmLength = 300.f;          // Camera's distance from the pawn
    SpringArmComponent->bEnableCameraLag = true;         // Enable camera lag for smoother movement
    SpringArmComponent->CameraLagSpeed = 3.f;             // Speed at which the camera lags behind the pawn

    // Create the Camera component and attach it to the Spring Arm
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(SpringArmComponent); // Attach the camera to the spring arm

    // Other camera properties
    CameraComponent->FieldOfView = 90.f;  // Camera's field of view


    // Create the spawn point for projectiles
    ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSpawnPoint"));
    ProjectileSpawnPoint->SetupAttachment(BarrelMesh);  // Attach it to the barrel
}

// Called when the game starts or when spawned
void ABaseTurrent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABaseTurrent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    AimBarrelAtMouse();
}

void ABaseTurrent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ABaseTurrent::Shoot);
}

void ABaseTurrent::AimBarrelAtMouse()
{
    FVector WorldLocation, WorldDirection;
    if (GetMouseWorldPosition(WorldLocation, WorldDirection))
    {
        FHitResult HitResult;
        FVector Start = WorldLocation;
        FVector End = WorldLocation + (WorldDirection * 10000.0f);

        if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility))
        {
            FVector TargetLocation = HitResult.ImpactPoint;

            // Adjust the barrel to face the target location
            FVector ToTarget = TargetLocation - BarrelMesh->GetComponentLocation();
            FRotator TargetRotation = FRotationMatrix::MakeFromX(ToTarget).Rotator();

            BarrelMesh->SetWorldRotation(FMath::RInterpTo(BarrelMesh->GetComponentRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), 5.0f));
        }
    }
}

void ABaseTurrent::Shoot()
{
    if (!ProjectileClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("ProjectileClass is not set in %s. Ensure a valid class is assigned."), *GetName());
        return;
    }

    if (!BarrelMesh)
    {
        UE_LOG(LogTemp, Warning, TEXT("Barrel component is missing in %s."), *GetName());
        return;
    }

    if (!ProjectileSpawnPoint)
    {
        UE_LOG(LogTemp, Warning, TEXT("ProjectileSpawnPoint component is missing in %s."), *GetName());
        return;
    }

    FVector SpawnLocation = ProjectileSpawnPoint->GetComponentLocation();
    FRotator SpawnRotation = ProjectileSpawnPoint->GetComponentRotation();

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;
    SpawnParams.Instigator = GetInstigator();

    if (GetWorld())
    {
        AProjectile* Projectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, SpawnParams);
        if (!Projectile)
        {
            UE_LOG(LogTemp, Warning, TEXT("Failed to spawn projectile in %s."), *GetName());
            return;
        }

        FVector LaunchDirection = ProjectileSpawnPoint->GetForwardVector();
        Projectile->FireInDirection(LaunchDirection);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("GetWorld() returned null in %s."), *GetName());
    }
}

bool ABaseTurrent::GetMouseWorldPosition(FVector& WorldLocation, FVector& WorldDirection) const
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController)
	{
		float MouseX, MouseY;
		if (PlayerController->GetMousePosition(MouseX, MouseY))
		{
			return PlayerController->DeprojectScreenPositionToWorld(MouseX, MouseY, WorldLocation, WorldDirection);
		}
	}
	return false;
}