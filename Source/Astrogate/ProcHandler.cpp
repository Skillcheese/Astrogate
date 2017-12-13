// Fill out your copyright notice in the Description page of Project Settings.

#include "ProcHandler.h"
#include "KismetProceduralMeshLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "MyProceduralMeshComponent.h"
#include "ProceduralMeshComponent.h"

UProcHandler::UProcHandler()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UProcHandler::BeginPlay()
{
	Super::BeginPlay();
	CanPlace = true;
}

void UProcHandler::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UProcHandler::MakeBoxMesh(FVector BoxRadius, FVector Offset, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents)
{
	FVector BoxVerts[8];
	BoxVerts[0] = FVector(Offset.X - BoxRadius.X, BoxRadius.Y + Offset.Y, BoxRadius.Z + Offset.Z);
	BoxVerts[1] = FVector(BoxRadius.X + Offset.X, BoxRadius.Y + Offset.Y, BoxRadius.Z + Offset.Z);
	BoxVerts[2] = FVector(BoxRadius.X + Offset.X, Offset.Y - BoxRadius.Y, BoxRadius.Z + Offset.Z);
	BoxVerts[3] = FVector(Offset.X - BoxRadius.X, Offset.Y - BoxRadius.Y, BoxRadius.Z + Offset.Z);

	BoxVerts[4] = FVector(Offset.X - BoxRadius.X, BoxRadius.Y + Offset.Y, Offset.Z - BoxRadius.Z);
	BoxVerts[5] = FVector(BoxRadius.X + Offset.X, BoxRadius.Y + Offset.Y, Offset.Z - BoxRadius.Z);
	BoxVerts[6] = FVector(BoxRadius.X + Offset.X, Offset.Y - BoxRadius.Y, Offset.Z - BoxRadius.Z);
	BoxVerts[7] = FVector(Offset.X - BoxRadius.X, Offset.Y - BoxRadius.Y, Offset.Z - BoxRadius.Z);

	Triangles.Reset();

	const int32 NumVerts = 24;

	Vertices.Reset();
	Vertices.AddUninitialized(NumVerts);

	Normals.Reset();
	Normals.AddUninitialized(NumVerts);

	Tangents.Reset();
	Tangents.AddUninitialized(NumVerts);

	Vertices[0] = BoxVerts[0];
	Vertices[1] = BoxVerts[1];
	Vertices[2] = BoxVerts[2];
	Vertices[3] = BoxVerts[3];
	ConvertQuadToTrianglesMine(Triangles, 0, 1, 2, 3);
	Normals[0] = Normals[1] = Normals[2] = Normals[3] = FVector(0, 0, 1);
	Tangents[0] = Tangents[1] = Tangents[2] = Tangents[3] = FProcMeshTangent(0.f, -1.f, 0.f);

	Vertices[4] = BoxVerts[4];
	Vertices[5] = BoxVerts[0];
	Vertices[6] = BoxVerts[3];
	Vertices[7] = BoxVerts[7];
	ConvertQuadToTrianglesMine(Triangles, 4, 5, 6, 7);
	Normals[4] = Normals[5] = Normals[6] = Normals[7] = FVector(-1, 0, 0);
	Tangents[4] = Tangents[5] = Tangents[6] = Tangents[7] = FProcMeshTangent(0.f, -1.f, 0.f);

	Vertices[8] = BoxVerts[5];
	Vertices[9] = BoxVerts[1];
	Vertices[10] = BoxVerts[0];
	Vertices[11] = BoxVerts[4];
	ConvertQuadToTrianglesMine(Triangles, 8, 9, 10, 11);
	Normals[8] = Normals[9] = Normals[10] = Normals[11] = FVector(0, 1, 0);
	Tangents[8] = Tangents[9] = Tangents[10] = Tangents[11] = FProcMeshTangent(-1.f, 0.f, 0.f);

	Vertices[12] = BoxVerts[6];
	Vertices[13] = BoxVerts[2];
	Vertices[14] = BoxVerts[1];
	Vertices[15] = BoxVerts[5];
	ConvertQuadToTrianglesMine(Triangles, 12, 13, 14, 15);
	Normals[12] = Normals[13] = Normals[14] = Normals[15] = FVector(1, 0, 0);
	Tangents[12] = Tangents[13] = Tangents[14] = Tangents[15] = FProcMeshTangent(0.f, 1.f, 0.f);

	Vertices[16] = BoxVerts[7];
	Vertices[17] = BoxVerts[3];
	Vertices[18] = BoxVerts[2];
	Vertices[19] = BoxVerts[6];
	ConvertQuadToTrianglesMine(Triangles, 16, 17, 18, 19);
	Normals[16] = Normals[17] = Normals[18] = Normals[19] = FVector(0, -1, 0);
	Tangents[16] = Tangents[17] = Tangents[18] = Tangents[19] = FProcMeshTangent(1.f, 0.f, 0.f);

	Vertices[20] = BoxVerts[7];
	Vertices[21] = BoxVerts[6];
	Vertices[22] = BoxVerts[5];
	Vertices[23] = BoxVerts[4];
	ConvertQuadToTrianglesMine(Triangles, 20, 21, 22, 23);
	Normals[20] = Normals[21] = Normals[22] = Normals[23] = FVector(0, 0, -1);
	Tangents[20] = Tangents[21] = Tangents[22] = Tangents[23] = FProcMeshTangent(0.f, 1.f, 0.f);

	// UVs
	UVs.Reset();
	UVs.AddUninitialized(NumVerts);

	UVs[0] = UVs[4] = UVs[8] = UVs[12] = UVs[16] = UVs[20] = FVector2D(0.f, 0.f);
	UVs[1] = UVs[5] = UVs[9] = UVs[13] = UVs[17] = UVs[21] = FVector2D(0.f, 1.f);
	UVs[2] = UVs[6] = UVs[10] = UVs[14] = UVs[18] = UVs[22] = FVector2D(1.f, 1.f);
	UVs[3] = UVs[7] = UVs[11] = UVs[15] = UVs[19] = UVs[23] = FVector2D(1.f, 0.f);
}

