// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TX_Homework_2PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATX_Homework_2Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TX_HOMEWORK_2_TX_Homework_2PickUpComponent_generated_h
#error "TX_Homework_2PickUpComponent.generated.h already included, missing '#pragma once' in TX_Homework_2PickUpComponent.h"
#endif
#define TX_HOMEWORK_2_TX_Homework_2PickUpComponent_generated_h

#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2PickUpComponent_h_12_DELEGATE \
TX_HOMEWORK_2_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ATX_Homework_2Character* PickUpCharacter);


#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTX_Homework_2PickUpComponent(); \
	friend struct Z_Construct_UClass_UTX_Homework_2PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UTX_Homework_2PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TX_Homework_2"), NO_API) \
	DECLARE_SERIALIZER(UTX_Homework_2PickUpComponent)


#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTX_Homework_2PickUpComponent(UTX_Homework_2PickUpComponent&&); \
	UTX_Homework_2PickUpComponent(const UTX_Homework_2PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTX_Homework_2PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTX_Homework_2PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTX_Homework_2PickUpComponent) \
	NO_API virtual ~UTX_Homework_2PickUpComponent();


#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2PickUpComponent_h_14_PROLOG
#define FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TX_HOMEWORK_2_API UClass* StaticClass<class UTX_Homework_2PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
