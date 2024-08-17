// Fill out your copyright notice in the Description page of Project Settings.


#include "SizeShiftPlayerCharacter.h"

// Sets default values
ASizeShiftPlayerCharacter::ASizeShiftPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShrinkComponent = CreateDefaultSubobject<UCharacterShrinkComponent>(TEXT("ShrinkComponent"));
	EnlargeComponent = CreateDefaultSubobject<UCharacterEnlargeComponent>(TEXT("EnlargeComponent"));
}

// Called when the game starts or when spawned
void ASizeShiftPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASizeShiftPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASizeShiftPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Axis
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ASizeShiftPlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ASizeShiftPlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &ASizeShiftPlayerCharacter::LookUpRate);
	PlayerInputComponent->BindAxis(TEXT("LookRightRate"), this, &ASizeShiftPlayerCharacter::LookRightRate);

	//Actions
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Shrink"), EInputEvent::IE_Pressed, this, &ASizeShiftPlayerCharacter::Shrink);
	PlayerInputComponent->BindAction(TEXT("Enlarge"), EInputEvent::IE_Pressed, this, &ASizeShiftPlayerCharacter::Enlarge);
}

void ASizeShiftPlayerCharacter::Shrink()
{
	ShrinkComponent->ShrinkCharacter();
}

void ASizeShiftPlayerCharacter::Enlarge()
{
	EnlargeComponent->EnlargeCharacter();
}

void ASizeShiftPlayerCharacter::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}

void ASizeShiftPlayerCharacter::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}

void ASizeShiftPlayerCharacter::LookUpRate(float AxisValue)
{
	AddControllerPitchInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}

void ASizeShiftPlayerCharacter::LookRightRate(float AxisValue)
{
	AddControllerYawInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}
