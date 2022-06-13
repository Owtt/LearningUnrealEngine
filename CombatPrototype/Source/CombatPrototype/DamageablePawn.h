// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "DamageablePawn.generated.h"


UCLASS()
class COMBATPROTOTYPE_API ADamageablePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADamageablePawn();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health Properties")
	int MaxHP;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Health Properties")
	int CurrentHP = 1;

	UFUNCTION(BlueprintCallable, Category="Health Functions")
	virtual void TakeDamage(int amount);

	UFUNCTION(BlueprintCallable, Category="Health Functions")
	virtual void Heal(int amount);
	
	virtual bool IsAlive() const;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
