// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyTurretPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIZESHIFT_EnemyTurretPawn_generated_h
#error "EnemyTurretPawn.generated.h already included, missing '#pragma once' in EnemyTurretPawn.h"
#endif
#define SIZESHIFT_EnemyTurretPawn_generated_h

#define FID_SizeShift_Source_SizeShift_EnemyTurretPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyTurretPawn(); \
	friend struct Z_Construct_UClass_AEnemyTurretPawn_Statics; \
public: \
	DECLARE_CLASS(AEnemyTurretPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SizeShift"), NO_API) \
	DECLARE_SERIALIZER(AEnemyTurretPawn)


#define FID_SizeShift_Source_SizeShift_EnemyTurretPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyTurretPawn(AEnemyTurretPawn&&); \
	AEnemyTurretPawn(const AEnemyTurretPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyTurretPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyTurretPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyTurretPawn) \
	NO_API virtual ~AEnemyTurretPawn();


#define FID_SizeShift_Source_SizeShift_EnemyTurretPawn_h_9_PROLOG
#define FID_SizeShift_Source_SizeShift_EnemyTurretPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SizeShift_Source_SizeShift_EnemyTurretPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_SizeShift_Source_SizeShift_EnemyTurretPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIZESHIFT_API UClass* StaticClass<class AEnemyTurretPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SizeShift_Source_SizeShift_EnemyTurretPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
