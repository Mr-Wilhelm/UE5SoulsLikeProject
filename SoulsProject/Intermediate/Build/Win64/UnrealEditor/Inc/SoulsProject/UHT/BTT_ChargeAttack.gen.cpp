// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Characters/AI/BTT_ChargeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_ChargeAttack() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UBTT_ChargeAttack();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UBTT_ChargeAttack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	void UBTT_ChargeAttack::StaticRegisterNativesUBTT_ChargeAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_ChargeAttack);
	UClass* Z_Construct_UClass_UBTT_ChargeAttack_NoRegister()
	{
		return UBTT_ChargeAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_ChargeAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_ChargeAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_ChargeAttack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Characters/AI/BTT_ChargeAttack.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_ChargeAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_ChargeAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_ChargeAttack_Statics::ClassParams = {
		&UBTT_ChargeAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_ChargeAttack_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTT_ChargeAttack()
	{
		if (!Z_Registration_Info_UClass_UBTT_ChargeAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_ChargeAttack.OuterSingleton, Z_Construct_UClass_UBTT_ChargeAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_ChargeAttack.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<UBTT_ChargeAttack>()
	{
		return UBTT_ChargeAttack::StaticClass();
	}
	UBTT_ChargeAttack::UBTT_ChargeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_ChargeAttack);
	UBTT_ChargeAttack::~UBTT_ChargeAttack() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_ChargeAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_ChargeAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_ChargeAttack, UBTT_ChargeAttack::StaticClass, TEXT("UBTT_ChargeAttack"), &Z_Registration_Info_UClass_UBTT_ChargeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_ChargeAttack), 2210463928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_ChargeAttack_h_3458109534(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_ChargeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_ChargeAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
