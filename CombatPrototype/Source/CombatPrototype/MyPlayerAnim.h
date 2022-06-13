// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyPlayerAnim.generated.h"

/**
 * 
 */
UCLASS()
class COMBATPROTOTYPE_API UMyPlayerAnim : public UAnimInstance
{
	GENERATED_BODY()

protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

public:
	UMyPlayerAnim();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Animation Properties")
	class AMyPlayer* PlayerRef;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Animation Properties")
    float Speed;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Animation Properties")
	bool bIsDead;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Animation Properties")
	bool bIsAttacking;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Animation Properties")
	bool bIsStopAttacking;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Animation Properties")
	float AttackState;

	UFUNCTION(BlueprintCallable, Category="Animation Properties")
	void UpdateAnimProperties();

	UFUNCTION(BlueprintCallable, Category="Animation Properties")
	void OnAttackEnd();
	
};
