// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerSiege/Public/Turret.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurret() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TOWERSIEGE_API UClass* Z_Construct_UClass_ATurret();
TOWERSIEGE_API UClass* Z_Construct_UClass_ATurret_NoRegister();
UPackage* Z_Construct_UPackage__Script_TowerSiege();
// End Cross Module References

// Begin Class ATurret
void ATurret::StaticRegisterNativesATurret()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurret);
UClass* Z_Construct_UClass_ATurret_NoRegister()
{
	return ATurret::StaticClass();
}
struct Z_Construct_UClass_ATurret_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Turret.h" },
		{ "ModuleRelativePath", "Public/Turret.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turret base (static part)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Turret.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turret base (static part)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarrelMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turret barrel (rotating part)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Turret.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turret barrel (rotating part)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiringPoint_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Firing point for projectiles\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Turret.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Firing point for projectiles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Turret" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turret rotation speed\n" },
#endif
		{ "ModuleRelativePath", "Public/Turret.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turret rotation speed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BarrelMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FiringPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurret>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMesh_MetaData), NewProp_BaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_BarrelMesh = { "BarrelMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, BarrelMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarrelMesh_MetaData), NewProp_BarrelMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_FiringPoint = { "FiringPoint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, FiringPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiringPoint_MetaData), NewProp_FiringPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATurret, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurret_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_BaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_BarrelMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_FiringPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATurret_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TowerSiege,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurret_Statics::ClassParams = {
	&ATurret::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATurret_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams), Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATurret()
{
	if (!Z_Registration_Info_UClass_ATurret.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurret.OuterSingleton, Z_Construct_UClass_ATurret_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATurret.OuterSingleton;
}
template<> TOWERSIEGE_API UClass* StaticClass<ATurret>()
{
	return ATurret::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
ATurret::~ATurret() {}
// End Class ATurret

// Begin Registration
struct Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_Turret_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATurret, ATurret::StaticClass, TEXT("ATurret"), &Z_Registration_Info_UClass_ATurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurret), 3625205807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_Turret_h_1808211415(TEXT("/Script/TowerSiege"),
	Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_Turret_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_Turret_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
