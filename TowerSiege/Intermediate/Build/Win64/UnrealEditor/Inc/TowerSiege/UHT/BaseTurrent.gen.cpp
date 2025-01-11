// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerSiege/Public/BaseTurrent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTurrent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TOWERSIEGE_API UClass* Z_Construct_UClass_ABaseTurrent();
TOWERSIEGE_API UClass* Z_Construct_UClass_ABaseTurrent_NoRegister();
TOWERSIEGE_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_TowerSiege();
// End Cross Module References

// Begin Class ABaseTurrent
void ABaseTurrent::StaticRegisterNativesABaseTurrent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseTurrent);
UClass* Z_Construct_UClass_ABaseTurrent_NoRegister()
{
	return ABaseTurrent::StaticClass();
}
struct Z_Construct_UClass_ABaseTurrent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseTurrent.h" },
		{ "ModuleRelativePath", "Public/BaseTurrent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turret base (static part)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTurrent.h" },
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
		{ "ModuleRelativePath", "Public/BaseTurrent.h" },
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
		{ "ModuleRelativePath", "Public/BaseTurrent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Firing point for projectiles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Turret" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turret rotation speed\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseTurrent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turret rotation speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTurrent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTurrent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseTurrent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "Category", "BaseTurrent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The spawn point where projectiles will spawn\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTurrent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The spawn point where projectiles will spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BarrelMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FiringPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseTurrent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTurrent_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseTurrent, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMesh_MetaData), NewProp_BaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTurrent_Statics::NewProp_BarrelMesh = { "BarrelMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseTurrent, BarrelMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarrelMesh_MetaData), NewProp_BarrelMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTurrent_Statics::NewProp_FiringPoint = { "FiringPoint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseTurrent, FiringPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiringPoint_MetaData), NewProp_FiringPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseTurrent_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseTurrent, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTurrent_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseTurrent, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTurrent_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseTurrent, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseTurrent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseTurrent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseTurrent_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseTurrent, ProjectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpawnPoint_MetaData), NewProp_ProjectileSpawnPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseTurrent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTurrent_Statics::NewProp_BaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTurrent_Statics::NewProp_BarrelMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTurrent_Statics::NewProp_FiringPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTurrent_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTurrent_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTurrent_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTurrent_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseTurrent_Statics::NewProp_ProjectileSpawnPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTurrent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseTurrent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_TowerSiege,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTurrent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseTurrent_Statics::ClassParams = {
	&ABaseTurrent::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABaseTurrent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTurrent_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseTurrent_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseTurrent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseTurrent()
{
	if (!Z_Registration_Info_UClass_ABaseTurrent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseTurrent.OuterSingleton, Z_Construct_UClass_ABaseTurrent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseTurrent.OuterSingleton;
}
template<> TOWERSIEGE_API UClass* StaticClass<ABaseTurrent>()
{
	return ABaseTurrent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseTurrent);
ABaseTurrent::~ABaseTurrent() {}
// End Class ABaseTurrent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseTurrent, ABaseTurrent::StaticClass, TEXT("ABaseTurrent"), &Z_Registration_Info_UClass_ABaseTurrent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseTurrent), 3200558287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h_2844568107(TEXT("/Script/TowerSiege"),
	Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_Public_BaseTurrent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
