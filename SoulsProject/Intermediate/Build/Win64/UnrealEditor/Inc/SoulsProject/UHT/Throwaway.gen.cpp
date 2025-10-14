// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Throwaway.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowaway() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UThrowaway();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UThrowaway_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	void UThrowaway::StaticRegisterNativesUThrowaway()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThrowaway);
	UClass* Z_Construct_UClass_UThrowaway_NoRegister()
	{
		return UThrowaway::StaticClass();
	}
	struct Z_Construct_UClass_UThrowaway_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrowaway_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowaway_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowaway_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Throwaway.h" },
		{ "ModuleRelativePath", "Public/Throwaway.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrowaway_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrowaway>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrowaway_Statics::ClassParams = {
		&UThrowaway::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowaway_Statics::Class_MetaDataParams), Z_Construct_UClass_UThrowaway_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UThrowaway()
	{
		if (!Z_Registration_Info_UClass_UThrowaway.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrowaway.OuterSingleton, Z_Construct_UClass_UThrowaway_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThrowaway.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<UThrowaway>()
	{
		return UThrowaway::StaticClass();
	}
	UThrowaway::UThrowaway(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowaway);
	UThrowaway::~UThrowaway() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Throwaway_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Throwaway_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThrowaway, UThrowaway::StaticClass, TEXT("UThrowaway"), &Z_Registration_Info_UClass_UThrowaway, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrowaway), 1903703463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Throwaway_h_3063120186(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Throwaway_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Throwaway_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