void UProcHandler::MakePipeStraight(FVector Offset, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents)
{
	UStaticMesh* StaticMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/ThirdPersonBP/Models/Straight.Straight"));

	int32 NumSections = StaticMesh->GetNumSections(0);
	for (int32 SectionIndex = 0; SectionIndex < NumSections; SectionIndex++)
	{
		// Get geom data from static mesh
		UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(StaticMesh, 0, SectionIndex, Vertices, Triangles, Normals, UVs, Tangents);
	}
	for (int i = 0; i < Vertices.Num(); i++) {
		Vertices[i] += Offset - FVector(0,0,50);
	}
}

void UProcHandler::ConvertQuadToTrianglesMine(UPARAM(ref)TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3)
{
	Triangles.Add(Vert0);
	Triangles.Add(Vert1);
	Triangles.Add(Vert3);

	Triangles.Add(Vert1);
	Triangles.Add(Vert2);
	Triangles.Add(Vert3);
}

int32 UProcHandler::InitSection(int32 BlockType)
{
	int32 Toughness = 0;
	int32 Mass = 0;
	switch (BlockType) {
	case 0:
		Toughness = 100;
		Mass = 1984;
		break;
	case 1:
		Toughness = 250;
		Mass = 1984;
		break;
	case 2:
		Toughness = 1000;
		Mass = 1984;
		break;
	default:
		Toughness = 100;
		Mass = 1984;
		break;
	}
	FMeshSection2 mesh = FMeshSection2(BlockType, Toughness, Mass);
	mesh.Mesh = NewObject<UProceduralMeshComponent>(this, FName(*FString::FromInt(Meshes.Num())));
	mesh.Mesh->RegisterComponent();
	mesh.Mesh->SetMaterial(0, Materials[BlockType]);
	mesh.Mesh->AttachToComponent(this,FAttachmentTransformRules(EAttachmentRule(2), EAttachmentRule(2), EAttachmentRule(2), true),FName("None"));
	mesh.Mesh->SetRelativeLocation(FVector(0));
	mesh.Mesh->SetWorldScale3D(FVector(1));
	mesh.Mesh->bUseAsyncCooking = true;
	return Meshes.Add(mesh);
}
//FName(*FString::FromInt(Meshes.Num()))

