// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatPrototype/EnemyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyState() {}
// Cross Module References
	COMBATPROTOTYPE_API UEnum* Z_Construct_UEnum_CombatPrototype_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_CombatPrototype();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
	static UEnum* EEnemyState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombatPrototype_EEnemyState, Z_Construct_UPackage__Script_CombatPrototype(), TEXT("EEnemyState"));
		}
		return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
	}
	template<> COMBATPROTOTYPE_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	struct Z_Construct_UEnum_CombatPrototype_EEnemyState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CombatPrototype_EEnemyState_Statics::Enumerators[] = {
		{ "EEnemyState::Idle", (int64)EEnemyState::Idle },
		{ "EEnemyState::Alerted", (int64)EEnemyState::Alerted },
		{ "EEnemyState::Chasing", (int64)EEnemyState::Chasing },
		{ "EEnemyState::Attacking", (int64)EEnemyState::Attacking },
		{ "EEnemyState::Flinching", (int64)EEnemyState::Flinching },
		{ "EEnemyState::Dead", (int64)EEnemyState::Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CombatPrototype_EEnemyState_Statics::Enum_MetaDataParams[] = {
		{ "Alerted.Comment", "/**\n * \n */" },
		{ "Alerted.DisplayName", "Alerted" },
		{ "Alerted.Name", "EEnemyState::Alerted" },
		{ "Attacking.Comment", "/**\n * \n */" },
		{ "Attacking.DisplayName", "Attacking" },
		{ "Attacking.Name", "EEnemyState::Attacking" },
		{ "BlueprintType", "true" },
		{ "Chasing.Comment", "/**\n * \n */" },
		{ "Chasing.DisplayName", "Chasing" },
		{ "Chasing.Name", "EEnemyState::Chasing" },
		{ "Comment", "/**\n * \n */" },
		{ "Dead.Comment", "/**\n * \n */" },
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "EEnemyState::Dead" },
		{ "Flinching.Comment", "/**\n * \n */" },
		{ "Flinching.DisplayName", "Flinching" },
		{ "Flinching.Name", "EEnemyState::Flinching" },
		{ "Idle.Comment", "/**\n * \n */" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EEnemyState::Idle" },
		{ "ModuleRelativePath", "EnemyState.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombatPrototype_EEnemyState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CombatPrototype,
		nullptr,
		"EEnemyState",
		"EEnemyState",
		Z_Construct_UEnum_CombatPrototype_EEnemyState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CombatPrototype_EEnemyState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CombatPrototype_EEnemyState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CombatPrototype_EEnemyState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CombatPrototype_EEnemyState()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_CombatPrototype_EEnemyState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_EnemyState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_EnemyState_h_Statics::EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3064756873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_EnemyState_h_2505596524(TEXT("/Script/CombatPrototype"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_EnemyState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_EnemyState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
