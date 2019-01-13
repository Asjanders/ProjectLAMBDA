// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectLambda/ProjectLambdaCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectLambdaCharacter() {}
// Cross Module References
	PROJECTLAMBDA_API UClass* Z_Construct_UClass_AProjectLambdaCharacter_NoRegister();
	PROJECTLAMBDA_API UClass* Z_Construct_UClass_AProjectLambdaCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ProjectLambda();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROJECTLAMBDA_API UClass* Z_Construct_UClass_AProjectLambdaProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AProjectLambdaCharacter::StaticRegisterNativesAProjectLambdaCharacter()
	{
	}
	UClass* Z_Construct_UClass_AProjectLambdaCharacter_NoRegister()
	{
		return AProjectLambdaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProjectLambdaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[];
#endif
		static void NewProp_bUsingMotionControllers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectLambdaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectLambda,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProjectLambdaCharacter.h" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_bUsingMotionControllers_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Whether to use motion controller location for aiming." },
	};
#endif
	void Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_bUsingMotionControllers_SetBit(void* Obj)
	{
		((AProjectLambdaCharacter*)Obj)->bUsingMotionControllers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_bUsingMotionControllers = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsingMotionControllers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AProjectLambdaCharacter), &Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_bUsingMotionControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_bUsingMotionControllers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FireAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FireAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, ProjectileClass), Z_Construct_UClass_AProjectLambdaProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_GunOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "GunOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_GunOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_L_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ProjectLambdaCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Motion controller (left hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_L_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "L_MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_L_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_R_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ProjectLambdaCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Motion controller (right hand)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_R_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "R_MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_R_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FirstPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_VR_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "VR_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_VR_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_VR_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "VR_Gun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_VR_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FP_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "FP_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FP_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "FP_Gun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FP_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_Mesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AProjectLambdaCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_Mesh1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectLambdaCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_bUsingMotionControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_L_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_R_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_VR_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_VR_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FP_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaCharacter_Statics::NewProp_Mesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectLambdaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectLambdaCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectLambdaCharacter_Statics::ClassParams = {
		&AProjectLambdaCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		Z_Construct_UClass_AProjectLambdaCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectLambdaCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectLambdaCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectLambdaCharacter, 1231045869);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectLambdaCharacter(Z_Construct_UClass_AProjectLambdaCharacter, &AProjectLambdaCharacter::StaticClass, TEXT("/Script/ProjectLambda"), TEXT("AProjectLambdaCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectLambdaCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
