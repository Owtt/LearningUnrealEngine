// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorHealthComponent.h"
#include "MyPlayer.h"

// Sets default values for this component's properties
UActorHealthComponent::UActorHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;

	// ...

	if (MaxHP < 1)
		MaxHP = 5;
	
	PlayerRef = Cast<AMyPlayer>(GetOwner());
}


void UActorHealthComponent::TakeDamage(int amount)
{
	if (IsAlive())
	{
		CurrentHP -= amount;

		if (CurrentHP <= 0)
		{
			CurrentHP = 0;
		}
	}
}

void UActorHealthComponent::Heal(int amount)
{
	if (IsAlive())
	{
		CurrentHP += amount;
	}
}

bool UActorHealthComponent::IsAlive() const
{
	return CurrentHP > 0;
}

// Called when the game starts
void UActorHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHP = MaxHP;
}
