// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseTurrent.generated.h"

//Decleration
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class TOWERSIEGE_API ABaseTurrent : public APawn
{
    GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseTurrent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // Turret base (static part)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UStaticMeshComponent* BaseMesh;

    // Turret barrel (rotating part)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    UStaticMeshComponent* BarrelMesh;

    // Firing point for projectiles
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
    USceneComponent* FiringPoint;

    // Turret rotation speed
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Turret")
    float RotationSpeed;

    // Camera Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* CameraComponent;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    USpringArmComponent* SpringArmComponent;

    // Projectile class to spawn
	UPROPERTY(EditAnywhere, Category = "Projectile")
	TSubclassOf<class AProjectile> ProjectileClass;

    //------------------------------ function ----------------------------------

    // Handles aiming based on mouse position
    void AimBarrelAtMouse();

    // Shoots at the current aim direction
    void Shoot();

    // Helper function to get mouse world position and direction
    bool GetMouseWorldPosition(FVector& WorldLocation, FVector& WorldDirection) const;

private:
    // The spawn point where projectiles will spawn
    UPROPERTY(VisibleAnywhere)
    USceneComponent* ProjectileSpawnPoint;

};