int32 UProcHandler::AddBlock(const int32 BlockType, const FCoord Grid, const bool DontInit)
{
	if (Coords.Contains(Grid)) {
		return -1;
	}
	int32 Index = GetMeshIndex(BlockType, Grid);
	if (Index == -1) {
		if (DontInit) {
			return -1;
		}
		else {
			Index = InitSection(BlockType);
		}
	}

	TArray<FVector> VerticesTemp;
	TArray<int32> TrianglesTemp;
	TArray<FVector> NormalsTemp;
	TArray<FVector2D> UVsTemp;
	TArray<FProcMeshTangent> TangentsTemp;

	
	MakeBoxMesh(FVector(50, 50, 50), ConvertGridToCoords(Grid), VerticesTemp, TrianglesTemp, NormalsTemp, UVsTemp, TangentsTemp);


	for (int32 i = 0; i < TrianglesTemp.Num(); i++)
	{
		TrianglesTemp[i] = TrianglesTemp[i] + Meshes[Index].Verts.Num();
	}

	Meshes[Index].Verts.Append(VerticesTemp);
	Meshes[Index].Tris.Append(TrianglesTemp);
	Meshes[Index].Normals.Append(NormalsTemp);
	Meshes[Index].UVs.Append(UVsTemp);
	Meshes[Index].Tangents.Append(TangentsTemp);
	Meshes[Index].Coordinates.AddUnique(Grid);
	Coords.AddUnique(Grid);
	return Index;
}

int32 UProcHandler::RemoveBlock(const int32 Index, const FCoord Grid)
{
	if (Index == -1) return -1;
	if (Grid.X == 0 && Grid.Y == 0 && Grid.Z == 0) return -1;
	if (!Meshes[Index].Coordinates.Contains(Grid)) {
		return -1;
	}

	int32 index = Meshes[Index].Coordinates.Find(Grid);
	for (int i = (index + 1) * 36; i < Meshes[Index].Tris.Num(); i++) {
		Meshes[Index].Tris[i] = Meshes[Index].Tris[i] - 24;
	}

	Meshes[Index].Verts.RemoveAt(index * 24, 24, true);
	Meshes[Index].Tris.RemoveAt(index * 36, 36, true);
	Meshes[Index].UVs.RemoveAt(index * 24, 24, true);
	Meshes[Index].Normals.RemoveAt(index * 24, 24, true);
	Meshes[Index].Tangents.RemoveAt(index * 24, 24, true);
	Meshes[Index].Coordinates.Remove(Grid);
	Coords.Remove(Grid);
	return Meshes[Index].BlockType;
}

int32 UProcHandler::RemoveBlockCoord(const FCoord Grid, int32& Index)
{
	int32 index = FindBlockMesh(Grid);
	Index = index;
	if (index != -1) {
		return RemoveBlock(index, Grid);
	}
	return -1;
}

void UProcHandler::RemoveBlockVec(const FVector Vector)
{
	int32 r = 0;
	RemoveBlockCoord(ConvertCoordsToGrid(Vector), r);
}

int32 UProcHandler::FindBlockMesh(const FCoord coord)
{
	for (int i = 0; i < Meshes.Num(); i++) {
		if (Meshes[i].Coordinates.Contains(coord)) return i;
	}
	return -1;
}

void UProcHandler::Update(const int32 Index)
{
	if (!Meshes.IsValidIndex(Index)) {
		GLog->Log(FString::FromInt(Index));
		return;
	}
	FMeshSection2& mesh = Meshes[Index];
	mesh.Mesh->ClearMeshSection(0);
	mesh.Mesh->CreateMeshSection(0, mesh.Verts, mesh.Tris, mesh.Normals, mesh.UVs, TArray<FColor>(), mesh.Tangents, true);
}

