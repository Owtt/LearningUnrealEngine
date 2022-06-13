// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COMBATPROTOTYPE_WeaponTriggerBox_generated_h
#error "WeaponTriggerBox.generated.h already included, missing '#pragma once' in WeaponTriggerBox.h"
#endif
#define COMBATPROTOTYPE_WeaponTriggerBox_generated_h

#define FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_SPARSE_DATA
#define FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMyActor); \
	DECLARE_FUNCTION(execSetAttacking); \
	DECLARE_FUNCTION(execAttackContaining); \
	DECLARE_FUNCTION(execWeaponExit); \
	DECLARE_FUNCTION(execAttack);


#define FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMyActor); \
	DECLARE_FUNCTION(execSetAttacking); \
	DECLARE_FUNCTION(execAttackContaining); \
	DECLARE_FUNCTION(execWeaponExit); \
	DECLARE_FUNCTION(execAttack);


#define FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponTriggerBox(); \
	friend struct Z_Construct_UClass_AWeaponTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AWeaponTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(AWeaponTriggerBox)


#define FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponTriggerBox(); \
	friend struct Z_Construct_UClass_AWeaponTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AWeaponTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(AWeaponTriggerBox)


#define FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponTriggerBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponTriggerBox(AWeaponTriggerBox&&); \
	NO_API AWeaponTriggerBox(const AWeaponTriggerBox&); \
public:


#define FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponTriggerBox(AWeaponTriggerBox&&); \
	NO_API AWeaponTriggerBox(const AWeaponTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponTriggerBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponTriggerBox)


#define FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_13_PROLOG
#define FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_RPC_WRAPPERS \
	FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_INCLASS \
	FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_INCLASS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATPROTOTYPE_API UClass* StaticClass<class AWeaponTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatPrototype_Source_CombatPrototype_WeaponTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
