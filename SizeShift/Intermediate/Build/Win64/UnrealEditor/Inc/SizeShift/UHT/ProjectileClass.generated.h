// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectileClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SIZESHIFT_ProjectileClass_generated_h
#error "ProjectileClass.generated.h already included, missing '#pragma once' in ProjectileClass.h"
#endif
#define SIZESHIFT_ProjectileClass_generated_h

#define FID_SizeShift_Source_SizeShift_ProjectileClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_SizeShift_Source_SizeShift_ProjectileClass_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileClass(); \
	friend struct Z_Construct_UClass_AProjectileClass_Statics; \
public: \
	DECLARE_CLASS(AProjectileClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SizeShift"), NO_API) \
	DECLARE_SERIALIZER(AProjectileClass)


#define FID_SizeShift_Source_SizeShift_ProjectileClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectileClass(AProjectileClass&&); \
	AProjectileClass(const AProjectileClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileClass) \
	NO_API virtual ~AProjectileClass();


#define FID_SizeShift_Source_SizeShift_ProjectileClass_h_9_PROLOG
#define FID_SizeShift_Source_SizeShift_ProjectileClass_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SizeShift_Source_SizeShift_ProjectileClass_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SizeShift_Source_SizeShift_ProjectileClass_h_12_INCLASS_NO_PURE_DECLS \
	FID_SizeShift_Source_SizeShift_ProjectileClass_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIZESHIFT_API UClass* StaticClass<class AProjectileClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SizeShift_Source_SizeShift_ProjectileClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
