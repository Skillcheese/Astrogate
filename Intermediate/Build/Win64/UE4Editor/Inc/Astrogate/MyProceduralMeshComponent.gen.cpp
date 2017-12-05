// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyProceduralMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProceduralMeshComponent() {}
// Cross Module References
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FCannonStructC();
	UPackage* Z_Construct_UPackage__Script_Astrogate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FCoordSet();
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FCoord();
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSection();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ASTROGATE_API UClass* Z_Construct_UClass_UMyProceduralMeshComponent_NoRegister();
	ASTROGATE_API UClass* Z_Construct_UClass_UMyProceduralMeshComponent();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_AddBlocksInBounds();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_AddBlocksInBoundsAsync();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_AddBox();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_AddBoxs();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_AddTaskIsComplete();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_BreakCoordinatesIntoGroups();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_ConvertCoordsToGrid();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_ConvertGridToCoords();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_ConvertQuadToTrianglesMine();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_CoordPlus();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetBoxsAt();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCannonDistance();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCannonStats();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCenterFrontOfCoordinates();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCenterOfCoordinates();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCenterOfMassProc();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCoordinateDistance();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCoords();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetMassProc();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetNeighbors();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetOccupiedCoords();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetOwnerOfCoord();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetPowerCapacity();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetReactorPower();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetThrusterStats();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_InitMesh();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_MakeBoxMesh();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_Max();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_Min();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlock();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlocks();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlocksInBounds();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlockUnknown();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_SetMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_TakeDamage();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_Update();
