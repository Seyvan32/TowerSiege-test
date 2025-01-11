// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class TOWERSIEGE_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Fire a projectile in the given direction
	void FireInDirection(const FVector& ShootDirection);

	// Set the mesh for the projectile
	void SetProjectileMesh(UStaticMesh* Mesh);

private:
    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* ProjectileMesh;

    UPROPERTY(VisibleAnywhere)
    class UProjectileMovementComponent* ProjectileMovement;

	void DestroyProjectile();
};
