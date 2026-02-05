// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Characters/LookAtPlayerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtPlayerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ULookAtPlayerComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ULookAtPlayerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	void ULookAtPlayerComponent::StaticRegisterNativesULookAtPlayerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULookAtPlayerComponent);
	UClass* Z_Construct_UClass_ULookAtPlayerComponent_NoRegister()
	{
		return ULookAtPlayerComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULookAtPlayerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canRotate_MetaData[];
#endif
		static void NewProp_canRotate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canRotate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULookAtPlayerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtPlayerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/LookAtPlayerComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/LookAtPlayerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "LookAtPlayerComponent" },
		{ "ModuleRelativePath", "Public/Characters/LookAtPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULookAtPlayerComponent, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_speed_MetaData), Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_canRotate_MetaData[] = {
		{ "Category", "LookAtPlayerComponent" },
		{ "ModuleRelativePath", "Public/Characters/LookAtPlayerComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_canRotate_SetBit(void* Obj)
	{
		((ULookAtPlayerComponent*)Obj)->canRotate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_canRotate = { "canRotate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULookAtPlayerComponent), &Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_canRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_canRotate_MetaData), Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_canRotate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULookAtPlayerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAtPlayerComponent_Statics::NewProp_canRotate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULookAtPlayerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookAtPlayerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULookAtPlayerComponent_Statics::ClassParams = {
		&ULookAtPlayerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULookAtPlayerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULookAtPlayerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULookAtPlayerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULookAtPlayerComponent()
	{
		if (!Z_Registration_Info_UClass_ULookAtPlayerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULookAtPlayerComponent.OuterSingleton, Z_Construct_UClass_ULookAtPlayerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULookAtPlayerComponent.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<ULookAtPlayerComponent>()
	{
		return ULookAtPlayerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAtPlayerComponent);
	ULookAtPlayerComponent::~ULookAtPlayerComponent() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_LookAtPlayerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_LookAtPlayerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULookAtPlayerComponent, ULookAtPlayerComponent::StaticClass, TEXT("ULookAtPlayerComponent"), &Z_Registration_Info_UClass_ULookAtPlayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULookAtPlayerComponent), 1263663135U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_LookAtPlayerComponent_h_2839108038(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_LookAtPlayerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_LookAtPlayerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
