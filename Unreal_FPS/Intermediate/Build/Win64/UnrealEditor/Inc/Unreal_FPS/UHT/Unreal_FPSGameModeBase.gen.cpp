// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_FPS/Unreal_FPSGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnreal_FPSGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREAL_FPS_API UClass* Z_Construct_UClass_AUnreal_FPSGameModeBase();
	UNREAL_FPS_API UClass* Z_Construct_UClass_AUnreal_FPSGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Unreal_FPS();
// End Cross Module References
	void AUnreal_FPSGameModeBase::StaticRegisterNativesAUnreal_FPSGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnreal_FPSGameModeBase);
	UClass* Z_Construct_UClass_AUnreal_FPSGameModeBase_NoRegister()
	{
		return AUnreal_FPSGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnreal_FPSGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnreal_FPSGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Unreal_FPS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnreal_FPSGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Unreal_FPSGameModeBase.h" },
		{ "ModuleRelativePath", "Unreal_FPSGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnreal_FPSGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnreal_FPSGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnreal_FPSGameModeBase_Statics::ClassParams = {
		&AUnreal_FPSGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnreal_FPSGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnreal_FPSGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnreal_FPSGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnreal_FPSGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnreal_FPSGameModeBase.OuterSingleton, Z_Construct_UClass_AUnreal_FPSGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnreal_FPSGameModeBase.OuterSingleton;
	}
	template<> UNREAL_FPS_API UClass* StaticClass<AUnreal_FPSGameModeBase>()
	{
		return AUnreal_FPSGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnreal_FPSGameModeBase);
	AUnreal_FPSGameModeBase::~AUnreal_FPSGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Git_Repository_Unreal_FPS_Challenge_Unreal_FPS_Source_Unreal_FPS_Unreal_FPSGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_Unreal_FPS_Challenge_Unreal_FPS_Source_Unreal_FPS_Unreal_FPSGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnreal_FPSGameModeBase, AUnreal_FPSGameModeBase::StaticClass, TEXT("AUnreal_FPSGameModeBase"), &Z_Registration_Info_UClass_AUnreal_FPSGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnreal_FPSGameModeBase), 1896941029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Repository_Unreal_FPS_Challenge_Unreal_FPS_Source_Unreal_FPS_Unreal_FPSGameModeBase_h_1182328789(TEXT("/Script/Unreal_FPS"),
		Z_CompiledInDeferFile_FID_Git_Repository_Unreal_FPS_Challenge_Unreal_FPS_Source_Unreal_FPS_Unreal_FPSGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Repository_Unreal_FPS_Challenge_Unreal_FPS_Source_Unreal_FPS_Unreal_FPSGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
