// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TX_Homework_2/TX_Homework_2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTX_Homework_2GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TX_HOMEWORK_2_API UClass* Z_Construct_UClass_ATX_Homework_2GameMode();
TX_HOMEWORK_2_API UClass* Z_Construct_UClass_ATX_Homework_2GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TX_Homework_2();
// End Cross Module References

// Begin Class ATX_Homework_2GameMode
void ATX_Homework_2GameMode::StaticRegisterNativesATX_Homework_2GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATX_Homework_2GameMode);
UClass* Z_Construct_UClass_ATX_Homework_2GameMode_NoRegister()
{
	return ATX_Homework_2GameMode::StaticClass();
}
struct Z_Construct_UClass_ATX_Homework_2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TX_Homework_2GameMode.h" },
		{ "ModuleRelativePath", "TX_Homework_2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATX_Homework_2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATX_Homework_2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TX_Homework_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATX_Homework_2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATX_Homework_2GameMode_Statics::ClassParams = {
	&ATX_Homework_2GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATX_Homework_2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATX_Homework_2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATX_Homework_2GameMode()
{
	if (!Z_Registration_Info_UClass_ATX_Homework_2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATX_Homework_2GameMode.OuterSingleton, Z_Construct_UClass_ATX_Homework_2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATX_Homework_2GameMode.OuterSingleton;
}
template<> TX_HOMEWORK_2_API UClass* StaticClass<ATX_Homework_2GameMode>()
{
	return ATX_Homework_2GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATX_Homework_2GameMode);
ATX_Homework_2GameMode::~ATX_Homework_2GameMode() {}
// End Class ATX_Homework_2GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATX_Homework_2GameMode, ATX_Homework_2GameMode::StaticClass, TEXT("ATX_Homework_2GameMode"), &Z_Registration_Info_UClass_ATX_Homework_2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATX_Homework_2GameMode), 1217669045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2GameMode_h_419622772(TEXT("/Script/TX_Homework_2"),
	Z_CompiledInDeferFile_FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TX_Homework_2_Source_TX_Homework_2_TX_Homework_2GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