bool UProcHandler::AddManyBlocksAsync(const int32 BlockType, const TArray<FCoord> A, const TArray<FCoord> B, const int32 Num)
{
	if (CanPlace) {
		CanPlace = false;
		int32 number = 0; 
		for (int i = 0; i < A.Num(); i++) {
			int xMin = FMath::Min(A[i].X, B[i].X);
			int xMax = FMath::Max(A[i].X, B[i].X);
			int yMin = FMath::Min(A[i].Y, B[i].Y);
			int yMax = FMath::Max(A[i].Y, B[i].Y);
			int zMin = FMath::Min(A[i].Z, B[i].Z);
			int zMax = FMath::Max(A[i].Z, B[i].Z);
			int x = xMax - xMin + 1;
			int y = yMax - yMin + 1;
			int z = zMax - zMin + 1;
			number += x * y * z;
		}
		int x = number - GetFreeSpace(BlockType);
		if (x >= 0) {
			int amount = x / MeshSize;
			for (int i = 0; i <= amount; i++) {
				InitSection(BlockType);
			}
		}
		(new FAutoDeleteAsyncTask<AddBlocksAsyncTask>(BlockType, A, B, Num, this))->StartBackgroundTask();
	}
	else {
		return false;
	}
	return true;
}

void UProcHandler::RemoveManyBlocksAsync(const TArray<FCoord> A, const TArray<FCoord> B)
{
	CanPlace = false;
	(new FAutoDeleteAsyncTask<RemoveBlocksAsyncTask>(A, B, this))->StartBackgroundTask();
}

FVector UProcHandler::GetCenterOfMassProc()
{
	FVector r = FVector(0);
	for (int i = 0; i < Meshes.Num(); i++) {
		r += GetCenterOfFVectors(Meshes[i].Verts) * Meshes[i].Mass * Meshes[i].Coordinates.Num();
	}
	return r / GetMassProc();
}

int32 UProcHandler::GetMassProc()
{
	int32 r = 0;
	for (int i = 0; i < Meshes.Num(); i++) {
		r += Meshes[i].Mass * Meshes[i].Coordinates.Num();
	}
	if (r == 0) return 1;
	return r;
}

FVector UProcHandler::GetCenterOfFVectors(TArray<FVector> vecs)
{
	FVector r = FVector(0);
	for (int i = 0; i < vecs.Num(); i++) {
		r += vecs[i];
	}
	return r / vecs.Num();
}

TArray<FCoord> UProcHandler::GetNeighbors(const FCoord coord, const TArray<FCoord> coords)
{
	TArray<FCoord> r;

	FCoord temp = coord + FCoord(1, 0, 0);
	if (coords.Contains(temp)) r.Add(temp);

	temp = coord + FCoord(-1, 0, 0);
	if (coords.Contains(temp)) r.Add(temp);

	temp = coord + FCoord(0, 1, 0);
	if (coords.Contains(temp)) r.Add(temp);

	temp = coord + FCoord(0, -1, 0);
	if (coords.Contains(temp)) r.Add(temp);

	temp = coord + FCoord(0, 0, 1);
	if (coords.Contains(temp)) r.Add(temp);

	temp = coord + FCoord(0, 0, -1);
	if (coords.Contains(temp)) r.Add(temp);

	return r;
}

TArray<FCoordSet> UProcHandler::BreakCoordinatesIntoGroups(TArray<FCoord> arr)
{
	TArray<FCoordSet> r;
	while (arr.Num() > 0) {
		TArray<FCoord> group;
		group.Add(arr[0]);
		arr.RemoveAt(0);
for (int i = 0; i < group.Num(); i++) {
	TArray<FCoord> Neighbors = GetNeighbors(group[i], arr);
	for (int k = 0; k < Neighbors.Num(); k++) {
		group.AddUnique(Neighbors[k]);
		arr.Remove(Neighbors[k]);
	}
}
r.Add(FCoordSet(group));
	}
	return r;
}

float UProcHandler::GetReactorPower()
{
	float r = 0;
	TArray<FCoordSet> CoordSets = BreakCoordinatesIntoGroups(GetCoordsOfBlockType(3));
	if (CoordSets.Num() == 0) {
		return 0;
	}
	for (int i = 0; i < CoordSets.Num(); i++) {
		float distance = 0;
		FCoord coord = GetCenterOfCoordinates(CoordSets[i].Coordinates);
		for (int k = 0; k < CoordSets[i].Coordinates.Num(); k++) {
			distance += GetCoordinateDistance(coord, CoordSets[i].Coordinates[k]);
		}
		distance /= CoordSets[i].Coordinates.Num();
		r += pow(CoordSets[i].Coordinates.Num(), 1.618) / (pow(distance, 2) + 1);
	}

	return (r / 100.0) * 6.66667;
}

