// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeWeapon.h"

#include "WeaponTriggerBox.h"

AMeleeWeapon::AMeleeWeapon()
{

}

void AMeleeWeapon::SetMyActor(AActor* actor)
{
	MyActor = actor;	

	TriggerBox->SetMyActor(actor);
}

void AMeleeWeapon::SetDamage(int dmg)
{
	Damage = dmg;

	TriggerBox->Damage = dmg;
}

void AMeleeWeapon::SetAttacking(bool atking)
{
	TriggerBox->SetAttacking(atking);
}
