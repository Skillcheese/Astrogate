#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "TransitionDirection.h"

class FValueOctree;
class FVoxelData;
struct FVoxelMaterial;

class FVoxelPolygonizerForCollisions
{
public:
	FVoxelPolygonizerForCollisions(FVoxelData* Data, FIntVector ChunkPosition, const int SizeX, const int SizeY, const int SizeZ);

	void CreateSection(FProcMeshSection& OutSection);

private:
	FVoxelData* const Data;
	FIntVector const ChunkPosition;

	const int SizeX;
	const int SizeY;
	const int SizeZ;

	FValueOctree* LastOctree;

	// Cache to get index of already created vertices
	TArray<int> Cache; // [SizeX][SizeY][SizeZ][3];;

	TArray<float> CachedValues;

	FORCEINLINE float GetValue(int X, int Y, int Z);

	FORCEINLINE void SaveVertex(int X, int Y, int Z, short EdgeIndex, int Index);
	FORCEINLINE int LoadVertex(int X, int Y, int Z, short Direction, short EdgeIndex);
};