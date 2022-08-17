// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DP_DPCharacter_generated_h
#error "DPCharacter.generated.h already included, missing '#pragma once' in DPCharacter.h"
#endif
#define DP_DPCharacter_generated_h

#define DP_Source_DP_DPCharacter_h_12_SPARSE_DATA
#define DP_Source_DP_DPCharacter_h_12_RPC_WRAPPERS
#define DP_Source_DP_DPCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DP_Source_DP_DPCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADPCharacter(); \
	friend struct Z_Construct_UClass_ADPCharacter_Statics; \
public: \
	DECLARE_CLASS(ADPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DP"), NO_API) \
	DECLARE_SERIALIZER(ADPCharacter)


#define DP_Source_DP_DPCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADPCharacter(); \
	friend struct Z_Construct_UClass_ADPCharacter_Statics; \
public: \
	DECLARE_CLASS(ADPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DP"), NO_API) \
	DECLARE_SERIALIZER(ADPCharacter)


#define DP_Source_DP_DPCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADPCharacter(ADPCharacter&&); \
	NO_API ADPCharacter(const ADPCharacter&); \
public:


#define DP_Source_DP_DPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADPCharacter(ADPCharacter&&); \
	NO_API ADPCharacter(const ADPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADPCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADPCharacter)


#define DP_Source_DP_DPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADPCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADPCharacter, FollowCamera); }


#define DP_Source_DP_DPCharacter_h_9_PROLOG
#define DP_Source_DP_DPCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DP_Source_DP_DPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DP_Source_DP_DPCharacter_h_12_SPARSE_DATA \
	DP_Source_DP_DPCharacter_h_12_RPC_WRAPPERS \
	DP_Source_DP_DPCharacter_h_12_INCLASS \
	DP_Source_DP_DPCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DP_Source_DP_DPCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DP_Source_DP_DPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DP_Source_DP_DPCharacter_h_12_SPARSE_DATA \
	DP_Source_DP_DPCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DP_Source_DP_DPCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DP_Source_DP_DPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DP_API UClass* StaticClass<class ADPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DP_Source_DP_DPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
