// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerSiege/Public/EnemySpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
TOWERSIEGE_API UClass* Z_Construct_UClass_AEnemySpawner();
TOWERSIEGE_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_TowerSiege();
// End Cross Module References

// Begin Class AEnemySpawner
void AEnemySpawner::StaticRegisterNativesAEnemySpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawner);
UClass* Z_Construct_UClass_AEnemySpawner_NoRegister()
{
	return AEnemySpawner::StaticClass();
}
struct Z_Construct_UClass_AEnemySpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawner.h" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The class to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootTransformComponent_MetaData[] = {
		{ "Category", "Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Root Component (Transform Component)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root Component (Transform Component)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootTransformComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, ActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorToSpawn_MetaData), NewProp_ActorToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_RootTransformComponent = { "RootTransformComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, RootTransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootTransformComponent_MetaData), NewProp_RootTransformComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_ActorToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_RootTransformComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TowerSiege,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawner_Statics::ClassParams = {
	&AEnemySpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemySpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemySpawner()
{
	if (!Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton, Z_Construct_UClass_AEnemySpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton;
}
template<> TOWERSIEGE_API UClass* StaticClass<AEnemySpawner>()
{
	return AEnemySpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawner);
AEnemySpawner::~AEnemySpawner() {}
// End Class AEnemySpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_EnemySpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawner, AEnemySpawner::StaticClass, TEXT("AEnemySpawner"), &Z_Registration_Info_UClass_AEnemySpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawner), 3578304853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_EnemySpawner_h_4079313982(TEXT("/Script/TowerSiege"),
	Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_EnemySpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_EnemySpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
