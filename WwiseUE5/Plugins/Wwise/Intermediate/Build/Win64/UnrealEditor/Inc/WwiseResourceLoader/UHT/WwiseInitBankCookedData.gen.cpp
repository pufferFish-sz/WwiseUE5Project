// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseInitBankCookedData.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseLanguageCookedData.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseMediaCookedData.h"
#include "WwiseFileHandler/Public/Wwise/CookedData/WwiseSoundBankCookedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseInitBankCookedData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseLanguageCookedData();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseMediaCookedData();
	WWISEFILEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSoundBankCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseInitBankCookedData();
// End Cross Module References

static_assert(std::is_polymorphic<FWwiseInitBankCookedData>() == std::is_polymorphic<FWwiseSoundBankCookedData>(), "USTRUCT FWwiseInitBankCookedData cannot be polymorphic unless super FWwiseSoundBankCookedData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseInitBankCookedData;
class UScriptStruct* FWwiseInitBankCookedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseInitBankCookedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseInitBankCookedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseInitBankCookedData, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseInitBankCookedData"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseInitBankCookedData.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseInitBankCookedData>()
{
	return FWwiseInitBankCookedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundBanks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Media_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Media_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Media;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Language_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Language;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseInitBankCookedData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseSoundBankCookedData, METADATA_PARAMS(0, nullptr) }; // 3561908703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseInitBankCookedData, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks_MetaData), Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks_MetaData) }; // 3561908703
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media_Inner = { "Media", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseMediaCookedData, METADATA_PARAMS(0, nullptr) }; // 3915386998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media = { "Media", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseInitBankCookedData, Media), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media_MetaData), Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media_MetaData) }; // 3915386998
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language_Inner = { "Language", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWwiseLanguageCookedData, METADATA_PARAMS(0, nullptr) }; // 1447532684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "Wwise" },
		{ "ModuleRelativePath", "Public/Wwise/CookedData/WwiseInitBankCookedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseInitBankCookedData, Language), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language_MetaData), Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language_MetaData) }; // 1447532684
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_SoundBanks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Media,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewProp_Language,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		Z_Construct_UScriptStruct_FWwiseSoundBankCookedData,
		&NewStructOps,
		"WwiseInitBankCookedData",
		Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::PropPointers),
		sizeof(FWwiseInitBankCookedData),
		alignof(FWwiseInitBankCookedData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseInitBankCookedData()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseInitBankCookedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseInitBankCookedData.InnerSingleton, Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseInitBankCookedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h_Statics::ScriptStructInfo[] = {
		{ FWwiseInitBankCookedData::StaticStruct, Z_Construct_UScriptStruct_FWwiseInitBankCookedData_Statics::NewStructOps, TEXT("WwiseInitBankCookedData"), &Z_Registration_Info_UScriptStruct_WwiseInitBankCookedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseInitBankCookedData), 3772727030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h_1178659806(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_CookedData_WwiseInitBankCookedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
