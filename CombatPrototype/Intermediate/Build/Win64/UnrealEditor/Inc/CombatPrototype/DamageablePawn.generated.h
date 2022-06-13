// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATPROTOTYPE_DamageablePawn_generated_h
#error "DamageablePawn.generated.h already included, missing '#pragma once' in DamageablePawn.h"
#endif
#define COMBATPROTOTYPE_DamageablePawn_generated_h

#define FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_SPARSE_DATA
#define FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADamageablePawn(); \
	friend struct Z_Construct_UClass_ADamageablePawn_Statics; \
public: \
	DECLARE_CLASS(ADamageablePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(ADamageablePawn)


#define FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADamageablePawn(); \
	friend struct Z_Construct_UClass_ADamageablePawn_Statics; \
public: \
	DECLARE_CLASS(ADamageablePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(ADamageablePawn)


#define FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADamageablePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADamageablePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageablePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageablePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageablePawn(ADamageablePawn&&); \
	NO_API ADamageablePawn(const ADamageablePawn&); \
public:


#define FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageablePawn(ADamageablePawn&&); \
	NO_API ADamageablePawn(const ADamageablePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageablePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageablePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADamageablePawn)


#define FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_10_PROLOG
#define FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_RPC_WRAPPERS \
	FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_INCLASS \
	FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_INCLASS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATPROTOTYPE_API UClass* StaticClass<class ADamageablePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatPrototype_Source_CombatPrototype_DamageablePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
