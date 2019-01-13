// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTLAMBDA_ProjectLambdaCharacter_generated_h
#error "ProjectLambdaCharacter.generated.h already included, missing '#pragma once' in ProjectLambdaCharacter.h"
#endif
#define PROJECTLAMBDA_ProjectLambdaCharacter_generated_h

#define ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_RPC_WRAPPERS
#define ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectLambdaCharacter(); \
	friend struct Z_Construct_UClass_AProjectLambdaCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectLambdaCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectLambda"), NO_API) \
	DECLARE_SERIALIZER(AProjectLambdaCharacter)


#define ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProjectLambdaCharacter(); \
	friend struct Z_Construct_UClass_AProjectLambdaCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectLambdaCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectLambda"), NO_API) \
	DECLARE_SERIALIZER(AProjectLambdaCharacter)


#define ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectLambdaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectLambdaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectLambdaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectLambdaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectLambdaCharacter(AProjectLambdaCharacter&&); \
	NO_API AProjectLambdaCharacter(const AProjectLambdaCharacter&); \
public:


#define ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectLambdaCharacter(AProjectLambdaCharacter&&); \
	NO_API AProjectLambdaCharacter(const AProjectLambdaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectLambdaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectLambdaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectLambdaCharacter)


#define ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AProjectLambdaCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AProjectLambdaCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AProjectLambdaCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AProjectLambdaCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AProjectLambdaCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AProjectLambdaCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AProjectLambdaCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AProjectLambdaCharacter, L_MotionController); }


#define ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_11_PROLOG
#define ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_RPC_WRAPPERS \
	ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_INCLASS \
	ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectLambda_Source_ProjectLambda_ProjectLambdaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
