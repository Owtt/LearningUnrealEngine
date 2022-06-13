// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatPrototype/MyPlayerAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerAnim() {}
// Cross Module References
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_UMyPlayerAnim_NoRegister();
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_UMyPlayerAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_CombatPrototype();
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyPlayerAnim::execOnAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyPlayerAnim::execUpdateAnimProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimProperties();
		P_NATIVE_END;
	}
	void UMyPlayerAnim::StaticRegisterNativesUMyPlayerAnim()
	{
		UClass* Class = UMyPlayerAnim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackEnd", &UMyPlayerAnim::execOnAttackEnd },
			{ "UpdateAnimProperties", &UMyPlayerAnim::execUpdateAnimProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyPlayerAnim_OnAttackEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPlayerAnim_OnAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Properties" },
		{ "ModuleRelativePath", "MyPlayerAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPlayerAnim_OnAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPlayerAnim, nullptr, "OnAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyPlayerAnim_OnAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerAnim_OnAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyPlayerAnim_OnAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPlayerAnim_OnAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyPlayerAnim_UpdateAnimProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPlayerAnim_UpdateAnimProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Properties" },
		{ "ModuleRelativePath", "MyPlayerAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPlayerAnim_UpdateAnimProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPlayerAnim, nullptr, "UpdateAnimProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyPlayerAnim_UpdateAnimProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerAnim_UpdateAnimProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyPlayerAnim_UpdateAnimProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPlayerAnim_UpdateAnimProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyPlayerAnim);
	UClass* Z_Construct_UClass_UMyPlayerAnim_NoRegister()
	{
		return UMyPlayerAnim::StaticClass();
	}
	struct Z_Construct_UClass_UMyPlayerAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStopAttacking_MetaData[];
#endif
		static void NewProp_bIsStopAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStopAttacking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackState_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyPlayerAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatPrototype,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyPlayerAnim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyPlayerAnim_OnAttackEnd, "OnAttackEnd" }, // 3449353389
		{ &Z_Construct_UFunction_UMyPlayerAnim_UpdateAnimProperties, "UpdateAnimProperties" }, // 2496414069
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerAnim_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MyPlayerAnim.h" },
		{ "ModuleRelativePath", "MyPlayerAnim.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_PlayerRef_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ModuleRelativePath", "MyPlayerAnim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerAnim, PlayerRef), Z_Construct_UClass_AMyPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_PlayerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_PlayerRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ModuleRelativePath", "MyPlayerAnim.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerAnim, Speed), METADATA_PARAMS(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsDead_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ModuleRelativePath", "MyPlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((UMyPlayerAnim*)Obj)->bIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyPlayerAnim), &Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ModuleRelativePath", "MyPlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((UMyPlayerAnim*)Obj)->bIsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyPlayerAnim), &Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsStopAttacking_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ModuleRelativePath", "MyPlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsStopAttacking_SetBit(void* Obj)
	{
		((UMyPlayerAnim*)Obj)->bIsStopAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsStopAttacking = { "bIsStopAttacking", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyPlayerAnim), &Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsStopAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsStopAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsStopAttacking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_AttackState_MetaData[] = {
		{ "Category", "Animation Properties" },
		{ "ModuleRelativePath", "MyPlayerAnim.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_AttackState = { "AttackState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerAnim, AttackState), METADATA_PARAMS(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_AttackState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_AttackState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyPlayerAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_PlayerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_bIsStopAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerAnim_Statics::NewProp_AttackState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyPlayerAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPlayerAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyPlayerAnim_Statics::ClassParams = {
		&UMyPlayerAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyPlayerAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyPlayerAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyPlayerAnim()
	{
		if (!Z_Registration_Info_UClass_UMyPlayerAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyPlayerAnim.OuterSingleton, Z_Construct_UClass_UMyPlayerAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyPlayerAnim.OuterSingleton;
	}
	template<> COMBATPROTOTYPE_API UClass* StaticClass<UMyPlayerAnim>()
	{
		return UMyPlayerAnim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPlayerAnim);
	struct Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_MyPlayerAnim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_MyPlayerAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyPlayerAnim, UMyPlayerAnim::StaticClass, TEXT("UMyPlayerAnim"), &Z_Registration_Info_UClass_UMyPlayerAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyPlayerAnim), 43847618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_MyPlayerAnim_h_3633579551(TEXT("/Script/CombatPrototype"),
		Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_MyPlayerAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_MyPlayerAnim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
