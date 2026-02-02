// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/GnS_PlayerCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGnS_PlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
GASNSLASH_API UClass* Z_Construct_UClass_AGnS_BaseCharacter();
GASNSLASH_API UClass* Z_Construct_UClass_AGnS_PlayerCharacter();
GASNSLASH_API UClass* Z_Construct_UClass_AGnS_PlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASnSlash();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGnS_PlayerCharacter *****************************************************
void AGnS_PlayerCharacter::StaticRegisterNativesAGnS_PlayerCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGnS_PlayerCharacter;
UClass* AGnS_PlayerCharacter::GetPrivateStaticClass()
{
	using TClass = AGnS_PlayerCharacter;
	if (!Z_Registration_Info_UClass_AGnS_PlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GnS_PlayerCharacter"),
			Z_Registration_Info_UClass_AGnS_PlayerCharacter.InnerSingleton,
			StaticRegisterNativesAGnS_PlayerCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AGnS_PlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AGnS_PlayerCharacter_NoRegister()
{
	return AGnS_PlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGnS_PlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/GnS_PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/GnS_PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/GnS_PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/GnS_PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGnS_PlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGnS_PlayerCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGnS_PlayerCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGnS_PlayerCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGnS_PlayerCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGnS_PlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnS_PlayerCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGnS_PlayerCharacter_Statics::NewProp_FollowCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGnS_PlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGnS_PlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGnS_BaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GASnSlash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGnS_PlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGnS_PlayerCharacter_Statics::ClassParams = {
	&AGnS_PlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGnS_PlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGnS_PlayerCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGnS_PlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGnS_PlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGnS_PlayerCharacter()
{
	if (!Z_Registration_Info_UClass_AGnS_PlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGnS_PlayerCharacter.OuterSingleton, Z_Construct_UClass_AGnS_PlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGnS_PlayerCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGnS_PlayerCharacter);
AGnS_PlayerCharacter::~AGnS_PlayerCharacter() {}
// ********** End Class AGnS_PlayerCharacter *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Dylan_Victory_OneDrive_Documents_Unreal_Projects_GASnSlash_Source_GASnSlash_Public_Characters_GnS_PlayerCharacter_h__Script_GASnSlash_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGnS_PlayerCharacter, AGnS_PlayerCharacter::StaticClass, TEXT("AGnS_PlayerCharacter"), &Z_Registration_Info_UClass_AGnS_PlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGnS_PlayerCharacter), 3327679185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dylan_Victory_OneDrive_Documents_Unreal_Projects_GASnSlash_Source_GASnSlash_Public_Characters_GnS_PlayerCharacter_h__Script_GASnSlash_569600135(TEXT("/Script/GASnSlash"),
	Z_CompiledInDeferFile_FID_Users_Dylan_Victory_OneDrive_Documents_Unreal_Projects_GASnSlash_Source_GASnSlash_Public_Characters_GnS_PlayerCharacter_h__Script_GASnSlash_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dylan_Victory_OneDrive_Documents_Unreal_Projects_GASnSlash_Source_GASnSlash_Public_Characters_GnS_PlayerCharacter_h__Script_GASnSlash_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
