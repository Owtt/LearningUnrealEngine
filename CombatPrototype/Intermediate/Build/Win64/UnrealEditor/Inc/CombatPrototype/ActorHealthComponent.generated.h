// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATPROTOTYPE_ActorHealthComponent_generated_h
#error "ActorHealthComponent.generated.h already included, missing '#pragma once' in ActorHealthComponent.h"
#endif
#define COMBATPROTOTYPE_ActorHealthComponent_generated_h

#define FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_SPARSE_DATA
#define FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorHealthComponent(); \
	friend struct Z_Construct_UClass_UActorHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UActorHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(UActorHealthComponent)


#define FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUActorHealthComponent(); \
	friend struct Z_Construct_UClass_UActorHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UActorHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(UActorHealthComponent)


#define FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorHealthComponent(UActorHealthComponent&&); \
	NO_API UActorHealthComponent(const UActorHealthComponent&); \
public:


#define FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorHealthComponent(UActorHealthComponent&&); \
	NO_API UActorHealthComponent(const UActorHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorHealthComponent)


#define FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_12_PROLOG
#define FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_RPC_WRAPPERS \
	FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_INCLASS \
	FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATPROTOTYPE_API UClass* StaticClass<class UActorHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatPrototype_Source_CombatPrototype_ActorHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
