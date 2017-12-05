// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FProcHandlerSaveStruct;
struct FVector;
struct FMiningStruct;
struct FCannonStructC;
struct FCoordSet;
struct FCoord;
struct FVector2D;
struct FProcMeshTangent;
#ifdef ASTROGATE_ProcHandler_generated_h
#error "ProcHandler.generated.h already included, missing '#pragma once' in ProcHandler.h"
#endif
#define ASTROGATE_ProcHandler_generated_h

#define Astrogate_Source_Astrogate_ProcHandler_h_97_GENERATED_BODY \
	friend ASTROGATE_API class UScriptStruct* Z_Construct_UScriptStruct_FProcHandlerSaveStruct(); \
	ASTROGATE_API static class UScriptStruct* StaticStruct();


#define Astrogate_Source_Astrogate_ProcHandler_h_60_GENERATED_BODY \
	friend ASTROGATE_API class UScriptStruct* Z_Construct_UScriptStruct_FMiningStruct(); \
	ASTROGATE_API static class UScriptStruct* StaticStruct();


#define Astrogate_Source_Astrogate_ProcHandler_h_14_GENERATED_BODY \
	friend ASTROGATE_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshSection2(); \
	ASTROGATE_API static class UScriptStruct* StaticStruct();


#define Astrogate_Source_Astrogate_ProcHandler_h_118_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoad) \
	{ \
		P_GET_TARRAY(FProcHandlerSaveStruct,Z_Param_Structs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Load(Z_Param_Structs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSave) \
	{ \
		P_GET_TARRAY_REF(FProcHandlerSaveStruct,Z_Param_Out_SaveStructs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Save(Z_Param_Out_SaveStructs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtent) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_extent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetExtent(Z_Param_Out_extent,Z_Param_Out_Origin); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execGetMiningStats) \
	{ \
		P_GET_TARRAY_REF(FMiningStruct,Z_Param_Out_Miners); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetMiningStats(Z_Param_Out_Miners); \
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
	DECLARE_FUNCTION(execGetTransportInventories) \
	{ \
		P_GET_TARRAY_REF(FCoordSet,Z_Param_Out_Extract); \
		P_GET_TARRAY_REF(FCoordSet,Z_Param_Out_Inject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetTransportInventories(Z_Param_Out_Extract,Z_Param_Out_Inject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLights) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetLights(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllInventories) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetAllInventories(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisruptors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetDisruptors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAutoCrafters) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetAutoCrafters(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManufacturingPlants) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetManufacturingPlants(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRefineriesTier2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetRefineriesTier2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRefineries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetRefineries(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFurnaces) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetFurnaces(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShopBlocks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetShopBlocks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShopSellers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetShopSellers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShopReceivers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetShopReceivers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectiveCrates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetSelectiveCrates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCrates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetCrates(); \
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
	DECLARE_FUNCTION(execGetReactorPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetReactorPower(); \
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
	DECLARE_FUNCTION(execGetNeighbors) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_coord); \
		P_GET_TARRAY(FCoord,Z_Param_coordinates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetNeighbors(Z_Param_coord,Z_Param_coordinates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterOfFVectors) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_vecs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetCenterOfFVectors(Z_Param_vecs); \
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
	DECLARE_FUNCTION(execRemoveManyBlocksAsync) \
	{ \
		P_GET_TARRAY(FCoord,Z_Param_A); \
		P_GET_TARRAY(FCoord,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveManyBlocksAsync(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddManyBlocksAsync) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BlockType); \
		P_GET_TARRAY(FCoord,Z_Param_A); \
		P_GET_TARRAY(FCoord,Z_Param_B); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AddManyBlocksAsync(Z_Param_BlockType,Z_Param_A,Z_Param_B,Z_Param_Num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Update(Z_Param_Index); \
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
		UProcHandler::ConvertQuadToTrianglesMine(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePipeStraight) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcHandler::MakePipeStraight(Z_Param_Offset,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
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
		UProcHandler::MakeBoxMesh(Z_Param_BoxRadius,Z_Param_Offset,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlockVec) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveBlockVec(Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlockCoord) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->RemoveBlockCoord(Z_Param_Grid,Z_Param_Out_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlock) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->RemoveBlock(Z_Param_Index,Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBlock) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BlockType); \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_GET_UBOOL(Z_Param_DontInit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->AddBlock(Z_Param_BlockType,Z_Param_Grid,Z_Param_DontInit); \
		P_NATIVE_END; \
	}


#define Astrogate_Source_Astrogate_ProcHandler_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoad) \
	{ \
		P_GET_TARRAY(FProcHandlerSaveStruct,Z_Param_Structs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Load(Z_Param_Structs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSave) \
	{ \
		P_GET_TARRAY_REF(FProcHandlerSaveStruct,Z_Param_Out_SaveStructs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Save(Z_Param_Out_SaveStructs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtent) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_extent); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetExtent(Z_Param_Out_extent,Z_Param_Out_Origin); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execGetMiningStats) \
	{ \
		P_GET_TARRAY_REF(FMiningStruct,Z_Param_Out_Miners); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetMiningStats(Z_Param_Out_Miners); \
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
	DECLARE_FUNCTION(execGetTransportInventories) \
	{ \
		P_GET_TARRAY_REF(FCoordSet,Z_Param_Out_Extract); \
		P_GET_TARRAY_REF(FCoordSet,Z_Param_Out_Inject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetTransportInventories(Z_Param_Out_Extract,Z_Param_Out_Inject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLights) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetLights(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllInventories) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetAllInventories(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisruptors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetDisruptors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAutoCrafters) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetAutoCrafters(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetManufacturingPlants) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetManufacturingPlants(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRefineriesTier2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetRefineriesTier2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRefineries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetRefineries(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFurnaces) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetFurnaces(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShopBlocks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetShopBlocks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShopSellers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetShopSellers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShopReceivers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetShopReceivers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectiveCrates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetSelectiveCrates(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCrates) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetCrates(); \
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
	DECLARE_FUNCTION(execGetReactorPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetReactorPower(); \
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
	DECLARE_FUNCTION(execGetNeighbors) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_coord); \
		P_GET_TARRAY(FCoord,Z_Param_coordinates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FCoord>*)Z_Param__Result=this->GetNeighbors(Z_Param_coord,Z_Param_coordinates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenterOfFVectors) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_vecs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetCenterOfFVectors(Z_Param_vecs); \
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
	DECLARE_FUNCTION(execRemoveManyBlocksAsync) \
	{ \
		P_GET_TARRAY(FCoord,Z_Param_A); \
		P_GET_TARRAY(FCoord,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveManyBlocksAsync(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddManyBlocksAsync) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BlockType); \
		P_GET_TARRAY(FCoord,Z_Param_A); \
		P_GET_TARRAY(FCoord,Z_Param_B); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AddManyBlocksAsync(Z_Param_BlockType,Z_Param_A,Z_Param_B,Z_Param_Num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Update(Z_Param_Index); \
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
		UProcHandler::ConvertQuadToTrianglesMine(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePipeStraight) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Offset); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UProcHandler::MakePipeStraight(Z_Param_Offset,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
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
		UProcHandler::MakeBoxMesh(Z_Param_BoxRadius,Z_Param_Offset,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlockVec) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveBlockVec(Z_Param_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlockCoord) \
	{ \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->RemoveBlockCoord(Z_Param_Grid,Z_Param_Out_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBlock) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->RemoveBlock(Z_Param_Index,Z_Param_Grid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBlock) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BlockType); \
		P_GET_STRUCT(FCoord,Z_Param_Grid); \
		P_GET_UBOOL(Z_Param_DontInit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->AddBlock(Z_Param_BlockType,Z_Param_Grid,Z_Param_DontInit); \
		P_NATIVE_END; \
	}


#define Astrogate_Source_Astrogate_ProcHandler_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProcHandler(); \
	friend ASTROGATE_API class UClass* Z_Construct_UClass_UProcHandler(); \
public: \
	DECLARE_CLASS(UProcHandler, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Astrogate"), NO_API) \
	DECLARE_SERIALIZER(UProcHandler) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Astrogate_Source_Astrogate_ProcHandler_h_118_INCLASS \
private: \
	static void StaticRegisterNativesUProcHandler(); \
	friend ASTROGATE_API class UClass* Z_Construct_UClass_UProcHandler(); \
public: \
	DECLARE_CLASS(UProcHandler, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Astrogate"), NO_API) \
	DECLARE_SERIALIZER(UProcHandler) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Astrogate_Source_Astrogate_ProcHandler_h_118_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProcHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProcHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProcHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProcHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProcHandler(UProcHandler&&); \
	NO_API UProcHandler(const UProcHandler&); \
public:


#define Astrogate_Source_Astrogate_ProcHandler_h_118_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProcHandler(UProcHandler&&); \
	NO_API UProcHandler(const UProcHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProcHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProcHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProcHandler)


#define Astrogate_Source_Astrogate_ProcHandler_h_118_PRIVATE_PROPERTY_OFFSET
#define Astrogate_Source_Astrogate_ProcHandler_h_115_PROLOG
#define Astrogate_Source_Astrogate_ProcHandler_h_118_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astrogate_Source_Astrogate_ProcHandler_h_118_PRIVATE_PROPERTY_OFFSET \
	Astrogate_Source_Astrogate_ProcHandler_h_118_RPC_WRAPPERS \
	Astrogate_Source_Astrogate_ProcHandler_h_118_INCLASS \
	Astrogate_Source_Astrogate_ProcHandler_h_118_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Astrogate_Source_Astrogate_ProcHandler_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astrogate_Source_Astrogate_ProcHandler_h_118_PRIVATE_PROPERTY_OFFSET \
	Astrogate_Source_Astrogate_ProcHandler_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	Astrogate_Source_Astrogate_ProcHandler_h_118_INCLASS_NO_PURE_DECLS \
	Astrogate_Source_Astrogate_ProcHandler_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Astrogate_Source_Astrogate_ProcHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
