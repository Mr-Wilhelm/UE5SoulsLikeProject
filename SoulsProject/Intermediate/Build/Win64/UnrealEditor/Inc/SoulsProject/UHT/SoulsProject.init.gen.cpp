// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulsProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SoulsProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SoulsProject()
	{
		if (!Z_Registration_Info_UPackage__Script_SoulsProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SoulsProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x96E55B04,
				0x961116FB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SoulsProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SoulsProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SoulsProject(Z_Construct_UPackage__Script_SoulsProject, TEXT("/Script/SoulsProject"), Z_Registration_Info_UPackage__Script_SoulsProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x96E55B04, 0x961116FB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
