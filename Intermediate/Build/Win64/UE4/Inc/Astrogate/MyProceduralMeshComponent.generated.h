// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FCannonStructC;
struct FCoord;
struct FVector2D;
struct FProcMeshTangent;
struct FCoordSet;
class UMaterialInterface;
#ifdef ASTROGATE_MyProceduralMeshComponent_generated_h
#error "MyProceduralMeshComponent.generated.h already included, missing '#pragma once' in MyProceduralMeshComponent.h"
#endif
#define ASTROGATE_MyProceduralMeshComponent_generated_h

#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_122_GENERATED_BODY \
	friend ASTROGATE_API class UScriptStruct* Z_Construct_UScriptStruct_FCannonStructC(); \
	ASTROGATE_API static class UScriptStruct* StaticStruct();


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_105_GENERATED_BODY \
	friend ASTROGATE_API class UScriptStruct* Z_Construct_UScriptStruct_FCoordSet(); \
	ASTROGATE_API static class UScriptStruct* StaticStruct();


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_66_GENERATED_BODY \
	friend ASTROGATE_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshSection(); \
	ASTROGATE_API static class UScriptStruct* StaticStruct();


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_12_GENERATED_BODY \
	friend ASTROGATE_API class UScriptStruct* Z_Construct_UScriptStruct_FCoord(); \
	ASTROGATE_API static class UScriptStruct* StaticStruct();


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_impact); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TakeDamage(Z_Param_impact,Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCannonStats) \
	{ \
		P_GET_TARRAY_REF(FCannonStructC,Z_Param_Out_cannons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCannonStats(Z_Param_Out_cannons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThrusterStats) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Thrust); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PowerDrain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetThrusterStats(Z_Param_Out_Thrust,Z_Param_Out_PowerDrain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTaskIsComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTaskIsComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBlocksInBoundsAsync) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_TARRAY(FCoord,Z_Param_A); \
		P_GET_TARRAY(FCoord,Z_Param_B); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AddBlocksInBoundsAsync(Z_Param_ID,Z_Param_A,Z_Param_B,Z_Param_Num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoxsAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_TARRAY(FCoord,Z_Param_Grid); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VerticesTemp); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_TrianglesTemp); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_NormalsTemp); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVsTemp); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_TangentsTemp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyProceduralMeshComponent::GetBoxsAt(Z_Param_ID,Z_Param_Grid,Z_Param_Out_VerticesTemp,Z_Param_Out_TrianglesTemp,Z_Param_Out_NormalsTemp,Z_Param_Out_UVsTemp,Z_Param_Out_TangentsTemp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCannonDistance) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_A); \
		P_GET_STRUCT(FCoord,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMyProceduralMeshComponent::GetCannonDistance(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterFrontOfCoordinates) \
	{ \
		P_GET_TARRAY(FCoord,Z_Param_coordinates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCoord*)Z_Param__Result=this->GetCenterFrontOfCoordinates(Z_Param_coordinates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnerOfCoord) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Coord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetOwnerOfCoord(Z_Param_Coord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMax) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMyProceduralMeshComponent::Max(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMin) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMyProceduralMeshComponent::Min(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOccupiedCoords) \
	{ \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_GET_UBOOL(Z_Param_Occupied); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetOccupiedCoords(Z_Param_arr,Z_Param_Occupied); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoordinateDistance) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_A); \
		P_GET_STRUCT(FCoord,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMyProceduralMeshComponent::GetCoordinateDistance(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterOfCoordinates) \
	{ \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCoord*)Z_Param__Result=UMyProceduralMeshComponent::GetCenterOfCoordinates(Z_Param_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertCoordsToGrid) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Coord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCoord*)Z_Param__Result=UMyProceduralMeshComponent::ConvertCoordsToGrid(Z_Param_Coord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertGridToCoords) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMyProceduralMeshComponent::ConvertGridToCoords(Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNeighbors) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Coord); \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetNeighbors(Z_Param_Coord,Z_Param_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCoordPlus) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Coord); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCoord*)Z_Param__Result=UMyProceduralMeshComponent::CoordPlus(Z_Param_Coord,Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBlocksInBounds) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_STRUCT(FCoord,Z_Param_A); \
		P_GET_STRUCT(FCoord,Z_Param_B); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->AddBlocksInBounds(Z_Param_ID,Z_Param_A,Z_Param_B,Z_Param_Num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlocksInBounds) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_A); \
		P_GET_STRUCT(FCoord,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->RemoveBlocksInBounds(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakCoordinatesIntoGroups) \
	{ \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoordSet>*)Z_Param__Result=this->BreakCoordinatesIntoGroups(Z_Param_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReactorPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetReactorPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerCapacity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPowerCapacity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterials) \
	{ \
		P_GET_TARRAY(UMaterialInterface*,Z_Param_Materials); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaterials(Z_Param_Materials); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMassProc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetMassProc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterOfMassProc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetCenterOfMassProc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBoxs) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddBoxs(Z_Param_ID,Z_Param_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoords) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetCoords(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlocks) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveBlocks(Z_Param_ID,Z_Param_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlockUnknown) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->RemoveBlockUnknown(Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlock) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveBlock(Z_Param_ID,Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Update(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBox) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddBox(Z_Param_ID,Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertQuadToTrianglesMine) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert0); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert2); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyProceduralMeshComponent::ConvertQuadToTrianglesMine(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBoxMesh) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_BoxRadius); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyProceduralMeshComponent::MakeBoxMesh(Z_Param_BoxRadius,Z_Param_Offset,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitMesh(); \
		P_NATIVE_END; \
	}


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_impact); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TakeDamage(Z_Param_impact,Z_Param_damage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCannonStats) \
	{ \
		P_GET_TARRAY_REF(FCannonStructC,Z_Param_Out_cannons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCannonStats(Z_Param_Out_cannons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThrusterStats) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Thrust); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_PowerDrain); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetThrusterStats(Z_Param_Out_Thrust,Z_Param_Out_PowerDrain); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTaskIsComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTaskIsComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBlocksInBoundsAsync) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_TARRAY(FCoord,Z_Param_A); \
		P_GET_TARRAY(FCoord,Z_Param_B); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AddBlocksInBoundsAsync(Z_Param_ID,Z_Param_A,Z_Param_B,Z_Param_Num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoxsAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_TARRAY(FCoord,Z_Param_Grid); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VerticesTemp); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_TrianglesTemp); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_NormalsTemp); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVsTemp); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_TangentsTemp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyProceduralMeshComponent::GetBoxsAt(Z_Param_ID,Z_Param_Grid,Z_Param_Out_VerticesTemp,Z_Param_Out_TrianglesTemp,Z_Param_Out_NormalsTemp,Z_Param_Out_UVsTemp,Z_Param_Out_TangentsTemp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCannonDistance) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_A); \
		P_GET_STRUCT(FCoord,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMyProceduralMeshComponent::GetCannonDistance(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterFrontOfCoordinates) \
	{ \
		P_GET_TARRAY(FCoord,Z_Param_coordinates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCoord*)Z_Param__Result=this->GetCenterFrontOfCoordinates(Z_Param_coordinates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnerOfCoord) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Coord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetOwnerOfCoord(Z_Param_Coord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMax) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMyProceduralMeshComponent::Max(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMin) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_A); \
		P_GET_PROPERTY(UIntProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMyProceduralMeshComponent::Min(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOccupiedCoords) \
	{ \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_GET_UBOOL(Z_Param_Occupied); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetOccupiedCoords(Z_Param_arr,Z_Param_Occupied); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoordinateDistance) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_A); \
		P_GET_STRUCT(FCoord,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMyProceduralMeshComponent::GetCoordinateDistance(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterOfCoordinates) \
	{ \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCoord*)Z_Param__Result=UMyProceduralMeshComponent::GetCenterOfCoordinates(Z_Param_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertCoordsToGrid) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Coord); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCoord*)Z_Param__Result=UMyProceduralMeshComponent::ConvertCoordsToGrid(Z_Param_Coord); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertGridToCoords) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMyProceduralMeshComponent::ConvertGridToCoords(Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNeighbors) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Coord); \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetNeighbors(Z_Param_Coord,Z_Param_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCoordPlus) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Coord); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Z); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCoord*)Z_Param__Result=UMyProceduralMeshComponent::CoordPlus(Z_Param_Coord,Z_Param_X,Z_Param_Y,Z_Param_Z); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBlocksInBounds) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_STRUCT(FCoord,Z_Param_A); \
		P_GET_STRUCT(FCoord,Z_Param_B); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->AddBlocksInBounds(Z_Param_ID,Z_Param_A,Z_Param_B,Z_Param_Num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlocksInBounds) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_A); \
		P_GET_STRUCT(FCoord,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->RemoveBlocksInBounds(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakCoordinatesIntoGroups) \
	{ \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoordSet>*)Z_Param__Result=this->BreakCoordinatesIntoGroups(Z_Param_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReactorPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetReactorPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPowerCapacity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPowerCapacity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaterials) \
	{ \
		P_GET_TARRAY(UMaterialInterface*,Z_Param_Materials); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMaterials(Z_Param_Materials); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMassProc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetMassProc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterOfMassProc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetCenterOfMassProc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBoxs) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddBoxs(Z_Param_ID,Z_Param_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCoords) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetCoords(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlocks) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_TARRAY(FCoord,Z_Param_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveBlocks(Z_Param_ID,Z_Param_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlockUnknown) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->RemoveBlockUnknown(Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlock) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveBlock(Z_Param_ID,Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Update(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBox) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddBox(Z_Param_ID,Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertQuadToTrianglesMine) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert0); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert2); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyProceduralMeshComponent::ConvertQuadToTrianglesMine(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeBoxMesh) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_BoxRadius); \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMyProceduralMeshComponent::MakeBoxMesh(Z_Param_BoxRadius,Z_Param_Offset,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitMesh(); \
		P_NATIVE_END; \
	}


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyProceduralMeshComponent(); \
	friend ASTROGATE_API class UClass* Z_Construct_UClass_UMyProceduralMeshComponent(); \
