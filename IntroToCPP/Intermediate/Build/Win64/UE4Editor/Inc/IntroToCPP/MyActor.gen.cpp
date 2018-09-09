// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroToCPP/MyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	INTROTOCPP_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	INTROTOCPP_API UClass* Z_Construct_UClass_AMyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_IntroToCPP();
	INTROTOCPP_API UFunction* Z_Construct_UFunction_AMyActor_CalculateValues();
	INTROTOCPP_API UFunction* Z_Construct_UFunction_AMyActor_CalledFromCpp();
	INTROTOCPP_API UFunction* Z_Construct_UFunction_AMyActor_CalledFromCppWithImp();
// End Cross Module References
	static FName NAME_AMyActor_CalledFromCpp = FName(TEXT("CalledFromCpp"));
	void AMyActor::CalledFromCpp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyActor_CalledFromCpp),NULL);
	}
	static FName NAME_AMyActor_CalledFromCppWithImp = FName(TEXT("CalledFromCppWithImp"));
	void AMyActor::CalledFromCppWithImp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMyActor_CalledFromCppWithImp),NULL);
	}
	void AMyActor::StaticRegisterNativesAMyActor()
	{
		UClass* Class = AMyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateValues", &AMyActor::execCalculateValues },
			{ "CalledFromCppWithImp", &AMyActor::execCalledFromCppWithImp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActor_CalculateValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_CalculateValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_CalculateValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, "CalculateValues", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor_CalculateValues_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyActor_CalculateValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor_CalculateValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActor_CalculateValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_CalledFromCpp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_CalledFromCpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_CalledFromCpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, "CalledFromCpp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor_CalledFromCpp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyActor_CalledFromCpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor_CalledFromCpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActor_CalledFromCpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_CalledFromCppWithImp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_CalledFromCppWithImp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_CalledFromCppWithImp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, "CalledFromCppWithImp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor_CalledFromCppWithImp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyActor_CalledFromCppWithImp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor_CalledFromCppWithImp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActor_CalledFromCppWithImp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamagePerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamagePerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTimeInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageTimeInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroToCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_CalculateValues, "CalculateValues" }, // 781288731
		{ &Z_Construct_UFunction_AMyActor_CalledFromCpp, "CalledFromCpp" }, // 1779238231
		{ &Z_Construct_UFunction_AMyActor_CalledFromCppWithImp, "CalledFromCppWithImp" }, // 2158046094
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_DamagePerSecond_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_DamagePerSecond = { UE4CodeGen_Private::EPropertyClass::Float, "DamagePerSecond", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000022015, 1, nullptr, STRUCT_OFFSET(AMyActor, DamagePerSecond), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_DamagePerSecond_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_DamagePerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_DamageTimeInSeconds_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_DamageTimeInSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DamageTimeInSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyActor, DamageTimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_DamageTimeInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_DamageTimeInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::NewProp_TotalDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_TotalDamage = { UE4CodeGen_Private::EPropertyClass::Int, "TotalDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyActor, TotalDamage), METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::NewProp_TotalDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::NewProp_TotalDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_DamagePerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_DamageTimeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_TotalDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMyActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor, 2160448356);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor(Z_Construct_UClass_AMyActor, &AMyActor::StaticClass, TEXT("/Script/IntroToCPP"), TEXT("AMyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
