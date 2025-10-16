// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Combat/BlockingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UBlockingComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UBlockingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	void UBlockingComponent::StaticRegisterNativesUBlockingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlockingComponent);
	UClass* Z_Construct_UClass_UBlockingComponent_NoRegister()
	{
		return UBlockingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlockingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlockingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockingComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/BlockingComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/BlockingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlockingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlockingComponent_Statics::ClassParams = {
		&UBlockingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlockingComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBlockingComponent()
	{
		if (!Z_Registration_Info_UClass_UBlockingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlockingComponent.OuterSingleton, Z_Construct_UClass_UBlockingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlockingComponent.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<UBlockingComponent>()
	{
		return UBlockingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockingComponent);
	UBlockingComponent::~UBlockingComponent() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_BlockingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_BlockingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlockingComponent, UBlockingComponent::StaticClass, TEXT("UBlockingComponent"), &Z_Registration_Info_UClass_UBlockingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlockingComponent), 1172614819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_BlockingComponent_h_3439865789(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_BlockingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_BlockingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
