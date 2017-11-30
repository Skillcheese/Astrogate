// Fill out your copyright notice in the Description page of Project Settings.

#include "AsteroidBeltComponent.h"
#include "KismetProceduralMeshLibrary.h"

void UAsteroidBeltComponent::Init()
{
	UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(StaticMesh, 0, 0, Vertices, Triangles, Normals, UVs, Tangents);
	SetMaterial(0, Material);
	CreateMeshSection(0, Vertices, Triangles, Normals, UVs, TArray<FColor>(), Tangents, true);
}

void UAsteroidBeltComponent::SpawnAsteroids(int32 Num)
{

}
