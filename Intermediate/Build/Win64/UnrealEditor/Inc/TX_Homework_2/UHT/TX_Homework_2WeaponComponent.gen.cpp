// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TX_Homework_2/TX_Homework_2WeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTX_Homework_2WeaponComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TX_HOMEWORK_2_API UClass* Z_Construct_UClass_ATX_Homework_2Character_NoRegister();
TX_HOMEWORK_2_API UClass* Z_Construct_UClass_ATX_Homework_2Projectile_NoRegister();
TX_HOMEWORK_2_API UClass* Z_Construct_UClass_UTX_Homework_2WeaponComponent();
TX_HOMEWORK_2_API UClass* Z_Construct_UClass_UTX_Homework_2WeaponComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TX_Homework_2();
// End Cross Module References

// Begin Class UTX_Homework_2WeaponComponent Function AttachWeapon
struct Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics
{
	struct TX_Homework_2WeaponComponent_eventAttachWeapon_Parms
	{
		ATX_Homework_2Character* TargetCharacter;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attaches the actor to a FirstPersonCharacter */" },
#endif
		{ "ModuleRelativePath", "TX_Homework_2WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attaches the actor to a FirstPersonCharacter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TX_Homework_2WeaponComponent_eventAttachWeapon_Parms, TargetCharacter), Z_Construct_UClass_ATX_Homework_2Character_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TX_Homework_2WeaponComponent_eventAttachWeapon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TX_Homework_2WeaponComponent_eventAttachWeapon_Parms), &Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::NewProp_TargetCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTX_Homework_2WeaponComponent, nullptr, "AttachWeapon", nullptr, nullptr, Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::TX_Homework_2WeaponComponent_eventAttachWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::TX_Homework_2WeaponComponent_eventAttachWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTX_Homework_2WeaponComponent::execAttachWeapon)
{
	P_GET_OBJECT(ATX_Homework_2Character,Z_Param_TargetCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AttachWeapon(Z_Param_TargetCharacter);
	P_NATIVE_END;
}
// End Class UTX_Homework_2WeaponComponent Function AttachWeapon

// Begin Class UTX_Homework_2WeaponComponent Function EndPlay
struct Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics
{
	struct TX_Homework_2WeaponComponent_eventEndPlay_Parms
	{
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ends gameplay for this component. */" },
#endif
		{ "ModuleRelativePath", "TX_Homework_2WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends gameplay for this component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TX_Homework_2WeaponComponent_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPlayReason_MetaData), NewProp_EndPlayReason_MetaData) }; // 2448981352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::NewProp_EndPlayReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTX_Homework_2WeaponComponent, nullptr, "EndPlay", nullptr, nullptr, Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::TX_Homework_2WeaponComponent_eventEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::TX_Homework_2WeaponComponent_eventEndPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTX_Homework_2WeaponComponent::execEndPlay)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason));
	P_NATIVE_END;
}
// End Class UTX_Homework_2WeaponComponent Function EndPlay

// Begin Class UTX_Homework_2WeaponComponent Function Fire
struct Z_Construct_UFunction_UTX_Homework_2WeaponComponent_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Make the weapon Fire a Projectile */" },
#endif
		{ "ModuleRelativePath", "TX_Homework_2WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make the weapon Fire a Projectile" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTX_Homework_2WeaponComponent_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTX_Homework_2WeaponComponent, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTX_Homework_2WeaponComponent_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTX_Homework_2WeaponComponent_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTX_Homework_2WeaponComponent_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTX_Homework_2WeaponComponent_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTX_Homework_2WeaponComponent::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class UTX_Homework_2WeaponComponent Function Fire

// Begin Class UTX_Homework_2WeaponComponent
void UTX_Homework_2WeaponComponent::StaticRegisterNativesUTX_Homework_2WeaponComponent()
{
	UClass* Class = UTX_Homework_2WeaponComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachWeapon", &UTX_Homework_2WeaponComponent::execAttachWeapon },
		{ "EndPlay", &UTX_Homework_2WeaponComponent::execEndPlay },
		{ "Fire", &UTX_Homework_2WeaponComponent::execFire },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTX_Homework_2WeaponComponent);
UClass* Z_Construct_UClass_UTX_Homework_2WeaponComponent_NoRegister()
{
	return UTX_Homework_2WeaponComponent::StaticClass();
}
struct Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "TX_Homework_2WeaponComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TX_Homework_2WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Projectile class to spawn */" },
#endif
		{ "ModuleRelativePath", "TX_Homework_2WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sound to play each time we fire */" },
#endif
		{ "ModuleRelativePath", "TX_Homework_2WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to play each time we fire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AnimMontage to play each time we fire */" },
#endif
		{ "ModuleRelativePath", "TX_Homework_2WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AnimMontage to play each time we fire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
#endif
		{ "ModuleRelativePath", "TX_Homework_2WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "TX_Homework_2WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire Input Action */" },
#endif
		{ "ModuleRelativePath", "TX_Homework_2WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTX_Homework_2WeaponComponent_AttachWeapon, "AttachWeapon" }, // 4120713724
		{ &Z_Construct_UFunction_UTX_Homework_2WeaponComponent_EndPlay, "EndPlay" }, // 697181711
		{ &Z_Construct_UFunction_UTX_Homework_2WeaponComponent_Fire, "Fire" }, // 2648802057
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTX_Homework_2WeaponComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTX_Homework_2WeaponComponent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATX_Homework_2Projectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTX_Homework_2WeaponComponent, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTX_Homework_2WeaponComponent, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAnimation_MetaData), NewProp_FireAnimation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTX_Homework_2WeaponComponent, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleOffset_MetaData), NewProp_MuzzleOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_FireMappingContext = { "FireMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTX_Homework_2WeaponComponent, FireMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMappingContext_MetaData), NewProp_FireMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTX_Homework_2WeaponComponent, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireAction_MetaData), NewProp_FireAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_FireAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_MuzzleOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_FireMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::NewProp_FireAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TX_Homework_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::ClassParams = {
	&UTX_Homework_2WeaponComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTX_Homework_2WeaponComponent()
{
	if (!Z_Registration_Info_UClass_UTX_Homework_2WeaponComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTX_Homework_2WeaponComponent.OuterSingleton, Z_Construct_UClass_UTX_Homework_2WeaponComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTX_Homework_2WeaponComponent.OuterSingleton;
}
template<> TX_HOMEWORK_2_API UClass* StaticClass<UTX_Homework_2WeaponComponent>()
{
	return UTX_Homework_2WeaponComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTX_Homework_2WeaponComponent);
UTX_Homework_2WeaponComponent::~UTX_Homework_2WeaponComponent() {}
// End Class UTX_Homework_2WeaponComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2WeaponComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTX_Homework_2WeaponComponent, UTX_Homework_2WeaponComponent::StaticClass, TEXT("UTX_Homework_2WeaponComponent"), &Z_Registration_Info_UClass_UTX_Homework_2WeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTX_Homework_2WeaponComponent), 100522787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2WeaponComponent_h_2226679855(TEXT("/Script/TX_Homework_2"),
	Z_CompiledInDeferFile_FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2WeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2WeaponComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS