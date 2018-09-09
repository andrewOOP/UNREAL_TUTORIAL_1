// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroToCPP/IntroToCPPHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroToCPPHUD() {}
// Cross Module References
	INTROTOCPP_API UClass* Z_Construct_UClass_AIntroToCPPHUD_NoRegister();
	INTROTOCPP_API UClass* Z_Construct_UClass_AIntroToCPPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_IntroToCPP();
// End Cross Module References
	void AIntroToCPPHUD::StaticRegisterNativesAIntroToCPPHUD()
	{
	}
	UClass* Z_Construct_UClass_AIntroToCPPHUD_NoRegister()
	{
		return AIntroToCPPHUD::StaticClass();
	}
	struct Z_Construct_UClass_AIntroToCPPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntroToCPPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroToCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroToCPPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "IntroToCPPHUD.h" },
		{ "ModuleRelativePath", "IntroToCPPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntroToCPPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroToCPPHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIntroToCPPHUD_Statics::ClassParams = {
		&AIntroToCPPHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AIntroToCPPHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIntroToCPPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIntroToCPPHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIntroToCPPHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIntroToCPPHUD, 177909867);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIntroToCPPHUD(Z_Construct_UClass_AIntroToCPPHUD, &AIntroToCPPHUD::StaticClass, TEXT("/Script/IntroToCPP"), TEXT("AIntroToCPPHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroToCPPHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
