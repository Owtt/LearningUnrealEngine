// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPlayer.h"
#include "Engine/TriggerSphere.h"
#include "EnemyAITrigger.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyAIBeginOverlap, AMyPlayer*, Player);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyAIEndOverlap, AMyPlayer*, Player);


/**
 * 
 */
UCLASS()
class COMBATPROTOTYPE_API AEnemyAITrigger : public ATriggerSphere
{
	GENERATED_BODY()

public:
	AEnemyAITrigger();

	UFUNCTION(BlueprintCallable, Category="Enemy AI Trigger Functions")
	void SphereBeginOverlap(AActor* overlappedActor, AActor* otherActor);
	UFUNCTION(BlueprintCallable, Category="Enemy AI Trigger Functions")
	void SphereEndOverlap(AActor* overlappedActor, AActor* otherActor);

	UFUNCTION(BlueprintImplementableEvent)
	void PlayerBeginOverlap(AMyPlayer* player);
	UFUNCTION(BlueprintImplementableEvent)
	void PlayerEndOverlap(AMyPlayer* player);

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "EventDispatchers")
	FEnemyAIBeginOverlap OnSphereBeginOverlap;
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "EventDispatchers")
	FEnemyAIEndOverlap OnSphereEndOverlap;
	
};
