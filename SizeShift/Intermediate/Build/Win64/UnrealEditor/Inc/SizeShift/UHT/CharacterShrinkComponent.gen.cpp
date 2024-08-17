// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SizeShift/CharacterShrinkComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterShrinkComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIZESHIFT_API UClass* Z_Construct_UClass_UCharacterShrinkComponent();
SIZESHIFT_API UClass* Z_Construct_UClass_UCharacterShrinkComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SizeShift();
// End Cross Module References

// Begin Class UCharacterShrinkComponent
void UCharacterShrinkComponent::StaticRegisterNativesUCharacterShrinkComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterShrinkComponent);
UClass* Z_Construct_UClass_UCharacterShrinkComponent_NoRegister()
{
	return UCharacterShrinkComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterShrinkComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterShrinkComponent.h" },
		{ "ModuleRelativePath", "CharacterShrinkComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShrinkLimit_MetaData[] = {
		{ "Category", "CharacterShrinkComponent" },
		{ "ModuleRelativePath", "CharacterShrinkComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShrinkLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterShrinkComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterShrinkComponent_Statics::NewProp_ShrinkLimit = { "ShrinkLimit", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterShrinkComponent, ShrinkLimit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShrinkLimit_MetaData), NewProp_ShrinkLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterShrinkComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterShrinkComponent_Statics::NewProp_ShrinkLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterShrinkComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterShrinkComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SizeShift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterShrinkComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterShrinkComponent_Statics::ClassParams = {
	&UCharacterShrinkComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterShrinkComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterShrinkComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterShrinkComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterShrinkComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterShrinkComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterShrinkComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterShrinkComponent.OuterSingleton, Z_Construct_UClass_UCharacterShrinkComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterShrinkComponent.OuterSingleton;
}
template<> SIZESHIFT_API UClass* StaticClass<UCharacterShrinkComponent>()
{
	return UCharacterShrinkComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterShrinkComponent);
UCharacterShrinkComponent::~UCharacterShrinkComponent() {}
// End Class UCharacterShrinkComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_CharacterShrinkComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterShrinkComponent, UCharacterShrinkComponent::StaticClass, TEXT("UCharacterShrinkComponent"), &Z_Registration_Info_UClass_UCharacterShrinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterShrinkComponent), 3116909622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_CharacterShrinkComponent_h_181219230(TEXT("/Script/SizeShift"),
	Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_CharacterShrinkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_CharacterShrinkComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
