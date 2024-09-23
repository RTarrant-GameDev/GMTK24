// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SizeShift/SizeShiftPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSizeShiftPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SIZESHIFT_API UClass* Z_Construct_UClass_ASizeShiftPlayerController();
SIZESHIFT_API UClass* Z_Construct_UClass_ASizeShiftPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SizeShift();
// End Cross Module References

// Begin Class ASizeShiftPlayerController
void ASizeShiftPlayerController::StaticRegisterNativesASizeShiftPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASizeShiftPlayerController);
UClass* Z_Construct_UClass_ASizeShiftPlayerController_NoRegister()
{
	return ASizeShiftPlayerController::StaticClass();
}
struct Z_Construct_UClass_ASizeShiftPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SizeShiftPlayerController.h" },
		{ "ModuleRelativePath", "SizeShiftPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "SizeShiftPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASizeShiftPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASizeShiftPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASizeShiftPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASizeShiftPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASizeShiftPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASizeShiftPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SizeShift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASizeShiftPlayerController_Statics::ClassParams = {
	&ASizeShiftPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASizeShiftPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASizeShiftPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASizeShiftPlayerController()
{
	if (!Z_Registration_Info_UClass_ASizeShiftPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASizeShiftPlayerController.OuterSingleton, Z_Construct_UClass_ASizeShiftPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASizeShiftPlayerController.OuterSingleton;
}
template<> SIZESHIFT_API UClass* StaticClass<ASizeShiftPlayerController>()
{
	return ASizeShiftPlayerController::StaticClass();
}
ASizeShiftPlayerController::ASizeShiftPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASizeShiftPlayerController);
ASizeShiftPlayerController::~ASizeShiftPlayerController() {}
// End Class ASizeShiftPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASizeShiftPlayerController, ASizeShiftPlayerController::StaticClass, TEXT("ASizeShiftPlayerController"), &Z_Registration_Info_UClass_ASizeShiftPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASizeShiftPlayerController), 1410736570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h_265494396(TEXT("/Script/SizeShift"),
	Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
