// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStaticMeshComponent() {}
// Cross Module References
	ASTROGATE_API UClass* Z_Construct_UClass_UMyStaticMeshComponent_NoRegister();
	ASTROGATE_API UClass* Z_Construct_UClass_UMyStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Astrogate();
// End Cross Module References
	void UMyStaticMeshComponent::StaticRegisterNativesUMyStaticMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UMyStaticMeshComponent_NoRegister()
	{
		return UMyStaticMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Astrogate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "MyStaticMeshComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "MyStaticMeshComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyStaticMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyStaticMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyStaticMeshComponent, 4117375151);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyStaticMeshComponent(Z_Construct_UClass_UMyStaticMeshComponent, &UMyStaticMeshComponent::StaticClass, TEXT("/Script/Astrogate"), TEXT("UMyStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
