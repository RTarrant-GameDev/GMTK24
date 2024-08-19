// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyTurretPawn.h"
#include "Components/CapsuleComponent.h"
#include "SizeShiftPlayerCharacter.h"
#include <Kismet/GameplayStatics.h>
#include "ProjectileClass.h"

// Sets default values
AEnemyTurretPawn::AEnemyTurretPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComponent;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BaseMesh->SetupAttachment(CapsuleComponent);

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	TurretMesh->SetupAttachment(BaseMesh);

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	ProjectileSpawnPoint->SetupAttachment(TurretMesh);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
}

// Called when the game starts or when spawned
void AEnemyTurretPawn::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<ASizeShiftPlayerCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

	HealthComponent->SetHealth(HealthComponent->MaxHealth);

	GetWorldTimerManager().SetTimer(FireRateTimerHandle, this, &AEnemyTurretPawn::CheckFireCondition, FireRate, true);
}

void AEnemyTurretPawn::RotateTurret(FVector LookAtTarget)
{
	FVector ToTarget = LookAtTarget - TurretMesh->GetComponentLocation();
	FRotator LookAtRotation = FRotator(0.f, ToTarget.Rotation().Yaw, 0.f);
	TurretMesh->SetWorldRotation(
		FMath::RInterpTo(
			TurretMesh->GetComponentRotation(),
			LookAtRotation,
			UGameplayStatics::GetWorldDeltaSeconds(this),
			5.f)
	);
}

void AEnemyTurretPawn::Fire()
{
	FVector ProjectileSpawnPointLocation = ProjectileSpawnPoint->GetComponentLocation();
	FRotator ProjectileSpawnPointRotation = ProjectileSpawnPoint->GetComponentRotation();

	AProjectileClass* Projectile = GetWorld()->SpawnActor<AProjectileClass>(ProjectileClass, ProjectileSpawnPointLocation, ProjectileSpawnPointRotation);
	Projectile->SetOwner(this);
}

// Called every frame
void AEnemyTurretPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CheckDistance())
	{
		RotateTurret(PlayerCharacter->GetActorLocation());
	}
}

void AEnemyTurretPawn::CheckFireCondition()
{
	if (PlayerCharacter == nullptr)
	{
		return;
	}
	if (PlayerCharacter->HealthComponent->CurrHealth > 0)
	{
		if (CheckDistance())
		{
			Fire();
		}
	}
}

bool AEnemyTurretPawn::CheckDistance()
{
	if (PlayerCharacter != nullptr)
	{
		float Distance = FVector::Dist(GetActorLocation(), PlayerCharacter->GetActorLocation());

		if (Distance <= AttackRange)
		{
			return true;
		}
	}

	return false;
}

