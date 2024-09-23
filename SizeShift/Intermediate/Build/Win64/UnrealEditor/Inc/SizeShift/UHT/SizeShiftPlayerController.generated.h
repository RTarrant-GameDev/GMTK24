// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SizeShiftPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIZESHIFT_SizeShiftPlayerController_generated_h
#error "SizeShiftPlayerController.generated.h already included, missing '#pragma once' in SizeShiftPlayerController.h"
#endif
#define SIZESHIFT_SizeShiftPlayerController_generated_h

#define FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASizeShiftPlayerController(); \
	friend struct Z_Construct_UClass_ASizeShiftPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASizeShiftPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SizeShift"), NO_API) \
	DECLARE_SERIALIZER(ASizeShiftPlayerController)


#define FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASizeShiftPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASizeShiftPlayerController(ASizeShiftPlayerController&&); \
	ASizeShiftPlayerController(const ASizeShiftPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASizeShiftPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASizeShiftPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASizeShiftPlayerController) \
	NO_API virtual ~ASizeShiftPlayerController();


#define FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h_14_PROLOG
#define FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIZESHIFT_API UClass* StaticClass<class ASizeShiftPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