float UProcHandler::GetPowerCapacity()
{
	float r = 0;
	TArray<FCoordSet> CoordSets = BreakCoordinatesIntoGroups(GetCoordsOfBlockType(4));
	if (CoordSets.Num() == 0) {
		return 0;
	}
	for (int i = 0; i < CoordSets.Num(); i++) {
		int SA = 0;
		for (int k = 0; k < CoordSets[i].Coordinates.Num(); k++) {
			SA += 6 - GetNeighbors(CoordSets[i].Coordinates[k], CoordSets[i].Coordinates).Num();
		}
		r += pow(SA, 0.5) * pow(CoordSets[i].Coordinates.Num(), 1.2);
	}
	return (r / 5.0) * 6.66667;
}

TArray<FCoord> UProcHandler::GetCrates()
{
	TArray<FCoord> r = GetCoordsOfBlockType(11);
	return r;
}

TArray<FCoord> UProcHandler::GetSelectiveCrates()
{
	TArray<FCoord> r = GetCoordsOfBlockType(17);
	return r;
}

TArray<FCoord> UProcHandler::GetShopReceivers()
{
	TArray<FCoord> r = GetCoordsOfBlockType(20);
	return r;
}

TArray<FCoord> UProcHandler::GetShopSellers()
{
	TArray<FCoord> r = GetCoordsOfBlockType(21);
	return r;
}

TArray<FCoord> UProcHandler::GetShopBlocks()
{
	TArray<FCoord> r = GetCoordsOfBlockType(22);
	return r;
}

TArray<FCoord> UProcHandler::GetFurnaces()
{
	TArray<FCoord> r = GetCoordsOfBlockType(7);
	return r;
}

TArray<FCoord> UProcHandler::GetRefineries()
{
	TArray<FCoord> r = GetCoordsOfBlockType(15);
	return r;
}

TArray<FCoord> UProcHandler::GetRefineriesTier2()
{
	TArray<FCoord> r = GetCoordsOfBlockType(16);
	return r;
}

TArray<FCoord> UProcHandler::GetManufacturingPlants()
{
	TArray<FCoord> r = GetCoordsOfBlockType(9);
	return r;
}

TArray<FCoord> UProcHandler::GetAutoCrafters()
{
	TArray<FCoord> r = GetCoordsOfBlockType(18);
	return r;
}

TArray<FCoord> UProcHandler::GetAllInventories()
{
	TArray<FCoord> r;
	r.Append(GetCrates());
	r.Append(GetSelectiveCrates());
	r.Append(GetFurnaces());
	r.Append(GetRefineries());
	r.Append(GetRefineriesTier2());
	r.Append(GetManufacturingPlants());
	r.Append(GetAutoCrafters());
	r.Append(GetDisruptors());
	r.Append(GetShopSellers());
	r.Append(GetShopReceivers());
	r.Append(GetGravitonPulseBlocks());
	return r;
}

TArray<FCoord> UProcHandler::GetLights()
{
	TArray<FCoord> r = GetCoordsOfBlockType(19);
	return r;
}

TArray<FCoord> UProcHandler::GetDisruptors()
{
	TArray<FCoord> r = GetCoordsOfBlockType(23);
	return r;
}

TArray<FCoord> UProcHandler::GetGravitonPulseBlocks()
{
	TArray<FCoord> r = GetCoordsOfBlockType(24);
	return r;
}

TArray<FCoord> UProcHandler::GetExtractors()
{
	TArray<FCoord> r = GetCoordsOfBlockType(12);
	return r;
}

TArray<FCoord> UProcHandler::GetInjectors()
{
	TArray<FCoord> r = GetCoordsOfBlockType(13);
	return r;
}

TArray<FCoord> UProcHandler::GetTransporters()
{
	TArray<FCoord> r = GetCoordsOfBlockType(14);
	return r;
}

