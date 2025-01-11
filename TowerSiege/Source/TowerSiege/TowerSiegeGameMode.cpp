// Copyright Epic Games, Inc. All Rights Reserved.

#include "TowerSiegeGameMode.h"
#include "TowerSiegePlayerController.h"
#include "TowerSiegeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATowerSiegeGameMode::ATowerSiegeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATowerSiegePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn>TurretClass(TEXT("/Game/Characters/Turret/TurretBP"));
	if (TurretClass.Class != nullptr)
	{
		DefaultPawnClass = TurretClass.Class;
		//DfaultPawnClass = nullptr;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}