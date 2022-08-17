// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DP_DPGameMode_generated_h
#error "DPGameMode.generated.h already included, missing '#pragma once' in DPGameMode.h"
#endif
#define DP_DPGameMode_generated_h

#define DP_Source_DP_DPGameMode_h_12_SPARSE_DATA
#define DP_Source_DP_DPGameMode_h_12_RPC_WRAPPERS
#define DP_Source_DP_DPGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DP_Source_DP_DPGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADPGameMode(); \
	friend struct Z_Construct_UClass_ADPGameMode_Statics; \
public: \
	DECLARE_CLASS(ADPGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DP"), DP_API) \
	DECLARE_SERIALIZER(ADPGameMode)


#define DP_Source_DP_DPGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADPGameMode(); \
	friend struct Z_Construct_UClass_ADPGameMode_Statics; \
public: \
	DECLARE_CLASS(ADPGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DP"), DP_API) \
	DECLARE_SERIALIZER(ADPGameMode)


#define DP_Source_DP_DPGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DP_API ADPGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADPGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DP_API, ADPGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADPGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DP_API ADPGameMode(ADPGameMode&&); \
	DP_API ADPGameMode(const ADPGameMode&); \
public:


#define DP_Source_DP_DPGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DP_API ADPGameMode(ADPGameMode&&); \
	DP_API ADPGameMode(const ADPGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DP_API, ADPGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADPGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADPGameMode)


#define DP_Source_DP_DPGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define DP_Source_DP_DPGameMode_h_9_PROLOG
#define DP_Source_DP_DPGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DP_Source_DP_DPGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	DP_Source_DP_DPGameMode_h_12_SPARSE_DATA \
	DP_Source_DP_DPGameMode_h_12_RPC_WRAPPERS \
	DP_Source_DP_DPGameMode_h_12_INCLASS \
	DP_Source_DP_DPGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DP_Source_DP_DPGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DP_Source_DP_DPGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	DP_Source_DP_DPGameMode_h_12_SPARSE_DATA \
	DP_Source_DP_DPGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DP_Source_DP_DPGameMode_h_12_INCLASS_NO_PURE_DECLS \
	DP_Source_DP_DPGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DP_API UClass* StaticClass<class ADPGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DP_Source_DP_DPGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