TArray<FCoordSet> UProcHandler::GetTransportSystems()
{
	TArray<FCoord> r = GetExtractors();
	r.Append(GetInjectors());
	r.Append(GetTransporters());
	return BreakCoordinatesIntoGroups(r);
}

void UProcHandler::GetTransportInventories(TArray<FCoordSet>& Extract, TArray<FCoordSet>& Inject)
{
	const TArray<FCoordSet> Systems = GetTransportSystems();
	const TArray<FCoord> Extractors = GetExtractors();
	const TArray<FCoord> Injectors = GetInjectors();
	const TArray<FCoord> Transporters = GetTransporters();
	const TArray<FCoord> Inventories = GetAllInventories();
	for (int i = 0; i < Systems.Num(); i++) {
		Extract.Add(FCoordSet(TArray<FCoord>()));
		Inject.Add(FCoordSet(TArray<FCoord>()));
		TArray<FCoord> CurrentExtractors;
		TArray<FCoord> CurrentInjectors;
		for (int j = 0; j < Systems[i].Coordinates.Num(); j++) {
			if (Extractors.Contains(Systems[i].Coordinates[j])) {
				CurrentExtractors.AddUnique(Systems[i].Coordinates[j]);
			}
			else if (Injectors.Contains(Systems[i].Coordinates[j])) {
				CurrentInjectors.AddUnique(Systems[i].Coordinates[j]);
			}
		}
		for (int j = 0; j < CurrentExtractors.Num(); j++) {
			FCoord c;

			c = FCoord(0, 0, 1);
			if (Inventories.Contains(CurrentExtractors[j] + c)) {
				Extract[i].Coordinates.AddUnique(CurrentExtractors[j] + c);
			}
			c = FCoord(0, 0, -1);
			if (Inventories.Contains(CurrentExtractors[j] + c)) {
				Extract[i].Coordinates.AddUnique(CurrentExtractors[j] + c);
			}
			c = FCoord(0, 1, 0);
			if (Inventories.Contains(CurrentExtractors[j] + c)) {
				Extract[i].Coordinates.AddUnique(CurrentExtractors[j] + c);
			}
			c = FCoord(0, -1, 0);
			if (Inventories.Contains(CurrentExtractors[j] + c)) {
				Extract[i].Coordinates.AddUnique(CurrentExtractors[j] + c);
			}
			c = FCoord(1, 0, 0);
			if (Inventories.Contains(CurrentExtractors[j] + c)) {
				Extract[i].Coordinates.AddUnique(CurrentExtractors[j] + c);
			}
			c = FCoord(-1, 0, 0);
			if (Inventories.Contains(CurrentExtractors[j] + c)) {
				Extract[i].Coordinates.AddUnique(CurrentExtractors[j] + c);
			}
		}

		for (int j = 0; j < CurrentInjectors.Num(); j++) {
			FCoord c;

			c = FCoord(0, 0, 1);
			if (Inventories.Contains(CurrentInjectors[j] + c)) {
				Inject[i].Coordinates.AddUnique(CurrentInjectors[j] + c);
			}
			c = FCoord(0, 0, -1);
			if (Inventories.Contains(CurrentInjectors[j] + c)) {
				Inject[i].Coordinates.AddUnique(CurrentInjectors[j] + c);
			}
			c = FCoord(0, 1, 0);
			if (Inventories.Contains(CurrentInjectors[j] + c)) {
				Inject[i].Coordinates.AddUnique(CurrentInjectors[j] + c);
			}
			c = FCoord(0, -1, 0);
			if (Inventories.Contains(CurrentInjectors[j] + c)) {
				Inject[i].Coordinates.AddUnique(CurrentInjectors[j] + c);
			}
			c = FCoord(1, 0, 0);
			if (Inventories.Contains(CurrentInjectors[j] + c)) {
				Inject[i].Coordinates.AddUnique(CurrentInjectors[j] + c);
			}
			c = FCoord(-1, 0, 0);
			if (Inventories.Contains(CurrentInjectors[j] + c)) {
				Inject[i].Coordinates.AddUnique(CurrentInjectors[j] + c);
			}
		}
	}
}

