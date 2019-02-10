// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectLambda/Public/PL_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePL_Character() {}
// Cross Module References
	PROJECTLAMBDA_API UClass* Z_Construct_UClass_APL_Character_NoRegister();
	PROJECTLAMBDA_API UClass* Z_Construct_UClass_APL_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ProjectLambda();
// End Cross Module References
	void APL_Character::StaticRegisterNativesAPL_Character()
	{
	}
	UClass* Z_Construct_UClass_APL_Character_NoRegister()
	{
		return APL_Character::StaticClass();
	}
	struct Z_Construct_UClass_APL_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APL_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectLambda,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APL_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PL_Character.h" },
		{ "ModuleRelativePath", "Public/PL_Character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APL_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APL_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APL_Character_Statics::ClassParams = {
		&APL_Character::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APL_Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APL_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APL_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APL_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APL_Character, 2233066236);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APL_Character(Z_Construct_UClass_APL_Character, &APL_Character::StaticClass, TEXT("/Script/ProjectLambda"), TEXT("APL_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APL_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
