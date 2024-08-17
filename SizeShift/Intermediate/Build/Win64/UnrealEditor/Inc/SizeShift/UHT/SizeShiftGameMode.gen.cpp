// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SizeShift/SizeShiftGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSizeShiftGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SIZESHIFT_API UClass* Z_Construct_UClass_ASizeShiftGameMode();
SIZESHIFT_API UClass* Z_Construct_UClass_ASizeShiftGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SizeShift();
// End Cross Module References

// Begin Class ASizeShiftGameMode
void ASizeShiftGameMode::StaticRegisterNativesASizeShiftGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASizeShiftGameMode);
UClass* Z_Construct_UClass_ASizeShiftGameMode_NoRegister()
{
	return ASizeShiftGameMode::StaticClass();
}
struct Z_Construct_UClass_ASizeShiftGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SizeShiftGameMode.h" },
		{ "ModuleRelativePath", "SizeShiftGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASizeShiftGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASizeShiftGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SizeShift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASizeShiftGameMode_Statics::ClassParams = {
	&ASizeShiftGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASizeShiftGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASizeShiftGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASizeShiftGameMode()
{
	if (!Z_Registration_Info_UClass_ASizeShiftGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASizeShiftGameMode.OuterSingleton, Z_Construct_UClass_ASizeShiftGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASizeShiftGameMode.OuterSingleton;
}
template<> SIZESHIFT_API UClass* StaticClass<ASizeShiftGameMode>()
{
	return ASizeShiftGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASizeShiftGameMode);
ASizeShiftGameMode::~ASizeShiftGameMode() {}
// End Class ASizeShiftGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASizeShiftGameMode, ASizeShiftGameMode::StaticClass, TEXT("ASizeShiftGameMode"), &Z_Registration_Info_UClass_ASizeShiftGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASizeShiftGameMode), 1083798903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftGameMode_h_1343276888(TEXT("/Script/SizeShift"),
	Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SizeShift_Source_SizeShift_SizeShiftGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
