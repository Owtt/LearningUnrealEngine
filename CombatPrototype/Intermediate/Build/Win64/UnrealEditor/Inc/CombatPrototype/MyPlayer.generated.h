// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATPROTOTYPE_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define COMBATPROTOTYPE_MyPlayer_generated_h

#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_SPARSE_DATA
#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_RPC_WRAPPERS \
	virtual void OnStopAttack_Implementation(); \
	virtual void OnAttack_Implementation(); \
 \
	DECLARE_FUNCTION(execOnStopAttack); \
	DECLARE_FUNCTION(execOnAttack);


#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnStopAttack_Implementation(); \
	virtual void OnAttack_Implementation(); \
 \
	DECLARE_FUNCTION(execOnStopAttack); \
	DECLARE_FUNCTION(execOnAttack);


#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_EVENT_PARMS
#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_CALLBACK_WRAPPERS
#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, ADamageablePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, ADamageablePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public:


#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer)


#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_14_PROLOG \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_EVENT_PARMS


#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_RPC_WRAPPERS \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_CALLBACK_WRAPPERS \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_INCLASS \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_CALLBACK_WRAPPERS \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_INCLASS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATPROTOTYPE_API UClass* StaticClass<class AMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatPrototype_Source_CombatPrototype_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
