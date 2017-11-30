// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "AsteroidBeltHISM.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ASTROGATE_API UAsteroidBeltHISM : public UHierarchicalInstancedStaticMeshComponent
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config", meta = (ExposeOnSpawn = "true"))
		float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config", meta = (ExposeOnSpawn = "true"))
		float Width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config", meta = (ExposeOnSpawn = "true"))
		float Height;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config", meta = (ExposeOnSpawn = "true"))
		float SpawnAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config", meta = (ExposeOnSpawn = "true"))
		float ScaleMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config", meta = (ExposeOnSpawn = "true"))
		float ScaleMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config", meta = (ExposeOnSpawn = "true"))
		int32 Seed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Config", meta = (ExposeOnSpawn = "true"))
		FRotator MaxRotationSpeed;

	UFUNCTION(BlueprintCallable, Category = "Asteroid Belt")
		void Init();

	void SpawnAsteroids(int32 Num);

	UAsteroidBeltHISM() {
	}

	UAsteroidBeltHISM(int32 Num, UMaterialInterface* Mat) {
		SpawnAmount = Num;
		SetMaterial(0, Mat);
		SetMaterial(1, Mat);
		SetMaterial(2, Mat);
		SetMaterial(3, Mat);
	}

};
