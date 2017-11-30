// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AsteroidBeltHISM.h"
#include "Components/SceneComponent.h"
#include "AsteroidBeltHISMHandler.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASTROGATE_API UAsteroidBeltHISMHandler : public USceneComponent
{
	GENERATED_BODY()

public:	
	UAsteroidBeltHISMHandler();



protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
