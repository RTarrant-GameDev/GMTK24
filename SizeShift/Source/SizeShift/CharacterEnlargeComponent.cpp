// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterEnlargeComponent.h"

// Sets default values for this component's properties
UCharacterEnlargeComponent::UCharacterEnlargeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UCharacterEnlargeComponent::EnlargeCharacter()
{
	//to avoid nullptrs
	if (GetOwner() == nullptr)
	{
		return;
	}
	else
	{

		FVector Scale = GetOwner()->GetActorScale3D();
		float ScaleSize = Scale.Size();
		if (ScaleSize < EnlargeLimit)
		{
			GetOwner()->SetActorScale3D(FVector(GetOwner()->GetActorScale3D().X + 0.25f, GetOwner()->GetActorScale3D().Y + 0.25f, GetOwner()->GetActorScale3D().Z + 0.25f));
		}
	}
}


// Called when the game starts
void UCharacterEnlargeComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCharacterEnlargeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

