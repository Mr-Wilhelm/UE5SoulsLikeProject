// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Characters/AI/BTT_RangedAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_RangedAttack() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UBTT_RangedAttack();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UBTT_RangedAttack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	void UBTT_RangedAttack::StaticRegisterNativesUBTT_RangedAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_RangedAttack);
	UClass* Z_Construct_UClass_UBTT_RangedAttack_NoRegister()
	{
		return UBTT_RangedAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_RangedAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_animMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_RangedAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RangedAttack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_RangedAttack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Characters/AI/BTT_RangedAttack.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_RangedAttack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_RangedAttack_Statics::NewProp_animMontage_MetaData[] = {
		{ "Category", "BTT_RangedAttack" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_RangedAttack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTT_RangedAttack_Statics::NewProp_animMontage = { "animMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_RangedAttack, animMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RangedAttack_Statics::NewProp_animMontage_MetaData), Z_Construct_UClass_UBTT_RangedAttack_Statics::NewProp_animMontage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_RangedAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_RangedAttack_Statics::NewProp_animMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_RangedAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_RangedAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_RangedAttack_Statics::ClassParams = {
		&UBTT_RangedAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTT_RangedAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RangedAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RangedAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_RangedAttack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RangedAttack_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTT_RangedAttack()
	{
		if (!Z_Registration_Info_UClass_UBTT_RangedAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_RangedAttack.OuterSingleton, Z_Construct_UClass_UBTT_RangedAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_RangedAttack.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<UBTT_RangedAttack>()
	{
		return UBTT_RangedAttack::StaticClass();
	}
	UBTT_RangedAttack::UBTT_RangedAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_RangedAttack);
	UBTT_RangedAttack::~UBTT_RangedAttack() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_RangedAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_RangedAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_RangedAttack, UBTT_RangedAttack::StaticClass, TEXT("UBTT_RangedAttack"), &Z_Registration_Info_UClass_UBTT_RangedAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_RangedAttack), 3032984931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_RangedAttack_h_2096115158(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_RangedAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_RangedAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
