// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COMBATPROTOTYPE_MeleeWeapon_generated_h
#error "MeleeWeapon.generated.h already included, missing '#pragma once' in MeleeWeapon.h"
#endif
#define COMBATPROTOTYPE_MeleeWeapon_generated_h

#define FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_SPARSE_DATA
#define FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAttacking); \
	DECLARE_FUNCTION(execSetDamage); \
	DECLARE_FUNCTION(execSetMyActor);


#define FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAttacking); \
	DECLARE_FUNCTION(execSetDamage); \
	DECLARE_FUNCTION(execSetMyActor);


#define FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMeleeWeapon(); \
	friend struct Z_Construct_UClass_AMeleeWeapon_Statics; \
public: \
	DECLARE_CLASS(AMeleeWeapon, AWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMeleeWeapon)


#define FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMeleeWeapon(); \
	friend struct Z_Construct_UClass_AMeleeWeapon_Statics; \
public: \
	DECLARE_CLASS(AMeleeWeapon, AWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMeleeWeapon)


#define FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMeleeWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMeleeWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeleeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeleeWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeleeWeapon(AMeleeWeapon&&); \
	NO_API AMeleeWeapon(const AMeleeWeapon&); \
public:


#define FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMeleeWeapon(AMeleeWeapon&&); \
	NO_API AMeleeWeapon(const AMeleeWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMeleeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMeleeWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMeleeWeapon)


#define FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_14_PROLOG
#define FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_RPC_WRAPPERS \
	FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_INCLASS \
	FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_INCLASS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATPROTOTYPE_API UClass* StaticClass<class AMeleeWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatPrototype_Source_CombatPrototype_MeleeWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
