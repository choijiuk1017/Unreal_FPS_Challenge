// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_FPS/FpsCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFpsCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UNREAL_FPS_API UClass* Z_Construct_UClass_AFpsCharacter();
	UNREAL_FPS_API UClass* Z_Construct_UClass_AFpsCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Unreal_FPS();
// End Cross Module References
	void AFpsCharacter::StaticRegisterNativesAFpsCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFpsCharacter);
	UClass* Z_Construct_UClass_AFpsCharacter_NoRegister()
	{
		return AFpsCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFpsCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFpsCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFpsCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FpsCharacter.h" },
		{ "ModuleRelativePath", "FpsCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFpsCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFpsCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFpsCharacter_Statics::ClassParams = {
		&AFpsCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFpsCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFpsCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFpsCharacter()
	{
		if (!Z_Registration_Info_UClass_AFpsCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFpsCharacter.OuterSingleton, Z_Construct_UClass_AFpsCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFpsCharacter.OuterSingleton;
	}
	template<> UNREAL_FPS_API UClass* StaticClass<AFpsCharacter>()
	{
		return AFpsCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFpsCharacter);
	AFpsCharacter::~AFpsCharacter() {}
	struct Z_CompiledInDeferFile_FID_Git_Repository_Unreal_FPS_Challenge_Unreal_FPS_Source_Unreal_FPS_FpsCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_Unreal_FPS_Challenge_Unreal_FPS_Source_Unreal_FPS_FpsCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFpsCharacter, AFpsCharacter::StaticClass, TEXT("AFpsCharacter"), &Z_Registration_Info_UClass_AFpsCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFpsCharacter), 2253200101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_Unreal_FPS_Challenge_Unreal_FPS_Source_Unreal_FPS_FpsCharacter_h_1463090473(TEXT("/Script/Unreal_FPS"),
		Z_CompiledInDeferFile_FID_Git_Repository_Unreal_FPS_Challenge_Unreal_FPS_Source_Unreal_FPS_FpsCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Repository_Unreal_FPS_Challenge_Unreal_FPS_Source_Unreal_FPS_FpsCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
