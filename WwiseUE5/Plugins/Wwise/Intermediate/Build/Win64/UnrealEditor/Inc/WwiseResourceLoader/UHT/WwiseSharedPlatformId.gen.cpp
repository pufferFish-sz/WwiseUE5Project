// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/WwiseSharedPlatformId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseSharedPlatformId() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedPlatformId();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WwiseSharedPlatformId;
class UScriptStruct* FWwiseSharedPlatformId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WwiseSharedPlatformId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WwiseSharedPlatformId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWwiseSharedPlatformId, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("WwiseSharedPlatformId"));
	}
	return Z_Registration_Info_UScriptStruct_WwiseSharedPlatformId.OuterSingleton;
}
template<> WWISERESOURCELOADER_API UScriptStruct* StaticStruct<FWwiseSharedPlatformId>()
{
	return FWwiseSharedPlatformId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Wwise/WwiseSharedPlatformId.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWwiseSharedPlatformId>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		&NewStructOps,
		"WwiseSharedPlatformId",
		nullptr,
		0,
		sizeof(FWwiseSharedPlatformId),
		alignof(FWwiseSharedPlatformId),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWwiseSharedPlatformId()
	{
		if (!Z_Registration_Info_UScriptStruct_WwiseSharedPlatformId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WwiseSharedPlatformId.InnerSingleton, Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WwiseSharedPlatformId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h_Statics::ScriptStructInfo[] = {
		{ FWwiseSharedPlatformId::StaticStruct, Z_Construct_UScriptStruct_FWwiseSharedPlatformId_Statics::NewStructOps, TEXT("WwiseSharedPlatformId"), &Z_Registration_Info_UScriptStruct_WwiseSharedPlatformId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWwiseSharedPlatformId), 1069346837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h_1108736081(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseSharedPlatformId_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
