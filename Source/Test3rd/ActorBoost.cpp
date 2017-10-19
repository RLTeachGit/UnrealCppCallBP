// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorBoost.h"


// Sets default values for this component's properties
UActorBoost::UActorBoost()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UActorBoost::BeginPlay()
{
	Super::BeginPlay();

	// ...
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));

}


// Called every frame
void UActorBoost::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	TimeOut -= DeltaTime;
	if (TimeOut <= 0.0f) {
		isRLValid = false;
	}


}

void UActorBoost::ResetRLValid(bool vTrue)
{
	isRLValid = vTrue;
	TimeOut = 3.0f;
}