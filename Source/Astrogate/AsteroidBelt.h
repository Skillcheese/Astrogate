// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"
#include "GameFramework/Actor.h"
#include "AsteroidBelt.generated.h"

UCLASS(Blueprintable)
class ASTROGATE_API AAsteroidBelt : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAsteroidBelt();

	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FVector2D> UVs;
	TArray<FProcMeshTangent> Tangents;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ProceduralMeshComponent")
		UStaticMesh* AsteroidMesh;

	UProceduralMeshComponent* Proc;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
