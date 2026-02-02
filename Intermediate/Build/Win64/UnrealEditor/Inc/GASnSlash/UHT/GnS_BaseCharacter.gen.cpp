// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/GnS_BaseCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGnS_BaseCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GASNSLASH_API UClass* Z_Construct_UClass_AGnS_BaseCharacter();
GASNSLASH_API UClass* Z_Construct_UClass_AGnS_BaseCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GASnSlash();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGnS_BaseCharacter *******************************************************
void AGnS_BaseCharacter::StaticRegisterNativesAGnS_BaseCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGnS_BaseCharacter;
UClass* AGnS_BaseCharacter::GetPrivateStaticClass()
{
	using TClass = AGnS_BaseCharacter;
	if (!Z_Registration_Info_UClass_AGnS_BaseCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GnS_BaseCharacter"),
			Z_Registration_Info_UClass_AGnS_BaseCharacter.InnerSingleton,
			StaticRegisterNativesAGnS_BaseCharacter,
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
	return Z_Registration_Info_UClass_AGnS_BaseCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AGnS_BaseCharacter_NoRegister()
{
	return AGnS_BaseCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGnS_BaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/GnS_BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/GnS_BaseCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGnS_BaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGnS_BaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GASnSlash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGnS_BaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGnS_BaseCharacter_Statics::ClassParams = {
	&AGnS_BaseCharacter::StaticClass,
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
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGnS_BaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGnS_BaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGnS_BaseCharacter()
{
	if (!Z_Registration_Info_UClass_AGnS_BaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGnS_BaseCharacter.OuterSingleton, Z_Construct_UClass_AGnS_BaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGnS_BaseCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGnS_BaseCharacter);
AGnS_BaseCharacter::~AGnS_BaseCharacter() {}
// ********** End Class AGnS_BaseCharacter *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Dylan_Victory_OneDrive_Documents_Unreal_Projects_GASnSlash_Source_GASnSlash_Public_Characters_GnS_BaseCharacter_h__Script_GASnSlash_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGnS_BaseCharacter, AGnS_BaseCharacter::StaticClass, TEXT("AGnS_BaseCharacter"), &Z_Registration_Info_UClass_AGnS_BaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGnS_BaseCharacter), 2574911636U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dylan_Victory_OneDrive_Documents_Unreal_Projects_GASnSlash_Source_GASnSlash_Public_Characters_GnS_BaseCharacter_h__Script_GASnSlash_639311548(TEXT("/Script/GASnSlash"),
	Z_CompiledInDeferFile_FID_Users_Dylan_Victory_OneDrive_Documents_Unreal_Projects_GASnSlash_Source_GASnSlash_Public_Characters_GnS_BaseCharacter_h__Script_GASnSlash_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dylan_Victory_OneDrive_Documents_Unreal_Projects_GASnSlash_Source_GASnSlash_Public_Characters_GnS_BaseCharacter_h__Script_GASnSlash_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