public: \
	DECLARE_CLASS(UMyProceduralMeshComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Astrogate"), NO_API) \
	DECLARE_SERIALIZER(UMyProceduralMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUMyProceduralMeshComponent(); \
	friend ASTROGATE_API class UClass* Z_Construct_UClass_UMyProceduralMeshComponent(); \
public: \
	DECLARE_CLASS(UMyProceduralMeshComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Astrogate"), NO_API) \
	DECLARE_SERIALIZER(UMyProceduralMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyProceduralMeshComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyProceduralMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyProceduralMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyProceduralMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyProceduralMeshComponent(UMyProceduralMeshComponent&&); \
	NO_API UMyProceduralMeshComponent(const UMyProceduralMeshComponent&); \
public:


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyProceduralMeshComponent(UMyProceduralMeshComponent&&); \
	NO_API UMyProceduralMeshComponent(const UMyProceduralMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyProceduralMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyProceduralMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyProceduralMeshComponent)


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_PRIVATE_PROPERTY_OFFSET
#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_147_PROLOG
#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_PRIVATE_PROPERTY_OFFSET \
	Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_RPC_WRAPPERS \
	Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_INCLASS \
	Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_PRIVATE_PROPERTY_OFFSET \
	Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_INCLASS_NO_PURE_DECLS \
	Astrogate_Source_Astrogate_MyProceduralMeshComponent_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Astrogate_Source_Astrogate_MyProceduralMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
