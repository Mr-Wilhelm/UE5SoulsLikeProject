// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Characters/EEnemyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEnemyState() {}
// Cross Module References
	SOULSPROJECT_API UEnum* Z_Construct_UEnum_SoulsProject_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
	static UEnum* EEnemyState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SoulsProject_EEnemyState, (UObject*)Z_Construct_UPackage__Script_SoulsProject(), TEXT("EEnemyState"));
		}
		return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
	}
	template<> SOULSPROJECT_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	struct Z_Construct_UEnum_SoulsProject_EEnemyState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SoulsProject_EEnemyState_Statics::Enumerators[] = {
		{ "Idle", (int64)Idle },
		{ "Range", (int64)Range },
		{ "Charge", (int64)Charge },
		{ "Melee", (int64)Melee },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SoulsProject_EEnemyState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Charge.DisplayName", "Charge" },
		{ "Charge.Name", "Charge" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "Idle" },
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "Melee" },
		{ "ModuleRelativePath", "Public/Characters/EEnemyState.h" },
		{ "Range.DisplayName", "Range" },
		{ "Range.Name", "Range" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SoulsProject_EEnemyState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SoulsProject,
		nullptr,
		"EEnemyState",
		"EEnemyState",
		Z_Construct_UEnum_SoulsProject_EEnemyState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SoulsProject_EEnemyState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SoulsProject_EEnemyState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SoulsProject_EEnemyState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_SoulsProject_EEnemyState()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_SoulsProject_EEnemyState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_EEnemyState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_EEnemyState_h_Statics::EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1040733641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_EEnemyState_h_4294927231(TEXT("/Script/SoulsProject"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_EEnemyState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_EEnemyState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
