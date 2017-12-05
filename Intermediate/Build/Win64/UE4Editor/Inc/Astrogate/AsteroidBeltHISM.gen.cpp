// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AsteroidBeltHISM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroidBeltHISM() {}
// Cross Module References
	ASTROGATE_API UClass* Z_Construct_UClass_UAsteroidBeltHISM_NoRegister();
	ASTROGATE_API UClass* Z_Construct_UClass_UAsteroidBeltHISM();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Astrogate();
	ASTROGATE_API UFunction* Z_Construct_UFunction_UAsteroidBeltHISM_Init();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UAsteroidBeltHISM::StaticRegisterNativesUAsteroidBeltHISM()
	{
		UClass* Class = UAsteroidBeltHISM::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", (Native)&UAsteroidBeltHISM::execInit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAsteroidBeltHISM_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asteroid Belt" },
				{ "ModuleRelativePath", "AsteroidBeltHISM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsteroidBeltHISM, "Init", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsteroidBeltHISM_NoRegister()
	{
		return UAsteroidBeltHISM::StaticClass();
	}
	UClass* Z_Construct_UClass_UAsteroidBeltHISM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAsteroidBeltHISM_Init, "Init" }, // 3837833726
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "AsteroidBeltHISM.h" },
				{ "ModuleRelativePath", "AsteroidBeltHISM.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRotationSpeed_MetaData[] = {
				{ "Category", "Config" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "AsteroidBeltHISM.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxRotationSpeed = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxRotationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UAsteroidBeltHISM, MaxRotationSpeed), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_MaxRotationSpeed_MetaData, ARRAY_COUNT(NewProp_MaxRotationSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
				{ "Category", "Config" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "AsteroidBeltHISM.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed = { UE4CodeGen_Private::EPropertyClass::Int, "Seed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UAsteroidBeltHISM, Seed), METADATA_PARAMS(NewProp_Seed_MetaData, ARRAY_COUNT(NewProp_Seed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMin_MetaData[] = {
				{ "Category", "Config" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "AsteroidBeltHISM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMin = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UAsteroidBeltHISM, ScaleMin), METADATA_PARAMS(NewProp_ScaleMin_MetaData, ARRAY_COUNT(NewProp_ScaleMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMax_MetaData[] = {
				{ "Category", "Config" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "AsteroidBeltHISM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMax = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UAsteroidBeltHISM, ScaleMax), METADATA_PARAMS(NewProp_ScaleMax_MetaData, ARRAY_COUNT(NewProp_ScaleMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnAmount_MetaData[] = {
				{ "Category", "Config" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "AsteroidBeltHISM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnAmount = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnAmount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UAsteroidBeltHISM, SpawnAmount), METADATA_PARAMS(NewProp_SpawnAmount_MetaData, ARRAY_COUNT(NewProp_SpawnAmount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "Category", "Config" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "AsteroidBeltHISM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UAsteroidBeltHISM, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
				{ "Category", "Config" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "AsteroidBeltHISM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Float, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UAsteroidBeltHISM, Width), METADATA_PARAMS(NewProp_Width_MetaData, ARRAY_COUNT(NewProp_Width_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "Config" },
				{ "ExposeOnSpawn", "true" },
				{ "ModuleRelativePath", "AsteroidBeltHISM.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(UAsteroidBeltHISM, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRotationSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Seed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnAmount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAsteroidBeltHISM>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAsteroidBeltHISM::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UAsteroidBeltHISM, 3487351358);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsteroidBeltHISM(Z_Construct_UClass_UAsteroidBeltHISM, &UAsteroidBeltHISM::StaticClass, TEXT("/Script/Astrogate"), TEXT("UAsteroidBeltHISM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsteroidBeltHISM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
