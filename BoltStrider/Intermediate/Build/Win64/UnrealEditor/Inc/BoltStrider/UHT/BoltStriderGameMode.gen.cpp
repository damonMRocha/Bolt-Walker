// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoltStrider/BoltStriderGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoltStriderGameMode() {}
// Cross Module References
	BOLTSTRIDER_API UClass* Z_Construct_UClass_ABoltStriderGameMode();
	BOLTSTRIDER_API UClass* Z_Construct_UClass_ABoltStriderGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BoltStrider();
// End Cross Module References
	void ABoltStriderGameMode::StaticRegisterNativesABoltStriderGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoltStriderGameMode);
	UClass* Z_Construct_UClass_ABoltStriderGameMode_NoRegister()
	{
		return ABoltStriderGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABoltStriderGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoltStriderGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BoltStrider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoltStriderGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BoltStriderGameMode.h" },
		{ "ModuleRelativePath", "BoltStriderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoltStriderGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoltStriderGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoltStriderGameMode_Statics::ClassParams = {
		&ABoltStriderGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABoltStriderGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoltStriderGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoltStriderGameMode()
	{
		if (!Z_Registration_Info_UClass_ABoltStriderGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoltStriderGameMode.OuterSingleton, Z_Construct_UClass_ABoltStriderGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABoltStriderGameMode.OuterSingleton;
	}
	template<> BOLTSTRIDER_API UClass* StaticClass<ABoltStriderGameMode>()
	{
		return ABoltStriderGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoltStriderGameMode);
	ABoltStriderGameMode::~ABoltStriderGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_dmarc_Documents_Unreal_Projects_BoltStrider_Source_BoltStrider_BoltStriderGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dmarc_Documents_Unreal_Projects_BoltStrider_Source_BoltStrider_BoltStriderGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABoltStriderGameMode, ABoltStriderGameMode::StaticClass, TEXT("ABoltStriderGameMode"), &Z_Registration_Info_UClass_ABoltStriderGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoltStriderGameMode), 2736635306U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_dmarc_Documents_Unreal_Projects_BoltStrider_Source_BoltStrider_BoltStriderGameMode_h_2754332768(TEXT("/Script/BoltStrider"),
		Z_CompiledInDeferFile_FID_Users_dmarc_Documents_Unreal_Projects_BoltStrider_Source_BoltStrider_BoltStriderGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_dmarc_Documents_Unreal_Projects_BoltStrider_Source_BoltStrider_BoltStriderGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
