// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "ActorHealthComponent.h"
#include "EnemyAITrigger.h"
#include "../../Plugins/Developer/RiderLink/Source/RD/thirdparty/spdlog/include/spdlog/fmt/bundled/chrono.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMesh");
	
	AlertTrigger = CreateDefaultSubobject<AEnemyAITrigger>("AlertTrigger");

	AlertTrigger->AttachToActor(this, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "");
	
	RootComponent = Mesh;
	SkeletalMesh->SetupAttachment(Mesh);
	State = EEnemyState::Idle;
}

void AEnemy::Attack()
{
	if (State != EEnemyState::Attacking && State != EEnemyState::Dead)
	{
		State = EEnemyState::Attacking;
	}
}

void AEnemy::TakeDamage(int amount)
{
	Super::TakeDamage(amount);

	if (CurrentHP <= 0)
	{
		State = EEnemyState::Dead;
	}
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

EEnemyState AEnemy::GetState() const
{
	return State;
}

float AEnemy::GetCurrentAttackState() const
{ 
	return AttackState;
}

void AEnemy::EndAttack()
{
	lastAttackTime = GetGameTimeSinceCreation();
	State = EEnemyState::Attacking;
}

void AEnemy::OnAlerted(AMyPlayer* player)
{
	State = EEnemyState::Alerted;
}

void AEnemy::OnChaseBegin(AMyPlayer* player)
{
	if (State != EEnemyState::Dead)
		State = EEnemyState::Chasing;
}

void AEnemy::OnChaseEnd(AMyPlayer* player)
{
}

void AEnemy::OnAttackBegin(AMyPlayer* player)
{
	if (State != EEnemyState::Dead)
		State = EEnemyState::Attacking;
}

void AEnemy::OnAttackEnd(AMyPlayer* player)
{
	if (State != EEnemyState::Dead)
		State = EEnemyState::Idle;
}
