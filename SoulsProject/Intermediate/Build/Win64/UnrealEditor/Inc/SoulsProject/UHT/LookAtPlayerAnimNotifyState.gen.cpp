// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Animations/LookAtPlayerAnimNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtPlayerAnimNotifyState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ULookAtPlayerAnimNotifyState();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ULookAtPlayerAnimNotifyState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	void ULookAtPlayerAnimNotifyState::StaticRegisterNativesULookAtPlayerAnimNotifyState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULookAtPlayerAnimNotifyState);
	UClass* Z_Construct_UClass_ULookAtPlayerAnimNotifyState_NoRegister()
	{
		return ULookAtPlayerAnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/LookAtPlayerAnimNotifyState.h" },
		{ "ModuleRelativePath", "Public/Animations/LookAtPlayerAnimNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookAtPlayerAnimNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::ClassParams = {
		&ULookAtPlayerAnimNotifyState::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULookAtPlayerAnimNotifyState()
	{
		if (!Z_Registration_Info_UClass_ULookAtPlayerAnimNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULookAtPlayerAnimNotifyState.OuterSingleton, Z_Construct_UClass_ULookAtPlayerAnimNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULookAtPlayerAnimNotifyState.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<ULookAtPlayerAnimNotifyState>()
	{
		return ULookAtPlayerAnimNotifyState::StaticClass();
	}
	ULookAtPlayerAnimNotifyState::ULookAtPlayerAnimNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAtPlayerAnimNotifyState);
	ULookAtPlayerAnimNotifyState::~ULookAtPlayerAnimNotifyState() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Animations_LookAtPlayerAnimNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Animations_LookAtPlayerAnimNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULookAtPlayerAnimNotifyState, ULookAtPlayerAnimNotifyState::StaticClass, TEXT("ULookAtPlayerAnimNotifyState"), &Z_Registration_Info_UClass_ULookAtPlayerAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULookAtPlayerAnimNotifyState), 2430101442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Animations_LookAtPlayerAnimNotifyState_h_1148872727(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Animations_LookAtPlayerAnimNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Animations_LookAtPlayerAnimNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