void UProcHandler::GetThrusterStats(float & Thrust, float & PowerDrain)
{
	const int32 num = GetCoordsOfBlockType(6).Num();
	if (num == 0) {
		PowerDrain = 0;
		Thrust = 0;
	}
	else {
		Thrust = num * 96000;
		PowerDrain = pow(num, 0.5);
	}
}

void UProcHandler::GetCannonStats(TArray<FCannonStructC>& cannons)
{
	TArray<FCoordSet> CoordSets = BreakCoordinatesIntoGroups(GetCoordsOfBlockType(5));
	if (CoordSets.Num() == 0) {
		return;
	}
	else {
		for (int i = 0; i < CoordSets.Num(); i++) {
			float r = 0;
			const FCoord coord = GetFrontCenterOfCoordinates(CoordSets[i].Coordinates);
			const int j = CoordSets[i].Coordinates.Num();
			for (int k = 0; k < j; k++) {
				r += GetCannonDistance(coord, CoordSets[i].Coordinates[k]);
			}
			r /= pow(j, 0.5);

			float Damage = r;
			float FireRate = 1.0 / (log10(j + 1));
			cannons.Add(FCannonStructC(ConvertGridToCoords(coord), Damage, FireRate));
		}
	}
}

void UProcHandler::GetMiningStats(TArray<FMiningStruct>& Miners)
{
	TArray<FCoordSet> CoordSets = BreakCoordinatesIntoGroups(GetCoordsOfBlockType(10));
	if (CoordSets.Num() == 0) {
		return;
	}
	else {
		for (int i = 0; i < CoordSets.Num(); i++) {
			float Radius = FMath::Min(pow(CoordSets[i].Coordinates.Num(), 1.0f / 2.0f) * 1000 + 650, 7500.0);
			float Damage = (double)CoordSets[i].Coordinates.Num() / (double)(CoordSets[i].Coordinates.Num() + 35);
			float RechargeTime = 10.0 / (log10(CoordSets[i].Coordinates.Num() + 1));
			FVector Vec = ConvertGridToCoords(GetFrontCenterOfCoordinates(CoordSets[i].Coordinates));
			Miners.Add(FMiningStruct(Vec, Damage, Radius, RechargeTime, CoordSets[i].Coordinates));
		}
	}
}

void UProcHandler::TakeDamage(FVector impact, const float damage)
{
	impact /= 100.0;
	const int32 x = FMath::RoundToInt(impact.X);
	const int32 y = FMath::RoundToInt(impact.Y);
	const int32 z = FMath::RoundToInt(impact.Z - 0.5);
	const FCoord coord = FCoord(x, y, z);
	const int32 index = GetMeshIndexCoord(coord);
	if (index == -1) return;
	const int32 toughness = Meshes[index].Toughness;
	if (damage >= toughness) {
		RemoveBlock(index, coord);
		Update(index);
	}
}

void UProcHandler::GetExtent(FVector& extent, FVector& Origin)
{
	TArray<FCoord> AllCoords;
	for (int i = 0; i < Meshes.Num(); i++) {
		AllCoords.Append(Meshes[i].Coordinates);
	}
	float Xmin = 0;
	float Ymin = 0;
	float Zmin = 0;
	float Xmax = 0;
	float Ymax = 0;
	float Zmax = 0;
	for (int i = 0; i < AllCoords.Num(); i++) {
		const FCoord coord = AllCoords[i];
		if (coord.X < Xmin) Xmin = coord.X;
		if (coord.Y < Ymin) Ymin = coord.Y;
		if (coord.Z < Zmin) Zmin = coord.Z;
		if (coord.X > Xmax) Xmax = coord.X;
		if (coord.Y > Ymax) Ymax = coord.Y;
		if (coord.Z > Zmax) Zmax = coord.Z;
	}
	Origin = FVector((Xmin + Xmax) / 2,(Ymin + Ymax) / 2,(Zmin + Zmax) / 2) * 100;
	extent = FVector(Xmax - Xmin, Ymax - Ymin, Zmax - Zmin) * 100;
}