// End Cross Module References
class UScriptStruct* FCannonStructC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASTROGATE_API uint32 Get_Z_Construct_UScriptStruct_FCannonStructC_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCannonStructC, Z_Construct_UPackage__Script_Astrogate(), TEXT("CannonStructC"), sizeof(FCannonStructC), Get_Z_Construct_UScriptStruct_FCannonStructC_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCannonStructC(FCannonStructC::StaticStruct, TEXT("/Script/Astrogate"), TEXT("CannonStructC"), false, nullptr, nullptr);
static struct FScriptStruct_Astrogate_StaticRegisterNativesFCannonStructC
{
	FScriptStruct_Astrogate_StaticRegisterNativesFCannonStructC()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CannonStructC")),new UScriptStruct::TCppStructOps<FCannonStructC>);
	}
} ScriptStruct_Astrogate_StaticRegisterNativesFCannonStructC;
	UScriptStruct* Z_Construct_UScriptStruct_FCannonStructC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCannonStructC_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Astrogate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CannonStructC"), sizeof(FCannonStructC), Get_Z_Construct_UScriptStruct_FCannonStructC_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCannonStructC>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FireRate = { UE4CodeGen_Private::EPropertyClass::Float, "FireRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCannonStructC, FireRate), METADATA_PARAMS(NewProp_FireRate_MetaData, ARRAY_COUNT(NewProp_FireRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Float, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCannonStructC, Damage), METADATA_PARAMS(NewProp_Damage_MetaData, ARRAY_COUNT(NewProp_Damage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireLocation_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "FireLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCannonStructC, FireLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FireLocation_MetaData, ARRAY_COUNT(NewProp_FireLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireLocation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CannonStructC",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCannonStructC),
				alignof(FCannonStructC),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCannonStructC_CRC() { return 3131727299U; }
class UScriptStruct* FCoordSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASTROGATE_API uint32 Get_Z_Construct_UScriptStruct_FCoordSet_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoordSet, Z_Construct_UPackage__Script_Astrogate(), TEXT("CoordSet"), sizeof(FCoordSet), Get_Z_Construct_UScriptStruct_FCoordSet_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCoordSet(FCoordSet::StaticStruct, TEXT("/Script/Astrogate"), TEXT("CoordSet"), false, nullptr, nullptr);
static struct FScriptStruct_Astrogate_StaticRegisterNativesFCoordSet
{
	FScriptStruct_Astrogate_StaticRegisterNativesFCoordSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CoordSet")),new UScriptStruct::TCppStructOps<FCoordSet>);
	}
} ScriptStruct_Astrogate_StaticRegisterNativesFCoordSet;
	UScriptStruct* Z_Construct_UScriptStruct_FCoordSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCoordSet_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Astrogate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CoordSet"), sizeof(FCoordSet), Get_Z_Construct_UScriptStruct_FCoordSet_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoordSet>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Coordinates = { UE4CodeGen_Private::EPropertyClass::Array, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCoordSet, Coordinates), METADATA_PARAMS(NewProp_Coordinates_MetaData, ARRAY_COUNT(NewProp_Coordinates_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coordinates_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"CoordSet",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCoordSet),
				alignof(FCoordSet),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCoordSet_CRC() { return 1096079529U; }
class UScriptStruct* FMeshSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASTROGATE_API uint32 Get_Z_Construct_UScriptStruct_FMeshSection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSection, Z_Construct_UPackage__Script_Astrogate(), TEXT("MeshSection"), sizeof(FMeshSection), Get_Z_Construct_UScriptStruct_FMeshSection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshSection(FMeshSection::StaticStruct, TEXT("/Script/Astrogate"), TEXT("MeshSection"), false, nullptr, nullptr);
static struct FScriptStruct_Astrogate_StaticRegisterNativesFMeshSection
{
	FScriptStruct_Astrogate_StaticRegisterNativesFMeshSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshSection")),new UScriptStruct::TCppStructOps<FMeshSection>);
	}
} ScriptStruct_Astrogate_StaticRegisterNativesFMeshSection;
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshSection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Astrogate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshSection"), sizeof(FMeshSection), Get_Z_Construct_UScriptStruct_FMeshSection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSection>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mass = { UE4CodeGen_Private::EPropertyClass::Int, "Mass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection, Mass), METADATA_PARAMS(NewProp_Mass_MetaData, ARRAY_COUNT(NewProp_Mass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Toughness_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Toughness = { UE4CodeGen_Private::EPropertyClass::Int, "Toughness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection, Toughness), METADATA_PARAMS(NewProp_Toughness_MetaData, ARRAY_COUNT(NewProp_Toughness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Coordinates = { UE4CodeGen_Private::EPropertyClass::Array, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection, Coordinates), METADATA_PARAMS(NewProp_Coordinates_MetaData, ARRAY_COUNT(NewProp_Coordinates_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coordinates_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection, Tangents), METADATA_PARAMS(NewProp_Tangents_MetaData, ARRAY_COUNT(NewProp_Tangents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection, Normals), METADATA_PARAMS(NewProp_Normals_MetaData, ARRAY_COUNT(NewProp_Normals_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection, UVs), METADATA_PARAMS(NewProp_UVs_MetaData, ARRAY_COUNT(NewProp_UVs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tris_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tris = { UE4CodeGen_Private::EPropertyClass::Array, "Tris", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection, Tris), METADATA_PARAMS(NewProp_Tris_MetaData, ARRAY_COUNT(NewProp_Tris_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Tris_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Tris", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Verts_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Verts = { UE4CodeGen_Private::EPropertyClass::Array, "Verts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMeshSection, Verts), METADATA_PARAMS(NewProp_Verts_MetaData, ARRAY_COUNT(NewProp_Verts_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Verts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Verts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
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
				"MeshSection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMeshSection),
				alignof(FMeshSection),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshSection_CRC() { return 2016909058U; }
class UScriptStruct* FCoord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASTROGATE_API uint32 Get_Z_Construct_UScriptStruct_FCoord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoord, Z_Construct_UPackage__Script_Astrogate(), TEXT("Coord"), sizeof(FCoord), Get_Z_Construct_UScriptStruct_FCoord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCoord(FCoord::StaticStruct, TEXT("/Script/Astrogate"), TEXT("Coord"), false, nullptr, nullptr);
static struct FScriptStruct_Astrogate_StaticRegisterNativesFCoord
{
	FScriptStruct_Astrogate_StaticRegisterNativesFCoord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Coord")),new UScriptStruct::TCppStructOps<FCoord>);
	}
} ScriptStruct_Astrogate_StaticRegisterNativesFCoord;
	UScriptStruct* Z_Construct_UScriptStruct_FCoord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCoord_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Astrogate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Coord"), sizeof(FCoord), Get_Z_Construct_UScriptStruct_FCoord_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoord>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Z = { UE4CodeGen_Private::EPropertyClass::Int, "Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCoord, Z), METADATA_PARAMS(NewProp_Z_MetaData, ARRAY_COUNT(NewProp_Z_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Int, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCoord, Y), METADATA_PARAMS(NewProp_Y_MetaData, ARRAY_COUNT(NewProp_Y_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCoord, X), METADATA_PARAMS(NewProp_X_MetaData, ARRAY_COUNT(NewProp_X_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"Coord",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FCoord),
				alignof(FCoord),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCoord_CRC() { return 55418197U; }
	void UMyProceduralMeshComponent::StaticRegisterNativesUMyProceduralMeshComponent()
	{
		UClass* Class = UMyProceduralMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBlocksInBounds", (Native)&UMyProceduralMeshComponent::execAddBlocksInBounds },
			{ "AddBlocksInBoundsAsync", (Native)&UMyProceduralMeshComponent::execAddBlocksInBoundsAsync },
			{ "AddBox", (Native)&UMyProceduralMeshComponent::execAddBox },
			{ "AddBoxs", (Native)&UMyProceduralMeshComponent::execAddBoxs },
			{ "AddTaskIsComplete", (Native)&UMyProceduralMeshComponent::execAddTaskIsComplete },
			{ "BreakCoordinatesIntoGroups", (Native)&UMyProceduralMeshComponent::execBreakCoordinatesIntoGroups },
			{ "ConvertCoordsToGrid", (Native)&UMyProceduralMeshComponent::execConvertCoordsToGrid },
			{ "ConvertGridToCoords", (Native)&UMyProceduralMeshComponent::execConvertGridToCoords },
			{ "ConvertQuadToTrianglesMine", (Native)&UMyProceduralMeshComponent::execConvertQuadToTrianglesMine },
			{ "CoordPlus", (Native)&UMyProceduralMeshComponent::execCoordPlus },
			{ "GetBoxsAt", (Native)&UMyProceduralMeshComponent::execGetBoxsAt },
			{ "GetCannonDistance", (Native)&UMyProceduralMeshComponent::execGetCannonDistance },
			{ "GetCannonStats", (Native)&UMyProceduralMeshComponent::execGetCannonStats },
			{ "GetCenterFrontOfCoordinates", (Native)&UMyProceduralMeshComponent::execGetCenterFrontOfCoordinates },
			{ "GetCenterOfCoordinates", (Native)&UMyProceduralMeshComponent::execGetCenterOfCoordinates },
			{ "GetCenterOfMassProc", (Native)&UMyProceduralMeshComponent::execGetCenterOfMassProc },
			{ "GetCoordinateDistance", (Native)&UMyProceduralMeshComponent::execGetCoordinateDistance },
			{ "GetCoords", (Native)&UMyProceduralMeshComponent::execGetCoords },
			{ "GetMassProc", (Native)&UMyProceduralMeshComponent::execGetMassProc },
			{ "GetNeighbors", (Native)&UMyProceduralMeshComponent::execGetNeighbors },
			{ "GetOccupiedCoords", (Native)&UMyProceduralMeshComponent::execGetOccupiedCoords },
			{ "GetOwnerOfCoord", (Native)&UMyProceduralMeshComponent::execGetOwnerOfCoord },
			{ "GetPowerCapacity", (Native)&UMyProceduralMeshComponent::execGetPowerCapacity },
			{ "GetReactorPower", (Native)&UMyProceduralMeshComponent::execGetReactorPower },
			{ "GetThrusterStats", (Native)&UMyProceduralMeshComponent::execGetThrusterStats },
			{ "InitMesh", (Native)&UMyProceduralMeshComponent::execInitMesh },
			{ "MakeBoxMesh", (Native)&UMyProceduralMeshComponent::execMakeBoxMesh },
			{ "Max", (Native)&UMyProceduralMeshComponent::execMax },
			{ "Min", (Native)&UMyProceduralMeshComponent::execMin },
			{ "RemoveBlock", (Native)&UMyProceduralMeshComponent::execRemoveBlock },
			{ "RemoveBlocks", (Native)&UMyProceduralMeshComponent::execRemoveBlocks },
			{ "RemoveBlocksInBounds", (Native)&UMyProceduralMeshComponent::execRemoveBlocksInBounds },
			{ "RemoveBlockUnknown", (Native)&UMyProceduralMeshComponent::execRemoveBlockUnknown },
			{ "SetMaterials", (Native)&UMyProceduralMeshComponent::execSetMaterials },
			{ "TakeDamage", (Native)&UMyProceduralMeshComponent::execTakeDamage },
			{ "Update", (Native)&UMyProceduralMeshComponent::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_AddBlocksInBounds()
	{
		struct MyProceduralMeshComponent_eventAddBlocksInBounds_Parms
		{
			int32 ID;
			FCoord A;
			FCoord B;
			int32 Num;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBlocksInBounds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num = { UE4CodeGen_Private::EPropertyClass::Int, "Num", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBlocksInBounds_Parms, Num), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBlocksInBounds_Parms, B), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBlocksInBounds_Parms, A), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBlocksInBounds_Parms, ID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Num,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "AddBlocksInBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventAddBlocksInBounds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_AddBlocksInBoundsAsync()
	{
		struct MyProceduralMeshComponent_eventAddBlocksInBoundsAsync_Parms
		{
			int32 ID;
			TArray<FCoord> A;
			TArray<FCoord> B;
			int32 Num;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MyProceduralMeshComponent_eventAddBlocksInBoundsAsync_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyProceduralMeshComponent_eventAddBlocksInBoundsAsync_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num = { UE4CodeGen_Private::EPropertyClass::Int, "Num", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBlocksInBoundsAsync_Parms, Num), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Array, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBlocksInBoundsAsync_Parms, B), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Array, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBlocksInBoundsAsync_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBlocksInBoundsAsync_Parms, ID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Num,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "AddBlocksInBoundsAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventAddBlocksInBoundsAsync_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_AddBox()
	{
		struct MyProceduralMeshComponent_eventAddBox_Parms
		{
			int32 ID;
			FCoord Grid;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grid = { UE4CodeGen_Private::EPropertyClass::Struct, "Grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBox_Parms, Grid), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_Grid_MetaData, ARRAY_COUNT(NewProp_Grid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBox_Parms, ID), METADATA_PARAMS(NewProp_ID_MetaData, ARRAY_COUNT(NewProp_ID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "AddBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventAddBox_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_AddBoxs()
	{
		struct MyProceduralMeshComponent_eventAddBoxs_Parms
		{
			int32 ID;
			TArray<FCoord> arr;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arr_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arr = { UE4CodeGen_Private::EPropertyClass::Array, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBoxs_Parms, arr), METADATA_PARAMS(NewProp_arr_MetaData, ARRAY_COUNT(NewProp_arr_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_arr_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventAddBoxs_Parms, ID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "AddBoxs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventAddBoxs_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_AddTaskIsComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "AddTaskIsComplete", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_BreakCoordinatesIntoGroups()
	{
		struct MyProceduralMeshComponent_eventBreakCoordinatesIntoGroups_Parms
		{
			TArray<FCoord> arr;
			TArray<FCoordSet> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventBreakCoordinatesIntoGroups_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoordSet, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arr = { UE4CodeGen_Private::EPropertyClass::Array, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventBreakCoordinatesIntoGroups_Parms, arr), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_arr_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "BreakCoordinatesIntoGroups", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventBreakCoordinatesIntoGroups_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_ConvertCoordsToGrid()
	{
		struct MyProceduralMeshComponent_eventConvertCoordsToGrid_Parms
		{
			FVector Coord;
			FCoord ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventConvertCoordsToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coord = { UE4CodeGen_Private::EPropertyClass::Struct, "Coord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventConvertCoordsToGrid_Parms, Coord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coord,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "ConvertCoordsToGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00822401, sizeof(MyProceduralMeshComponent_eventConvertCoordsToGrid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_ConvertGridToCoords()
	{
		struct MyProceduralMeshComponent_eventConvertGridToCoords_Parms
		{
			FCoord Grid;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventConvertGridToCoords_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grid = { UE4CodeGen_Private::EPropertyClass::Struct, "Grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventConvertGridToCoords_Parms, Grid), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grid,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "ConvertGridToCoords", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00822401, sizeof(MyProceduralMeshComponent_eventConvertGridToCoords_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_ConvertQuadToTrianglesMine()
	{
		struct MyProceduralMeshComponent_eventConvertQuadToTrianglesMine_Parms
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
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert3 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventConvertQuadToTrianglesMine_Parms, Vert3), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert2 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventConvertQuadToTrianglesMine_Parms, Vert2), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert1 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventConvertQuadToTrianglesMine_Parms, Vert1), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert0 = { UE4CodeGen_Private::EPropertyClass::Int, "Vert0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventConvertQuadToTrianglesMine_Parms, Vert0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventConvertQuadToTrianglesMine_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
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
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "ConvertQuadToTrianglesMine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MyProceduralMeshComponent_eventConvertQuadToTrianglesMine_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_CoordPlus()
	{
		struct MyProceduralMeshComponent_eventCoordPlus_Parms
		{
			FCoord Coord;
			int32 X;
			int32 Y;
			int32 Z;
			FCoord ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventCoordPlus_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Z = { UE4CodeGen_Private::EPropertyClass::Int, "Z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventCoordPlus_Parms, Z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Int, "Y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventCoordPlus_Parms, Y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventCoordPlus_Parms, X), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coord = { UE4CodeGen_Private::EPropertyClass::Struct, "Coord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventCoordPlus_Parms, Coord), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_Coord_MetaData, ARRAY_COUNT(NewProp_Coord_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coord,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "CoordPlus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00022401, sizeof(MyProceduralMeshComponent_eventCoordPlus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetBoxsAt()
	{
		struct MyProceduralMeshComponent_eventGetBoxsAt_Parms
		{
			int32 ID;
			TArray<FCoord> Grid;
			TArray<FVector> VerticesTemp;
			TArray<int32> TrianglesTemp;
			TArray<FVector> NormalsTemp;
			TArray<FVector2D> UVsTemp;
			TArray<FProcMeshTangent> TangentsTemp;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TangentsTemp = { UE4CodeGen_Private::EPropertyClass::Array, "TangentsTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetBoxsAt_Parms, TangentsTemp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentsTemp_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TangentsTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVsTemp = { UE4CodeGen_Private::EPropertyClass::Array, "UVsTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetBoxsAt_Parms, UVsTemp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVsTemp_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVsTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NormalsTemp = { UE4CodeGen_Private::EPropertyClass::Array, "NormalsTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetBoxsAt_Parms, NormalsTemp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalsTemp_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalsTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrianglesTemp = { UE4CodeGen_Private::EPropertyClass::Array, "TrianglesTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetBoxsAt_Parms, TrianglesTemp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrianglesTemp_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "TrianglesTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VerticesTemp = { UE4CodeGen_Private::EPropertyClass::Array, "VerticesTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetBoxsAt_Parms, VerticesTemp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticesTemp_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VerticesTemp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grid = { UE4CodeGen_Private::EPropertyClass::Array, "Grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetBoxsAt_Parms, Grid), METADATA_PARAMS(NewProp_Grid_MetaData, ARRAY_COUNT(NewProp_Grid_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grid_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetBoxsAt_Parms, ID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentsTemp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentsTemp_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVsTemp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVsTemp_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalsTemp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalsTemp_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrianglesTemp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrianglesTemp_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticesTemp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VerticesTemp_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grid_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetBoxsAt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00422401, sizeof(MyProceduralMeshComponent_eventGetBoxsAt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCannonDistance()
	{
		struct MyProceduralMeshComponent_eventGetCannonDistance_Parms
		{
			FCoord A;
			FCoord B;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCannonDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCannonDistance_Parms, B), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCannonDistance_Parms, A), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetCannonDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00022401, sizeof(MyProceduralMeshComponent_eventGetCannonDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCannonStats()
	{
		struct MyProceduralMeshComponent_eventGetCannonStats_Parms
		{
			TArray<FCannonStructC> cannons;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_cannons = { UE4CodeGen_Private::EPropertyClass::Array, "cannons", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCannonStats_Parms, cannons), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_cannons_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "cannons", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCannonStructC, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cannons,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cannons_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetCannonStats", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MyProceduralMeshComponent_eventGetCannonStats_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCenterFrontOfCoordinates()
	{
		struct MyProceduralMeshComponent_eventGetCenterFrontOfCoordinates_Parms
		{
			TArray<FCoord> coordinates;
			FCoord ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCenterFrontOfCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coordinates_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_coordinates = { UE4CodeGen_Private::EPropertyClass::Array, "coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCenterFrontOfCoordinates_Parms, coordinates), METADATA_PARAMS(NewProp_coordinates_MetaData, ARRAY_COUNT(NewProp_coordinates_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_coordinates_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "coordinates", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_coordinates,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_coordinates_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetCenterFrontOfCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(MyProceduralMeshComponent_eventGetCenterFrontOfCoordinates_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCenterOfCoordinates()
	{
		struct MyProceduralMeshComponent_eventGetCenterOfCoordinates_Parms
		{
			TArray<FCoord> arr;
			FCoord ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCenterOfCoordinates_Parms, ReturnValue), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arr_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arr = { UE4CodeGen_Private::EPropertyClass::Array, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCenterOfCoordinates_Parms, arr), METADATA_PARAMS(NewProp_arr_MetaData, ARRAY_COUNT(NewProp_arr_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_arr_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetCenterOfCoordinates", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00022401, sizeof(MyProceduralMeshComponent_eventGetCenterOfCoordinates_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCenterOfMassProc()
	{
		struct MyProceduralMeshComponent_eventGetCenterOfMassProc_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCenterOfMassProc_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetCenterOfMassProc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MyProceduralMeshComponent_eventGetCenterOfMassProc_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCoordinateDistance()
	{
		struct MyProceduralMeshComponent_eventGetCoordinateDistance_Parms
		{
			FCoord A;
			FCoord B;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCoordinateDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCoordinateDistance_Parms, B), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCoordinateDistance_Parms, A), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetCoordinateDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00022401, sizeof(MyProceduralMeshComponent_eventGetCoordinateDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetCoords()
	{
		struct MyProceduralMeshComponent_eventGetCoords_Parms
		{
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetCoords_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetCoords", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventGetCoords_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetMassProc()
	{
		struct MyProceduralMeshComponent_eventGetMassProc_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetMassProc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetMassProc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventGetMassProc_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetNeighbors()
	{
		struct MyProceduralMeshComponent_eventGetNeighbors_Parms
		{
			FCoord Coord;
			TArray<FCoord> arr;
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetNeighbors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arr_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arr = { UE4CodeGen_Private::EPropertyClass::Array, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetNeighbors_Parms, arr), METADATA_PARAMS(NewProp_arr_MetaData, ARRAY_COUNT(NewProp_arr_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_arr_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coord = { UE4CodeGen_Private::EPropertyClass::Struct, "Coord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetNeighbors_Parms, Coord), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_Coord_MetaData, ARRAY_COUNT(NewProp_Coord_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coord,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetNeighbors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(MyProceduralMeshComponent_eventGetNeighbors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetOccupiedCoords()
	{
		struct MyProceduralMeshComponent_eventGetOccupiedCoords_Parms
		{
			TArray<FCoord> arr;
			bool Occupied;
			TArray<FCoord> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetOccupiedCoords_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Occupied_SetBit = [](void* Obj){ ((MyProceduralMeshComponent_eventGetOccupiedCoords_Parms*)Obj)->Occupied = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Occupied = { UE4CodeGen_Private::EPropertyClass::Bool, "Occupied", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyProceduralMeshComponent_eventGetOccupiedCoords_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Occupied_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arr = { UE4CodeGen_Private::EPropertyClass::Array, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetOccupiedCoords_Parms, arr), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_arr_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Occupied,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetOccupiedCoords", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventGetOccupiedCoords_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetOwnerOfCoord()
	{
		struct MyProceduralMeshComponent_eventGetOwnerOfCoord_Parms
		{
			FCoord Coord;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetOwnerOfCoord_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coord = { UE4CodeGen_Private::EPropertyClass::Struct, "Coord", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetOwnerOfCoord_Parms, Coord), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_Coord_MetaData, ARRAY_COUNT(NewProp_Coord_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coord,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetOwnerOfCoord", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(MyProceduralMeshComponent_eventGetOwnerOfCoord_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetPowerCapacity()
	{
		struct MyProceduralMeshComponent_eventGetPowerCapacity_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetPowerCapacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetPowerCapacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventGetPowerCapacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetReactorPower()
	{
		struct MyProceduralMeshComponent_eventGetReactorPower_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetReactorPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetReactorPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventGetReactorPower_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_GetThrusterStats()
	{
		struct MyProceduralMeshComponent_eventGetThrusterStats_Parms
		{
			float Thrust;
			float PowerDrain;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerDrain = { UE4CodeGen_Private::EPropertyClass::Float, "PowerDrain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetThrusterStats_Parms, PowerDrain), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thrust = { UE4CodeGen_Private::EPropertyClass::Float, "Thrust", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventGetThrusterStats_Parms, Thrust), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerDrain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Thrust,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "GetThrusterStats", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MyProceduralMeshComponent_eventGetThrusterStats_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_InitMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "InitMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_MakeBoxMesh()
	{
		struct MyProceduralMeshComponent_eventMakeBoxMesh_Parms
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
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMakeBoxMesh_Parms, Tangents), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMakeBoxMesh_Parms, UVs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMakeBoxMesh_Parms, Normals), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMakeBoxMesh_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMakeBoxMesh_Parms, Vertices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMakeBoxMesh_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMakeBoxMesh_Parms, BoxRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
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
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "MakeBoxMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MyProceduralMeshComponent_eventMakeBoxMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_Max()
	{
		struct MyProceduralMeshComponent_eventMax_Parms
		{
			int32 A;
			int32 B;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Int, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMax_Parms, B), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMax_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "Max", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00022401, sizeof(MyProceduralMeshComponent_eventMax_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_Min()
	{
		struct MyProceduralMeshComponent_eventMin_Parms
		{
			int32 A;
			int32 B;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Int, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMin_Parms, B), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Int, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventMin_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "Min", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00022401, sizeof(MyProceduralMeshComponent_eventMin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlock()
	{
		struct MyProceduralMeshComponent_eventRemoveBlock_Parms
		{
			int32 ID;
			FCoord Grid;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grid = { UE4CodeGen_Private::EPropertyClass::Struct, "Grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventRemoveBlock_Parms, Grid), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_Grid_MetaData, ARRAY_COUNT(NewProp_Grid_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventRemoveBlock_Parms, ID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "RemoveBlock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventRemoveBlock_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlocks()
	{
		struct MyProceduralMeshComponent_eventRemoveBlocks_Parms
		{
			int32 ID;
			TArray<FCoord> arr;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arr_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arr = { UE4CodeGen_Private::EPropertyClass::Array, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventRemoveBlocks_Parms, arr), METADATA_PARAMS(NewProp_arr_MetaData, ARRAY_COUNT(NewProp_arr_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_arr_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "arr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventRemoveBlocks_Parms, ID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arr_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "RemoveBlocks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventRemoveBlocks_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlocksInBounds()
	{
		struct MyProceduralMeshComponent_eventRemoveBlocksInBounds_Parms
		{
			FCoord A;
			FCoord B;
			TArray<int32> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventRemoveBlocksInBounds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventRemoveBlocksInBounds_Parms, B), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventRemoveBlocksInBounds_Parms, A), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "RemoveBlocksInBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventRemoveBlocksInBounds_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlockUnknown()
	{
		struct MyProceduralMeshComponent_eventRemoveBlockUnknown_Parms
		{
			FCoord Grid;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventRemoveBlockUnknown_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grid = { UE4CodeGen_Private::EPropertyClass::Struct, "Grid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventRemoveBlockUnknown_Parms, Grid), Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(NewProp_Grid_MetaData, ARRAY_COUNT(NewProp_Grid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Grid,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "RemoveBlockUnknown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventRemoveBlockUnknown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_SetMaterials()
	{
		struct MyProceduralMeshComponent_eventSetMaterials_Parms
		{
			TArray<UMaterialInterface*> Materials;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials = { UE4CodeGen_Private::EPropertyClass::Array, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventSetMaterials_Parms, Materials), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Materials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Materials_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "SetMaterials", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventSetMaterials_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_TakeDamage()
	{
		struct MyProceduralMeshComponent_eventTakeDamage_Parms
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
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage = { UE4CodeGen_Private::EPropertyClass::Float, "damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventTakeDamage_Parms, damage), METADATA_PARAMS(NewProp_damage_MetaData, ARRAY_COUNT(NewProp_damage_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_impact = { UE4CodeGen_Private::EPropertyClass::Struct, "impact", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventTakeDamage_Parms, impact), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_damage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_impact,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "TakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MyProceduralMeshComponent_eventTakeDamage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyProceduralMeshComponent_Update()
	{
		struct MyProceduralMeshComponent_eventUpdate_Parms
		{
			int32 ID;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyProceduralMeshComponent_eventUpdate_Parms, ID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|MyProceduralMesh" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyProceduralMeshComponent, "Update", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyProceduralMeshComponent_eventUpdate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyProceduralMeshComponent_NoRegister()
	{
		return UMyProceduralMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyProceduralMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_AddBlocksInBounds, "AddBlocksInBounds" }, // 1978379593
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_AddBlocksInBoundsAsync, "AddBlocksInBoundsAsync" }, // 340841587
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_AddBox, "AddBox" }, // 1904536
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_AddBoxs, "AddBoxs" }, // 3880357796
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_AddTaskIsComplete, "AddTaskIsComplete" }, // 3429738560
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_BreakCoordinatesIntoGroups, "BreakCoordinatesIntoGroups" }, // 3866308042
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_ConvertCoordsToGrid, "ConvertCoordsToGrid" }, // 175043677
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_ConvertGridToCoords, "ConvertGridToCoords" }, // 2595260685
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_ConvertQuadToTrianglesMine, "ConvertQuadToTrianglesMine" }, // 2662669373
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_CoordPlus, "CoordPlus" }, // 3058172501
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetBoxsAt, "GetBoxsAt" }, // 2410364856
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetCannonDistance, "GetCannonDistance" }, // 3189065939
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetCannonStats, "GetCannonStats" }, // 4105982348
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetCenterFrontOfCoordinates, "GetCenterFrontOfCoordinates" }, // 2671864730
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetCenterOfCoordinates, "GetCenterOfCoordinates" }, // 218031993
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetCenterOfMassProc, "GetCenterOfMassProc" }, // 1426425185
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetCoordinateDistance, "GetCoordinateDistance" }, // 3189227822
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetCoords, "GetCoords" }, // 3342613683
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetMassProc, "GetMassProc" }, // 2535888457
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetNeighbors, "GetNeighbors" }, // 2049323204
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetOccupiedCoords, "GetOccupiedCoords" }, // 1151618697
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetOwnerOfCoord, "GetOwnerOfCoord" }, // 3243554051
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetPowerCapacity, "GetPowerCapacity" }, // 3079361176
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetReactorPower, "GetReactorPower" }, // 31024929
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_GetThrusterStats, "GetThrusterStats" }, // 3481354926
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_InitMesh, "InitMesh" }, // 3896943140
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_MakeBoxMesh, "MakeBoxMesh" }, // 1250281177
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_Max, "Max" }, // 2482729077
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_Min, "Min" }, // 412376633
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlock, "RemoveBlock" }, // 1301490774
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlocks, "RemoveBlocks" }, // 1407320848
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlocksInBounds, "RemoveBlocksInBounds" }, // 954938326
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_RemoveBlockUnknown, "RemoveBlockUnknown" }, // 3057333
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_SetMaterials, "SetMaterials" }, // 1885938219
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_TakeDamage, "TakeDamage" }, // 1982295435
				{ &Z_Construct_UFunction_UMyProceduralMeshComponent_Update, "Update" }, // 3579670316
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Object LOD Mobility Trigger" },
				{ "IncludePath", "MyProceduralMeshComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Verts_MetaData[] = {
				{ "Category", "MyProceduralMeshComponent" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Verts = { UE4CodeGen_Private::EPropertyClass::Array, "Verts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMyProceduralMeshComponent, Verts), METADATA_PARAMS(NewProp_Verts_MetaData, ARRAY_COUNT(NewProp_Verts_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Verts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Verts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskFinished_MetaData[] = {
				{ "Category", "MyProceduralMeshComponent" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			auto NewProp_TaskFinished_SetBit = [](void* Obj){ ((UMyProceduralMeshComponent*)Obj)->TaskFinished = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TaskFinished = { UE4CodeGen_Private::EPropertyClass::Bool, "TaskFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMyProceduralMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_TaskFinished_SetBit)>::SetBit, METADATA_PARAMS(NewProp_TaskFinished_MetaData, ARRAY_COUNT(NewProp_TaskFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningTask_MetaData[] = {
				{ "Category", "MyProceduralMeshComponent" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			auto NewProp_RunningTask_SetBit = [](void* Obj){ ((UMyProceduralMeshComponent*)Obj)->RunningTask = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RunningTask = { UE4CodeGen_Private::EPropertyClass::Bool, "RunningTask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMyProceduralMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RunningTask_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RunningTask_MetaData, ARRAY_COUNT(NewProp_RunningTask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanPlace_MetaData[] = {
				{ "Category", "MyProceduralMeshComponent" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			auto NewProp_CanPlace_SetBit = [](void* Obj){ ((UMyProceduralMeshComponent*)Obj)->CanPlace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanPlace = { UE4CodeGen_Private::EPropertyClass::Bool, "CanPlace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMyProceduralMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CanPlace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CanPlace_MetaData, ARRAY_COUNT(NewProp_CanPlace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coords_MetaData[] = {
				{ "Category", "MyProceduralMeshComponent" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Coords = { UE4CodeGen_Private::EPropertyClass::Array, "Coords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMyProceduralMeshComponent, Coords), METADATA_PARAMS(NewProp_Coords_MetaData, ARRAY_COUNT(NewProp_Coords_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coords_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Coords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCoord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
				{ "Category", "MyProceduralMeshComponent" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections = { UE4CodeGen_Private::EPropertyClass::Array, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMyProceduralMeshComponent, Sections), METADATA_PARAMS(NewProp_Sections_MetaData, ARRAY_COUNT(NewProp_Sections_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMeshSection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlocksPlaced_MetaData[] = {
				{ "Category", "MyProceduralMeshComponent" },
				{ "ModuleRelativePath", "MyProceduralMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlocksPlaced = { UE4CodeGen_Private::EPropertyClass::Int, "BlocksPlaced", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMyProceduralMeshComponent, BlocksPlaced), METADATA_PARAMS(NewProp_BlocksPlaced_MetaData, ARRAY_COUNT(NewProp_BlocksPlaced_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verts_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TaskFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RunningTask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanPlace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coords,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coords_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlocksPlaced,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyProceduralMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyProceduralMeshComponent::StaticClass,
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
	IMPLEMENT_CLASS(UMyProceduralMeshComponent, 3754131025);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyProceduralMeshComponent(Z_Construct_UClass_UMyProceduralMeshComponent, &UMyProceduralMeshComponent::StaticClass, TEXT("/Script/Astrogate"), TEXT("UMyProceduralMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyProceduralMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
