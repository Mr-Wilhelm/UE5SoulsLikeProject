// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Characters/BossCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ABossCharacter();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ABossCharacter_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UEnemyProjectileComponent_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	SOULSPROJECT_API UEnum* Z_Construct_UEnum_SoulsProject_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	DEFINE_FUNCTION(ABossCharacter::execDetectPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_pawnDetected);
		P_GET_OBJECT(APawn,Z_Param_pawnToFind);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetectPawn(Z_Param_pawnDetected,Z_Param_pawnToFind);
		P_NATIVE_END;
	}
	void ABossCharacter::StaticRegisterNativesABossCharacter()
	{
		UClass* Class = ABossCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DetectPawn", &ABossCharacter::execDetectPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics
	{
		struct BossCharacter_eventDetectPawn_Parms
		{
			APawn* pawnDetected;
			APawn* pawnToFind;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pawnDetected;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pawnToFind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::NewProp_pawnDetected = { "pawnDetected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventDetectPawn_Parms, pawnDetected), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::NewProp_pawnToFind = { "pawnToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventDetectPawn_Parms, pawnToFind), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::NewProp_pawnDetected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::NewProp_pawnToFind,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "DetectPawn", nullptr, nullptr, Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::BossCharacter_eventDetectPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::BossCharacter_eventDetectPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABossCharacter_DetectPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABossCharacter);
	UClass* Z_Construct_UClass_ABossCharacter_NoRegister()
	{
		return ABossCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABossCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initialState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_initialState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_statsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_statsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyProjectileComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyProjectileComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABossCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABossCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABossCharacter_DetectPawn, "DetectPawn" }, // 4167194840
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/BossCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABossCharacter_Statics::NewProp_initialState_MetaData[] = {
		{ "Category", "BossCharacter" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_initialState = { "initialState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, initialState), Z_Construct_UEnum_SoulsProject_EEnemyState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::NewProp_initialState_MetaData), Z_Construct_UClass_ABossCharacter_Statics::NewProp_initialState_MetaData) }; // 3100792410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABossCharacter_Statics::NewProp_statsComponent_MetaData[] = {
		{ "Category", "BossCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_statsComponent = { "statsComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, statsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::NewProp_statsComponent_MetaData), Z_Construct_UClass_ABossCharacter_Statics::NewProp_statsComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABossCharacter_Statics::NewProp_enemyProjectileComponent_MetaData[] = {
		{ "Category", "BossCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_enemyProjectileComponent = { "enemyProjectileComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, enemyProjectileComponent), Z_Construct_UClass_UEnemyProjectileComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::NewProp_enemyProjectileComponent_MetaData), Z_Construct_UClass_ABossCharacter_Statics::NewProp_enemyProjectileComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABossCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_initialState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_statsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_enemyProjectileComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABossCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemy_NoRegister, (int32)VTABLE_OFFSET(ABossCharacter, IEnemy), false },  // 934961268
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABossCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABossCharacter_Statics::ClassParams = {
		&ABossCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABossCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABossCharacter()
	{
		if (!Z_Registration_Info_UClass_ABossCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABossCharacter.OuterSingleton, Z_Construct_UClass_ABossCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABossCharacter.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<ABossCharacter>()
	{
		return ABossCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABossCharacter);
	ABossCharacter::~ABossCharacter() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_BossCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_BossCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABossCharacter, ABossCharacter::StaticClass, TEXT("ABossCharacter"), &Z_Registration_Info_UClass_ABossCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABossCharacter), 4167386382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_BossCharacter_h_2972881323(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_BossCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_BossCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
