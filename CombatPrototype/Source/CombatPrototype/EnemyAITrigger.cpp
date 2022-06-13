// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAITrigger.h"



AEnemyAITrigger::AEnemyAITrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &AEnemyAITrigger::SphereBeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AEnemyAITrigger::SphereEndOverlap);

	OnSphereBeginOverlap.AddDynamic(this, &AEnemyAITrigger::PlayerBeginOverlap);
	OnSphereEndOverlap.AddDynamic(this, &AEnemyAITrigger::PlayerEndOverlap);
}

void AEnemyAITrigger::SphereBeginOverlap(AActor* overlappedActor, AActor* otherActor)
{
	AMyPlayer* player = Cast<AMyPlayer>(otherActor);

	if (player)
	{
		OnSphereBeginOverlap.Broadcast(player);
	}
}

void AEnemyAITrigger::SphereEndOverlap(AActor* overlappedActor, AActor* otherActor)
{
	AMyPlayer* player = Cast<AMyPlayer>(otherActor);

	if (player)
	{
		OnSphereEndOverlap.Broadcast(player);
	}
}
