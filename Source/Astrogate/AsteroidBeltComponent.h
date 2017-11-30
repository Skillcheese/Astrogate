// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"
#include "AsteroidBeltComponent.generated.h"


USTRUCT(Blueprintable)
struct FAsteroidStruct2 {

	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FVector> Vertices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<int32> Triangles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FVector> Normals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FVector2D> UVs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FProcMeshTangent> Tangents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		FVector Coords;

	FAsteroidStruct2() {

	}

	FAsteroidStruct2(FVector Coords) {
		this->Coords = Coords;
	}

	FAsteroidStruct2(TArray<FVector> Vertices, TArray<int32> Triangles, TArray<FVector> Normals, TArray<FVector2D> UVs, TArray<FProcMeshTangent> Tangents) {
		this->Vertices = Vertices;
		this->Triangles = Triangles;
		this->Normals = Normals;
		this->UVs = UVs;
		this->Tangents = Tangents;
	}
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ASTROGATE_API UAsteroidBeltComponent : public UProceduralMeshComponent
{
	GENERATED_BODY()
		
public:

	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FVector2D> UVs;
	TArray<FProcMeshTangent> Tangents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asteroid Belt")
		UStaticMesh* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asteroid Belt")
		UMaterialInterface* Material;
	
	UFUNCTION(BlueprintCallable, Category = "Asteroid Belt")
		void Init();

	UFUNCTION(BlueprintCallable, Category = "Asteroid Belt")
		void SpawnAsteroids(int32 Num);
	
};
