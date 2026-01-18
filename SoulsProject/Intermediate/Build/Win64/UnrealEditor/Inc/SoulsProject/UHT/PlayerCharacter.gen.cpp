// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsProject/Public/Characters/PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SOULSPROJECT_API UClass* Z_Construct_UClass_APlayerCharacter();
	SOULSPROJECT_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UBlockingComponent_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UFighter_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_ULockOnComponent_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UPlayerInterface_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
	SOULSPROJECT_API UClass* Z_Construct_UClass_UTraceComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsProject();
// End Cross Module References
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_statsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_statsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lockOnComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lockOnComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerActionsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerActionsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_traceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_traceComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blockingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_blockingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_combatComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_combatComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerAnim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_statsComponent_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_statsComponent = { "statsComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, statsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_statsComponent_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_statsComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_lockOnComponent_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_lockOnComponent = { "lockOnComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, lockOnComponent), Z_Construct_UClass_ULockOnComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_lockOnComponent_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_lockOnComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerActionsComponent_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerActionsComponent = { "playerActionsComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerActionsComponent), Z_Construct_UClass_UPlayerActionsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerActionsComponent_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerActionsComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_traceComponent_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_traceComponent = { "traceComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, traceComponent), Z_Construct_UClass_UTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_traceComponent_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_traceComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_blockingComponent_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_blockingComponent = { "blockingComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, blockingComponent), Z_Construct_UClass_UBlockingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_blockingComponent_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_blockingComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_combatComponent_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_combatComponent = { "combatComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, combatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_combatComponent_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_combatComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerAnim_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Characters/PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerAnim = { "playerAnim", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerAnim), Z_Construct_UClass_UPlayerAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerAnim_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerAnim_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_statsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_lockOnComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerActionsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_traceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_blockingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_combatComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerAnim,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerCharacter, IPlayerInterface), false },  // 1112209548
			{ Z_Construct_UClass_UFighter_NoRegister, (int32)VTABLE_OFFSET(APlayerCharacter, IFighter), false },  // 3639994593
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
		&APlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
	}
	template<> SOULSPROJECT_API UClass* StaticClass<APlayerCharacter>()
	{
		return APlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
	APlayerCharacter::~APlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_PlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 856438827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_PlayerCharacter_h_2302010361(TEXT("/Script/SoulsProject"),
		Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Characters_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
