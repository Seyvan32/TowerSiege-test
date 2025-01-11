// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerSiege/TowerSiegeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerSiegeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOWERSIEGE_API UClass* Z_Construct_UClass_ATowerSiegeGameMode();
TOWERSIEGE_API UClass* Z_Construct_UClass_ATowerSiegeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TowerSiege();
// End Cross Module References

// Begin Class ATowerSiegeGameMode
void ATowerSiegeGameMode::StaticRegisterNativesATowerSiegeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerSiegeGameMode);
UClass* Z_Construct_UClass_ATowerSiegeGameMode_NoRegister()
{
	return ATowerSiegeGameMode::StaticClass();
}
struct Z_Construct_UClass_ATowerSiegeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TowerSiegeGameMode.h" },
		{ "ModuleRelativePath", "TowerSiegeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerSiegeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATowerSiegeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TowerSiege,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATowerSiegeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerSiegeGameMode_Statics::ClassParams = {
	&ATowerSiegeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATowerSiegeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATowerSiegeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATowerSiegeGameMode()
{
	if (!Z_Registration_Info_UClass_ATowerSiegeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowerSiegeGameMode.OuterSingleton, Z_Construct_UClass_ATowerSiegeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATowerSiegeGameMode.OuterSingleton;
}
template<> TOWERSIEGE_API UClass* StaticClass<ATowerSiegeGameMode>()
{
	return ATowerSiegeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerSiegeGameMode);
ATowerSiegeGameMode::~ATowerSiegeGameMode() {}
// End Class ATowerSiegeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATowerSiegeGameMode, ATowerSiegeGameMode::StaticClass, TEXT("ATowerSiegeGameMode"), &Z_Registration_Info_UClass_ATowerSiegeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerSiegeGameMode), 2347314672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h_1465715494(TEXT("/Script/TowerSiege"),
	Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_TowerSiegeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
