// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorBoost.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEST3RD_API UActorBoost : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorBoost();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	float	TimeOut = 1.0f;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	bool	isRLValid = true;
	UFUNCTION(BlueprintCallable, Category = "Test")
	void ResetRLValid (bool vTrue=false);


};
