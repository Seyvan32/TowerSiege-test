// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TowerSiegeGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERSIEGE_TowerSiegeGameMode_generated_h
#error "TowerSiegeGameMode.generated.h already included, missing '#pragma once' in TowerSiegeGameMode.h"
#endif
#define TOWERSIEGE_TowerSiegeGameMode_generated_h

#define FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATowerSiegeGameMode(); \
	friend struct Z_Construct_UClass_ATowerSiegeGameMode_Statics; \
public: \
	DECLARE_CLASS(ATowerSiegeGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerSiege"), TOWERSIEGE_API) \
	DECLARE_SERIALIZER(ATowerSiegeGameMode)


#define FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATowerSiegeGameMode(ATowerSiegeGameMode&&); \
	ATowerSiegeGameMode(const ATowerSiegeGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOWERSIEGE_API, ATowerSiegeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerSiegeGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATowerSiegeGameMode) \
	TOWERSIEGE_API virtual ~ATowerSiegeGameMode();


#define FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h_9_PROLOG
#define FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERSIEGE_API UClass* StaticClass<class ATowerSiegeGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
