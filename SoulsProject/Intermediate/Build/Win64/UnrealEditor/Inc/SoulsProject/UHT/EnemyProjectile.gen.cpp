// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Combat/EnemyProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_AEnemyProjectile();
	SOULSPROJECT_API UClass* Z_Construct_UClass_AEnemyProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyProjectile::execDestroyProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyProjectile::execHandleBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBeginOverlap(Z_Param_otherActor);
		P_NATIVE_END;
	}
	void AEnemyProjectile::StaticRegisterNativesAEnemyProjectile()
	{
		UClass* Class = AEnemyProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyProjectile", &AEnemyProjectile::execDestroyProjectile },
			{ "HandleBeginOverlap", &AEnemyProjectile::execHandleBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyProjectile_DestroyProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyProjectile_DestroyProjectile_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//timers don't work with functions that don't have UFUNCTION() (It can be left blank though)\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "timers don't work with functions that don't have UFUNCTION() (It can be left blank though)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyProjectile_DestroyProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyProjectile, nullptr, "DestroyProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_DestroyProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyProjectile_DestroyProjectile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyProjectile_DestroyProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyProjectile_DestroyProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics
	{
		struct EnemyProjectile_eventHandleBeginOverlap_Parms
		{
			AActor* otherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyProjectile_eventHandleBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::NewProp_otherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyProjectile, nullptr, "HandleBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::EnemyProjectile_eventHandleBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::EnemyProjectile_eventHandleBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyProjectile);
	UClass* Z_Construct_UClass_AEnemyProjectile_NoRegister()
	{
		return AEnemyProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_projectileDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyProjectile_DestroyProjectile, "DestroyProjectile" }, // 1851769094
		{ &Z_Construct_UFunction_AEnemyProjectile_HandleBeginOverlap, "HandleBeginOverlap" }, // 3749186202
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/EnemyProjectile.h" },
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_hitTemplate_MetaData[] = {
		{ "Category", "EnemyProjectile" },
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_hitTemplate = { "hitTemplate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyProjectile, hitTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_hitTemplate_MetaData), Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_hitTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_projectileDamage_MetaData[] = {
		{ "Category", "EnemyProjectile" },
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_projectileDamage = { "projectileDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyProjectile, projectileDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_projectileDamage_MetaData), Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_projectileDamage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_hitTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyProjectile_Statics::NewProp_projectileDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyProjectile_Statics::ClassParams = {
		&AEnemyProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyProjectile()
	{
		if (!Z_Registration_Info_UClass_AEnemyProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyProjectile.OuterSingleton, Z_Construct_UClass_AEnemyProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyProjectile.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<AEnemyProjectile>()
	{
		return AEnemyProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyProjectile);
	AEnemyProjectile::~AEnemyProjectile() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_EnemyProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_EnemyProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyProjectile, AEnemyProjectile::StaticClass, TEXT("AEnemyProjectile"), &Z_Registration_Info_UClass_AEnemyProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyProjectile), 472436515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_EnemyProjectile_h_1911637202(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_EnemyProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_EnemyProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
