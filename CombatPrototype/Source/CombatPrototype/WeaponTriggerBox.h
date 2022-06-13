// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageablePawn.h"
#include "Engine/TriggerBox.h"
#include "WeaponTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class COMBATPROTOTYPE_API AWeaponTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	AActor* MyActor;

	TArray<ADamageablePawn*> DamageablePawns;
	TArray<ADamageablePawn*> AttackedPawns;

public:
	AWeaponTriggerBox();

	UFUNCTION(BlueprintCallable, Category="Weapon Trigger Functions")
	void Attack(AActor* overlappedActor, AActor* otherActor);
	UFUNCTION(BlueprintCallable, Category="Weapon Trigger Functions")
	void WeaponExit(AActor* overlappedActor, AActor* otherActor);

	UFUNCTION(BlueprintCallable, Category="Weapon Trigger Functions")
	void AttackContaining();
	
	UFUNCTION(BlueprintCallable, Category="Weapon Trigger Functions")
	void SetAttacking(bool atking);
	
	UFUNCTION(BlueprintCallable, Category="Weapon Trigger Functions")
	void SetMyActor(AActor* actor);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Weapon Trigger Properties")
	bool attacking;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Weapon Trigger Properties")
	int Damage;
};
