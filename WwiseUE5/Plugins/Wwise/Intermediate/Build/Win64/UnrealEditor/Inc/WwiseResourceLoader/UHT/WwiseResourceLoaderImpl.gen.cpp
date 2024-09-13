// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/Wwise/WwiseResourceLoaderImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseResourceLoaderImpl() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseReloadLanguage;
	static UEnum* EWwiseReloadLanguage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseReloadLanguage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseReloadLanguage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage, (UObject*)Z_Construct_UPackage__Script_WwiseResourceLoader(), TEXT("EWwiseReloadLanguage"));
		}
		return Z_Registration_Info_UEnum_EWwiseReloadLanguage.OuterSingleton;
	}
	template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseReloadLanguage>()
	{
		return EWwiseReloadLanguage_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enumerators[] = {
		{ "Manual", (int64)Manual },
		{ "Immediate", (int64)Immediate },
		{ "Safe", (int64)Safe },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief What reload strategy should be used for language changes\n*/" },
#endif
		{ "Immediate.Comment", "/// Reloads immediately without stopping anything. Game is responsible for stopping and restarting\n/// possibly affected sounds or else they might cause audible breaks. This is useful when some\n/// sounds can keep on playing, such as music and ambient sounds, while the dialogues are being\n/// internally reloaded.\n/// \n/// Depending on the quantity of currently loaded localized banks, the operation can take a long time.\n/// \n/// \\warning Affected events needs to be restarted once the operation is done.\n" },
		{ "Immediate.Name", "Immediate" },
		{ "Immediate.ToolTip", "Reloads immediately without stopping anything. Game is responsible for stopping and restarting\npossibly affected sounds or else they might cause audible breaks. This is useful when some\nsounds can keep on playing, such as music and ambient sounds, while the dialogues are being\ninternally reloaded.\n\nDepending on the quantity of currently loaded localized banks, the operation can take a long time.\n\n\\warning Affected events needs to be restarted once the operation is done." },
		{ "Manual.Comment", "/// Don't reload anything. The game is fully responsible to reload elements. This doesn't call\n/// any operation on the SoundEngine side, so everything will keep on working as usual.\n" },
		{ "Manual.Name", "Manual" },
		{ "Manual.ToolTip", "Don't reload anything. The game is fully responsible to reload elements. This doesn't call\nany operation on the SoundEngine side, so everything will keep on working as usual." },
		{ "ModuleRelativePath", "Public/Wwise/WwiseResourceLoaderImpl.h" },
		{ "Safe.Comment", "/// Stops all sounds first, unloads all the localized banks, and reloads the new language. This will\n/// cause an audible break while the operation is done.\n/// \n/// Depending on the quantity of currently loaded localized banks, the operation can take a long time.\n/// \n/// \\warning Affected events needs to be restarted once the operation is done.\n" },
		{ "Safe.Name", "Safe" },
		{ "Safe.ToolTip", "Stops all sounds first, unloads all the localized banks, and reloads the new language. This will\ncause an audible break while the operation is done.\n\nDepending on the quantity of currently loaded localized banks, the operation can take a long time.\n\n\\warning Affected events needs to be restarted once the operation is done." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief What reload strategy should be used for language changes" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
		nullptr,
		"EWwiseReloadLanguage",
		"EWwiseReloadLanguage",
		Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage()
	{
		if (!Z_Registration_Info_UEnum_EWwiseReloadLanguage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseReloadLanguage.InnerSingleton, Z_Construct_UEnum_WwiseResourceLoader_EWwiseReloadLanguage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseReloadLanguage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseResourceLoaderImpl_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseResourceLoaderImpl_h_Statics::EnumInfo[] = {
		{ EWwiseReloadLanguage_StaticEnum, TEXT("EWwiseReloadLanguage"), &Z_Registration_Info_UEnum_EWwiseReloadLanguage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 295613542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseResourceLoaderImpl_h_491727726(TEXT("/Script/WwiseResourceLoader"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseResourceLoaderImpl_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_WwiseResourceLoader_Public_Wwise_WwiseResourceLoaderImpl_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
