// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Characters/StatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UStatsComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	SOULSPROJECT_API UEnum* Z_Construct_UEnum_SoulsProject_EStat();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	DEFINE_FUNCTION(UStatsComponent::execEnableRegen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableRegen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsComponent::execRegenStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegenStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsComponent::execReduceStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceStamina(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatsComponent::execReduceHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageToTake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceHealth(Z_Param_damageToTake);
		P_NATIVE_END;
	}
	void UStatsComponent::StaticRegisterNativesUStatsComponent()
	{
		UClass* Class = UStatsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableRegen", &UStatsComponent::execEnableRegen },
			{ "ReduceHealth", &UStatsComponent::execReduceHealth },
			{ "ReduceStamina", &UStatsComponent::execReduceStamina },
			{ "RegenStamina", &UStatsComponent::execRegenStamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "EnableRegen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UStatsComponent_EnableRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_EnableRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics
	{
		struct StatsComponent_eventReduceHealth_Parms
		{
			float damageToTake;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageToTake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::NewProp_damageToTake = { "damageToTake", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceHealth_Parms, damageToTake), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::NewProp_damageToTake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceHealth", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::StatsComponent_eventReduceHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::StatsComponent_eventReduceHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStatsComponent_ReduceHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics
	{
		struct StatsComponent_eventReduceStamina_Parms
		{
			float amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceStamina_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceStamina", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::StatsComponent_eventReduceStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::StatsComponent_eventReduceStamina_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStatsComponent_ReduceStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "RegenStamina", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UStatsComponent_RegenStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsComponent);
	UClass* Z_Construct_UClass_UStatsComponent_NoRegister()
	{
		return UStatsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStatsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaRegen_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_staminaRegen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canRegen_MetaData[];
#endif
		static void NewProp_canRegen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canRegen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaDelayDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staminaDelayDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stats_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_stats_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_stats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsComponent_EnableRegen, "EnableRegen" }, // 649744128
		{ &Z_Construct_UFunction_UStatsComponent_ReduceHealth, "ReduceHealth" }, // 2690136889
		{ &Z_Construct_UFunction_UStatsComponent_ReduceStamina, "ReduceStamina" }, // 2562558220
		{ &Z_Construct_UFunction_UStatsComponent_RegenStamina, "RegenStamina" }, // 1486298209
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/StatsComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_staminaRegen_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_staminaRegen = { "staminaRegen", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, staminaRegen), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_staminaRegen_MetaData), Z_Construct_UClass_UStatsComponent_Statics::NewProp_staminaRegen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_canRegen_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStatsComponent_Statics::NewProp_canRegen_SetBit(void* Obj)
	{
		((UStatsComponent*)Obj)->canRegen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_canRegen = { "canRegen", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatsComponent), &Z_Construct_UClass_UStatsComponent_Statics::NewProp_canRegen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_canRegen_MetaData), Z_Construct_UClass_UStatsComponent_Statics::NewProp_canRegen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_staminaDelayDuration_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_staminaDelayDuration = { "staminaDelayDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, staminaDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_staminaDelayDuration_MetaData), Z_Construct_UClass_UStatsComponent_Statics::NewProp_staminaDelayDuration_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_stats_ValueProp = { "stats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_stats_Key_KeyProp = { "stats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SoulsProject_EStat, METADATA_PARAMS(0, nullptr) }; // 3918511869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatsComponent_Statics::NewProp_stats_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, stats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::NewProp_stats_MetaData), Z_Construct_UClass_UStatsComponent_Statics::NewProp_stats_MetaData) }; // 3918511869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_staminaRegen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_canRegen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_staminaDelayDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_stats_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_stats_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_stats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsComponent_Statics::ClassParams = {
		&UStatsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStatsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStatsComponent()
	{
		if (!Z_Registration_Info_UClass_UStatsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsComponent.OuterSingleton, Z_Construct_UClass_UStatsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStatsComponent.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<UStatsComponent>()
	{
		return UStatsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsComponent);
	UStatsComponent::~UStatsComponent() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_StatsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_StatsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStatsComponent, UStatsComponent::StaticClass, TEXT("UStatsComponent"), &Z_Registration_Info_UClass_UStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsComponent), 1419560811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_StatsComponent_h_1057873405(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_StatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_StatsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
