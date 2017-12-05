// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTROGATE_AsteroidBeltComponent_generated_h
#error "AsteroidBeltComponent.generated.h already included, missing '#pragma once' in AsteroidBeltComponent.h"
#endif
#define ASTROGATE_AsteroidBeltComponent_generated_h

#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_14_GENERATED_BODY \
	friend ASTROGATE_API class UScriptStruct* Z_Construct_UScriptStruct_FAsteroidStruct2(); \
	ASTROGATE_API static class UScriptStruct* StaticStruct();


#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnAsteroids) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SpawnAsteroids(Z_Param_Num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Init(); \
		P_NATIVE_END; \
	}


#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnAsteroids) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SpawnAsteroids(Z_Param_Num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Init(); \
		P_NATIVE_END; \
	}


#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsteroidBeltComponent(); \
	friend ASTROGATE_API class UClass* Z_Construct_UClass_UAsteroidBeltComponent(); \
public: \
	DECLARE_CLASS(UAsteroidBeltComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Astrogate"), NO_API) \
	DECLARE_SERIALIZER(UAsteroidBeltComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUAsteroidBeltComponent(); \
	friend ASTROGATE_API class UClass* Z_Construct_UClass_UAsteroidBeltComponent(); \
public: \
	DECLARE_CLASS(UAsteroidBeltComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Astrogate"), NO_API) \
	DECLARE_SERIALIZER(UAsteroidBeltComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsteroidBeltComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsteroidBeltComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsteroidBeltComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsteroidBeltComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsteroidBeltComponent(UAsteroidBeltComponent&&); \
	NO_API UAsteroidBeltComponent(const UAsteroidBeltComponent&); \
public:


#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsteroidBeltComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsteroidBeltComponent(UAsteroidBeltComponent&&); \
	NO_API UAsteroidBeltComponent(const UAsteroidBeltComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsteroidBeltComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsteroidBeltComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsteroidBeltComponent)


#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_PRIVATE_PROPERTY_OFFSET
#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_51_PROLOG
#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_RPC_WRAPPERS \
	Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_INCLASS \
	Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_INCLASS_NO_PURE_DECLS \
	Astrogate_Source_Astrogate_AsteroidBeltComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Astrogate_Source_Astrogate_AsteroidBeltComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
