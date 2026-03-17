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
	DEFINE_FUNCTION(UBTT_ChargeAttack::execFinishAttackTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishAttackTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBTT_ChargeAttack::execHandleMoveCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMoveCompleted();
		P_NATIVE_END;
	}
	void UBTT_ChargeAttack::StaticRegisterNativesUBTT_ChargeAttack()
	{
		UClass* Class = UBTT_ChargeAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishAttackTask", &UBTT_ChargeAttack::execFinishAttackTask },
			{ "HandleMoveCompleted", &UBTT_ChargeAttack::execHandleMoveCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_ChargeAttack, nullptr, "FinishAttackTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_ChargeAttack, nullptr, "HandleMoveCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_ChargeAttack);
	UClass* Z_Construct_UClass_UBTT_ChargeAttack_NoRegister()
	{
		return UBTT_ChargeAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_ChargeAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_acceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_acceptanceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chargeSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_chargeSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_ChargeAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTT_ChargeAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask, "FinishAttackTask" }, // 1574397744
		{ &Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted, "HandleMoveCompleted" }, // 452757289
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_ChargeAttack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Characters/AI/BTT_ChargeAttack.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_acceptanceRadius_MetaData[] = {
		{ "Category", "BTT_ChargeAttack" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_acceptanceRadius = { "acceptanceRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_ChargeAttack, acceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_acceptanceRadius_MetaData), Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_acceptanceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_chargeSpeed_MetaData[] = {
		{ "Category", "BTT_ChargeAttack" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_chargeSpeed = { "chargeSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_ChargeAttack, chargeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_chargeSpeed_MetaData), Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_chargeSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_acceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_chargeSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_ChargeAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_ChargeAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_ChargeAttack_Statics::ClassParams = {
		&UBTT_ChargeAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_ChargeAttack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers) < 2048);
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_ChargeAttack);
	UBTT_ChargeAttack::~UBTT_ChargeAttack() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_ChargeAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_ChargeAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_ChargeAttack, UBTT_ChargeAttack::StaticClass, TEXT("UBTT_ChargeAttack"), &Z_Registration_Info_UClass_UBTT_ChargeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_ChargeAttack), 2811130196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_ChargeAttack_h_1696577005(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_ChargeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_AI_BTT_ChargeAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
