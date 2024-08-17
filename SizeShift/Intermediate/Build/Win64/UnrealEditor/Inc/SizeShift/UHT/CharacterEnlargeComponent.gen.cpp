// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SizeShift/CharacterEnlargeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterEnlargeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SIZESHIFT_API UClass* Z_Construct_UClass_UCharacterEnlargeComponent();
SIZESHIFT_API UClass* Z_Construct_UClass_UCharacterEnlargeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SizeShift();
// End Cross Module References

// Begin Class UCharacterEnlargeComponent
void UCharacterEnlargeComponent::StaticRegisterNativesUCharacterEnlargeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterEnlargeComponent);
UClass* Z_Construct_UClass_UCharacterEnlargeComponent_NoRegister()
{
	return UCharacterEnlargeComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterEnlargeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterEnlargeComponent.h" },
		{ "ModuleRelativePath", "CharacterEnlargeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnlargeLimit_MetaData[] = {
		{ "Category", "CharacterEnlargeComponent" },
		{ "ModuleRelativePath", "CharacterEnlargeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnlargeLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterEnlargeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterEnlargeComponent_Statics::NewProp_EnlargeLimit = { "EnlargeLimit", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterEnlargeComponent, EnlargeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnlargeLimit_MetaData), NewProp_EnlargeLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterEnlargeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterEnlargeComponent_Statics::NewProp_EnlargeLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEnlargeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterEnlargeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SizeShift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEnlargeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterEnlargeComponent_Statics::ClassParams = {
	&UCharacterEnlargeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterEnlargeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEnlargeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterEnlargeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterEnlargeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterEnlargeComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterEnlargeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterEnlargeComponent.OuterSingleton, Z_Construct_UClass_UCharacterEnlargeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterEnlargeComponent.OuterSingleton;
}
template<> SIZESHIFT_API UClass* StaticClass<UCharacterEnlargeComponent>()
{
	return UCharacterEnlargeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterEnlargeComponent);
UCharacterEnlargeComponent::~UCharacterEnlargeComponent() {}
// End Class UCharacterEnlargeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_CharacterEnlargeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterEnlargeComponent, UCharacterEnlargeComponent::StaticClass, TEXT("UCharacterEnlargeComponent"), &Z_Registration_Info_UClass_UCharacterEnlargeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterEnlargeComponent), 1794433130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_CharacterEnlargeComponent_h_4089814244(TEXT("/Script/SizeShift"),
	Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_CharacterEnlargeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_CharacterEnlargeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
