// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DamageablePawn.h"
#include "GameFramework/Pawn.h"
#include "MyPlayer.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UActorHealthComponent;

UCLASS()
class COMBATPROTOTYPE_API AMyPlayer : public ADamageablePawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPlayer();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	UCameraComponent* Camera;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
	USkeletalMeshComponent* SkeletalMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MoveForce = 500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ComboGapTime = 0.25f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxAttackState = 5.f;
	
	float rightSpeed = 0.f;
	float forwardSpeed = 0.f;
	bool moving = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float AttackState;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void Move();

	void AttackHeld();
	void AttackReleased();

	float lastMovedTime;
	bool bIsAttacking;
	bool bStopAttack;

	
	float lastAttackTime;

	float lastAttackState;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintNativeEvent, Category="Player Functions")
	void OnAttack();
	UFUNCTION(BlueprintNativeEvent, Category="Player Functions")
	void OnStopAttack();

	void MoveForward(float value);
	void MoveRight(float value);

	bool IsPlayerAlive() const;

	bool IsPlayerAttacking() const;
	bool IsPlayerStopAttacking() const;

	float GetCurrentAttackState() const;
	void EndAttack();
};
