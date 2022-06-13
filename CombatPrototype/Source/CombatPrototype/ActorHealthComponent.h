// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPlayer.h"
#include "Components/ActorComponent.h"
#include "ActorHealthComponent.generated.h"

// DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHPUpdate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COMBATPROTOTYPE_API UActorHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorHealthComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Health Properties")
	int MaxHP;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Health Properties")
	int CurrentHP = 1;

	UFUNCTION(BlueprintCallable, Category="Health Functions")
	void TakeDamage(int amount);

	UFUNCTION(BlueprintCallable, Category="Health Functions")
	void Heal(int amount);
	
	bool IsAlive() const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	AMyPlayer* PlayerRef;

public:	
	// Called every frame
	// virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
