// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatPrototype/UserWidgetExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidgetExtension() {}
// Cross Module References
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_UUserWidgetExtension_NoRegister();
	COMBATPROTOTYPE_API UClass* Z_Construct_UClass_UUserWidgetExtension();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CombatPrototype();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UUserWidgetExtension::StaticRegisterNativesUUserWidgetExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserWidgetExtension);
	UClass* Z_Construct_UClass_UUserWidgetExtension_NoRegister()
	{
		return UUserWidgetExtension::StaticClass();
	}
	struct Z_Construct_UClass_UUserWidgetExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserWidgetExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatPrototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidgetExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UserWidgetExtension.h" },
		{ "ModuleRelativePath", "UserWidgetExtension.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidgetExtension_Statics::NewProp_OwningActor_MetaData[] = {
		{ "Category", "Widget Extended Properties" },
		{ "ModuleRelativePath", "UserWidgetExtension.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserWidgetExtension_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserWidgetExtension, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserWidgetExtension_Statics::NewProp_OwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetExtension_Statics::NewProp_OwningActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserWidgetExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidgetExtension_Statics::NewProp_OwningActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserWidgetExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidgetExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserWidgetExtension_Statics::ClassParams = {
		&UUserWidgetExtension::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserWidgetExtension_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetExtension_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserWidgetExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserWidgetExtension()
	{
		if (!Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton, Z_Construct_UClass_UUserWidgetExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton;
	}
	template<> COMBATPROTOTYPE_API UClass* StaticClass<UUserWidgetExtension>()
	{
		return UUserWidgetExtension::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidgetExtension);
	struct Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_UserWidgetExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_UserWidgetExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserWidgetExtension, UUserWidgetExtension::StaticClass, TEXT("UUserWidgetExtension"), &Z_Registration_Info_UClass_UUserWidgetExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserWidgetExtension), 3721733435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_UserWidgetExtension_h_1757248728(TEXT("/Script/CombatPrototype"),
		Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_UserWidgetExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatPrototype_Source_CombatPrototype_UserWidgetExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
