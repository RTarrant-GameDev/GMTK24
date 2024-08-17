// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterShrinkComponent.h"
#include "CharacterEnlargeComponent.h"
#include "HealthComponent.h"
#include "SizeShiftPlayerCharacter.generated.h"

UCLASS()
class SIZESHIFT_API ASizeShiftPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASizeShiftPlayerCharacter();

	UPROPERTY(EditDefaultsOnly)
	class UHealthComponent* HealthComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	class UCharacterShrinkComponent* ShrinkComponent;

	UPROPERTY(EditDefaultsOnly)
	class UCharacterEnlargeComponent* EnlargeComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Shrink();
	void Enlarge();

	void ResizeSetHealth(float ValueToSet);

private:
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookUpRate(float AxisValue);
	void LookRightRate(float AxisValue);

	UPROPERTY(EditAnywhere)
	float RotationRate = 10;

	UPROPERTY(EditAnywhere)
	float MaxHealth;
};
