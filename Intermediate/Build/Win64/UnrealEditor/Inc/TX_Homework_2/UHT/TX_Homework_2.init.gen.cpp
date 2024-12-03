// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTX_Homework_2_init() {}
	TX_HOMEWORK_2_API UFunction* Z_Construct_UDelegateFunction_TX_Homework_2_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TX_Homework_2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TX_Homework_2()
	{
		if (!Z_Registration_Info_UPackage__Script_TX_Homework_2.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TX_Homework_2_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TX_Homework_2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x66CE4952,
				0x2B79965D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TX_Homework_2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TX_Homework_2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TX_Homework_2(Z_Construct_UPackage__Script_TX_Homework_2, TEXT("/Script/TX_Homework_2"), Z_Registration_Info_UPackage__Script_TX_Homework_2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x66CE4952, 0x2B79965D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
