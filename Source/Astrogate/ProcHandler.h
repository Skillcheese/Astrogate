// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "MyProceduralMeshComponent.h"
#include "Components/SceneComponent.h"
#include "ProcHandler.generated.h"

USTRUCT(Blueprintable)
struct FMeshSection2 {

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		UProceduralMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		int32 BlockType;

	FMeshSection2() {
		
	}

	FMeshSection2(int32 blockType, int32 toughness, int32 mass) {
		BlockType = blockType;
		Toughness = toughness;
		Mass = mass;
	}
};

USTRUCT(Blueprintable)
struct FMiningStruct {

	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		FVector FireLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		float FireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		float RechargeTimeRemaining;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FCoord> Coords;

	FMiningStruct() {

	}

	FMiningStruct(FVector FireLocation, float Damage, float Radius, float FireRate, TArray<FCoord> Coords) {
		this->FireLocation = FireLocation;
		this->Damage = Damage;
		this->Radius = Radius;
		this->FireRate = FireRate;
		this->RechargeTimeRemaining = FireRate;
		this->Coords = Coords;
	}
};

USTRUCT(Blueprintable)
struct FProcHandlerSaveStruct {

	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		TArray<FCoord> Coordinates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coordinate")
		int32 BlockType;

	FProcHandlerSaveStruct() {
		BlockType = -1;
	}

