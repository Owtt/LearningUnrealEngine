// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EnemyState.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	Idle		UMETA(DisplayName = "Idle"),
	Alerted		UMETA(DisplayName = "Alerted"),
	Chasing		UMETA(DisplayName = "Chasing"),
	Attacking	UMETA(DisplayName = "Attacking"),
	Flinching	UMETA(DisplayName = "Flinching"),
	Dead		UMETA(DisplayName = "Dead"),
};
