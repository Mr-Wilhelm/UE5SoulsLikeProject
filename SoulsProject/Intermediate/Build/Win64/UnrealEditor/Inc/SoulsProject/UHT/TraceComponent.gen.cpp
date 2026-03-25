// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Combat/TraceComponent.h"
#include "SoulsProject/Public/Combat/FTraceSockets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UTraceComponent();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UTraceComponent_NoRegister();
	SOULSPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTraceSockets();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	DEFINE_FUNCTION(UTraceComponent::execResetAttackTraceComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAttackTraceComp();
		P_NATIVE_END;
	}
	void UTraceComponent::StaticRegisterNativesUTraceComponent()
	{
		UClass* Class = UTraceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetAttackTraceComp", &UTraceComponent::execResetAttackTraceComp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTraceComponent_ResetAttackTraceComp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceComponent_ResetAttackTraceComp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceComponent_ResetAttackTraceComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceComponent, nullptr, "ResetAttackTraceComp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceComponent_ResetAttackTraceComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraceComponent_ResetAttackTraceComp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTraceComponent_ResetAttackTraceComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceComponent_ResetAttackTraceComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTraceComponent);
	UClass* Z_Construct_UClass_UTraceComponent_NoRegister()
	{
		return UTraceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTraceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxCollisionLength_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_boxCollisionLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugMode_MetaData[];
#endif
		static void NewProp_debugMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_debugMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAttacking_MetaData[];
#endif
		static void NewProp_isAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttacking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTraceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTraceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTraceComponent_ResetAttackTraceComp, "ResetAttackTraceComp" }, // 3701649179
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/TraceComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTraceSockets, METADATA_PARAMS(0, nullptr) }; // 2827252038
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_Sockets_MetaData[] = {
		{ "Category", "TraceComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the skeletal mesh component\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the skeletal mesh component" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_Sockets_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_Sockets_MetaData) }; // 2827252038
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_boxCollisionLength_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_boxCollisionLength = { "boxCollisionLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTraceComponent, boxCollisionLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_boxCollisionLength_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_boxCollisionLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_debugMode_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTraceComponent_Statics::NewProp_debugMode_SetBit(void* Obj)
	{
		((UTraceComponent*)Obj)->debugMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_debugMode = { "debugMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTraceComponent), &Z_Construct_UClass_UTraceComponent_Statics::NewProp_debugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_debugMode_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_debugMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceComponent_Statics::NewProp_isAttacking_MetaData[] = {
		{ "Category", "TraceComponent" },
		{ "ModuleRelativePath", "Public/Combat/TraceComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTraceComponent_Statics::NewProp_isAttacking_SetBit(void* Obj)
	{
		((UTraceComponent*)Obj)->isAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTraceComponent_Statics::NewProp_isAttacking = { "isAttacking", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTraceComponent), &Z_Construct_UClass_UTraceComponent_Statics::NewProp_isAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::NewProp_isAttacking_MetaData), Z_Construct_UClass_UTraceComponent_Statics::NewProp_isAttacking_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTraceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_Sockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_Sockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_boxCollisionLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_debugMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceComponent_Statics::NewProp_isAttacking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTraceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraceComponent_Statics::ClassParams = {
		&UTraceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTraceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTraceComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraceComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTraceComponent()
	{
		if (!Z_Registration_Info_UClass_UTraceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraceComponent.OuterSingleton, Z_Construct_UClass_UTraceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTraceComponent.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<UTraceComponent>()
	{
		return UTraceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTraceComponent);
	UTraceComponent::~UTraceComponent() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_TraceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_TraceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTraceComponent, UTraceComponent::StaticClass, TEXT("UTraceComponent"), &Z_Registration_Info_UClass_UTraceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraceComponent), 1460567226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_TraceComponent_h_1757704357(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_TraceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_TraceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
