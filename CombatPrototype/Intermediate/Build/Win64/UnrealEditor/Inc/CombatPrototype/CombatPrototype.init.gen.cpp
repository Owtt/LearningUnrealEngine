// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatPrototype_init() {}
	COMBATPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_CombatPrototype_EnemyAIBeginOverlap__DelegateSignature();
	COMBATPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_CombatPrototype_EnemyAIEndOverlap__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CombatPrototype;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CombatPrototype()
	{
		if (!Z_Registration_Info_UPackage__Script_CombatPrototype.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CombatPrototype_EnemyAIBeginOverlap__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CombatPrototype_EnemyAIEndOverlap__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CombatPrototype",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x384D332E,
				0x911A9091,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CombatPrototype.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CombatPrototype.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CombatPrototype(Z_Construct_UPackage__Script_CombatPrototype, TEXT("/Script/CombatPrototype"), Z_Registration_Info_UPackage__Script_CombatPrototype, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x384D332E, 0x911A9091));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
