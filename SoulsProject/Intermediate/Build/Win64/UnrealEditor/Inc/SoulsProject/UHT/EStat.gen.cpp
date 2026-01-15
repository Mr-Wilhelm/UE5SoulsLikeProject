// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Characters/EStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStat() {}
// Cross Module References
	SOULSPROJECT_API UEnum* Z_Construct_UEnum_SoulsProject_EStat();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStat;
	static UEnum* EStat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SoulsProject_EStat, (UObject*)Z_Construct_UPackage__Script_SoulsProject(), TEXT("EStat"));
		}
		return Z_Registration_Info_UEnum_EStat.OuterSingleton;
	}
	template<> SOULSPROJECT_API UEnum* StaticEnum<EStat>()
	{
		return EStat_StaticEnum();
	}
	struct Z_Construct_UEnum_SoulsProject_EStat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SoulsProject_EStat_Statics::Enumerators[] = {
		{ "None", (int64)None },
		{ "Health", (int64)Health },
		{ "MaxHealth", (int64)MaxHealth },
		{ "Strength", (int64)Strength },
		{ "Stamina", (int64)Stamina },
		{ "MaxStamina", (int64)MaxStamina },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SoulsProject_EStat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Health.DisplayName", "Health" },
		{ "Health.Name", "Health" },
		{ "MaxHealth.DisplayName", "MaxHealth" },
		{ "MaxHealth.Name", "MaxHealth" },
		{ "MaxStamina.DisplayName", "MaxStamina" },
		{ "MaxStamina.Name", "MaxStamina" },
		{ "ModuleRelativePath", "Public/Characters/EStat.h" },
		{ "None.DisplayName", "None Selected" },
		{ "None.Name", "None" },
		{ "Stamina.DisplayName", "Stamina" },
		{ "Stamina.Name", "Stamina" },
		{ "Strength.DisplayName", "Strength" },
		{ "Strength.Name", "Strength" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SoulsProject_EStat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SoulsProject,
		nullptr,
		"EStat",
		"EStat",
		Z_Construct_UEnum_SoulsProject_EStat_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SoulsProject_EStat_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SoulsProject_EStat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SoulsProject_EStat_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SoulsProject_EStat()
	{
		if (!Z_Registration_Info_UEnum_EStat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStat.InnerSingleton, Z_Construct_UEnum_SoulsProject_EStat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_EStat_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_EStat_h_Statics::EnumInfo[] = {
		{ EStat_StaticEnum, TEXT("EStat"), &Z_Registration_Info_UEnum_EStat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3918511869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_EStat_h_2591196671(TEXT("/Script/SoulsProject"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_EStat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_EStat_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
