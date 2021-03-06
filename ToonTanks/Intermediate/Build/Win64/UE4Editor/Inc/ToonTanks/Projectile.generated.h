// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef TOONTANKS_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define TOONTANKS_Projectile_generated_h

#define ToonTanks_Source_ToonTanks_Projectile_h_13_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_Projectile_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ToonTanks_Source_ToonTanks_Projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ToonTanks_Source_ToonTanks_Projectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define ToonTanks_Source_ToonTanks_Projectile_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define ToonTanks_Source_ToonTanks_Projectile_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define ToonTanks_Source_ToonTanks_Projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define ToonTanks_Source_ToonTanks_Projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__projectileMesh() { return STRUCT_OFFSET(AProjectile, projectileMesh); } \
	FORCEINLINE static uint32 __PPO__projectileMovement() { return STRUCT_OFFSET(AProjectile, projectileMovement); } \
	FORCEINLINE static uint32 __PPO__damage() { return STRUCT_OFFSET(AProjectile, damage); } \
	FORCEINLINE static uint32 __PPO__hitParticles() { return STRUCT_OFFSET(AProjectile, hitParticles); } \
	FORCEINLINE static uint32 __PPO__particleSystem() { return STRUCT_OFFSET(AProjectile, particleSystem); } \
	FORCEINLINE static uint32 __PPO__launchSound() { return STRUCT_OFFSET(AProjectile, launchSound); } \
	FORCEINLINE static uint32 __PPO__hitSound() { return STRUCT_OFFSET(AProjectile, hitSound); } \
	FORCEINLINE static uint32 __PPO__hitCameraShakeClass() { return STRUCT_OFFSET(AProjectile, hitCameraShakeClass); }


#define ToonTanks_Source_ToonTanks_Projectile_h_10_PROLOG
#define ToonTanks_Source_ToonTanks_Projectile_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Projectile_h_13_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Projectile_h_13_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_Projectile_h_13_INCLASS \
	ToonTanks_Source_ToonTanks_Projectile_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_Projectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_Projectile_h_13_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_Projectile_h_13_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_Projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Projectile_h_13_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_Projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
