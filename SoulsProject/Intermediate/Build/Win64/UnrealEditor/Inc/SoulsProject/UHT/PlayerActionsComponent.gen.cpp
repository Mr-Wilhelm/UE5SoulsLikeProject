// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Characters/PlayerActionsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerActionsComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ULockOnComponent_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UPlayerActionsComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister();
	SOULSPROJECT_API UFunction* Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics
	{
		struct _Script_SoulsProject_eventOnSprintSignature_Parms
		{
			float cost;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SoulsProject_eventOnSprintSignature_Parms, cost), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::NewProp_cost,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SoulsProject, nullptr, "OnSprintSignature__DelegateSignature", "PlayerActionsComponent", "onSprintDelegate", Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::_Script_SoulsProject_eventOnSprintSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::_Script_SoulsProject_eventOnSprintSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSprintSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSprintSignature, float cost)
{
	struct _Script_SoulsProject_eventOnSprintSignature_Parms
	{
		float cost;
	};
	_Script_SoulsProject_eventOnSprintSignature_Parms Parms;
	Parms.cost=cost;
	OnSprintSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPlayerActionsComponent::execWalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Walk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerActionsComponent::execSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sprint();
		P_NATIVE_END;
	}
	void UPlayerActionsComponent::StaticRegisterNativesUPlayerActionsComponent()
	{
		UClass* Class = UPlayerActionsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Sprint", &UPlayerActionsComponent::execSprint },
			{ "Walk", &UPlayerActionsComponent::execWalk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerActionsComponent, nullptr, "Sprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerActionsComponent_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerActionsComponent, nullptr, "Walk", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerActionsComponent_Walk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerActionsComponent);
	UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister()
	{
		return UPlayerActionsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerActionsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sprintCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sprintCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onSprintDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSprintDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lockOnComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lockOnComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerActionsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerActionsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerActionsComponent_Sprint, "Sprint" }, // 66111659
		{ &Z_Construct_UFunction_UPlayerActionsComponent_Walk, "Walk" }, // 1876676772
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/PlayerActionsComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_sprintCost_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_sprintCost = { "sprintCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, sprintCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_sprintCost_MetaData), Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_sprintCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, walkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_walkSpeed_MetaData), Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_walkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_sprintSpeed_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_sprintSpeed = { "sprintSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, sprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_sprintSpeed_MetaData), Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_sprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_onSprintDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_onSprintDelegate = { "onSprintDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, onSprintDelegate), Z_Construct_USparseDelegateFunction_SoulsProject_OnSprintSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_onSprintDelegate_MetaData), Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_onSprintDelegate_MetaData) }; // 1475522075
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_lockOnComponent_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_lockOnComponent = { "lockOnComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, lockOnComponent), Z_Construct_UClass_ULockOnComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_lockOnComponent_MetaData), Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_lockOnComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_sprintCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_walkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_sprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_onSprintDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_lockOnComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerActionsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerActionsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerActionsComponent_Statics::ClassParams = {
		&UPlayerActionsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerActionsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerActionsComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton, Z_Construct_UClass_UPlayerActionsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<UPlayerActionsComponent>()
	{
		return UPlayerActionsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerActionsComponent);
	UPlayerActionsComponent::~UPlayerActionsComponent() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_PlayerActionsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerActionsComponent, UPlayerActionsComponent::StaticClass, TEXT("UPlayerActionsComponent"), &Z_Registration_Info_UClass_UPlayerActionsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerActionsComponent), 883653210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_PlayerActionsComponent_h_2937035104(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
