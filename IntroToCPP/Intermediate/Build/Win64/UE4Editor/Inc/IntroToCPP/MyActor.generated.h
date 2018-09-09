// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTROTOCPP_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define INTROTOCPP_MyActor_generated_h

#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_RPC_WRAPPERS \
	virtual void CalledFromCppWithImp_Implementation(); \
 \
	DECLARE_FUNCTION(execCalledFromCppWithImp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalledFromCppWithImp_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateValues(); \
		P_NATIVE_END; \
	}


#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalledFromCppWithImp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalledFromCppWithImp_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateValues(); \
		P_NATIVE_END; \
	}


#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_EVENT_PARMS
#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_CALLBACK_WRAPPERS
#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroToCPP"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroToCPP"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_PRIVATE_PROPERTY_OFFSET
#define IntroToCPP_Source_IntroToCPP_MyActor_h_9_PROLOG \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_EVENT_PARMS


#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_RPC_WRAPPERS \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_CALLBACK_WRAPPERS \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_INCLASS \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IntroToCPP_Source_IntroToCPP_MyActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_PRIVATE_PROPERTY_OFFSET \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_CALLBACK_WRAPPERS \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_INCLASS_NO_PURE_DECLS \
	IntroToCPP_Source_IntroToCPP_MyActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IntroToCPP_Source_IntroToCPP_MyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
