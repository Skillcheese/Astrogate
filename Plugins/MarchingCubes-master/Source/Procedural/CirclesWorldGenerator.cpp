// Fill out your copyright notice in the Description page of Project Settings.

#include "CirclesWorldGenerator.h"

UCirclesWorldGenerator::UCirclesWorldGenerator() : Scale(10, 10), MaxValue(1), MinValue(-1)
{

}
//
//float UCirclesWorldGenerator::GetDefaultValue(int X, int Y, int Z)
//{
//	return (FMath::Sin(X / Scale.X) + FMath::Cos(Y / Scale.Y)) + Z > 0 ? MaxValue : MinValue;
//}
//
//FVoxelMaterial UCirclesWorldGenerator::GetDefaultMaterial(int X, int Y, int Z)
//{
//	if (Z >= 1)
//	{
//		return BottomMaterial;
//	}
//	else if (Z >= 0)
//	{
//		return TopMaterial;
//	}
//	else if (Z >= -1)
//	{
//		return MiddleMaterial;
//	}
//	else
//	{
//		return BottomMaterial;
//	}
//}
//
//void UCirclesWorldGenerator::SetVoxelWorld(AVoxelWorld* VoxelWorld)
//{
//
//}
//
