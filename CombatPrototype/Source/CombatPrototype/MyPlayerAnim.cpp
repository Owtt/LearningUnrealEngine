// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerAnim.h"

#include "MyPlayer.h"

void UMyPlayerAnim::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();


	bIsDead = false;
	AttackState = 1.f;

	PlayerRef = Cast<AMyPlayer>(TryGetPawnOwner());
}

void UMyPlayerAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (PlayerRef)
		UpdateAnimProperties();
}

UMyPlayerAnim::UMyPlayerAnim()
{
	bIsAttacking = false;
	bIsStopAttacking = true;
	bIsDead = false;
	AttackState = 1.f;
}

void UMyPlayerAnim::UpdateAnimProperties()
{
	Speed = PlayerRef->GetVelocity().Size();
	bIsDead = !PlayerRef->IsPlayerAlive();
	bIsAttacking = PlayerRef->IsPlayerAttacking();
	bIsStopAttacking = PlayerRef->IsPlayerStopAttacking();
	AttackState = PlayerRef->GetCurrentAttackState();
}

void UMyPlayerAnim::OnAttackEnd()
{
	PlayerRef->EndAttack();
}
