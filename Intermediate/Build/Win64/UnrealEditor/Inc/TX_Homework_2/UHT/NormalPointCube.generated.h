// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NormalPointCube.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TX_HOMEWORK_2_NormalPointCube_generated_h
#error "NormalPointCube.generated.h already included, missing '#pragma once' in NormalPointCube.h"
#endif
#define TX_HOMEWORK_2_NormalPointCube_generated_h

#define FID_TX_Homework_2_Source_TX_Homework_2_NormalPointCube_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckActor);


#define FID_TX_Homework_2_Source_TX_Homework_2_NormalPointCube_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANormalPointCube(); \
	friend struct Z_Construct_UClass_ANormalPointCube_Statics; \
public: \
	DECLARE_CLASS(ANormalPointCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TX_Homework_2"), NO_API) \
	DECLARE_SERIALIZER(ANormalPointCube)


#define FID_TX_Homework_2_Source_TX_Homework_2_NormalPointCube_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANormalPointCube(ANormalPointCube&&); \
	ANormalPointCube(const ANormalPointCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANormalPointCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANormalPointCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANormalPointCube) \
	NO_API virtual ~ANormalPointCube();


#define FID_TX_Homework_2_Source_TX_Homework_2_NormalPointCube_h_9_PROLOG
#define FID_TX_Homework_2_Source_TX_Homework_2_NormalPointCube_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TX_Homework_2_Source_TX_Homework_2_NormalPointCube_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TX_Homework_2_Source_TX_Homework_2_NormalPointCube_h_12_INCLASS_NO_PURE_DECLS \
	FID_TX_Homework_2_Source_TX_Homework_2_NormalPointCube_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TX_HOMEWORK_2_API UClass* StaticClass<class ANormalPointCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TX_Homework_2_Source_TX_Homework_2_NormalPointCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
