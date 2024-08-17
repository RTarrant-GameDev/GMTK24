// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SizeShift/SizeShiftPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSizeShiftPlayerCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SIZESHIFT_API UClass* Z_Construct_UClass_ASizeShiftPlayerCharacter();
SIZESHIFT_API UClass* Z_Construct_UClass_ASizeShiftPlayerCharacter_NoRegister();
SIZESHIFT_API UClass* Z_Construct_UClass_UCharacterShrinkComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SizeShift();
// End Cross Module References

// Begin Class ASizeShiftPlayerCharacter
void ASizeShiftPlayerCharacter::StaticRegisterNativesASizeShiftPlayerCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASizeShiftPlayerCharacter);
UClass* Z_Construct_UClass_ASizeShiftPlayerCharacter_NoRegister()
{
	return ASizeShiftPlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SizeShiftPlayerCharacter.h" },
		{ "ModuleRelativePath", "SizeShiftPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkComponent_MetaData[] = {
		{ "Category", "SizeShiftPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SizeShiftPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "SizeShiftPlayerCharacter" },
		{ "ModuleRelativePath", "SizeShiftPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShrinkComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASizeShiftPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::NewProp_ShrinkComponent = { "ShrinkComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASizeShiftPlayerCharacter, ShrinkComponent), Z_Construct_UClass_UCharacterShrinkComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShrinkComponent_MetaData), NewProp_ShrinkComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASizeShiftPlayerCharacter, RotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::NewProp_ShrinkComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::NewProp_RotationRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SizeShift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::ClassParams = {
	&ASizeShiftPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASizeShiftPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ASizeShiftPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASizeShiftPlayerCharacter.OuterSingleton, Z_Construct_UClass_ASizeShiftPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASizeShiftPlayerCharacter.OuterSingleton;
}
template<> SIZESHIFT_API UClass* StaticClass<ASizeShiftPlayerCharacter>()
{
	return ASizeShiftPlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASizeShiftPlayerCharacter);
ASizeShiftPlayerCharacter::~ASizeShiftPlayerCharacter() {}
// End Class ASizeShiftPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASizeShiftPlayerCharacter, ASizeShiftPlayerCharacter::StaticClass, TEXT("ASizeShiftPlayerCharacter"), &Z_Registration_Info_UClass_ASizeShiftPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASizeShiftPlayerCharacter), 2201403752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftPlayerCharacter_h_2604910270(TEXT("/Script/SizeShift"),
	Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
