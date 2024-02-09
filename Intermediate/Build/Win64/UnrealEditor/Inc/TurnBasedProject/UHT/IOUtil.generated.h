// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IOUtil.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TURNBASEDPROJECT_IOUtil_generated_h
#error "IOUtil.generated.h already included, missing '#pragma once' in IOUtil.h"
#endif
#define TURNBASEDPROJECT_IOUtil_generated_h

#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_SPARSE_DATA
#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadString); \
	DECLARE_FUNCTION(execFileSaveString);


#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadString); \
	DECLARE_FUNCTION(execFileSaveString);


#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_ACCESSORS
#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIOUtil(); \
	friend struct Z_Construct_UClass_UIOUtil_Statics; \
public: \
	DECLARE_CLASS(UIOUtil, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnBasedProject"), NO_API) \
	DECLARE_SERIALIZER(UIOUtil)


#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUIOUtil(); \
	friend struct Z_Construct_UClass_UIOUtil_Statics; \
public: \
	DECLARE_CLASS(UIOUtil, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TurnBasedProject"), NO_API) \
	DECLARE_SERIALIZER(UIOUtil)


#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOUtil(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOUtil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOUtil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIOUtil(UIOUtil&&); \
	NO_API UIOUtil(const UIOUtil&); \
public: \
	NO_API virtual ~UIOUtil();


#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIOUtil(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIOUtil(UIOUtil&&); \
	NO_API UIOUtil(const UIOUtil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIOUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIOUtil); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIOUtil) \
	NO_API virtual ~UIOUtil();


#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_12_PROLOG
#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_SPARSE_DATA \
	FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_RPC_WRAPPERS \
	FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_ACCESSORS \
	FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_INCLASS \
	FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_SPARSE_DATA \
	FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_ACCESSORS \
	FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_INCLASS_NO_PURE_DECLS \
	FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TURNBASEDPROJECT_API UClass* StaticClass<class UIOUtil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
