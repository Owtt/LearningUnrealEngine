// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyPlayer;
class AActor;
#ifdef COMBATPROTOTYPE_EnemyAITrigger_generated_h
#error "EnemyAITrigger.generated.h already included, missing '#pragma once' in EnemyAITrigger.h"
#endif
#define COMBATPROTOTYPE_EnemyAITrigger_generated_h

#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_10_DELEGATE \
struct _Script_CombatPrototype_eventEnemyAIBeginOverlap_Parms \
{ \
	AMyPlayer* Player; \
}; \
static inline void FEnemyAIBeginOverlap_DelegateWrapper(const FMulticastScriptDelegate& EnemyAIBeginOverlap, AMyPlayer* Player) \
{ \
	_Script_CombatPrototype_eventEnemyAIBeginOverlap_Parms Parms; \
	Parms.Player=Player; \
	EnemyAIBeginOverlap.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_11_DELEGATE \
struct _Script_CombatPrototype_eventEnemyAIEndOverlap_Parms \
{ \
	AMyPlayer* Player; \
}; \
static inline void FEnemyAIEndOverlap_DelegateWrapper(const FMulticastScriptDelegate& EnemyAIEndOverlap, AMyPlayer* Player) \
{ \
	_Script_CombatPrototype_eventEnemyAIEndOverlap_Parms Parms; \
	Parms.Player=Player; \
	EnemyAIEndOverlap.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_SPARSE_DATA
#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSphereEndOverlap); \
	DECLARE_FUNCTION(execSphereBeginOverlap);


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSphereEndOverlap); \
	DECLARE_FUNCTION(execSphereBeginOverlap);


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_EVENT_PARMS \
	struct EnemyAITrigger_eventPlayerBeginOverlap_Parms \
	{ \
		AMyPlayer* player; \
	}; \
	struct EnemyAITrigger_eventPlayerEndOverlap_Parms \
	{ \
		AMyPlayer* player; \
	};


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_CALLBACK_WRAPPERS
#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAITrigger(); \
	friend struct Z_Construct_UClass_AEnemyAITrigger_Statics; \
public: \
	DECLARE_CLASS(AEnemyAITrigger, ATriggerSphere, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAITrigger)


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAITrigger(); \
	friend struct Z_Construct_UClass_AEnemyAITrigger_Statics; \
public: \
	DECLARE_CLASS(AEnemyAITrigger, ATriggerSphere, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatPrototype"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAITrigger)


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAITrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAITrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAITrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAITrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAITrigger(AEnemyAITrigger&&); \
	NO_API AEnemyAITrigger(const AEnemyAITrigger&); \
public:


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAITrigger(AEnemyAITrigger&&); \
	NO_API AEnemyAITrigger(const AEnemyAITrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAITrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAITrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAITrigger)


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_17_PROLOG \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_EVENT_PARMS


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_RPC_WRAPPERS \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_CALLBACK_WRAPPERS \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_INCLASS \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_SPARSE_DATA \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_CALLBACK_WRAPPERS \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_INCLASS_NO_PURE_DECLS \
	FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATPROTOTYPE_API UClass* StaticClass<class AEnemyAITrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatPrototype_Source_CombatPrototype_EnemyAITrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
