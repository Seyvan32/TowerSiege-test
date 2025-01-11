// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseTurrent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERSIEGE_BaseTurrent_generated_h
#error "BaseTurrent.generated.h already included, missing '#pragma once' in BaseTurrent.h"
#endif
#define TOWERSIEGE_BaseTurrent_generated_h

#define FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseTurrent(); \
	friend struct Z_Construct_UClass_ABaseTurrent_Statics; \
public: \
	DECLARE_CLASS(ABaseTurrent, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerSiege"), NO_API) \
	DECLARE_SERIALIZER(ABaseTurrent)


#define FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseTurrent(ABaseTurrent&&); \
	ABaseTurrent(const ABaseTurrent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseTurrent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseTurrent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseTurrent) \
	NO_API virtual ~ABaseTurrent();


#define FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h_13_PROLOG
#define FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h_16_INCLASS_NO_PURE_DECLS \
	FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERSIEGE_API UClass* StaticClass<class ABaseTurrent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
