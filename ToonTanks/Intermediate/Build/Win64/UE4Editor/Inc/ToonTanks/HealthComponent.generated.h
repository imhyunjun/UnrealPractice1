// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef TOONTANKS_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define TOONTANKS_HealthComponent_generated_h

#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageTaken);


#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageTaken);


#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(UHealthComponent, maxHealth); }


#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_10_PROLOG
#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_INCLASS \
	ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_Pawn_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