void UProcHandler::Save(TArray<FProcHandlerSaveStruct>& SaveStructs)
{
	for (int i = 0; i < Meshes.Num(); i++) {
		SaveStructs.Add(FProcHandlerSaveStruct(Meshes[i].Coordinates, Meshes[i].BlockType));
	}
}

void UProcHandler::Load(TArray<FProcHandlerSaveStruct> Structs)
{
	CanPlace = false;
	for (int i = 0; i < Structs.Num(); i++) {
		InitSection(Structs[i].BlockType);
	}
	(new FAutoDeleteAsyncTask<LoadAsyncTask>(Structs, this))->StartBackgroundTask();
}

FVector UProcHandler::ConvertGridToCoords(const FCoord Grid)
{
	return FVector(Grid.X * 100.f, Grid.Y * 100.f, Grid.Z  * 100.f + 50.f);
}

FCoord UProcHandler::ConvertCoordsToGrid(const FVector Coord)
{
	return FCoord(FMath::RoundToInt(Coord.X / 100.f), FMath::RoundToInt(Coord.Y / 100.f), FMath::RoundToInt((Coord.Z - 50) / 100.f));
}

int32 UProcHandler::GetMeshIndex(const int32 BlockType, const FCoord Grid)
{
	for (int i = 0; i < Meshes.Num(); i++) {
		if (Meshes[i].BlockType == BlockType && Meshes[i].Coordinates.Num() < MeshSize) {
			return i;
		}
	}
	return -1;
}

int32 UProcHandler::GetFreeSpace(const int32 BlockType)
{
	int32 r = 0;
	for (int i = 0; i < Meshes.Num(); i++) {
		if (Meshes[i].BlockType == BlockType) {
			int32 x = MeshSize - Meshes[i].Coordinates.Num();
			r += x > 0 ? x : 0;
		}
	}
	return r;
}

float UProcHandler::GetCoordinateDistance(const FCoord A, const FCoord B)
{
	FCoord C = FCoord(A.X - B.X, A.Y - B.Y, A.Z - B.Z);
	return pow(C.X * C.X + C.Y * C.Y + C.Z * C.Z, 0.5);
}

FCoord UProcHandler::GetCenterOfCoordinates(const TArray<FCoord> arr)
{
	FVector vec = FVector(0, 0, 0);
	for (int i = 0; i < arr.Num(); i++) {
		float x = arr[i].X;
		float y = arr[i].Y;
		float z = arr[i].Z;
		vec += FVector(x, y, z);
	}
	if (arr.Num() == 0) return FCoord(0, 0, 0);
	vec /= arr.Num();
	return FCoord(FMath::RoundToInt(vec.X), FMath::RoundToInt(vec.Y), FMath::RoundToInt(vec.Z));
}

TArray<FCoord> UProcHandler::GetCoordsOfBlockType(const int32 BlockType)
{
	TArray<FCoord> cooords;
	for (int i = 0; i < Meshes.Num(); i++) {
		if (Meshes[i].BlockType == BlockType) {
			cooords.Append(Meshes[i].Coordinates);
		}
	}
 	return cooords;
}

FCoord UProcHandler::GetFrontCenterOfCoordinates(const TArray<FCoord> coordinates)
{
	FCoord r = FCoord(-1000000, 1000000, 1000000);
	for (int i = 0; i < coordinates.Num(); i++) {
		const FCoord coord = coordinates[i];
		if (coord.X > r.X) {
			r = coord;
		}
	}
	for (int i = 0; i < coordinates.Num(); i++) {
		const FCoord coord = coordinates[i];
		if (coord.X == r.X && abs(coord.Y) <= abs(r.Y) && abs(coord.Z) <= abs(r.Z)) {
			r = coord;
		}
	}
	return r;
}

float UProcHandler::GetCannonDistance(const FCoord A, const FCoord B)
{
	float r = 0;
	r = A.X - B.X;
	r -= pow(abs(A.Y - B.Y) + abs(A.Z - B.Z), 2);
	return r;
}

int32 UProcHandler::GetMeshIndexCoord(const FCoord coord)
{
	for (int i = 0; i < Meshes.Num(); i++) {
		if (Meshes[i].Coordinates.Contains(coord)) {
			return i;
		}
	}
	return -1;
}
