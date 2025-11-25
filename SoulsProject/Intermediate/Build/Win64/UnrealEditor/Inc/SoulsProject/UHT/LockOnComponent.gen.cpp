// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Combat/LockOnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockOnComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ULockOnComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ULockOnComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	DEFINE_FUNCTION(ULockOnComponent::execStartLockon)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lockonRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLockon(Z_Param_lockonRange);
		P_NATIVE_END;
	}
	void ULockOnComponent::StaticRegisterNativesULockOnComponent()
	{
		UClass* Class = ULockOnComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartLockon", &ULockOnComponent::execStartLockon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics
	{
		struct LockOnComponent_eventStartLockon_Parms
		{
			float lockonRange;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lockonRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::NewProp_lockonRange = { "lockonRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnComponent_eventStartLockon_Parms, lockonRange), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::NewProp_lockonRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_lockonRange", "750.000000" },
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "StartLockon", nullptr, nullptr, Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::LockOnComponent_eventStartLockon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::LockOnComponent_eventStartLockon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULockOnComponent_StartLockon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_StartLockon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULockOnComponent);
	UClass* Z_Construct_UClass_ULockOnComponent_NoRegister()
	{
		return ULockOnComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULockOnComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockOnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULockOnComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockOnComponent_StartLockon, "StartLockon" }, // 3235375785
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/LockOnComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockOnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockOnComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockOnComponent_Statics::ClassParams = {
		&ULockOnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULockOnComponent()
	{
		if (!Z_Registration_Info_UClass_ULockOnComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULockOnComponent.OuterSingleton, Z_Construct_UClass_ULockOnComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULockOnComponent.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<ULockOnComponent>()
	{
		return ULockOnComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULockOnComponent);
	ULockOnComponent::~ULockOnComponent() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_LockOnComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_LockOnComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULockOnComponent, ULockOnComponent::StaticClass, TEXT("ULockOnComponent"), &Z_Registration_Info_UClass_ULockOnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockOnComponent), 4046499581U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_LockOnComponent_h_2165461060(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_LockOnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_LockOnComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
