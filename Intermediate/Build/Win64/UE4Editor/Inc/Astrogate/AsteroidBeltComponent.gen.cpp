// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AsteroidBeltComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroidBeltComponent() {}
// Cross Module References
	ASTROGATE_API UScriptStruct* Z_Construct_UScriptStruct_FAsteroidStruct2();
	UPackage* Z_Construct_UPackage__Script_Astrogate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ASTROGATE_API UClass* Z_Construct_UClass_UAsteroidBeltComponent_NoRegister();
	ASTROGATE_API UClass* Z_Construct_UClass_UAsteroidBeltComponent();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UAsteroidBeltComponent_Init();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UAsteroidBeltComponent_SpawnAsteroids();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FAsteroidStruct2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ASTROGATE_API uint32 Get_Z_Construct_UScriptStruct_FAsteroidStruct2_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAsteroidStruct2, Z_Construct_UPackage__Script_Astrogate(), TEXT("AsteroidStruct2"), sizeof(FAsteroidStruct2), Get_Z_Construct_UScriptStruct_FAsteroidStruct2_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAsteroidStruct2(FAsteroidStruct2::StaticStruct, TEXT("/Script/Astrogate"), TEXT("AsteroidStruct2"), false, nullptr, nullptr);
static struct FScriptStruct_Astrogate_StaticRegisterNativesFAsteroidStruct2
{
	FScriptStruct_Astrogate_StaticRegisterNativesFAsteroidStruct2()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AsteroidStruct2")),new UScriptStruct::TCppStructOps<FAsteroidStruct2>);
	}
} ScriptStruct_Astrogate_StaticRegisterNativesFAsteroidStruct2;
	UScriptStruct* Z_Construct_UScriptStruct_FAsteroidStruct2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAsteroidStruct2_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Astrogate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AsteroidStruct2"), sizeof(FAsteroidStruct2), Get_Z_Construct_UScriptStruct_FAsteroidStruct2_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAsteroidStruct2>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coords_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Coords = { UE4CodeGen_Private::EPropertyClass::Struct, "Coords", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAsteroidStruct2, Coords), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Coords_MetaData, ARRAY_COUNT(NewProp_Coords_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAsteroidStruct2, Tangents), METADATA_PARAMS(NewProp_Tangents_MetaData, ARRAY_COUNT(NewProp_Tangents_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAsteroidStruct2, UVs), METADATA_PARAMS(NewProp_UVs_MetaData, ARRAY_COUNT(NewProp_UVs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAsteroidStruct2, Normals), METADATA_PARAMS(NewProp_Normals_MetaData, ARRAY_COUNT(NewProp_Normals_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAsteroidStruct2, Triangles), METADATA_PARAMS(NewProp_Triangles_MetaData, ARRAY_COUNT(NewProp_Triangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "Category", "Coordinate" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAsteroidStruct2, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Coords,
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
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AsteroidStruct2",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAsteroidStruct2),
				alignof(FAsteroidStruct2),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAsteroidStruct2_CRC() { return 2721006842U; }
	void UAsteroidBeltComponent::StaticRegisterNativesUAsteroidBeltComponent()
	{
		UClass* Class = UAsteroidBeltComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", (Native)&UAsteroidBeltComponent::execInit },
			{ "SpawnAsteroids", (Native)&UAsteroidBeltComponent::execSpawnAsteroids },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAsteroidBeltComponent_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asteroid Belt" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsteroidBeltComponent, "Init", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAsteroidBeltComponent_SpawnAsteroids()
	{
		struct AsteroidBeltComponent_eventSpawnAsteroids_Parms
		{
			int32 Num;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num = { UE4CodeGen_Private::EPropertyClass::Int, "Num", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsteroidBeltComponent_eventSpawnAsteroids_Parms, Num), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Num,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asteroid Belt" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsteroidBeltComponent, "SpawnAsteroids", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AsteroidBeltComponent_eventSpawnAsteroids_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsteroidBeltComponent_NoRegister()
	{
		return UAsteroidBeltComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsteroidBeltComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAsteroidBeltComponent_Init, "Init" }, // 254575749
				{ &Z_Construct_UFunction_UAsteroidBeltComponent_SpawnAsteroids, "SpawnAsteroids" }, // 3314935133
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object LOD Mobility Trigger" },
				{ "IncludePath", "AsteroidBeltComponent.h" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "Asteroid Belt" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAsteroidBeltComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
				{ "Category", "Asteroid Belt" },
				{ "ModuleRelativePath", "AsteroidBeltComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAsteroidBeltComponent, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_StaticMesh_MetaData, ARRAY_COUNT(NewProp_StaticMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAsteroidBeltComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAsteroidBeltComponent::StaticClass,
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
	IMPLEMENT_CLASS(UAsteroidBeltComponent, 670277511);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsteroidBeltComponent(Z_Construct_UClass_UAsteroidBeltComponent, &UAsteroidBeltComponent::StaticClass, TEXT("/Script/Astrogate"), TEXT("UAsteroidBeltComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsteroidBeltComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
