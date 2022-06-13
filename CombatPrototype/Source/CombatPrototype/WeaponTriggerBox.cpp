// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponTriggerBox.h"
#include "DamageablePawn.h"

void AWeaponTriggerBox::BeginPlay()
{
	Super::BeginPlay();
}

AWeaponTriggerBox::AWeaponTriggerBox()
{
	OnActorBeginOverlap.AddDynamic(this, &AWeaponTriggerBox::Attack);
	OnActorEndOverlap.AddDynamic(this, &AWeaponTriggerBox::WeaponExit);

	attacking = false;
}

void AWeaponTriggerBox::Attack(AActor* overlappedActor, AActor* otherActor)
{
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Other Actor Enter: %s"), *otherActor->GetName()));
	if (otherActor && otherActor != this && otherActor != MyActor)
	{
		ADamageablePawn* foe = Cast<ADamageablePawn>(otherActor);

		if (foe && !AttackedPawns.Contains(foe) && attacking)
		{
			foe->TakeDamage(Damage);
			DamageablePawns.Add(foe);
			AttackedPawns.Add(foe);
		}
	}
}

void AWeaponTriggerBox::WeaponExit(AActor* overlappedActor, AActor* otherActor)
{
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Other Actor Exit: %s"), *otherActor->GetName()));
	if (otherActor && otherActor != this && otherActor != MyActor)
	{
		ADamageablePawn* foe = Cast<ADamageablePawn>(otherActor);

		if (DamageablePawns.Contains(foe) && attacking)
		{
			DamageablePawns.Remove(foe);
		}
	}
}

void AWeaponTriggerBox::SetMyActor(AActor* actor)
{
	MyActor = actor;
}

void AWeaponTriggerBox::AttackContaining()
{
	for (ADamageablePawn* pawn : DamageablePawns)
	{
		if (!AttackedPawns.Contains(pawn))
		{
			pawn->TakeDamage(Damage);
			AttackedPawns.Add(pawn);
		}
	}
}

void AWeaponTriggerBox::SetAttacking(bool atking)
{
	if (!attacking && atking)
	{
		AttackedPawns.Empty();
		AttackContaining();
	}

	attacking = atking;
}
