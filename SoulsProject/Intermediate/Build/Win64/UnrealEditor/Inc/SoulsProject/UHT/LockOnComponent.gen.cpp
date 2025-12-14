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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ULockOnComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ULockOnComponent_NoRegister();
	SOULSPROJECT_API UFunction* Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics
	{
		struct _Script_SoulsProject_eventOnUpdatedTargetSignature_Parms
		{
			AActor* newTargetActorRef;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newTargetActorRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::NewProp_newTargetActorRef = { "newTargetActorRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SoulsProject_eventOnUpdatedTargetSignature_Parms, newTargetActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::NewProp_newTargetActorRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//an event taking in one parameter --- Signature distinguishes the delegate type from  a delegate instance\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "an event taking in one parameter --- Signature distinguishes the delegate type from  a delegate instance" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SoulsProject, nullptr, "OnUpdatedTargetSignature__DelegateSignature", "LockOnComponent", "onUpdatedTargetDelegate", Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::_Script_SoulsProject_eventOnUpdatedTargetSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::_Script_SoulsProject_eventOnUpdatedTargetSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnUpdatedTargetSignature_DelegateWrapper(const FMulticastScriptDelegate& OnUpdatedTargetSignature, AActor* newTargetActorRef)
{
	struct _Script_SoulsProject_eventOnUpdatedTargetSignature_Parms
	{
		AActor* newTargetActorRef;
	};
	_Script_SoulsProject_eventOnUpdatedTargetSignature_Parms Parms;
	Parms.newTargetActorRef=newTargetActorRef;
	OnUpdatedTargetSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULockOnComponent::execToggleLockon)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lockonRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleLockon(Z_Param_lockonRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULockOnComponent::execEndLockon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndLockon();
		P_NATIVE_END;
	}
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
			{ "EndLockon", &ULockOnComponent::execEndLockon },
			{ "StartLockon", &ULockOnComponent::execStartLockon },
			{ "ToggleLockon", &ULockOnComponent::execToggleLockon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULockOnComponent_EndLockon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_EndLockon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_EndLockon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "EndLockon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_EndLockon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_EndLockon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULockOnComponent_EndLockon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_EndLockon_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics
	{
		struct LockOnComponent_eventToggleLockon_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::NewProp_lockonRange = { "lockonRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockOnComponent_eventToggleLockon_Parms, lockonRange), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::NewProp_lockonRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_lockonRange", "750.000000" },
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULockOnComponent, nullptr, "ToggleLockon", nullptr, nullptr, Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::LockOnComponent_eventToggleLockon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::LockOnComponent_eventToggleLockon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULockOnComponent_ToggleLockon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULockOnComponent_ToggleLockon_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onUpdatedTargetDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onUpdatedTargetDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_breakDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_breakDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULockOnComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULockOnComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULockOnComponent_EndLockon, "EndLockon" }, // 1461738789
		{ &Z_Construct_UFunction_ULockOnComponent_StartLockon, "StartLockon" }, // 3235375785
		{ &Z_Construct_UFunction_ULockOnComponent_ToggleLockon, "ToggleLockon" }, // 903101773
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_onUpdatedTargetDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_onUpdatedTargetDelegate = { "onUpdatedTargetDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, onUpdatedTargetDelegate), Z_Construct_USparseDelegateFunction_SoulsProject_OnUpdatedTargetSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_onUpdatedTargetDelegate_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_onUpdatedTargetDelegate_MetaData) }; // 909036189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULockOnComponent_Statics::NewProp_breakDistance_MetaData[] = {
		{ "Category", "LockOnComponent" },
		{ "ModuleRelativePath", "Public/Combat/LockOnComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULockOnComponent_Statics::NewProp_breakDistance = { "breakDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULockOnComponent, breakDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::NewProp_breakDistance_MetaData), Z_Construct_UClass_ULockOnComponent_Statics::NewProp_breakDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULockOnComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_onUpdatedTargetDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULockOnComponent_Statics::NewProp_breakDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULockOnComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULockOnComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULockOnComponent_Statics::ClassParams = {
		&ULockOnComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULockOnComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULockOnComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULockOnComponent_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_ULockOnComponent, ULockOnComponent::StaticClass, TEXT("ULockOnComponent"), &Z_Registration_Info_UClass_ULockOnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULockOnComponent), 4099164198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_LockOnComponent_h_1954279947(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_LockOnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_LockOnComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
