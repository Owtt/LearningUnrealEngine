// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "WeaponTriggerBox.h"
#include "CoreMinimal.h"
#include "Weapon.h"
#include "MeleeWeapon.generated.h"


/**
 * 
 */
UCLASS()
class COMBATPROTOTYPE_API AMeleeWeapon : public AWeapon
{
	GENERATED_BODY()
	
protected:
	AActor* MyActor;

public:
	AMeleeWeapon();

	UFUNCTION(BlueprintCallable, Category="Weapon Functions")
	void SetMyActor(AActor* actor);
	
	UFUNCTION(BlueprintCallable, Category="Weapon Functions")
	void SetDamage(int dmg);

	UFUNCTION(BlueprintCallable, Category="Weapon Functions")
	void SetAttacking(bool atking);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="")
	AWeaponTriggerBox* TriggerBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Weapon Properties")
	int Damage;

	
};