	FProcHandlerSaveStruct(TArray<FCoord> Coordinates, int32 BlockType) {
		this->Coordinates = Coordinates;
		this->BlockType = BlockType;
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASTROGATE_API UProcHandler : public USceneComponent
{
	GENERATED_BODY()

public:	
	UProcHandler();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components|ProcHandler")
		int32 MeshSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components|ProcHandler")
		int32 NumBlocks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components|ProcHandler")
		TArray<FCoord> Coords;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components|ProcHandler")
		TArray<UMaterialInterface*> Materials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components|ProcHandler")
		bool CanPlace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components|ProcHandler")
		int32 PlacedBlocks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components|ProcHandler")
		TArray<int32> ReturnItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components|ProcHandler")
		TArray<int32> MeshesToUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components|ProcHandler")
		TArray<int32> MeshesToUpdateDamage;

	TArray<FMeshSection2> Meshes;

	int32 InitSection(int32 BlockType);

	static FVector ConvertGridToCoords(const FCoord Grid);

	static FCoord ConvertCoordsToGrid(const FVector Coord);

	int32 FindBlockMesh(const FCoord coord);

	int32 GetMeshIndex(const int32 BlockType, const FCoord Grid);

	int32 GetFreeSpace(const int32 BlockType);

	static float GetCoordinateDistance(const FCoord A, const FCoord B);

	static FCoord GetCenterOfCoordinates(const TArray<FCoord> arr);

	TArray<FCoord> GetCoordsOfBlockType(const int32 BlockType);

	static FCoord GetFrontCenterOfCoordinates(const TArray<FCoord> coordinates);

	static float GetCannonDistance(const FCoord A, const FCoord B);
	
	int32 GetMeshIndexCoord(const FCoord coord);

	TArray<FCoordSet> GetTransportSystems();

	TArray<FCoord> GetExtractors();

	TArray<FCoord> GetInjectors();

	TArray<FCoord> GetTransporters();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		int32 AddBlock(const int32 BlockType, const FCoord Grid, const bool DontInit);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		int32 RemoveBlock(const int32 Index, const FCoord Grid);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		int32 RemoveBlockCoord(const FCoord Grid, int32& Index);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void RemoveBlockVec(const FVector Vector);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		static void MakeBoxMesh(FVector BoxRadius, FVector Offset, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		static void MakePipeStraight(FVector Offset, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		static void ConvertQuadToTrianglesMine(UPARAM(ref) TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void Update(const int32 Index);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void UpdateDamage();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		bool AddManyBlocksAsync(const int32 BlockType, const TArray<FCoord> A, const TArray<FCoord> B, const int32 Num);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void RemoveManyBlocksAsync(const TArray<FCoord> A, const TArray<FCoord> B);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		FVector GetCenterOfMassProc();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		int32 GetMassProc();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		FVector GetCenterOfFVectors(TArray<FVector> vecs);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetNeighbors(const FCoord coord, const TArray<FCoord> coordinates);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoordSet> BreakCoordinatesIntoGroups(TArray<FCoord> arr);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		float GetReactorPower();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		float GetPowerCapacity();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetCrates();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetSelectiveCrates();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetShopReceivers();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetShopSellers();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetShopBlocks();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetFurnaces();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetRefineries();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetRefineriesTier2();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetManufacturingPlants();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetAutoCrafters();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetDisruptors();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetGravitonPulseBlocks();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetAllInventories();

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		TArray<FCoord> GetLights();


	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void GetTransportInventories(TArray<FCoordSet>& Extract, TArray<FCoordSet>& Inject);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void GetThrusterStats(float& Thrust, float& PowerDrain);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void GetCannonStats(TArray<FCannonStructC>& cannons);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void GetMiningStats(TArray<FMiningStruct>& Miners);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void TakeDamage(FVector impact, const float damage);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void GetExtent(FVector& extent, FVector& Origin);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void Save(TArray<FProcHandlerSaveStruct>& SaveStructs);

	UFUNCTION(BlueprintCallable, Category = "Components|ProcHandler")
		void Load(TArray<FProcHandlerSaveStruct> Structs);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};



class AddBlocksAsyncTask : public FNonAbandonableTask
{
	int32 BlockType;
	UProcHandler* Comp;
	TArray<FCoord> A;
	TArray<FCoord> B;
	int32 Num;

public:
	AddBlocksAsyncTask(int32 BlockType, TArray<FCoord> A, TArray<FCoord> B, int32 Num, UProcHandler* Comp)
	{
		this->BlockType = BlockType;
		this->A = A;
		this->B = B;
		this->Num = Num;
		this->Comp = Comp;
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(AddBlocksAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	void DoWork()
	{
		TArray<FCoord> arr;
		bool a = true;
		for (int i = 0; i < A.Num(); i++) {

			int xMin = FMath::Min(A[i].X, B[i].X);
			int xMax = FMath::Max(A[i].X, B[i].X);
			int yMin = FMath::Min(A[i].Y, B[i].Y);
			int yMax = FMath::Max(A[i].Y, B[i].Y);
			int zMin = FMath::Min(A[i].Z, B[i].Z);
			int zMax = FMath::Max(A[i].Z, B[i].Z);

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
		TArray<int32> r;
		for (int i = 0; i < arr.Num(); i++) {
			r.AddUnique(Comp->AddBlock(BlockType, arr[i], true));
		}
		Comp->PlacedBlocks = arr.Num();
		r.Remove(-1);
		Comp->MeshesToUpdate = r;
		Comp->CanPlace = true;
	}
};




class RemoveBlocksAsyncTask : public FNonAbandonableTask
{
	UProcHandler* Comp;
	TArray<FCoord> A;
	TArray<FCoord> B;

public:
	RemoveBlocksAsyncTask(TArray<FCoord> A, TArray<FCoord> B, UProcHandler* Comp)
	{
		this->A = A;
		this->B = B;
		this->Comp = Comp;
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(RemoveBlocksAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	void DoWork()
	{
		TArray<FCoord> arr;
		for (int i = 0; i < A.Num(); i++) {

			int xMin = FMath::Min(A[i].X, B[i].X);
			int xMax = FMath::Max(A[i].X, B[i].X);
			int yMin = FMath::Min(A[i].Y, B[i].Y);
			int yMax = FMath::Max(A[i].Y, B[i].Y);
			int zMin = FMath::Min(A[i].Z, B[i].Z);
			int zMax = FMath::Max(A[i].Z, B[i].Z);

			for (int x = xMin; x <= xMax; x++) {
				for (int y = yMin; y <= yMax; y++) {
					for (int z = zMin; z <= zMax; z++) {
						FCoord coord = FCoord(x, y, z);
						if (coord == FCoord(0, 0, 0)) continue;
						if (Comp->Coords.Contains(coord)) {
							arr.AddUnique(coord);
						}
					}
				}
			}
		}
		TArray<int32> b;
		TArray<int32> r;
		for (int i = 0; i < Comp->NumBlocks; i++) {
			b.Add(0);
		}
		for (int i = 0; i < arr.Num(); i++) {
			int32 f = 0;
			int32& x = f;
			int32 q = (Comp->RemoveBlockCoord(arr[i], x));
			r.AddUnique(x);
			if (q < 10 && q >= 0) {
				b[q] += 1;
			}
		}
		Comp->MeshesToUpdate = r;
		Comp->ReturnItems = b;
		Comp->CanPlace = true;
	}
};




class LoadAsyncTask : public FNonAbandonableTask
{
	TArray<FProcHandlerSaveStruct> Structs;
	UProcHandler* Comp;

public:
	LoadAsyncTask(TArray<FProcHandlerSaveStruct> Structs, UProcHandler* Comp)
	{
		this->Structs = Structs;
		this->Comp = Comp;
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(LoadAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	void DoWork()
	{
		TArray<int32> r;
		for (int i = 0; i < Structs.Num(); i++) {
			for (int j = 0; j < Structs[i].Coordinates.Num(); j++) {
				r.AddUnique(Comp->AddBlock(Structs[i].BlockType, Structs[i].Coordinates[j], true));
			}
		}
		Comp->MeshesToUpdate = r;
		Comp->CanPlace = true;
	}
};