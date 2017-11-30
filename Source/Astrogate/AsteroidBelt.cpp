// Fill out your copyright notice in the Description page of Project Settings.

#include "AsteroidBelt.h"
#include "ConstructorHelpers.h"
#include "KismetProceduralMeshLibrary.h"
#include "ProceduralMeshComponent.h"


AAsteroidBelt::AAsteroidBelt()
{
	PrimaryActorTick.bCanEverTick = false;
	Proc = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = Proc;
	Proc->bUseAsyncCooking = true;
}

void AAsteroidBelt::BeginPlay()
{
	Super::BeginPlay();
	UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(AsteroidMesh, 0, 0, Vertices, Triangles, Normals, UVs, Tangents);
	Proc->CreateMeshSection(0, Vertices, Triangles, Normals, UVs, TArray<FColor>(), Tangents, true);
}
	//UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(AsteroidMesh, 0, AsteroidProc, false);

void AAsteroidBelt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

