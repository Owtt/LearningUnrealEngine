// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyState.h"
#include "DamageablePawn.h"
#include "MyPlayer.h"
#include "GameFramework/Pawn.h"
#include "Enemy.generated.h"

class UActorHealthComponent;
class AAWeapon;
class AEnemyAITrigger;

UCLASS()
class COMBATPROTOTYPE_API AEnemy : public ADamageablePawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemy();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enemy Components")
	UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enemy Components")
	USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enemy Components")
	AEnemyAITrigger* AlertTrigger;

	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enemy Components")
	// AEnemyAITrigger* ChaseTrigger;
	//
	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Enemy Components")
	// AEnemyAITrigger* AttackTrigger;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float AttackState;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Enemy Properties")
	EEnemyState State;

	UFUNCTION(BlueprintCallable, Category="Enemy Functions")
	void Attack();

	virtual void TakeDamage(int amount) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float lastMovedTime;
	
	float lastAttackTime;
	float lastAttackState;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	EEnemyState GetState() const;
	

	float GetCurrentAttackState() const;
	void EndAttack();

	UFUNCTION(BlueprintCallable)
	void OnAlerted(AMyPlayer* player);
	
	UFUNCTION(BlueprintCallable)
	void OnChaseBegin(AMyPlayer* player);
	UFUNCTION(BlueprintCallable)
	void OnChaseEnd(AMyPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnAttackBegin(AMyPlayer* player);
	UFUNCTION(BlueprintCallable)
	void OnAttackEnd(AMyPlayer* player);
	
}; 
