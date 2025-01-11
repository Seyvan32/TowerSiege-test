// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerSiege/TowerSiegeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerSiegeCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
TOWERSIEGE_API UClass* Z_Construct_UClass_ATowerSiegeCharacter();
TOWERSIEGE_API UClass* Z_Construct_UClass_ATowerSiegeCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TowerSiege();
// End Cross Module References

// Begin Class ATowerSiegeCharacter
void ATowerSiegeCharacter::StaticRegisterNativesATowerSiegeCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerSiegeCharacter);
UClass* Z_Construct_UClass_ATowerSiegeCharacter_NoRegister()
{
	return ATowerSiegeCharacter::StaticClass();
}
struct Z_Construct_UClass_ATowerSiegeCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TowerSiegeCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TowerSiegeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement speed of the enemy\n" },
#endif
		{ "ModuleRelativePath", "TowerSiegeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement speed of the enemy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TowerSiegeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TowerSiegeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerSiegeCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerSiegeCharacter_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATowerSiegeCharacter, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerSiegeCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATowerSiegeCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerSiegeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATowerSiegeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowerSiegeCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerSiegeCharacter_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerSiegeCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerSiegeCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATowerSiegeCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATowerSiegeCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TowerSiege,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATowerSiegeCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerSiegeCharacter_Statics::ClassParams = {
	&ATowerSiegeCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATowerSiegeCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATowerSiegeCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATowerSiegeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATowerSiegeCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATowerSiegeCharacter()
{
	if (!Z_Registration_Info_UClass_ATowerSiegeCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowerSiegeCharacter.OuterSingleton, Z_Construct_UClass_ATowerSiegeCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATowerSiegeCharacter.OuterSingleton;
}
template<> TOWERSIEGE_API UClass* StaticClass<ATowerSiegeCharacter>()
{
	return ATowerSiegeCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerSiegeCharacter);
ATowerSiegeCharacter::~ATowerSiegeCharacter() {}
// End Class ATowerSiegeCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_TowerSiegeCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATowerSiegeCharacter, ATowerSiegeCharacter::StaticClass, TEXT("ATowerSiegeCharacter"), &Z_Registration_Info_UClass_ATowerSiegeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerSiegeCharacter), 1722646817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_TowerSiegeCharacter_h_1674484541(TEXT("/Script/TowerSiege"),
	Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_TowerSiegeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TowerSiege_Source_TowerSiege_TowerSiegeCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS