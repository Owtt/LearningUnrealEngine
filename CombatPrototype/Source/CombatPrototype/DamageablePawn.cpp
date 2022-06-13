// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageablePawn.h"

#include "UserWidgetExtension.h"

// Sets default values
ADamageablePawn::ADamageablePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	if (MaxHP < 1)
		MaxHP = 5;


}

void ADamageablePawn::TakeDamage(int amount)
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

void ADamageablePawn::Heal(int amount)
{
	if (IsAlive())
	{
		CurrentHP += amount;
	}
}

bool ADamageablePawn::IsAlive() const
{
	return CurrentHP > 0;
}


// Called when the game starts or when spawned
void ADamageablePawn::BeginPlay()
{
	Super::BeginPlay();

	CurrentHP = MaxHP;
}

// Called every frame
void ADamageablePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADamageablePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

