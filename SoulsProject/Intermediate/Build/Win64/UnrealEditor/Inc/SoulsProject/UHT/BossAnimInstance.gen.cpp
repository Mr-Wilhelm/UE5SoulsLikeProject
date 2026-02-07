// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Animations/BossAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UBossAnimInstance();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UBossAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	void UBossAnimInstance::StaticRegisterNativesUBossAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBossAnimInstance);
	UClass* Z_Construct_UClass_UBossAnimInstance_NoRegister()
	{
		return UBossAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBossAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isCharging_MetaData[];
#endif
		static void NewProp_isCharging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isCharging;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBossAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/BossAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_currentSpeed_MetaData[] = {
		{ "Category", "BossAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_currentSpeed = { "currentSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBossAnimInstance, currentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_currentSpeed_MetaData), Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_currentSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isCharging_MetaData[] = {
		{ "Category", "BossAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isCharging_SetBit(void* Obj)
	{
		((UBossAnimInstance*)Obj)->isCharging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isCharging = { "isCharging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isCharging_MetaData), Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isCharging_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_currentSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_isCharging,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBossAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBossAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBossAnimInstance_Statics::ClassParams = {
		&UBossAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBossAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UBossAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBossAnimInstance.OuterSingleton, Z_Construct_UClass_UBossAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBossAnimInstance.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<UBossAnimInstance>()
	{
		return UBossAnimInstance::StaticClass();
	}
	UBossAnimInstance::UBossAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBossAnimInstance);
	UBossAnimInstance::~UBossAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Animations_BossAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Animations_BossAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBossAnimInstance, UBossAnimInstance::StaticClass, TEXT("UBossAnimInstance"), &Z_Registration_Info_UClass_UBossAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBossAnimInstance), 2319725917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Animations_BossAnimInstance_h_2602918498(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Animations_BossAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Animations_BossAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
