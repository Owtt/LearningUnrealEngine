// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatPrototype/DamageablePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageablePawn() {}
// Cross Module References
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_ADamageablePawn_NoRegister();
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_ADamageablePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CombatPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ADamageablePawn::execHeal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Heal(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADamageablePawn::execTakeDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_amount);
		P_NATIVE_END;
	}
	void ADamageablePawn::StaticRegisterNativesADamageablePawn()
	{
		UClass* Class = ADamageablePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Heal", &ADamageablePawn::execHeal },
			{ "TakeDamage", &ADamageablePawn::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADamageablePawn_Heal_Statics
	{
		struct DamageablePawn_eventHeal_Parms
		{
			int32 amount;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADamageablePawn_Heal_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageablePawn_eventHeal_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADamageablePawn_Heal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADamageablePawn_Heal_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADamageablePawn_Heal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health Functions" },
		{ "ModuleRelativePath", "DamageablePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADamageablePawn_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADamageablePawn, nullptr, "Heal", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADamageablePawn_Heal_Statics::DamageablePawn_eventHeal_Parms), Z_Construct_UFunction_ADamageablePawn_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageablePawn_Heal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADamageablePawn_Heal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageablePawn_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADamageablePawn_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADamageablePawn_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics
	{
		struct DamageablePawn_eventTakeDamage_Parms
		{
			int32 amount;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DamageablePawn_eventTakeDamage_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health Functions" },
		{ "ModuleRelativePath", "DamageablePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADamageablePawn, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::DamageablePawn_eventTakeDamage_Parms), Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADamageablePawn_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADamageablePawn_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADamageablePawn);
	UClass* Z_Construct_UClass_ADamageablePawn_NoRegister()
	{
		return ADamageablePawn::StaticClass();
	}
	struct Z_Construct_UClass_ADamageablePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentHP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageablePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatPrototype,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADamageablePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADamageablePawn_Heal, "Heal" }, // 3349425999
		{ &Z_Construct_UFunction_ADamageablePawn_TakeDamage, "TakeDamage" }, // 3309699547
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageablePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DamageablePawn.h" },
		{ "ModuleRelativePath", "DamageablePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageablePawn_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "Health Properties" },
		{ "ModuleRelativePath", "DamageablePawn.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADamageablePawn_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageablePawn, MaxHP), METADATA_PARAMS(Z_Construct_UClass_ADamageablePawn_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageablePawn_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageablePawn_Statics::NewProp_CurrentHP_MetaData[] = {
		{ "Category", "Health Properties" },
		{ "ModuleRelativePath", "DamageablePawn.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADamageablePawn_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADamageablePawn, CurrentHP), METADATA_PARAMS(Z_Construct_UClass_ADamageablePawn_Statics::NewProp_CurrentHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageablePawn_Statics::NewProp_CurrentHP_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamageablePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageablePawn_Statics::NewProp_MaxHP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageablePawn_Statics::NewProp_CurrentHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageablePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageablePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADamageablePawn_Statics::ClassParams = {
		&ADamageablePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADamageablePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADamageablePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADamageablePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageablePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamageablePawn()
	{
		if (!Z_Registration_Info_UClass_ADamageablePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADamageablePawn.OuterSingleton, Z_Construct_UClass_ADamageablePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADamageablePawn.OuterSingleton;
	}
	template<> COMBATPROTOTYPE_API UClass* StaticClass<ADamageablePawn>()
	{
		return ADamageablePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageablePawn);
	struct Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADamageablePawn, ADamageablePawn::StaticClass, TEXT("ADamageablePawn"), &Z_Registration_Info_UClass_ADamageablePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADamageablePawn), 2885105727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_2603806707(TEXT("/Script/CombatPrototype"),
		Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
