// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AsteroidBelt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroidBelt() {}
// Cross Module References
	ASTROGATE_API UClass* Z_Construct_UClass_AAsteroidBelt_NoRegister();
	ASTROGATE_API UClass* Z_Construct_UClass_AAsteroidBelt();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Astrogate();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void AAsteroidBelt::StaticRegisterNativesAAsteroidBelt()
	{
	}
	UClass* Z_Construct_UClass_AAsteroidBelt_NoRegister()
	{
		return AAsteroidBelt::StaticClass();
	}
	UClass* Z_Construct_UClass_AAsteroidBelt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AsteroidBelt.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "AsteroidBelt.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsteroidMesh_MetaData[] = {
				{ "Category", "ProceduralMeshComponent" },
				{ "ModuleRelativePath", "AsteroidBelt.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AsteroidMesh = { UE4CodeGen_Private::EPropertyClass::Object, "AsteroidMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(AAsteroidBelt, AsteroidMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_AsteroidMesh_MetaData, ARRAY_COUNT(NewProp_AsteroidMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AsteroidMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAsteroidBelt>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAsteroidBelt::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AAsteroidBelt, 2058409444);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAsteroidBelt(Z_Construct_UClass_AAsteroidBelt, &AAsteroidBelt::StaticClass, TEXT("/Script/Astrogate"), TEXT("AAsteroidBelt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroidBelt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
