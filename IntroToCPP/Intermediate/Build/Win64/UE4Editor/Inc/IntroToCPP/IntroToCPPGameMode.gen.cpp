// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroToCPP/IntroToCPPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntroToCPPGameMode() {}
// Cross Module References
	INTROTOCPP_API UClass* Z_Construct_UClass_AIntroToCPPGameMode_NoRegister();
	INTROTOCPP_API UClass* Z_Construct_UClass_AIntroToCPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IntroToCPP();
// End Cross Module References
	void AIntroToCPPGameMode::StaticRegisterNativesAIntroToCPPGameMode()
	{
	}
	UClass* Z_Construct_UClass_AIntroToCPPGameMode_NoRegister()
	{
		return AIntroToCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AIntroToCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIntroToCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroToCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIntroToCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IntroToCPPGameMode.h" },
		{ "ModuleRelativePath", "IntroToCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIntroToCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroToCPPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIntroToCPPGameMode_Statics::ClassParams = {
		&AIntroToCPPGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AIntroToCPPGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AIntroToCPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIntroToCPPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIntroToCPPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIntroToCPPGameMode, 3102182962);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIntroToCPPGameMode(Z_Construct_UClass_AIntroToCPPGameMode, &AIntroToCPPGameMode::StaticClass, TEXT("/Script/IntroToCPP"), TEXT("AIntroToCPPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroToCPPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
