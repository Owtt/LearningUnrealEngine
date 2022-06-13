// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
#include "Components/InputComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Math/Vector.h"
#include "Math/UnrealMathUtility.h"
#include "ActorHealthComponent.h"

#include "MyPlayer.h"

#include <string>

// Sets default values
AMyPlayer::AMyPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMesh");
	
	RootComponent = Mesh;

	SkeletalMesh->SetupAttachment(Mesh);
	
	SpringArm->SetupAttachment(Mesh);
	Camera->SetupAttachment(SpringArm);

	bUseControllerRotationYaw = false;
}

bool AMyPlayer::IsPlayerAlive() const { return IsAlive(); }

bool AMyPlayer::IsPlayerAttacking() const
{
	return bIsAttacking;
}

bool AMyPlayer::IsPlayerStopAttacking() const
{
	return bStopAttack;
}

float AMyPlayer::GetCurrentAttackState() const
{
	return AttackState;
}

void AMyPlayer::EndAttack()
{
	lastAttackTime = GetGameTimeSinceCreation();
	bIsAttacking = false;

	OnStopAttack();
}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	bIsAttacking = false;
	bStopAttack = true;
	AttackState = 1.f;
	
}

void AMyPlayer::Move()
{
	if (bStopAttack && !bIsAttacking && IsPlayerAlive())
	{
		FVector Vel;
		Vel.X = forwardSpeed;
		Vel.Y = rightSpeed;
		Vel.Z = 0.f;

		FVector lookPosition = Vel;

		FRotator rot = lookPosition.Rotation();
		rot.Pitch = 0.f;
		lookPosition.Normalize();
	
		rot.Yaw += 90.f;

		if (FMath::Abs(Vel.X) > 0.1f || FMath::Abs(Vel.Y) > 0.1f)
		{
			SkeletalMesh->SetRelativeRotation(FMath::QInterpTo(FQuat(SkeletalMesh->GetRelativeRotation()), FQuat(rot), 0.5f, 0.1f));
		}
	
		Vel.Normalize();

		Vel *= MoveForce;

		Vel.Z += Mesh->GetPhysicsLinearVelocity().Z;
		Mesh->SetAllPhysicsLinearVelocity(Vel);
	}
}

void AMyPlayer::AttackHeld()
{
	bStopAttack = false;
	if (!bIsAttacking)
	{
		if (GetGameTimeSinceCreation() - lastAttackTime < ComboGapTime)
		{
			AttackState++;
		}
		else
		{
			AttackState = 1.f;
		}
	
		if (AttackState > MaxAttackState)
			AttackState = 1.f;

		lastAttackState = AttackState;

		OnAttack();

		bIsAttacking = true;
	}
}

void AMyPlayer::AttackReleased()
{
	if (lastAttackState == AttackState)
	{
		bStopAttack = true;
	}
}

// Called every frame
void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyPlayer::MoveRight);

	PlayerInputComponent->BindAction("Attack", IE_Pressed,this, &AMyPlayer::AttackHeld);
	// PlayerInputComponent->BindAction("Attack", IE_Repeat,this, &AMyPlayer::AttackHeld);
	PlayerInputComponent->BindAction("Attack", IE_Released,this, &AMyPlayer::AttackReleased);
}

void AMyPlayer::OnAttack_Implementation()
{
}

void AMyPlayer::OnStopAttack_Implementation()
{
}

void AMyPlayer::MoveForward(float value)
{
	forwardSpeed = value;
	Move();
}

void AMyPlayer::MoveRight(float value)
{
	rightSpeed = value;
	Move();
}
