// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef INTROTOCPP_IntroToCPPProjectile_generated_h
#error "IntroToCPPProjectile.generated.h already included, missing '#pragma once' in IntroToCPPProjectile.h"
#endif
#define INTROTOCPP_IntroToCPPProjectile_generated_h

#define IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroToCPPProjectile(); \
	friend struct Z_Construct_UClass_AIntroToCPPProjectile_Statics; \
public: \
	DECLARE_CLASS(AIntroToCPPProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroToCPP"), NO_API) \
	DECLARE_SERIALIZER(AIntroToCPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAIntroToCPPProjectile(); \
	friend struct Z_Construct_UClass_AIntroToCPPProjectile_Statics; \
public: \
	DECLARE_CLASS(AIntroToCPPProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IntroToCPP"), NO_API) \
	DECLARE_SERIALIZER(AIntroToCPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIntroToCPPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIntroToCPPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroToCPPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroToCPPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntroToCPPProjectile(AIntroToCPPProjectile&&); \
	NO_API AIntroToCPPProjectile(const AIntroToCPPProjectile&); \
public:


#define IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIntroToCPPProjectile(AIntroToCPPProjectile&&); \
	NO_API AIntroToCPPProjectile(const AIntroToCPPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroToCPPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroToCPPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIntroToCPPProjectile)


#define IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AIntroToCPPProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AIntroToCPPProjectile, ProjectileMovement); }


#define IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_9_PROLOG
#define IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_RPC_WRAPPERS \
	IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_INCLASS \
	IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_INCLASS_NO_PURE_DECLS \
	IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IntroToCPP_Source_IntroToCPP_IntroToCPPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
