// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSimpleExternalSource/Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseExternalSourceCookieDefaultMedia() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_WwiseSimpleExternalSource();
	WWISESIMPLEEXTERNALSOURCE_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia();
// End Cross Module References

static_assert(std::is_polymorphic<FWwiseExternalSourceCookieDefaultMedia>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWwiseExternalSourceCookieDefaultMedia cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia;
class UScriptStruct* FWwiseExternalSourceCookieDefaultMedia::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia, (UObject*)Z_Construct_UPackage__Script_WwiseSimpleExternalSource(), TEXT("WwiseExternalSourceCookieDefaultMedia"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.OuterSingleton;
}
template<> WWISESIMPLEEXTERNALSOURCE_API UScriptStruct* StaticStruct<FWwiseExternalSourceCookieDefaultMedia>()
{
	return FWwiseExternalSourceCookieDefaultMedia::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceCookie_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalSourceCookie;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaInfoId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MediaInfoId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Maps from an external source cookie to an entry in the FWwiseExternalSourceMediaInfo table\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps from an external source cookie to an entry in the FWwiseExternalSourceMediaInfo table" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseExternalSourceCookieDefaultMedia>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceCookie_MetaData[] = {
		{ "Category", "ExternalSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Hash of the external source name, technically a uint32\n//Used as the search key external source in the default external source table\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hash of the external source name, technically a uint32\nUsed as the search key external source in the default external source table" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceCookie = { "ExternalSourceCookie", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, ExternalSourceCookie), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceCookie_MetaData), Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceCookie_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceName_MetaData[] = {
		{ "Category", "ExternalSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Name of the external source name in Wwise\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the external source name in Wwise" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceName = { "ExternalSourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, ExternalSourceName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceName_MetaData), Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaInfoId_MetaData[] = {
		{ "Category", "ExternalSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Id of the media in the ExternalMediaInfoTable\n//Used to lookup media in the ExternalMediaInfoTable\n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id of the media in the ExternalMediaInfoTable\nUsed to lookup media in the ExternalMediaInfoTable" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaInfoId = { "MediaInfoId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, MediaInfoId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaInfoId_MetaData), Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaInfoId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaName_MetaData[] = {
		{ "Category", "ExternalSource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Not actually used, but helps keep track of what's pointing where. \n" },
#endif
		{ "ModuleRelativePath", "Public/Wwise/SimpleExtSrc/WwiseExternalSourceCookieDefaultMedia.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Not actually used, but helps keep track of what's pointing where." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaName = { "MediaName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWwiseExternalSourceCookieDefaultMedia, MediaName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaName_MetaData), Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceCookie,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_ExternalSourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaInfoId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewProp_MediaName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSimpleExternalSource,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WwiseExternalSourceCookieDefaultMedia",
		Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::PropPointers),
		sizeof(FWwiseExternalSourceCookieDefaultMedia),
		alignof(FWwiseExternalSourceCookieDefaultMedia),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.InnerSingleton, Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceCookieDefaultMedia_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceCookieDefaultMedia_h_Statics::ScriptStructInfo[] = {
		{ FWwiseExternalSourceCookieDefaultMedia::StaticStruct, Z_Construct_UScriptStruct_FWwiseExternalSourceCookieDefaultMedia_Statics::NewStructOps, TEXT("WwiseExternalSourceCookieDefaultMedia"), &Z_Registration_Info_UScriptStruct_WwiseExternalSourceCookieDefaultMedia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseExternalSourceCookieDefaultMedia), 827066743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceCookieDefaultMedia_h_3068189323(TEXT("/Script/WwiseSimpleExternalSource"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceCookieDefaultMedia_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseSimpleExternalSource_Public_Wwise_SimpleExtSrc_WwiseExternalSourceCookieDefaultMedia_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
