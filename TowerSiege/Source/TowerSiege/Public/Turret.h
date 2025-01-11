// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turret.generated.h"

UCLASS()
class TOWERSIEGE_API ATurret : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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

    // Function to rotate the turret
    void RotateTurret(FVector TargetLocation);

    // Function to fire projectiles
    void Fire();

private:
    FTimerHandle FireCooldownTimer;
    bool bCanFire;

    void ResetFireCooldown();

};
