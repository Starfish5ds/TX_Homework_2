// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TX_Homework_2Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TX_HOMEWORK_2_TX_Homework_2Projectile_generated_h
#error "TX_Homework_2Projectile.generated.h already included, missing '#pragma once' in TX_Homework_2Projectile.h"
#endif
#define TX_HOMEWORK_2_TX_Homework_2Projectile_generated_h

#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATX_Homework_2Projectile(); \
	friend struct Z_Construct_UClass_ATX_Homework_2Projectile_Statics; \
public: \
	DECLARE_CLASS(ATX_Homework_2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TX_Homework_2"), NO_API) \
	DECLARE_SERIALIZER(ATX_Homework_2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATX_Homework_2Projectile(ATX_Homework_2Projectile&&); \
	ATX_Homework_2Projectile(const ATX_Homework_2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATX_Homework_2Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATX_Homework_2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATX_Homework_2Projectile) \
	NO_API virtual ~ATX_Homework_2Projectile();


#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2Projectile_h_12_PROLOG
#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TX_HOMEWORK_2_API UClass* StaticClass<class ATX_Homework_2Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
