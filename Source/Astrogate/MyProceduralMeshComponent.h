// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "MyProceduralMeshComponent.generated.h"

USTRUCT(Blueprintable)
struct FCoord
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		int32 X;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		int32 Y;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		int32 Z;

		FCoord() {
			X = 0;
			Y = 0;
			Z = 0;
		}

		FCoord(int32 x, int32 y, int32 z)
		{
			X = x;
			Y = y;
			Z = z;
		}

		bool operator==(const FCoord& Coord) const {
			return this->X == Coord.X && this->Y == Coord.Y && this->Z == Coord.Z;
		}

		FCoord operator+(const FCoord B) const {
			return FCoord(X + B.X, Y + B.Y, Z + B.Z);
		}

		bool operator<(const FCoord B) const {
			if (B.X < X) return true;
			if (B.X > X) return false;
			if (B.Y < Y) return true;
			if (B.Y > Y) return false;
			if (B.Z < Z) return true;
			if (B.Z > Z) return false;
			return false;
		}

		FString FCoord::ToString() const
		{
			return "X: " + FString::FromInt(X) + " Y: " + FString::FromInt(Y) + " Z: " + FString::FromInt(Z);
		}

		friend FORCEINLINE uint32 GetTypeHash(const FCoord & S) {
			return FCrc::MemCrc_DEPRECATED(&S, sizeof(S));
		}
};

USTRUCT(Blueprintable)
struct FMeshSection {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FVector> Verts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<int32> Tris;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FVector2D> UVs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FVector> Normals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FProcMeshTangent> Tangents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FCoord> Coordinates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		int32 Toughness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		int32 Mass;

	FMeshSection() {

	}

	FMeshSection(int32 toughness, int32 mass) {
		Toughness = toughness;
		Mass = mass;
	}
};

USTRUCT(Blueprintable)
struct FCoordSet {

	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FCoord> Coordinates;

	FCoordSet() {

	}
	
	FCoordSet(const TArray<FCoord> coordinates) {
		Coordinates = coordinates;
	}
};

USTRUCT(Blueprintable)
struct FCannonStructC
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		FVector FireLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		float FireRate;

	FCannonStructC() {
		FireLocation = FVector(0,0,0);
		Damage = 0;
		FireRate = 0;
	}

	FCannonStructC(FVector FireLocation, float Damage, float FireRate)
	{
		this->FireLocation = FireLocation;
		this->Damage = Damage;
		this->FireRate = FireRate;
	}
};

UCLASS(ClassGroup = Rendering, meta = (BlueprintSpawnableComponent), Blueprintable)
class ASTROGATE_API UMyProceduralMeshComponent : public UProceduralMeshComponent
{
	GENERATED_BODY()
public:

	UMyProceduralMeshComponent() {
		Sections = TArray<FMeshSection>();
	}
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 BlocksPlaced;

