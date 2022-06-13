// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAnimInstance.h"

#include "Enemy.h"

void UEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	State = EEnemyState::Idle;
	
	bIsDead = false;
	AttackState = 1.f;
	
	EnemyRef = Cast<AEnemy>(TryGetPawnOwner());
}

void UEnemyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (EnemyRef)
		UpdateAnimProperties();
}

UEnemyAnimInstance::UEnemyAnimInstance()
{
	bIsAttacking = false;
	bIsStopAttacking = true;
	bIsDead = false;
	AttackState = 1.f;
}

void UEnemyAnimInstance::UpdateAnimProperties()
{
	State = EnemyRef->GetState();
	FName StateName = UEnum::GetValueAsName(State);
	GEngine->AddOnScreenDebugMessage(1, -5, FColor::Red, FString::Printf(TEXT("State: %s"), *StateName.ToString()));
	Speed = EnemyRef->GetVelocity().Size();
	AttackState = EnemyRef->GetCurrentAttackState();
}

void UEnemyAnimInstance::OnAttackEnd()
{
	EnemyRef->EndAttack();
}
