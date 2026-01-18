// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/CombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOULSPROJECT_CombatComponent_generated_h
#error "CombatComponent.generated.h already included, missing '#pragma once' in CombatComponent.h"
#endif
#define SOULSPROJECT_CombatComponent_generated_h

#define FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_15_DELEGATE \
SOULSPROJECT_API void FOnAttackPerformedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttackPerformedSignature, float staminaToDrain);


#define FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_SPARSE_DATA
#define FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetAttackCombatComp); \
	DECLARE_FUNCTION(execComboAttack);


#define FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_ACCESSORS
#define FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent(); \
	friend struct Z_Construct_UClass_UCombatComponent_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SoulsProject"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent)


#define FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCombatComponent(UCombatComponent&&); \
	NO_API UCombatComponent(const UCombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent) \
	NO_API virtual ~UCombatComponent();


#define FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_17_PROLOG
#define FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_SPARSE_DATA \
	FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_ACCESSORS \
	FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOULSPROJECT_API UClass* StaticClass<class UCombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PersonalProjects_UE5_SoulsLike_UE5SoulsLikeProject_SoulsProject_Source_SoulsProject_Public_Combat_CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
