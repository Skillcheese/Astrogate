// Fill out your copyright notice in the Description page of Project Settings.

#include "AsteroidBeltHISM.h"

void UAsteroidBeltHISM::Init()
{
	SpawnAsteroids(SpawnAmount);
}



void UAsteroidBeltHISM::SpawnAsteroids(int32 Num)
{
	FRandomStream Stream = FRandomStream(Seed);
	for (int i = 0; i < Num; i++) {
		float Alpha = float(i) / float(SpawnAmount);
		float X = cos(Alpha * 2 * PI) * (Radius + Stream.FRandRange(0, Width));
		float Y = sin(Alpha * 2 * PI) * (Radius + Stream.FRandRange(0, Width));
		float Z = Stream.FRandRange(-Height / 2.0, Height / 2.0);

		float ScaleX = Stream.FRandRange(ScaleMin, ScaleMax);
		float ScaleY = Stream.FRandRange(ScaleMin, ScaleMax);
		float ScaleZ = Stream.FRandRange(ScaleMin, ScaleMax);

		float RotX = Stream.FRandRange(0, 360);
		float RotY = Stream.FRandRange(0, 360);
		float RotZ = Stream.FRandRange(0, 360);

		FRotator Rot = FRotator(RotX, RotY, RotZ);
		FVector Loc = FVector(X, Y, Z);
		FVector Scale = FVector(ScaleX, ScaleY, ScaleZ);
		FTransform Transform;
		Transform.SetComponents(Rot.Quaternion(), Loc, Scale);
		AddInstance(Transform);
	}
}