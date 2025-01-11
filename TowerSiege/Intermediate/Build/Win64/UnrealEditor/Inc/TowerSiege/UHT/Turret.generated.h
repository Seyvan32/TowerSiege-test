// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Turret.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERSIEGE_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define TOWERSIEGE_Turret_generated_h

#define FID_TowerSiege_Source_TowerSiege_Public_Turret_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerSiege"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define FID_TowerSiege_Source_TowerSiege_Public_Turret_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATurret(ATurret&&); \
	ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret) \
	NO_API virtual ~ATurret();


#define FID_TowerSiege_Source_TowerSiege_Public_Turret_h_9_PROLOG
#define FID_TowerSiege_Source_TowerSiege_Public_Turret_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TowerSiege_Source_TowerSiege_Public_Turret_h_12_INCLASS_NO_PURE_DECLS \
	FID_TowerSiege_Source_TowerSiege_Public_Turret_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERSIEGE_API UClass* StaticClass<class ATurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TowerSiege_Source_TowerSiege_Public_Turret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
