// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatPrototype/CombatPrototypeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatPrototypeGameModeBase() {}
// Cross Module References
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_ACombatPrototypeGameModeBase_NoRegister();
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_ACombatPrototypeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CombatPrototype();
// End Cross Module References
	void ACombatPrototypeGameModeBase::StaticRegisterNativesACombatPrototypeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombatPrototypeGameModeBase);
	UClass* Z_Construct_UClass_ACombatPrototypeGameModeBase_NoRegister()
	{
		return ACombatPrototypeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACombatPrototypeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombatPrototypeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatPrototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatPrototypeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CombatPrototypeGameModeBase.h" },
		{ "ModuleRelativePath", "CombatPrototypeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombatPrototypeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatPrototypeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatPrototypeGameModeBase_Statics::ClassParams = {
		&ACombatPrototypeGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACombatPrototypeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatPrototypeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACombatPrototypeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACombatPrototypeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatPrototypeGameModeBase.OuterSingleton, Z_Construct_UClass_ACombatPrototypeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACombatPrototypeGameModeBase.OuterSingleton;
	}
	template<> COMBATPROTOTYPE_API UClass* StaticClass<ACombatPrototypeGameModeBase>()
	{
		return ACombatPrototypeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatPrototypeGameModeBase);
	struct Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_CombatPrototypeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_CombatPrototypeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACombatPrototypeGameModeBase, ACombatPrototypeGameModeBase::StaticClass, TEXT("ACombatPrototypeGameModeBase"), &Z_Registration_Info_UClass_ACombatPrototypeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatPrototypeGameModeBase), 3441683214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_CombatPrototypeGameModeBase_h_1384948112(TEXT("/Script/CombatPrototype"),
		Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_CombatPrototypeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_CombatPrototypeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
