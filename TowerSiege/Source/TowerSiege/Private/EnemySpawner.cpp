// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Create a root component (Transform component)
    RootTransformComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    // Set this component as the root of the actor
    RootComponent = RootTransformComponent;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
	// Start the spawning process
	SpawnRandomActor();
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// spawn an actor
void AEnemySpawner::SpawnRandomActor()
{
    if (ActorToSpawn)
    {
        // Get the location and rotation to spawn the actor (uses the RootComponent's transform)
        FVector SpawnLocation = RootComponent->GetComponentLocation();
        FRotator SpawnRotation = RootComponent->GetComponentRotation();

        // Spawn the actor
        GetWorld()->SpawnActor<AActor>(ActorToSpawn, SpawnLocation, SpawnRotation);

        // Randomly choose between 2 or 5 seconds
        float RandomDelay = FMath::RandRange(2.0f, 5.0f);

        // Set the timer to call SpawnRandomActor again after the random delay
        GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AEnemySpawner::SpawnRandomActor, RandomDelay, false);
    }
}