	int32 IDToAdd;
	TArray<FVector> VerticesToAdd;
	TArray<int32> TrianglesToAdd;
	TArray<FVector> NormalsToAdd;
	TArray<FVector2D> UVsToAdd;
	TArray<FProcMeshTangent> TangentsToAdd;
	TArray<FCoord> CoordsToAdd;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FMeshSection> Sections;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FCoord> Coords;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool CanPlace;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool RunningTask;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool TaskFinished;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FVector> Verts;
	
	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
	void InitMesh();

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
	static void MakeBoxMesh(FVector BoxRadius, FVector Offset, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
	static void ConvertQuadToTrianglesMine(UPARAM(ref) TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
	
	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
	void AddBox(const int32 ID, const FCoord Grid);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
	void Update(int32 ID);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
	void RemoveBlock(int32 ID, const FCoord Grid);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
	int32 RemoveBlockUnknown(const FCoord Grid);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
	void RemoveBlocks(int32 ID, const TArray<FCoord> arr);
	
	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
	TArray<FCoord> GetCoords();

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
	void AddBoxs(int32 ID, const TArray<FCoord> arr);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		FVector GetCenterOfMassProc();

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		int32 GetMassProc();

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		void SetMaterials(TArray<UMaterialInterface*> Materials);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		float GetPowerCapacity();

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		float GetReactorPower();

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		TArray<FCoordSet> BreakCoordinatesIntoGroups(TArray<FCoord> arr);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		TArray<int32> RemoveBlocksInBounds(FCoord A, FCoord B);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		int32 AddBlocksInBounds(int32 ID, FCoord A, FCoord B, int32 Num);

	UFUNCTION()
		static FCoord CoordPlus(const FCoord Coord, int32 X, int32 Y, int32 Z);

	UFUNCTION()
		TArray<FCoord> GetNeighbors(const FCoord Coord, const TArray<FCoord> arr);

	UFUNCTION()
	static FVector ConvertGridToCoords(FCoord Grid);

	UFUNCTION()
	static FCoord ConvertCoordsToGrid(FVector Coord);

	UFUNCTION()
	static FCoord GetCenterOfCoordinates(const TArray<FCoord> arr);

	UFUNCTION()
	static float GetCoordinateDistance(const FCoord A, const FCoord B);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		TArray<FCoord> GetOccupiedCoords(TArray<FCoord> arr, bool Occupied);

	UFUNCTION()
		static int32 Min(int32 A, int32 B);

	UFUNCTION()
		static int32 Max(int32 A, int32 B);

	UFUNCTION()
		int32 GetOwnerOfCoord(const FCoord Coord);

	UFUNCTION()
		FCoord GetCenterFrontOfCoordinates(const TArray<FCoord> coordinates);

	UFUNCTION()
		static float GetCannonDistance(const FCoord A, const FCoord B);

	UFUNCTION()
		static void GetBoxsAt(int32 ID, const TArray<FCoord> Grid, TArray<FVector>& VerticesTemp, TArray<int32>& TrianglesTemp, TArray<FVector>& NormalsTemp,TArray<FVector2D>& UVsTemp, TArray<FProcMeshTangent>& TangentsTemp);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		bool AddBlocksInBoundsAsync(int32 ID, TArray<FCoord> A, TArray<FCoord> B, int32 Num);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		void AddTaskIsComplete();

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		void GetThrusterStats(float& Thrust, float& PowerDrain);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		void GetCannonStats(TArray<FCannonStructC>& cannons);

	UFUNCTION(BlueprintCallable, Category = "Components|MyProceduralMesh")
		void TakeDamage(FVector impact, const float damage);

};

class AddBlocksInBoundsAsyncTask : public FNonAbandonableTask
{
	int32 ID;
	UMyProceduralMeshComponent* Comp;
	TArray<FCoord> A;
	TArray<FCoord> B;
	int32 Num;

public:
	AddBlocksInBoundsAsyncTask(int32 ID, TArray<FCoord> A, TArray<FCoord> B, int32 Num, UMyProceduralMeshComponent* Comp)
	{
		this->ID = ID;
		this->A = A;
		this->B = B;
		this->Num = Num;
		this->Comp = Comp;
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(AddBlocksInBoundsAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	void DoWork()
	{
		TArray<FCoord> arr;
		bool a = true;
		for (int i = 0; i < A.Num(); i++) {

			int xMin = UMyProceduralMeshComponent::Min(A[i].X, B[i].X);
			int xMax = UMyProceduralMeshComponent::Max(A[i].X, B[i].X);
			int yMin = UMyProceduralMeshComponent::Min(A[i].Y, B[i].Y);
			int yMax = UMyProceduralMeshComponent::Max(A[i].Y, B[i].Y);
			int zMin = UMyProceduralMeshComponent::Min(A[i].Z, B[i].Z);
			int zMax = UMyProceduralMeshComponent::Max(A[i].Z, B[i].Z);

			for (int x = xMin; x <= xMax && a; x++) {
				for (int y = yMin; y <= yMax && a; y++) {
					for (int z = zMin; z <= zMax && a; z++) {
						FCoord coord = FCoord(x, y, z);
						if (coord == FCoord(0, 0, 0)) continue;
						if (!Comp->Coords.Contains(coord)) {
							arr.AddUnique(coord);
							if (arr.Num() >= Num) a = false;
						}
					}
				}
			}
		}

		TArray<FVector> VerticesTemp;
		TArray<int32> TrianglesTemp;
		TArray<FVector> NormalsTemp;
		TArray<FVector2D> UVsTemp;
		TArray<FProcMeshTangent> TangentsTemp;

		UMyProceduralMeshComponent::GetBoxsAt(ID, arr, VerticesTemp, TrianglesTemp, NormalsTemp, UVsTemp, TangentsTemp);

		Comp->IDToAdd = ID;
		Comp->VerticesToAdd = VerticesTemp;
		Comp->TrianglesToAdd = TrianglesTemp;
		Comp->NormalsToAdd = NormalsTemp;
		Comp->UVsToAdd = UVsTemp;
		Comp->TangentsToAdd = TangentsTemp;
		Comp->CoordsToAdd = arr;
		Comp->BlocksPlaced = arr.Num();
		Comp->AddBox(0, FCoord(0, 1, 1));
	}
};

//(new FAutoDeleteAsyncTask<AddBlocksInBoundsAsyncTask>(ID, A, B, Num, this))->StartBackgroundTask();