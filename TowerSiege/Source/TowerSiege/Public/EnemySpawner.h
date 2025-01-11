// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class TOWERSIEGE_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Function to spawn the actor
	void SpawnRandomActor();

	// Timer handle to manage the spawn intervals
	FTimerHandle SpawnTimerHandle;

	// The class to spawn
    UPROPERTY(EditAnywhere, Category = "Spawner")
    TSubclassOf<AActor> ActorToSpawn;

	// Root Component (Transform Component)
    UPROPERTY(EditAnywhere, Category = "Spawner")
    USceneComponent* RootTransformComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
