// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SizeShift/SizeShiftGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSizeShiftGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SIZESHIFT_API UClass* Z_Construct_UClass_ASizeShiftGameModeBase();
SIZESHIFT_API UClass* Z_Construct_UClass_ASizeShiftGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SizeShift();
// End Cross Module References

// Begin Class ASizeShiftGameModeBase
void ASizeShiftGameModeBase::StaticRegisterNativesASizeShiftGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASizeShiftGameModeBase);
UClass* Z_Construct_UClass_ASizeShiftGameModeBase_NoRegister()
{
	return ASizeShiftGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ASizeShiftGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SizeShiftGameModeBase.h" },
		{ "ModuleRelativePath", "SizeShiftGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASizeShiftGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASizeShiftGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SizeShift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASizeShiftGameModeBase_Statics::ClassParams = {
	&ASizeShiftGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASizeShiftGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASizeShiftGameModeBase()
{
	if (!Z_Registration_Info_UClass_ASizeShiftGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASizeShiftGameModeBase.OuterSingleton, Z_Construct_UClass_ASizeShiftGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASizeShiftGameModeBase.OuterSingleton;
}
template<> SIZESHIFT_API UClass* StaticClass<ASizeShiftGameModeBase>()
{
	return ASizeShiftGameModeBase::StaticClass();
}
ASizeShiftGameModeBase::ASizeShiftGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASizeShiftGameModeBase);
ASizeShiftGameModeBase::~ASizeShiftGameModeBase() {}
// End Class ASizeShiftGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASizeShiftGameModeBase, ASizeShiftGameModeBase::StaticClass, TEXT("ASizeShiftGameModeBase"), &Z_Registration_Info_UClass_ASizeShiftGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASizeShiftGameModeBase), 2291825748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftGameModeBase_h_64345404(TEXT("/Script/SizeShift"),
	Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
