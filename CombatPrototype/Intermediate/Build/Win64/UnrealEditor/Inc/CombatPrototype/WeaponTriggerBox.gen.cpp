// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatPrototype/WeaponTriggerBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponTriggerBox() {}
// Cross Module References
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_AWeaponTriggerBox_NoRegister();
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_AWeaponTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_CombatPrototype();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponTriggerBox::execSetMyActor)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMyActor(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponTriggerBox::execSetAttacking)
	{
		P_GET_UBOOL(Z_Param_atking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttacking(Z_Param_atking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponTriggerBox::execAttackContaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackContaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponTriggerBox::execWeaponExit)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WeaponExit(Z_Param_overlappedActor,Z_Param_otherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponTriggerBox::execAttack)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack(Z_Param_overlappedActor,Z_Param_otherActor);
		P_NATIVE_END;
	}
	void AWeaponTriggerBox::StaticRegisterNativesAWeaponTriggerBox()
	{
		UClass* Class = AWeaponTriggerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &AWeaponTriggerBox::execAttack },
			{ "AttackContaining", &AWeaponTriggerBox::execAttackContaining },
			{ "SetAttacking", &AWeaponTriggerBox::execSetAttacking },
			{ "SetMyActor", &AWeaponTriggerBox::execSetMyActor },
			{ "WeaponExit", &AWeaponTriggerBox::execWeaponExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics
	{
		struct WeaponTriggerBox_eventAttack_Parms
		{
			AActor* overlappedActor;
			AActor* otherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponTriggerBox_eventAttack_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponTriggerBox_eventAttack_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::NewProp_overlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::NewProp_otherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Trigger Functions" },
		{ "ModuleRelativePath", "WeaponTriggerBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTriggerBox, nullptr, "Attack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::WeaponTriggerBox_eventAttack_Parms), Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponTriggerBox_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTriggerBox_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponTriggerBox_AttackContaining_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponTriggerBox_AttackContaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Trigger Functions" },
		{ "ModuleRelativePath", "WeaponTriggerBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTriggerBox_AttackContaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTriggerBox, nullptr, "AttackContaining", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponTriggerBox_AttackContaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTriggerBox_AttackContaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponTriggerBox_AttackContaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTriggerBox_AttackContaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics
	{
		struct WeaponTriggerBox_eventSetAttacking_Parms
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
	void Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::NewProp_atking_SetBit(void* Obj)
	{
		((WeaponTriggerBox_eventSetAttacking_Parms*)Obj)->atking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::NewProp_atking = { "atking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponTriggerBox_eventSetAttacking_Parms), &Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::NewProp_atking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::NewProp_atking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Trigger Functions" },
		{ "ModuleRelativePath", "WeaponTriggerBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTriggerBox, nullptr, "SetAttacking", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::WeaponTriggerBox_eventSetAttacking_Parms), Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics
	{
		struct WeaponTriggerBox_eventSetMyActor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponTriggerBox_eventSetMyActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Trigger Functions" },
		{ "ModuleRelativePath", "WeaponTriggerBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTriggerBox, nullptr, "SetMyActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::WeaponTriggerBox_eventSetMyActor_Parms), Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics
	{
		struct WeaponTriggerBox_eventWeaponExit_Parms
		{
			AActor* overlappedActor;
			AActor* otherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponTriggerBox_eventWeaponExit_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponTriggerBox_eventWeaponExit_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::NewProp_overlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::NewProp_otherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Trigger Functions" },
		{ "ModuleRelativePath", "WeaponTriggerBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponTriggerBox, nullptr, "WeaponExit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::WeaponTriggerBox_eventWeaponExit_Parms), Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponTriggerBox);
	UClass* Z_Construct_UClass_AWeaponTriggerBox_NoRegister()
	{
		return AWeaponTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attacking_MetaData[];
#endif
		static void NewProp_attacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_attacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatPrototype,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponTriggerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponTriggerBox_Attack, "Attack" }, // 3912011937
		{ &Z_Construct_UFunction_AWeaponTriggerBox_AttackContaining, "AttackContaining" }, // 3658076520
		{ &Z_Construct_UFunction_AWeaponTriggerBox_SetAttacking, "SetAttacking" }, // 1131321103
		{ &Z_Construct_UFunction_AWeaponTriggerBox_SetMyActor, "SetMyActor" }, // 2875283067
		{ &Z_Construct_UFunction_AWeaponTriggerBox_WeaponExit, "WeaponExit" }, // 2042233909
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WeaponTriggerBox.h" },
		{ "ModuleRelativePath", "WeaponTriggerBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_attacking_MetaData[] = {
		{ "Category", "Weapon Trigger Properties" },
		{ "ModuleRelativePath", "WeaponTriggerBox.h" },
	};
#endif
	void Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_attacking_SetBit(void* Obj)
	{
		((AWeaponTriggerBox*)Obj)->attacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_attacking = { "attacking", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponTriggerBox), &Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_attacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_attacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_attacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Weapon Trigger Properties" },
		{ "ModuleRelativePath", "WeaponTriggerBox.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponTriggerBox, Damage), METADATA_PARAMS(Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponTriggerBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_attacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponTriggerBox_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponTriggerBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponTriggerBox_Statics::ClassParams = {
		&AWeaponTriggerBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponTriggerBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponTriggerBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponTriggerBox()
	{
		if (!Z_Registration_Info_UClass_AWeaponTriggerBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponTriggerBox.OuterSingleton, Z_Construct_UClass_AWeaponTriggerBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponTriggerBox.OuterSingleton;
	}
	template<> COMBATPROTOTYPE_API UClass* StaticClass<AWeaponTriggerBox>()
	{
		return AWeaponTriggerBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponTriggerBox);
	struct Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponTriggerBox, AWeaponTriggerBox::StaticClass, TEXT("AWeaponTriggerBox"), &Z_Registration_Info_UClass_AWeaponTriggerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponTriggerBox), 2220316358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_1706895760(TEXT("/Script/CombatPrototype"),
		Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
