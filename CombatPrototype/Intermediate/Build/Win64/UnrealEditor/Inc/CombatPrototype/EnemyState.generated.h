// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATPROTOTYPE_EnemyState_generated_h
#error "EnemyState.generated.h already included, missing '#pragma once' in EnemyState.h"
#endif
#define COMBATPROTOTYPE_EnemyState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatPrototype_Source_CombatPrototype_EnemyState_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Idle) \
	op(EEnemyState::Alerted) \
	op(EEnemyState::Chasing) \
	op(EEnemyState::Attacking) \
	op(EEnemyState::Flinching) \
	op(EEnemyState::Dead) 

enum class EEnemyState : uint8;
template<> COMBATPROTOTYPE_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
