// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProcHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcHandler() {}
// Cross Module References
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FProcHandlerSaveStruct();
	UPackage* Z_Construct_UPackage__Script_Astrogate();
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FCoord();
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FMiningStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSection2();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ASTROGATE_API UClass* Z_Construct_UClass_UProcHandler_NoRegister();
	ASTROGATE_API UClass* Z_Construct_UClass_UProcHandler();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_AddBlock();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_AddManyBlocksAsync();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_BreakCoordinatesIntoGroups();
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FCoordSet();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_ConvertQuadToTrianglesMine();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetAllInventories();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetAutoCrafters();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetCannonStats();
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FCannonStructC();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetCenterOfFVectors();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetCenterOfMassProc();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetCrates();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetDisruptors();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetExtent();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetFurnaces();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetLights();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetManufacturingPlants();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetMassProc();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetMiningStats();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetNeighbors();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetPowerCapacity();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetReactorPower();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetRefineries();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetRefineriesTier2();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetSelectiveCrates();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetShopBlocks();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetShopReceivers();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetShopSellers();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetThrusterStats();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_GetTransportInventories();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_Load();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_MakeBoxMesh();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_MakePipeStraight();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_RemoveBlock();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_RemoveBlockCoord();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_RemoveBlockVec();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_RemoveManyBlocksAsync();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_Save();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_TakeDamage();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UProcHandler_Update();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FProcHandlerSaveStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASTROGATE_API uint32 Get_Z_Construct_UScriptStruct_FProcHandlerSaveStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcHandlerSaveStruct, Z_Construct_UPackage__Script_Astrogate(), TEXT("ProcHandlerSaveStruct"), sizeof(FProcHandlerSaveStruct), Get_Z_Construct_UScriptStruct_FProcHandlerSaveStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProcHandlerSaveStruct(FProcHandlerSaveStruct::StaticStruct, TEXT("/Script/Astrogate"), TEXT("ProcHandlerSaveStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Astrogate_StaticRegisterNativesFProcHandlerSaveStruct
{
	FScriptStruct_Astrogate_StaticRegisterNativesFProcHandlerSaveStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProcHandlerSaveStruct")),new UScriptStruct::TCppStructOps<FProcHandlerSaveStruct>);
	}
} ScriptStruct_Astrogate_StaticRegisterNativesFProcHandlerSaveStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FProcHandlerSaveStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProcHandlerSaveStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Astrogate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProcHandlerSaveStruct"), sizeof(FProcHandlerSaveStruct), Get_Z_Construct_UScriptStruct_FProcHandlerSaveStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcHandlerSaveStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockType_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlockType = { UE4CodeGen_Private::EPropertyClass::Int, "BlockType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProcHandlerSaveStruct, BlockType), METADATA_PARAMS(NewProp_BlockType_MetaData, ARRAY_COUNT(NewProp_BlockType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Coordinates = { UE4CodeGen_Private::EPropertyClass::Array, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProcHandlerSaveStruct, Coordinates), METADATA_PARAMS(NewProp_Coordinates_MetaData, ARRAY_COUNT(NewProp_Coordinates_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinates_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ProcHandlerSaveStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FProcHandlerSaveStruct),
				alignof(FProcHandlerSaveStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProcHandlerSaveStruct_CRC() { return 375938678U; }
class UScriptStruct* FMiningStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASTROGATE_API uint32 Get_Z_Construct_UScriptStruct_FMiningStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiningStruct, Z_Construct_UPackage__Script_Astrogate(), TEXT("MiningStruct"), sizeof(FMiningStruct), Get_Z_Construct_UScriptStruct_FMiningStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiningStruct(FMiningStruct::StaticStruct, TEXT("/Script/Astrogate"), TEXT("MiningStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Astrogate_StaticRegisterNativesFMiningStruct
{
	FScriptStruct_Astrogate_StaticRegisterNativesFMiningStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MiningStruct")),new UScriptStruct::TCppStructOps<FMiningStruct>);
	}
} ScriptStruct_Astrogate_StaticRegisterNativesFMiningStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FMiningStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiningStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Astrogate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiningStruct"), sizeof(FMiningStruct), Get_Z_Construct_UScriptStruct_FMiningStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiningStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coords_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Coords = { UE4CodeGen_Private::EPropertyClass::Array, "Coords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMiningStruct, Coords), METADATA_PARAMS(NewProp_Coords_MetaData, ARRAY_COUNT(NewProp_Coords_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coords_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Coords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RechargeTimeRemaining_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RechargeTimeRemaining = { UE4CodeGen_Private::EPropertyClass::Float, "RechargeTimeRemaining", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMiningStruct, RechargeTimeRemaining), METADATA_PARAMS(NewProp_RechargeTimeRemaining_MetaData, ARRAY_COUNT(NewProp_RechargeTimeRemaining_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate = { UE4CodeGen_Private::EPropertyClass::Float, "FireRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMiningStruct, FireRate), METADATA_PARAMS(NewProp_FireRate_MetaData, ARRAY_COUNT(NewProp_FireRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMiningStruct, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Float, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMiningStruct, Damage), METADATA_PARAMS(NewProp_Damage_MetaData, ARRAY_COUNT(NewProp_Damage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireLocation_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "FireLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMiningStruct, FireLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FireLocation_MetaData, ARRAY_COUNT(NewProp_FireLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coords,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coords_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RechargeTimeRemaining,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireLocation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MiningStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMiningStruct),
				alignof(FMiningStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiningStruct_CRC() { return 694597986U; }
class UScriptStruct* FMeshSection2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASTROGATE_API uint32 Get_Z_Construct_UScriptStruct_FMeshSection2_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSection2, Z_Construct_UPackage__Script_Astrogate(), TEXT("MeshSection2"), sizeof(FMeshSection2), Get_Z_Construct_UScriptStruct_FMeshSection2_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshSection2(FMeshSection2::StaticStruct, TEXT("/Script/Astrogate"), TEXT("MeshSection2"), false, nullptr, nullptr);
static struct FScriptStruct_Astrogate_StaticRegisterNativesFMeshSection2
{
	FScriptStruct_Astrogate_StaticRegisterNativesFMeshSection2()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshSection2")),new UScriptStruct::TCppStructOps<FMeshSection2>);
	}
} ScriptStruct_Astrogate_StaticRegisterNativesFMeshSection2;
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSection2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshSection2_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Astrogate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshSection2"), sizeof(FMeshSection2), Get_Z_Construct_UScriptStruct_FMeshSection2_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSection2>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockType_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlockType = { UE4CodeGen_Private::EPropertyClass::Int, "BlockType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection2, BlockType), METADATA_PARAMS(NewProp_BlockType_MetaData, ARRAY_COUNT(NewProp_BlockType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(FMeshSection2, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mass = { UE4CodeGen_Private::EPropertyClass::Int, "Mass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection2, Mass), METADATA_PARAMS(NewProp_Mass_MetaData, ARRAY_COUNT(NewProp_Mass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Toughness_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Toughness = { UE4CodeGen_Private::EPropertyClass::Int, "Toughness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection2, Toughness), METADATA_PARAMS(NewProp_Toughness_MetaData, ARRAY_COUNT(NewProp_Toughness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Coordinates = { UE4CodeGen_Private::EPropertyClass::Array, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection2, Coordinates), METADATA_PARAMS(NewProp_Coordinates_MetaData, ARRAY_COUNT(NewProp_Coordinates_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection2, Tangents), METADATA_PARAMS(NewProp_Tangents_MetaData, ARRAY_COUNT(NewProp_Tangents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection2, Normals), METADATA_PARAMS(NewProp_Normals_MetaData, ARRAY_COUNT(NewProp_Normals_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection2, UVs), METADATA_PARAMS(NewProp_UVs_MetaData, ARRAY_COUNT(NewProp_UVs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tris_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tris = { UE4CodeGen_Private::EPropertyClass::Array, "Tris", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection2, Tris), METADATA_PARAMS(NewProp_Tris_MetaData, ARRAY_COUNT(NewProp_Tris_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Tris_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Tris", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Verts_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Verts = { UE4CodeGen_Private::EPropertyClass::Array, "Verts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection2, Verts), METADATA_PARAMS(NewProp_Verts_MetaData, ARRAY_COUNT(NewProp_Verts_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Verts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Verts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Toughness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinates_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tris,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tris_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verts_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MeshSection2",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FMeshSection2),
				alignof(FMeshSection2),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshSection2_CRC() { return 993708043U; }
	void UProcHandler::StaticRegisterNativesUProcHandler()
	{
		UClass* Class = UProcHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBlock", (Native)&UProcHandler::execAddBlock },
			{ "AddManyBlocksAsync", (Native)&UProcHandler::execAddManyBlocksAsync },
			{ "BreakCoordinatesIntoGroups", (Native)&UProcHandler::execBreakCoordinatesIntoGroups },
			{ "ConvertQuadToTrianglesMine", (Native)&UProcHandler::execConvertQuadToTrianglesMine },
			{ "GetAllInventories", (Native)&UProcHandler::execGetAllInventories },
			{ "GetAutoCrafters", (Native)&UProcHandler::execGetAutoCrafters },
			{ "GetCannonStats", (Native)&UProcHandler::execGetCannonStats },
			{ "GetCenterOfFVectors", (Native)&UProcHandler::execGetCenterOfFVectors },
			{ "GetCenterOfMassProc", (Native)&UProcHandler::execGetCenterOfMassProc },
			{ "GetCrates", (Native)&UProcHandler::execGetCrates },
			{ "GetDisruptors", (Native)&UProcHandler::execGetDisruptors },
			{ "GetExtent", (Native)&UProcHandler::execGetExtent },
			{ "GetFurnaces", (Native)&UProcHandler::execGetFurnaces },
			{ "GetLights", (Native)&UProcHandler::execGetLights },
			{ "GetManufacturingPlants", (Native)&UProcHandler::execGetManufacturingPlants },
			{ "GetMassProc", (Native)&UProcHandler::execGetMassProc },
			{ "GetMiningStats", (Native)&UProcHandler::execGetMiningStats },
			{ "GetNeighbors", (Native)&UProcHandler::execGetNeighbors },
			{ "GetPowerCapacity", (Native)&UProcHandler::execGetPowerCapacity },
			{ "GetReactorPower", (Native)&UProcHandler::execGetReactorPower },
			{ "GetRefineries", (Native)&UProcHandler::execGetRefineries },
			{ "GetRefineriesTier2", (Native)&UProcHandler::execGetRefineriesTier2 },
			{ "GetSelectiveCrates", (Native)&UProcHandler::execGetSelectiveCrates },
			{ "GetShopBlocks", (Native)&UProcHandler::execGetShopBlocks },
			{ "GetShopReceivers", (Native)&UProcHandler::execGetShopReceivers },
			{ "GetShopSellers", (Native)&UProcHandler::execGetShopSellers },
			{ "GetThrusterStats", (Native)&UProcHandler::execGetThrusterStats },
			{ "GetTransportInventories", (Native)&UProcHandler::execGetTransportInventories },
			{ "Load", (Native)&UProcHandler::execLoad },
			{ "MakeBoxMesh", (Native)&UProcHandler::execMakeBoxMesh },
			{ "MakePipeStraight", (Native)&UProcHandler::execMakePipeStraight },
			{ "RemoveBlock", (Native)&UProcHandler::execRemoveBlock },
			{ "RemoveBlockCoord", (Native)&UProcHandler::execRemoveBlockCoord },
			{ "RemoveBlockVec", (Native)&UProcHandler::execRemoveBlockVec },
			{ "RemoveManyBlocksAsync", (Native)&UProcHandler::execRemoveManyBlocksAsync },
			{ "Save", (Native)&UProcHandler::execSave },
			{ "TakeDamage", (Native)&UProcHandler::execTakeDamage },
			{ "Update", (Native)&UProcHandler::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UProcHandler_AddBlock()
	{
		struct ProcHandler_eventAddBlock_Parms
		{
			int32 BlockType;
			FCoord Grid;
			bool DontInit;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventAddBlock_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DontInit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			auto NewProp_DontInit_SetBit = [](void* Obj){ ((ProcHandler_eventAddBlock_Parms*)Obj)->DontInit = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DontInit = { UE4CodeGen_Private::EPropertyClass::Bool, "DontInit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ProcHandler_eventAddBlock_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DontInit_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DontInit_MetaData, ARRAY_COUNT(NewProp_DontInit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grid = { UE4CodeGen_Private::EPropertyClass::Struct, "Grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventAddBlock_Parms, Grid), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_Grid_MetaData, ARRAY_COUNT(NewProp_Grid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlockType = { UE4CodeGen_Private::EPropertyClass::Int, "BlockType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventAddBlock_Parms, BlockType), METADATA_PARAMS(NewProp_BlockType_MetaData, ARRAY_COUNT(NewProp_BlockType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DontInit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "AddBlock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventAddBlock_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_AddManyBlocksAsync()
	{
		struct ProcHandler_eventAddManyBlocksAsync_Parms
		{
			int32 BlockType;
			TArray<FCoord> A;
			TArray<FCoord> B;
			int32 Num;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ProcHandler_eventAddManyBlocksAsync_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ProcHandler_eventAddManyBlocksAsync_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num = { UE4CodeGen_Private::EPropertyClass::Int, "Num", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventAddManyBlocksAsync_Parms, Num), METADATA_PARAMS(NewProp_Num_MetaData, ARRAY_COUNT(NewProp_Num_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Array, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventAddManyBlocksAsync_Parms, B), METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Array, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventAddManyBlocksAsync_Parms, A), METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlockType = { UE4CodeGen_Private::EPropertyClass::Int, "BlockType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventAddManyBlocksAsync_Parms, BlockType), METADATA_PARAMS(NewProp_BlockType_MetaData, ARRAY_COUNT(NewProp_BlockType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Num,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "AddManyBlocksAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventAddManyBlocksAsync_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_BreakCoordinatesIntoGroups()
	{
		struct ProcHandler_eventBreakCoordinatesIntoGroups_Parms
		{
			TArray<FCoord> arr;
			TArray<FCoordSet> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventBreakCoordinatesIntoGroups_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoordSet, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arr = { UE4CodeGen_Private::EPropertyClass::Array, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventBreakCoordinatesIntoGroups_Parms, arr), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_arr_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "BreakCoordinatesIntoGroups", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventBreakCoordinatesIntoGroups_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_ConvertQuadToTrianglesMine()
	{
		struct ProcHandler_eventConvertQuadToTrianglesMine_Parms
		{
			TArray<int32> Triangles;
			int32 Vert0;
			int32 Vert1;
			int32 Vert2;
			int32 Vert3;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert3 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventConvertQuadToTrianglesMine_Parms, Vert3), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert2 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventConvertQuadToTrianglesMine_Parms, Vert2), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert1 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventConvertQuadToTrianglesMine_Parms, Vert1), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert0 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventConvertQuadToTrianglesMine_Parms, Vert0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventConvertQuadToTrianglesMine_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vert3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vert2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vert1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vert0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "ConvertQuadToTrianglesMine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(ProcHandler_eventConvertQuadToTrianglesMine_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetAllInventories()
	{
		struct ProcHandler_eventGetAllInventories_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetAllInventories_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetAllInventories", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetAllInventories_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetAutoCrafters()
	{
		struct ProcHandler_eventGetAutoCrafters_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetAutoCrafters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetAutoCrafters", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetAutoCrafters_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetCannonStats()
	{
		struct ProcHandler_eventGetCannonStats_Parms
		{
			TArray<FCannonStructC> cannons;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_cannons = { UE4CodeGen_Private::EPropertyClass::Array, "cannons", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetCannonStats_Parms, cannons), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_cannons_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "cannons", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCannonStructC, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cannons,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cannons_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetCannonStats", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ProcHandler_eventGetCannonStats_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetCenterOfFVectors()
	{
		struct ProcHandler_eventGetCenterOfFVectors_Parms
		{
			TArray<FVector> vecs;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetCenterOfFVectors_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vecs = { UE4CodeGen_Private::EPropertyClass::Array, "vecs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetCenterOfFVectors_Parms, vecs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_vecs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "vecs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_vecs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_vecs_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetCenterOfFVectors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ProcHandler_eventGetCenterOfFVectors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetCenterOfMassProc()
	{
		struct ProcHandler_eventGetCenterOfMassProc_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetCenterOfMassProc_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetCenterOfMassProc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ProcHandler_eventGetCenterOfMassProc_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetCrates()
	{
		struct ProcHandler_eventGetCrates_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetCrates_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetCrates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetCrates_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetDisruptors()
	{
		struct ProcHandler_eventGetDisruptors_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetDisruptors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetDisruptors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetDisruptors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetExtent()
	{
		struct ProcHandler_eventGetExtent_Parms
		{
			FVector extent;
			FVector Origin;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetExtent_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_extent = { UE4CodeGen_Private::EPropertyClass::Struct, "extent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetExtent_Parms, extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Origin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_extent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(ProcHandler_eventGetExtent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetFurnaces()
	{
		struct ProcHandler_eventGetFurnaces_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetFurnaces_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetFurnaces", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetFurnaces_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetLights()
	{
		struct ProcHandler_eventGetLights_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetLights_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetLights", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetLights_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetManufacturingPlants()
	{
		struct ProcHandler_eventGetManufacturingPlants_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetManufacturingPlants_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetManufacturingPlants", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetManufacturingPlants_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetMassProc()
	{
		struct ProcHandler_eventGetMassProc_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetMassProc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetMassProc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetMassProc_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetMiningStats()
	{
		struct ProcHandler_eventGetMiningStats_Parms
		{
			TArray<FMiningStruct> Miners;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Miners = { UE4CodeGen_Private::EPropertyClass::Array, "Miners", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetMiningStats_Parms, Miners), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Miners_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Miners", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMiningStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Miners,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Miners_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetMiningStats", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ProcHandler_eventGetMiningStats_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetNeighbors()
	{
		struct ProcHandler_eventGetNeighbors_Parms
		{
			FCoord coord;
			TArray<FCoord> coordinates;
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetNeighbors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coordinates_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_coordinates = { UE4CodeGen_Private::EPropertyClass::Array, "coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetNeighbors_Parms, coordinates), METADATA_PARAMS(NewProp_coordinates_MetaData, ARRAY_COUNT(NewProp_coordinates_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_coordinates_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coord_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_coord = { UE4CodeGen_Private::EPropertyClass::Struct, "coord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetNeighbors_Parms, coord), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_coord_MetaData, ARRAY_COUNT(NewProp_coord_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_coordinates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_coordinates_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_coord,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetNeighbors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetNeighbors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetPowerCapacity()
	{
		struct ProcHandler_eventGetPowerCapacity_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetPowerCapacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetPowerCapacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetPowerCapacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetReactorPower()
	{
		struct ProcHandler_eventGetReactorPower_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetReactorPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetReactorPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetReactorPower_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetRefineries()
	{
		struct ProcHandler_eventGetRefineries_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetRefineries_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetRefineries", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetRefineries_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetRefineriesTier2()
	{
		struct ProcHandler_eventGetRefineriesTier2_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetRefineriesTier2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetRefineriesTier2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetRefineriesTier2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetSelectiveCrates()
	{
		struct ProcHandler_eventGetSelectiveCrates_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetSelectiveCrates_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetSelectiveCrates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetSelectiveCrates_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetShopBlocks()
	{
		struct ProcHandler_eventGetShopBlocks_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetShopBlocks_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetShopBlocks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetShopBlocks_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetShopReceivers()
	{
		struct ProcHandler_eventGetShopReceivers_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetShopReceivers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetShopReceivers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetShopReceivers_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetShopSellers()
	{
		struct ProcHandler_eventGetShopSellers_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetShopSellers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetShopSellers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventGetShopSellers_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetThrusterStats()
	{
		struct ProcHandler_eventGetThrusterStats_Parms
		{
			float Thrust;
			float PowerDrain;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerDrain = { UE4CodeGen_Private::EPropertyClass::Float, "PowerDrain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetThrusterStats_Parms, PowerDrain), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thrust = { UE4CodeGen_Private::EPropertyClass::Float, "Thrust", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetThrusterStats_Parms, Thrust), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerDrain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Thrust,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetThrusterStats", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ProcHandler_eventGetThrusterStats_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_GetTransportInventories()
	{
		struct ProcHandler_eventGetTransportInventories_Parms
		{
			TArray<FCoordSet> Extract;
			TArray<FCoordSet> Inject;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inject = { UE4CodeGen_Private::EPropertyClass::Array, "Inject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetTransportInventories_Parms, Inject), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inject_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Inject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoordSet, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Extract = { UE4CodeGen_Private::EPropertyClass::Array, "Extract", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventGetTransportInventories_Parms, Extract), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extract_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Extract", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoordSet, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inject_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Extract,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Extract_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "GetTransportInventories", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ProcHandler_eventGetTransportInventories_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_Load()
	{
		struct ProcHandler_eventLoad_Parms
		{
			TArray<FProcHandlerSaveStruct> Structs;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Structs = { UE4CodeGen_Private::EPropertyClass::Array, "Structs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventLoad_Parms, Structs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Structs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Structs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcHandlerSaveStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Structs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Structs_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "Load", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventLoad_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_MakeBoxMesh()
	{
		struct ProcHandler_eventMakeBoxMesh_Parms
		{
			FVector BoxRadius;
			FVector Offset;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FProcMeshTangent> Tangents;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakeBoxMesh_Parms, Tangents), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakeBoxMesh_Parms, UVs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakeBoxMesh_Parms, Normals), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakeBoxMesh_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakeBoxMesh_Parms, Vertices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakeBoxMesh_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakeBoxMesh_Parms, BoxRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "MakeBoxMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(ProcHandler_eventMakeBoxMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_MakePipeStraight()
	{
		struct ProcHandler_eventMakePipeStraight_Parms
		{
			FVector Offset;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FProcMeshTangent> Tangents;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakePipeStraight_Parms, Tangents), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakePipeStraight_Parms, UVs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakePipeStraight_Parms, Normals), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakePipeStraight_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakePipeStraight_Parms, Vertices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventMakePipeStraight_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "MakePipeStraight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(ProcHandler_eventMakePipeStraight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_RemoveBlock()
	{
		struct ProcHandler_eventRemoveBlock_Parms
		{
			int32 Index;
			FCoord Grid;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventRemoveBlock_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grid = { UE4CodeGen_Private::EPropertyClass::Struct, "Grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventRemoveBlock_Parms, Grid), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_Grid_MetaData, ARRAY_COUNT(NewProp_Grid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventRemoveBlock_Parms, Index), METADATA_PARAMS(NewProp_Index_MetaData, ARRAY_COUNT(NewProp_Index_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "RemoveBlock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventRemoveBlock_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_RemoveBlockCoord()
	{
		struct ProcHandler_eventRemoveBlockCoord_Parms
		{
			FCoord Grid;
			int32 Index;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventRemoveBlockCoord_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventRemoveBlockCoord_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grid = { UE4CodeGen_Private::EPropertyClass::Struct, "Grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventRemoveBlockCoord_Parms, Grid), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_Grid_MetaData, ARRAY_COUNT(NewProp_Grid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grid,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "RemoveBlockCoord", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ProcHandler_eventRemoveBlockCoord_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_RemoveBlockVec()
	{
		struct ProcHandler_eventRemoveBlockVec_Parms
		{
			FVector Vector;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventRemoveBlockVec_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Vector_MetaData, ARRAY_COUNT(NewProp_Vector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "RemoveBlockVec", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ProcHandler_eventRemoveBlockVec_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_RemoveManyBlocksAsync()
	{
		struct ProcHandler_eventRemoveManyBlocksAsync_Parms
		{
			TArray<FCoord> A;
			TArray<FCoord> B;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Array, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventRemoveManyBlocksAsync_Parms, B), METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Array, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventRemoveManyBlocksAsync_Parms, A), METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "RemoveManyBlocksAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventRemoveManyBlocksAsync_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_Save()
	{
		struct ProcHandler_eventSave_Parms
		{
			TArray<FProcHandlerSaveStruct> SaveStructs;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveStructs = { UE4CodeGen_Private::EPropertyClass::Array, "SaveStructs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventSave_Parms, SaveStructs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaveStructs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SaveStructs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcHandlerSaveStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveStructs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SaveStructs_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "Save", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(ProcHandler_eventSave_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_TakeDamage()
	{
		struct ProcHandler_eventTakeDamage_Parms
		{
			FVector impact;
			float damage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage = { UE4CodeGen_Private::EPropertyClass::Float, "damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventTakeDamage_Parms, damage), METADATA_PARAMS(NewProp_damage_MetaData, ARRAY_COUNT(NewProp_damage_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_impact = { UE4CodeGen_Private::EPropertyClass::Struct, "impact", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventTakeDamage_Parms, impact), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_impact,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "TakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ProcHandler_eventTakeDamage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UProcHandler_Update()
	{
		struct ProcHandler_eventUpdate_Parms
		{
			int32 Index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(ProcHandler_eventUpdate_Parms, Index), METADATA_PARAMS(NewProp_Index_MetaData, ARRAY_COUNT(NewProp_Index_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UProcHandler, "Update", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ProcHandler_eventUpdate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProcHandler_NoRegister()
	{
		return UProcHandler::StaticClass();
	}
	UClass* Z_Construct_UClass_UProcHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UProcHandler_AddBlock, "AddBlock" }, // 1542727216
				{ &Z_Construct_UFunction_UProcHandler_AddManyBlocksAsync, "AddManyBlocksAsync" }, // 2839010085
				{ &Z_Construct_UFunction_UProcHandler_BreakCoordinatesIntoGroups, "BreakCoordinatesIntoGroups" }, // 1431557891
				{ &Z_Construct_UFunction_UProcHandler_ConvertQuadToTrianglesMine, "ConvertQuadToTrianglesMine" }, // 720189374
				{ &Z_Construct_UFunction_UProcHandler_GetAllInventories, "GetAllInventories" }, // 351127307
				{ &Z_Construct_UFunction_UProcHandler_GetAutoCrafters, "GetAutoCrafters" }, // 285703481
				{ &Z_Construct_UFunction_UProcHandler_GetCannonStats, "GetCannonStats" }, // 3388882048
				{ &Z_Construct_UFunction_UProcHandler_GetCenterOfFVectors, "GetCenterOfFVectors" }, // 1091101035
				{ &Z_Construct_UFunction_UProcHandler_GetCenterOfMassProc, "GetCenterOfMassProc" }, // 2379682155
				{ &Z_Construct_UFunction_UProcHandler_GetCrates, "GetCrates" }, // 2592546873
				{ &Z_Construct_UFunction_UProcHandler_GetDisruptors, "GetDisruptors" }, // 2713492
				{ &Z_Construct_UFunction_UProcHandler_GetExtent, "GetExtent" }, // 2574754227
				{ &Z_Construct_UFunction_UProcHandler_GetFurnaces, "GetFurnaces" }, // 1470561028
				{ &Z_Construct_UFunction_UProcHandler_GetLights, "GetLights" }, // 3004731287
				{ &Z_Construct_UFunction_UProcHandler_GetManufacturingPlants, "GetManufacturingPlants" }, // 2819163210
				{ &Z_Construct_UFunction_UProcHandler_GetMassProc, "GetMassProc" }, // 934696053
				{ &Z_Construct_UFunction_UProcHandler_GetMiningStats, "GetMiningStats" }, // 2304647689
				{ &Z_Construct_UFunction_UProcHandler_GetNeighbors, "GetNeighbors" }, // 1740650437
				{ &Z_Construct_UFunction_UProcHandler_GetPowerCapacity, "GetPowerCapacity" }, // 3931096442
				{ &Z_Construct_UFunction_UProcHandler_GetReactorPower, "GetReactorPower" }, // 2779441002
				{ &Z_Construct_UFunction_UProcHandler_GetRefineries, "GetRefineries" }, // 3511722367
				{ &Z_Construct_UFunction_UProcHandler_GetRefineriesTier2, "GetRefineriesTier2" }, // 25827446
				{ &Z_Construct_UFunction_UProcHandler_GetSelectiveCrates, "GetSelectiveCrates" }, // 1088192570
				{ &Z_Construct_UFunction_UProcHandler_GetShopBlocks, "GetShopBlocks" }, // 3230899131
				{ &Z_Construct_UFunction_UProcHandler_GetShopReceivers, "GetShopReceivers" }, // 1021580934
				{ &Z_Construct_UFunction_UProcHandler_GetShopSellers, "GetShopSellers" }, // 12603106
				{ &Z_Construct_UFunction_UProcHandler_GetThrusterStats, "GetThrusterStats" }, // 1785772842
				{ &Z_Construct_UFunction_UProcHandler_GetTransportInventories, "GetTransportInventories" }, // 3094956902
				{ &Z_Construct_UFunction_UProcHandler_Load, "Load" }, // 2346736104
				{ &Z_Construct_UFunction_UProcHandler_MakeBoxMesh, "MakeBoxMesh" }, // 2711453225
				{ &Z_Construct_UFunction_UProcHandler_MakePipeStraight, "MakePipeStraight" }, // 2371327219
				{ &Z_Construct_UFunction_UProcHandler_RemoveBlock, "RemoveBlock" }, // 967642918
				{ &Z_Construct_UFunction_UProcHandler_RemoveBlockCoord, "RemoveBlockCoord" }, // 2659674997
				{ &Z_Construct_UFunction_UProcHandler_RemoveBlockVec, "RemoveBlockVec" }, // 3704107818
				{ &Z_Construct_UFunction_UProcHandler_RemoveManyBlocksAsync, "RemoveManyBlocksAsync" }, // 1881894384
				{ &Z_Construct_UFunction_UProcHandler_Save, "Save" }, // 2193537388
				{ &Z_Construct_UFunction_UProcHandler_TakeDamage, "TakeDamage" }, // 246653772
				{ &Z_Construct_UFunction_UProcHandler_Update, "Update" }, // 1838334440
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "ProcHandler.h" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshesToUpdate_MetaData[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshesToUpdate = { UE4CodeGen_Private::EPropertyClass::Array, "MeshesToUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProcHandler, MeshesToUpdate), METADATA_PARAMS(NewProp_MeshesToUpdate_MetaData, ARRAY_COUNT(NewProp_MeshesToUpdate_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshesToUpdate_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "MeshesToUpdate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnItems_MetaData[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnItems = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnItems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProcHandler, ReturnItems), METADATA_PARAMS(NewProp_ReturnItems_MetaData, ARRAY_COUNT(NewProp_ReturnItems_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnItems_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnItems", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacedBlocks_MetaData[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlacedBlocks = { UE4CodeGen_Private::EPropertyClass::Int, "PlacedBlocks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProcHandler, PlacedBlocks), METADATA_PARAMS(NewProp_PlacedBlocks_MetaData, ARRAY_COUNT(NewProp_PlacedBlocks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanPlace_MetaData[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			auto NewProp_CanPlace_SetBit = [](void* Obj){ ((UProcHandler*)Obj)->CanPlace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanPlace = { UE4CodeGen_Private::EPropertyClass::Bool, "CanPlace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UProcHandler), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CanPlace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CanPlace_MetaData, ARRAY_COUNT(NewProp_CanPlace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials = { UE4CodeGen_Private::EPropertyClass::Array, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProcHandler, Materials), METADATA_PARAMS(NewProp_Materials_MetaData, ARRAY_COUNT(NewProp_Materials_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coords_MetaData[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Coords = { UE4CodeGen_Private::EPropertyClass::Array, "Coords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProcHandler, Coords), METADATA_PARAMS(NewProp_Coords_MetaData, ARRAY_COUNT(NewProp_Coords_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coords_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Coords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBlocks_MetaData[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBlocks = { UE4CodeGen_Private::EPropertyClass::Int, "NumBlocks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProcHandler, NumBlocks), METADATA_PARAMS(NewProp_NumBlocks_MetaData, ARRAY_COUNT(NewProp_NumBlocks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSize_MetaData[] = {
				{ "Category", "Components|ProcHandler" },
				{ "ModuleRelativePath", "ProcHandler.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MeshSize = { UE4CodeGen_Private::EPropertyClass::Int, "MeshSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UProcHandler, MeshSize), METADATA_PARAMS(NewProp_MeshSize_MetaData, ARRAY_COUNT(NewProp_MeshSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshesToUpdate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshesToUpdate_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnItems,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnItems_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlacedBlocks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanPlace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Materials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Materials_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coords,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coords_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumBlocks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshSize,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UProcHandler>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UProcHandler::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProcHandler, 4145881941);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProcHandler(Z_Construct_UClass_UProcHandler, &UProcHandler::StaticClass, TEXT("/Script/Astrogate"), TEXT("UProcHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
