// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectLambda/ProjectLambdaProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectLambdaProjectile() {}
// Cross Module References
	PROJECTLAMBDA_API UClass* Z_Construct_UClass_AProjectLambdaProjectile_NoRegister();
	PROJECTLAMBDA_API UClass* Z_Construct_UClass_AProjectLambdaProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectLambda();
	PROJECTLAMBDA_API UFunction* Z_Construct_UFunction_AProjectLambdaProjectile_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AProjectLambdaProjectile::StaticRegisterNativesAProjectLambdaProjectile()
	{
		UClass* Class = AProjectLambdaProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AProjectLambdaProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics
	{
		struct ProjectLambdaProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ProjectLambdaProjectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProjectLambdaProjectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ProjectLambdaProjectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProjectLambdaProjectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_HitComp = { UE4CodeGen_Private::EPropertyClass::Object, "HitComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ProjectLambdaProjectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_HitComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::NewProp_HitComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectLambdaProjectile.h" },
		{ "ToolTip", "called when projectile hits something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectLambdaProjectile, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(ProjectLambdaProjectile_eventOnHit_Parms), Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProjectLambdaProjectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProjectLambdaProjectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectLambdaProjectile_NoRegister()
	{
		return AProjectLambdaProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AProjectLambdaProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectLambdaProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectLambda,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectLambdaProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectLambdaProjectile_OnHit, "OnHit" }, // 1332248837
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectLambdaProjectile.h" },
		{ "ModuleRelativePath", "ProjectLambdaProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaProjectile.h" },
		{ "ToolTip", "Projectile movement component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_ProjectileMovement = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AProjectLambdaProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaProjectile.h" },
		{ "ToolTip", "Sphere collision component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_CollisionComp = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AProjectLambdaProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_CollisionComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectLambdaProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_ProjectileMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AProjectLambdaProjectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_ProjectileMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_ProjectileMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectLambdaProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_CollisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectLambdaProjectile_Statics::NewProp_ProjectileMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectLambdaProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectLambdaProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectLambdaProjectile_Statics::ClassParams = {
		&AProjectLambdaProjectile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AProjectLambdaProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaProjectile_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectLambdaProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectLambdaProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectLambdaProjectile, 2643155785);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectLambdaProjectile(Z_Construct_UClass_AProjectLambdaProjectile, &AProjectLambdaProjectile::StaticClass, TEXT("/Script/ProjectLambda"), TEXT("AProjectLambdaProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectLambdaProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
