// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProceduralMeshComponent.h"
#include "ProceduralMeshComponent.h"

void UMyProceduralMeshComponent::MakeBoxMesh(FVector BoxRadius, FVector Offset, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents)
{
	// Generate verts
	FVector BoxVerts[8];
	BoxVerts[0] = FVector(Offset.X - BoxRadius.X, BoxRadius.Y + Offset.Y, BoxRadius.Z + Offset.Z);
	BoxVerts[1] = FVector(BoxRadius.X + Offset.X, BoxRadius.Y + Offset.Y, BoxRadius.Z + Offset.Z);
	BoxVerts[2] = FVector(BoxRadius.X + Offset.X, Offset.Y - BoxRadius.Y, BoxRadius.Z + Offset.Z);
	BoxVerts[3] = FVector(Offset.X - BoxRadius.X, Offset.Y - BoxRadius.Y, BoxRadius.Z + Offset.Z);

	BoxVerts[4] = FVector(Offset.X - BoxRadius.X, BoxRadius.Y + Offset.Y, Offset.Z - BoxRadius.Z);
	BoxVerts[5] = FVector(BoxRadius.X + Offset.X, BoxRadius.Y + Offset.Y, Offset.Z - BoxRadius.Z);
	BoxVerts[6] = FVector(BoxRadius.X + Offset.X, Offset.Y - BoxRadius.Y, Offset.Z - BoxRadius.Z);
	BoxVerts[7] = FVector(Offset.X - BoxRadius.X, Offset.Y - BoxRadius.Y, Offset.Z - BoxRadius.Z);

	// Generate triangles (from quads)
	Triangles.Reset();

	const int32 NumVerts = 24; // 6 faces x 4 verts per face

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

void UMyProceduralMeshComponent::ConvertQuadToTrianglesMine(UPARAM(ref)TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3)
{
	Triangles.Add(Vert0);
	Triangles.Add(Vert1);
	Triangles.Add(Vert3);

	Triangles.Add(Vert1);
	Triangles.Add(Vert2);
	Triangles.Add(Vert3);
}

void UMyProceduralMeshComponent::AddBox(const int32 ID, const FCoord Grid)
{
	FMeshSection& mesh = Sections[ID];
	if (Coords.Contains(Grid)) {
		return;
	}
	TArray<FVector> VerticesTemp;
	TArray<int32> TrianglesTemp;
	TArray<FVector> NormalsTemp;
	TArray<FVector2D> UVsTemp;
	TArray<FProcMeshTangent> TangentsTemp;

	MakeBoxMesh(FVector(50, 50, 50), ConvertGridToCoords(Grid),VerticesTemp, TrianglesTemp, NormalsTemp, UVsTemp, TangentsTemp);

	for (int32 i = 0; i < TrianglesTemp.Num(); i++)
	{
		TrianglesTemp[i] = TrianglesTemp[i] + mesh.Verts.Num();
	}

	mesh.Verts.Append(VerticesTemp);
	mesh.Tris.Append(TrianglesTemp);
	mesh.Normals.Append(NormalsTemp);
	mesh.UVs.Append(UVsTemp);
	mesh.Tangents.Append(TangentsTemp);
	mesh.Coordinates.AddUnique(Grid);
	Coords.AddUnique(Grid);
	Verts.Append(VerticesTemp);
}

void UMyProceduralMeshComponent::Update(int32 ID)
{
	if (!Sections.IsValidIndex(ID)) {
		GLog->Log("INVALID INDEX");
		return;
	}
	FMeshSection mesh = Sections[ID];
	ClearMeshSection(ID);
	CreateMeshSection(ID, mesh.Verts, mesh.Tris, mesh.Normals, mesh.UVs, TArray<FColor>(), mesh.Tangents, true);
}

void UMyProceduralMeshComponent::RemoveBlock(int32 ID, const FCoord Grid)
{
	if (ID == -1) return;
	if (Grid.X == 0 && Grid.Y == 0 && Grid.Z == 0) return;
	if (Grid == FCoord(0, 0, 0)) return;
	FMeshSection& mesh = Sections[ID];
	if (!mesh.Coordinates.Contains(Grid)) {
		return;
	}
	int32 index = mesh.Coordinates.Find(Grid);
	for (int i = (index + 1) * 36; i < mesh.Tris.Num(); i++) {
		mesh.Tris[i] = mesh.Tris[i] - 24;
	}

	int32 Index = Coords.Find(Grid);
	Verts.RemoveAt(Index * 24, 24, true);

	mesh.Verts.RemoveAt(index * 24, 24, true);
	mesh.Tris.RemoveAt(index * 36, 36, true);
	mesh.UVs.RemoveAt(index * 24, 24, true);
	mesh.Normals.RemoveAt(index * 24, 24, true);
	mesh.Tangents.RemoveAt(index * 24, 24, true);
	mesh.Coordinates.Remove(Grid);
	Coords.Remove(Grid);
}

void UMyProceduralMeshComponent::RemoveBlocks(int32 ID, const TArray<FCoord> arr)
{
	for (int i = 0; i < arr.Num(); i++) {
		RemoveBlock(ID, arr[i]);
	}
}

TArray<FCoord> UMyProceduralMeshComponent::GetCoords()
{
	return Coords;
}

void UMyProceduralMeshComponent::AddBoxs(int32 ID, const TArray<FCoord> arr)
{
	for (int i = 0; i < arr.Num(); i++) {
		AddBox(ID, arr[i]);
	}
}

FVector UMyProceduralMeshComponent::ConvertGridToCoords(const FCoord Grid)
{
	return FVector(Grid.X * 100.f, Grid.Y * 100.f, Grid.Z  * 100.f + 50);
}

FCoord UMyProceduralMeshComponent::ConvertCoordsToGrid(FVector Coord)
{
	return FCoord(FMath::RoundToInt(Coord.X / 100.f), FMath::RoundToInt(Coord.Y / 100.f), FMath::RoundToInt((Coord.Z - 50) / 100.f));
}

FCoord UMyProceduralMeshComponent::GetCenterOfCoordinates(const TArray<FCoord> arr)
{
	FVector vec = FVector(0,0,0);
	for (int i = 0; i < arr.Num(); i++) {
		float x = arr[i].X;
		float y = arr[i].Y;
		float z = arr[i].Z;
		vec += FVector(x,y,z);
	}
	if (arr.Num() == 0) return FCoord(0, 0, 0);
	vec /= arr.Num();
	return FCoord(FMath::RoundToInt(vec.X), FMath::RoundToInt(vec.Y), FMath::RoundToInt(vec.Z));
}

float UMyProceduralMeshComponent::GetCoordinateDistance(const FCoord A, const FCoord B)
{
	FCoord C = FCoord(A.X - B.X, A.Y - B.Y, A.Z - B.Z);
	return pow(C.X * C.X + C.Y * C.Y + C.Z * C.Z, 0.5);
}

FVector UMyProceduralMeshComponent::GetCenterOfMassProc()
{
	FVector r = FVector(0,0,0);
	for (int i = 0; i < Sections.Num(); i++) {
		FCoord coord = GetCenterOfCoordinates(Sections[i].Coordinates);
		r += FVector(coord.X, coord.Y, coord.Z) * Sections[i].Mass;
	}
	return (r * 100.0) / GetMassProc();
}

int32 UMyProceduralMeshComponent::GetMassProc()
{
	int32 r = 0;
	for (int i = 0; i < Sections.Num(); i++) {
		r += Sections[i].Mass * Sections[i].Coordinates.Num();
	}
	return r;
}

void UMyProceduralMeshComponent::SetMaterials(TArray<UMaterialInterface*> Materials)
{
	for (int i = 0; i < Materials.Num(); i++) {
		SetMaterial(i, Materials[i]);
	}
}

TArray<FCoordSet> UMyProceduralMeshComponent::BreakCoordinatesIntoGroups(TArray<FCoord> arr)
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

FCoord UMyProceduralMeshComponent::CoordPlus(const FCoord Coord, int32 X, int32 Y, int32 Z)
{
	return FCoord(Coord.X + X, Coord.Y + Y, Coord.Z + Z);
}

TArray<FCoord> UMyProceduralMeshComponent::GetNeighbors(const FCoord Coord, const TArray<FCoord> arr)
{
	TArray<FCoord> r;
	FCoord temp;
	temp = CoordPlus(Coord, 1, 0, 0);
	if (arr.Contains(temp)) r.Add(temp);

	temp = CoordPlus(Coord, -1, 0, 0);
	if (arr.Contains(temp)) r.Add(temp);

	temp = CoordPlus(Coord, 0, 1, 0);
	if (arr.Contains(temp)) r.Add(temp);

	temp = CoordPlus(Coord, 0, -1, 0);
	if (arr.Contains(temp)) r.Add(temp);

	temp = CoordPlus(Coord, 0, 0, 1);
	if (arr.Contains(temp)) r.Add(temp);

	temp = CoordPlus(Coord, 0, 0, -1);
	if (arr.Contains(temp)) r.Add(temp);

	return r;
}

TArray<FCoord> UMyProceduralMeshComponent::GetOccupiedCoords(TArray<FCoord> arr, bool Occupied)
{
	TArray<FCoord> r;
	for (int i = 0; i < arr.Num(); i++) {
		if (Coords.Contains(arr[i]) == Occupied)	r.AddUnique(arr[i]);
	}
	return r;
}

TArray<int32> UMyProceduralMeshComponent::RemoveBlocksInBounds(FCoord A, FCoord B)
{
	TArray<FCoord> arr;
	TArray<int32> r;
	TArray<int32> modified;
	r.SetNumUninitialized(Sections.Num());
	const TArray<FCoord> coords = Coords;
	int XMin = Min(A.X, B.X);
	int XMax = Max(A.X, B.X);
	int YMin = Min(A.Y, B.Y);
	int YMax = Max(A.Y, B.Y);
	int ZMin = Min(A.Z, B.Z);
	int ZMax = Max(A.Z, B.Z);
	for (int x = XMin; x <= XMax; x++) {
		for (int y = YMin; y <= YMax; y++) {
			for (int z = ZMin; z <= ZMax; z++) {
				const FCoord coord = FCoord(x, y, z);
				if (coords.Contains(coord)) {
					arr.AddUnique(coord);
				}
			}
		}
	}
	for (int i = 0; i < arr.Num(); i++) {
		int k = GetOwnerOfCoord(arr[i]);
		if (k >= 0) {
			if (arr[i] == FCoord(0, 0, 0)) continue;
			RemoveBlock(k, arr[i]);
			r[k] += 1;
			modified.AddUnique(k);
		}
	}
	for (int i = 0; i < modified.Num(); i++) {
		Update(modified[i]);
	}
	return r;
}

int32 UMyProceduralMeshComponent::Min(int32 A, int32 B)
{
	return A < B ? A : B;
}

int32 UMyProceduralMeshComponent::Max(int32 A, int32 B)
{
	return A > B ? A : B;
}

int32 UMyProceduralMeshComponent::GetOwnerOfCoord(const FCoord Coord)
{
	for (int i = 0; i < Sections.Num(); i++) {
		if (Sections[i].Coordinates.Contains(Coord)) return i;
	}
	return -1;
}

int32 UMyProceduralMeshComponent::AddBlocksInBounds(int32 ID, FCoord A, FCoord B, int32 Num)
{
	TArray<FCoord> arr;
	bool a = true;
	for (int x = Min(A.X, B.X); x <= Max(A.X, B.X) && a; x++) {
		for (int y = Min(A.Y, B.Y); y <= Max(A.Y, B.Y) && a; y++) {
			for (int z = Min(A.Z, B.Z); z <= Max(A.Z, B.Z) && a; z++) {
				FCoord coord = FCoord(x, y, z);
				if (coord == FCoord(0, 0, 0)) continue;
				if (!Coords.Contains(coord)) {
					arr.AddUnique(coord);
					if (arr.Num() >= Num) a = false;
				}
			}
		}
	}
	for (int i = 0; i < arr.Num(); i++) {
		AddBox(ID, arr[i]);
	}
	Update(ID);
	return arr.Num();
}

int32 UMyProceduralMeshComponent::RemoveBlockUnknown(const FCoord Grid)
{
	int32 x = GetOwnerOfCoord(Grid);
	if (x == -1) return -1;
	if (Grid == FCoord(0, 0, 0)) return -1;
	RemoveBlock(x, Grid);
	return x;
}

void UMyProceduralMeshComponent::GetBoxsAt(int32 ID, const TArray<FCoord> Grid, TArray<FVector>& VerticesTemp, TArray<int32>& TrianglesTemp, TArray<FVector>& NormalsTemp, TArray<FVector2D>& UVsTemp, TArray<FProcMeshTangent>& TangentsTemp)
{
	FVector radius = FVector(50, 50, 50);
	for (int i = 0; i < Grid.Num(); i++) {
		TArray<FVector> VerticesTemp2;
		TArray<int32> TrianglesTemp2;
		TArray<FVector> NormalsTemp2;
		TArray<FVector2D> UVsTemp2;
		TArray<FProcMeshTangent> TangentsTemp2;

		FVector Offset = ConvertGridToCoords(Grid[i]);
		MakeBoxMesh(radius, Offset, VerticesTemp2, TrianglesTemp2, NormalsTemp2, UVsTemp2, TangentsTemp2);
		for (int k = 0; k < TrianglesTemp2.Num(); k++) {
			TrianglesTemp2[k] = TrianglesTemp2[k] + i * 24;
		}
		VerticesTemp.Append(VerticesTemp2);
		TrianglesTemp.Append(TrianglesTemp2);
		NormalsTemp.Append(NormalsTemp2);
		UVsTemp.Append(UVsTemp2);
		TangentsTemp.Append(TangentsTemp2);
		//GLog->Log(FString::FromInt(i));
	}
}

bool UMyProceduralMeshComponent::AddBlocksInBoundsAsync(int32 ID, TArray<FCoord> A, TArray<FCoord> B, int32 Num)
{
	if (RunningTask == true) return false;
	CanPlace = false;
	RunningTask = true;
	TaskFinished = false;
	(new FAutoDeleteAsyncTask<AddBlocksInBoundsAsyncTask>(ID, A, B, Num, this))->StartBackgroundTask();
	return true;
}

void UMyProceduralMeshComponent::AddTaskIsComplete()
{
		TaskFinished = true;
		FMeshSection& mesh = Sections[IDToAdd];
		for (int i = 0; i < TrianglesToAdd.Num(); i++) {
			TrianglesToAdd[i] = TrianglesToAdd[i] + mesh.Verts.Num();
		}
		mesh.Tris.Append(TrianglesToAdd);
		mesh.Verts.Append(VerticesToAdd);
		Verts.Append(VerticesToAdd);
		mesh.Normals.Append(NormalsToAdd);
		mesh.UVs.Append(UVsToAdd);
		mesh.Tangents.Append(TangentsToAdd);
		for (int i = 0; i < CoordsToAdd.Num(); i++) {
			mesh.Coordinates.AddUnique(CoordsToAdd[i]);
			Coords.AddUnique(CoordsToAdd[i]);
		}
		Update(IDToAdd);
		CanPlace = true;
		RunningTask = false;
		//GLog->Log(FString::FromInt(IDToAdd));
}

float UMyProceduralMeshComponent::GetReactorPower()
{
	float r = 0;
	const TArray<FCoord> cooords = Sections[3].Coordinates;
	TArray<FCoordSet> CoordSets = BreakCoordinatesIntoGroups(cooords);

	for (int i = 0; i < CoordSets.Num(); i++) {
		const TArray<FCoord> coords = CoordSets[i].Coordinates;
		float distance = 0;
		FCoord coord = GetCenterOfCoordinates(coords);
		for (int k = 0; k < coords.Num(); k++) {
			distance += GetCoordinateDistance(coord, coords[k]);
		}
		distance /= coords.Num();
		r += pow(coords.Num(), 1.618) / (pow(distance, 2) + 1);
	}

	return (r / 100.0) / 3.6;
}

float UMyProceduralMeshComponent::GetPowerCapacity()
{
	float r = 0;
	const TArray<FCoord> cooords = Sections[4].Coordinates;
	TArray<FCoordSet> CoordSets = BreakCoordinatesIntoGroups(cooords);
	for (int i = 0; i < CoordSets.Num(); i++) {
		const TArray<FCoord> coords = CoordSets[i].Coordinates;
		int SA = 0;
		for (int k = 0; k < coords.Num(); k++) {
			SA += 6 - GetNeighbors(coords[k], coords).Num();
		}
		r += pow(SA, 0.5) * pow(coords.Num(), 0.1);
	}
	return (r / 5.0) / 3.6;
}

void UMyProceduralMeshComponent::GetThrusterStats(float& Thrust, float& PowerDrain)
{
	const TArray<FCoord> cooords = Sections[6].Coordinates;
	Thrust = cooords.Num() * 384000;
	PowerDrain = pow(cooords.Num(), 0.5);
	PowerDrain /= 25;
}

void UMyProceduralMeshComponent::GetCannonStats(TArray<FCannonStructC>& cannons)
{
	const TArray<FCoord> cooords = Sections[5].Coordinates;
	TArray<FCoordSet> CoordSets = BreakCoordinatesIntoGroups(cooords);
	for (int i = 0; i < CoordSets.Num(); i++) {
		float r = 0;
		const TArray<FCoord> coords = CoordSets[i].Coordinates;
		const FCoord coord = GetCenterFrontOfCoordinates(coords);
		const int j = coords.Num();
		for (int k = 0; k < j; k++) {
			r += GetCannonDistance(coord, coords[k]);
		}
		r /= pow(j, 0.5);

		float Damage = r;
		float FireRate = 1.0/(log10(j+1));
		cannons.Add(FCannonStructC(ConvertGridToCoords(coord), Damage, FireRate));
	}
}

FCoord UMyProceduralMeshComponent::GetCenterFrontOfCoordinates(const TArray<FCoord> coordinates)
{
	FCoord r = FCoord(-1000000, 1000000, 1000000);
	for (int i = 0; i < coordinates.Num(); i++) {
		const FCoord coord = coordinates[i];
		if (abs(coord.Y) <= abs(r.Y) && abs(coord.Z) <= abs(r.Z)) {
			r = coord;
		}
	}
	for (int i = 0; i < coordinates.Num(); i++) {
		const FCoord coord = coordinates[i];
		if (coord.X > r.X && coord.Y == r.Y && coord.Z == r.Z) r = coord;
	}
	return r;
}

float UMyProceduralMeshComponent::GetCannonDistance(const FCoord A, const FCoord B)
{
	float r = 0;
	r = A.X - B.X;
	r -= pow(abs(A.Y - B.Y) + abs(A.Z - B.Z), 2);
	return r;
}

void UMyProceduralMeshComponent::InitMesh()
{
	Sections.Add(FMeshSection(100, 7870));//LightArmor 0
	Sections.Add(FMeshSection(100, 7870));//HeavyArmor 1
	Sections.Add(FMeshSection(100, 7870));//ShieldArmor 2
	Sections.Add(FMeshSection(100, 7870));//Reactor 3
	Sections.Add(FMeshSection(100, 7870));//Capacitor 4
	Sections.Add(FMeshSection(100, 7870));//Cannon 5
	Sections.Add(FMeshSection(100, 7870));//Thruster 6
	Sections.Add(FMeshSection(100, 7870));//Tube 7
	Sections.Add(FMeshSection(100, 7870));//Cloak 8
	Sections.Add(FMeshSection(1000, 7870));//ShipCore 9
	AddBox(9, FCoord(0, 0, 0));
	Update(9);
	bUseAsyncCooking = true;
}

void UMyProceduralMeshComponent::TakeDamage(FVector impact, const float damage)
{
	impact /= 100.0;
	const int32 x = FMath::RoundToInt(impact.X);
	const int32 y = FMath::RoundToInt(impact.Y);
	const int32 z = FMath::RoundToInt(impact.Z - 0.5);
	const FCoord coord = FCoord(x, y, z);
	const int32 index = GetOwnerOfCoord(coord);
	if (index == -1) return;
	const int32 toughness = Sections[index].Toughness;
	if (damage >= toughness) {
		RemoveBlock(index, coord);
		Update(index);
	}
}