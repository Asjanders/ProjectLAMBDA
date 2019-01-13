// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectLambda/ProjectLambdaHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectLambdaHUD() {}
// Cross Module References
	PROJECTLAMBDA_API UClass* Z_Construct_UClass_AProjectLambdaHUD_NoRegister();
	PROJECTLAMBDA_API UClass* Z_Construct_UClass_AProjectLambdaHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ProjectLambda();
// End Cross Module References
	void AProjectLambdaHUD::StaticRegisterNativesAProjectLambdaHUD()
	{
	}
	UClass* Z_Construct_UClass_AProjectLambdaHUD_NoRegister()
	{
		return AProjectLambdaHUD::StaticClass();
	}
	struct Z_Construct_UClass_AProjectLambdaHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectLambdaHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectLambda,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectLambdaHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ProjectLambdaHUD.h" },
		{ "ModuleRelativePath", "ProjectLambdaHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectLambdaHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectLambdaHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectLambdaHUD_Statics::ClassParams = {
		&AProjectLambdaHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProjectLambdaHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectLambdaHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectLambdaHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectLambdaHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectLambdaHUD, 2035485517);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectLambdaHUD(Z_Construct_UClass_AProjectLambdaHUD, &AProjectLambdaHUD::StaticClass, TEXT("/Script/ProjectLambda"), TEXT("AProjectLambdaHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectLambdaHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
