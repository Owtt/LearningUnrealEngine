// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatPrototype/MeleeWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeWeapon() {}
// Cross Module References
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_AMeleeWeapon_NoRegister();
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_AMeleeWeapon();
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_CombatPrototype();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_AWeaponTriggerBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMeleeWeapon::execSetAttacking)
	{
		P_GET_UBOOL(Z_Param_atking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttacking(Z_Param_atking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeleeWeapon::execSetDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_dmg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamage(Z_Param_dmg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMeleeWeapon::execSetMyActor)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMyActor(Z_Param_actor);
		P_NATIVE_END;
	}
	void AMeleeWeapon::StaticRegisterNativesAMeleeWeapon()
	{
		UClass* Class = AMeleeWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAttacking", &AMeleeWeapon::execSetAttacking },
			{ "SetDamage", &AMeleeWeapon::execSetDamage },
			{ "SetMyActor", &AMeleeWeapon::execSetMyActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics
	{
		struct MeleeWeapon_eventSetAttacking_Parms
		{
			bool atking;
		};
		static void NewProp_atking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_atking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::NewProp_atking_SetBit(void* Obj)
	{
		((MeleeWeapon_eventSetAttacking_Parms*)Obj)->atking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::NewProp_atking = { "atking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MeleeWeapon_eventSetAttacking_Parms), &Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::NewProp_atking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::NewProp_atking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "MeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeleeWeapon, nullptr, "SetAttacking", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::MeleeWeapon_eventSetAttacking_Parms), Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeleeWeapon_SetAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMeleeWeapon_SetAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics
	{
		struct MeleeWeapon_eventSetDamage_Parms
		{
			int32 dmg;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_dmg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::NewProp_dmg = { "dmg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeWeapon_eventSetDamage_Parms, dmg), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::NewProp_dmg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "MeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeleeWeapon, nullptr, "SetDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::MeleeWeapon_eventSetDamage_Parms), Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeleeWeapon_SetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMeleeWeapon_SetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics
	{
		struct MeleeWeapon_eventSetMyActor_Parms
		{
			AActor* actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeWeapon_eventSetMyActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Functions" },
		{ "ModuleRelativePath", "MeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMeleeWeapon, nullptr, "SetMyActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::MeleeWeapon_eventSetMyActor_Parms), Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMeleeWeapon_SetMyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMeleeWeapon_SetMyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMeleeWeapon);
	UClass* Z_Construct_UClass_AMeleeWeapon_NoRegister()
	{
		return AMeleeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AMeleeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeleeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatPrototype,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMeleeWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMeleeWeapon_SetAttacking, "SetAttacking" }, // 4206462108
		{ &Z_Construct_UFunction_AMeleeWeapon_SetDamage, "SetDamage" }, // 3626448970
		{ &Z_Construct_UFunction_AMeleeWeapon_SetMyActor, "SetMyActor" }, // 1514969655
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MeleeWeapon.h" },
		{ "ModuleRelativePath", "MeleeWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "MeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeleeWeapon, TriggerBox), Z_Construct_UClass_AWeaponTriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "MeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeleeWeapon, Damage), METADATA_PARAMS(Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMeleeWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_TriggerBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeleeWeapon_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeleeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeleeWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMeleeWeapon_Statics::ClassParams = {
		&AMeleeWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMeleeWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeleeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeleeWeapon()
	{
		if (!Z_Registration_Info_UClass_AMeleeWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMeleeWeapon.OuterSingleton, Z_Construct_UClass_AMeleeWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMeleeWeapon.OuterSingleton;
	}
	template<> COMBATPROTOTYPE_API UClass* StaticClass<AMeleeWeapon>()
	{
		return AMeleeWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeleeWeapon);
	struct Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMeleeWeapon, AMeleeWeapon::StaticClass, TEXT("AMeleeWeapon"), &Z_Registration_Info_UClass_AMeleeWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMeleeWeapon), 4191442867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_3952491214(TEXT("/Script/CombatPrototype"),
		Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
