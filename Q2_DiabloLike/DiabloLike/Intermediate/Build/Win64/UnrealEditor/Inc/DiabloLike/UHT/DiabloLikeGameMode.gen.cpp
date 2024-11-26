// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiabloLike/DiabloLikeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiabloLikeGameMode() {}

// Begin Cross Module References
DIABLOLIKE_API UClass* Z_Construct_UClass_ADiabloLikeGameMode();
DIABLOLIKE_API UClass* Z_Construct_UClass_ADiabloLikeGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DiabloLike();
// End Cross Module References

// Begin Class ADiabloLikeGameMode
void ADiabloLikeGameMode::StaticRegisterNativesADiabloLikeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADiabloLikeGameMode);
UClass* Z_Construct_UClass_ADiabloLikeGameMode_NoRegister()
{
	return ADiabloLikeGameMode::StaticClass();
}
struct Z_Construct_UClass_ADiabloLikeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DiabloLikeGameMode.h" },
		{ "ModuleRelativePath", "DiabloLikeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADiabloLikeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADiabloLikeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DiabloLike,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADiabloLikeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADiabloLikeGameMode_Statics::ClassParams = {
	&ADiabloLikeGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADiabloLikeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADiabloLikeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADiabloLikeGameMode()
{
	if (!Z_Registration_Info_UClass_ADiabloLikeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADiabloLikeGameMode.OuterSingleton, Z_Construct_UClass_ADiabloLikeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADiabloLikeGameMode.OuterSingleton;
}
template<> DIABLOLIKE_API UClass* StaticClass<ADiabloLikeGameMode>()
{
	return ADiabloLikeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADiabloLikeGameMode);
ADiabloLikeGameMode::~ADiabloLikeGameMode() {}
// End Class ADiabloLikeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_mrtro_Documents_GitHub_diabloLike_Q2_DiabloLike_DiabloLike_Source_DiabloLike_DiabloLikeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADiabloLikeGameMode, ADiabloLikeGameMode::StaticClass, TEXT("ADiabloLikeGameMode"), &Z_Registration_Info_UClass_ADiabloLikeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADiabloLikeGameMode), 3459386844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mrtro_Documents_GitHub_diabloLike_Q2_DiabloLike_DiabloLike_Source_DiabloLike_DiabloLikeGameMode_h_963645809(TEXT("/Script/DiabloLike"),
	Z_CompiledInDeferFile_FID_Users_mrtro_Documents_GitHub_diabloLike_Q2_DiabloLike_DiabloLike_Source_DiabloLike_DiabloLikeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mrtro_Documents_GitHub_diabloLike_Q2_DiabloLike_DiabloLike_Source_DiabloLike_DiabloLikeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
