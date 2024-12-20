// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/InitializationSettings/AkInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCommSystem();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkPanningRule;
	static UEnum* EAkPanningRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkPanningRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkPanningRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkPanningRule, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkPanningRule"));
		}
		return Z_Registration_Info_UEnum_EAkPanningRule.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkPanningRule>()
	{
		return EAkPanningRule_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enumerators[] = {
		{ "EAkPanningRule::Speakers", (int64)EAkPanningRule::Speakers },
		{ "EAkPanningRule::Headphones", (int64)EAkPanningRule::Headphones },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enum_MetaDataParams[] = {
		{ "Headphones.Name", "EAkPanningRule::Headphones" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Speakers.Name", "EAkPanningRule::Speakers" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkPanningRule",
		"EAkPanningRule",
		Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule()
	{
		if (!Z_Registration_Info_UEnum_EAkPanningRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkPanningRule.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkPanningRule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkChannelConfigType;
	static UEnum* EAkChannelConfigType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkChannelConfigType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkChannelConfigType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelConfigType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkChannelConfigType"));
		}
		return Z_Registration_Info_UEnum_EAkChannelConfigType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelConfigType>()
	{
		return EAkChannelConfigType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::Enumerators[] = {
		{ "EAkChannelConfigType::Anonymous", (int64)EAkChannelConfigType::Anonymous },
		{ "EAkChannelConfigType::Standard", (int64)EAkChannelConfigType::Standard },
		{ "EAkChannelConfigType::Ambisonic", (int64)EAkChannelConfigType::Ambisonic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::Enum_MetaDataParams[] = {
		{ "Ambisonic.Name", "EAkChannelConfigType::Ambisonic" },
		{ "Anonymous.Name", "EAkChannelConfigType::Anonymous" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Standard.Name", "EAkChannelConfigType::Standard" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkChannelConfigType",
		"EAkChannelConfigType",
		Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkChannelConfigType()
	{
		if (!Z_Registration_Info_UEnum_EAkChannelConfigType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkChannelConfigType.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkChannelConfigType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkChannelConfigType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkChannelMask;
	static UEnum* EAkChannelMask_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkChannelMask.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkChannelMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelMask, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkChannelMask"));
		}
		return Z_Registration_Info_UEnum_EAkChannelMask.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelMask>()
	{
		return EAkChannelMask_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enumerators[] = {
		{ "EAkChannelMask::FrontLeft", (int64)EAkChannelMask::FrontLeft },
		{ "EAkChannelMask::FrontRight", (int64)EAkChannelMask::FrontRight },
		{ "EAkChannelMask::FrontCenter", (int64)EAkChannelMask::FrontCenter },
		{ "EAkChannelMask::LowFrequency", (int64)EAkChannelMask::LowFrequency },
		{ "EAkChannelMask::BackLeft", (int64)EAkChannelMask::BackLeft },
		{ "EAkChannelMask::BackRight", (int64)EAkChannelMask::BackRight },
		{ "EAkChannelMask::BackCenter", (int64)EAkChannelMask::BackCenter },
		{ "EAkChannelMask::SideLeft", (int64)EAkChannelMask::SideLeft },
		{ "EAkChannelMask::SideRight", (int64)EAkChannelMask::SideRight },
		{ "EAkChannelMask::Top", (int64)EAkChannelMask::Top },
		{ "EAkChannelMask::HeightFrontLeft", (int64)EAkChannelMask::HeightFrontLeft },
		{ "EAkChannelMask::HeightFrontCenter", (int64)EAkChannelMask::HeightFrontCenter },
		{ "EAkChannelMask::HeightFrontRight", (int64)EAkChannelMask::HeightFrontRight },
		{ "EAkChannelMask::HeightBackLeft", (int64)EAkChannelMask::HeightBackLeft },
		{ "EAkChannelMask::HeightBackCenter", (int64)EAkChannelMask::HeightBackCenter },
		{ "EAkChannelMask::HeightBackRight", (int64)EAkChannelMask::HeightBackRight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enum_MetaDataParams[] = {
		{ "BackCenter.Name", "EAkChannelMask::BackCenter" },
		{ "BackLeft.Name", "EAkChannelMask::BackLeft" },
		{ "BackRight.Name", "EAkChannelMask::BackRight" },
		{ "Bitmask", "" },
		{ "FrontCenter.Name", "EAkChannelMask::FrontCenter" },
		{ "FrontLeft.Name", "EAkChannelMask::FrontLeft" },
		{ "FrontRight.Name", "EAkChannelMask::FrontRight" },
		{ "HeightBackCenter.Name", "EAkChannelMask::HeightBackCenter" },
		{ "HeightBackLeft.Name", "EAkChannelMask::HeightBackLeft" },
		{ "HeightBackRight.Name", "EAkChannelMask::HeightBackRight" },
		{ "HeightFrontCenter.Name", "EAkChannelMask::HeightFrontCenter" },
		{ "HeightFrontLeft.Name", "EAkChannelMask::HeightFrontLeft" },
		{ "HeightFrontRight.Name", "EAkChannelMask::HeightFrontRight" },
		{ "LowFrequency.Name", "EAkChannelMask::LowFrequency" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "SideLeft.Name", "EAkChannelMask::SideLeft" },
		{ "SideRight.Name", "EAkChannelMask::SideRight" },
		{ "Top.Name", "EAkChannelMask::Top" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkChannelMask",
		"EAkChannelMask",
		Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask()
	{
		if (!Z_Registration_Info_UEnum_EAkChannelMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkChannelMask.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkChannelMask.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkCommSystem;
	static UEnum* EAkCommSystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkCommSystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkCommSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCommSystem, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCommSystem"));
		}
		return Z_Registration_Info_UEnum_EAkCommSystem.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkCommSystem>()
	{
		return EAkCommSystem_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enumerators[] = {
		{ "EAkCommSystem::Socket", (int64)EAkCommSystem::Socket },
		{ "EAkCommSystem::HTCS", (int64)EAkCommSystem::HTCS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enum_MetaDataParams[] = {
		{ "HTCS.Comment", "// AkCommSettings::AkCommSystem_Socket,\n" },
		{ "HTCS.Name", "EAkCommSystem::HTCS" },
		{ "HTCS.ToolTip", "AkCommSettings::AkCommSystem_Socket," },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
		{ "Socket.Name", "EAkCommSystem::Socket" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkCommSystem",
		"EAkCommSystem",
		Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkCommSystem()
	{
		if (!Z_Registration_Info_UEnum_EAkCommSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkCommSystem.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkCommSystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkCommSystem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMainOutputSettings;
class UScriptStruct* FAkMainOutputSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMainOutputSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMainOutputSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMainOutputSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMainOutputSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkMainOutputSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMainOutputSettings>()
{
	return FAkMainOutputSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSet_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioDeviceShareSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DeviceID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PanningRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanningRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PanningRule;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelConfigType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelConfigType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelConfigType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChannelMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfChannels_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMainOutputSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of a custom audio device to use. Custom audio devices are defined in the Audio Device ShareSet section of the Wwise project. Leave this empty to output normally through the default audio device." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet = { "AudioDeviceShareSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, AudioDeviceShareSet), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet_MetaData), Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Device-specific identifier when you are using multiple devices of the same type. Leave the setting at 0 (default) if you are using only one device." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, DeviceID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData), Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rule for 3D panning of signals routed to a stereo bus. In \"Speakers\" mode, the angle of the front loudspeakers is used. In \"Headphones\" mode, the speaker angles are superseded by constant power panning between two virtual microphones spaced 180 degrees apart." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule = { "PanningRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, PanningRule), Z_Construct_UEnum_AkAudio_EAkPanningRule, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData), Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_MetaData) }; // 4234961449
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A code that completes the identification of channels by uChannelMask. Anonymous: Channel mask == 0 and channels. Standard: Channels must be identified with standard defines in AkSpeakerConfigs. Ambisonic: Channel mask == 0 and channels follow standard ambisonic order." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType = { "ChannelConfigType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, ChannelConfigType), Z_Construct_UEnum_AkAudio_EAkChannelConfigType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData), Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_MetaData) }; // 2379294989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkChannelMask" },
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A bit field, whose channel identifiers depend on AkChannelConfigType (up to 20)." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, ChannelMask), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData), Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Main Output Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of channels, identified (deduced from channel mask) or anonymous (set directly)." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels = { "NumberOfChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkMainOutputSettings, NumberOfChannels), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData), Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_AudioDeviceShareSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_DeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_PanningRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelConfigType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_ChannelMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewProp_NumberOfChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkMainOutputSettings",
		Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers),
		sizeof(FAkMainOutputSettings),
		alignof(FAkMainOutputSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkMainOutputSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMainOutputSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMainOutputSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMainOutputSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings;
class UScriptStruct* FAkSpatialAudioSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSpatialAudioSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkSpatialAudioSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkSpatialAudioSettings>()
{
	return FAkSpatialAudioSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSoundPropagationDepth_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxSoundPropagationDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPrimaryRays_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfPrimaryRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ReflectionOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiffractionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DiffractionOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEmitterRoomAuxSends_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxEmitterRoomAuxSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiffractionOnReflectionsOrder_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DiffractionOnReflectionsOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPathLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumPathLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPULimitPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CPULimitPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadBalancingSpread_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LoadBalancingSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableGeometricDiffractionAndTransmission_MetaData[];
#endif
		static void NewProp_EnableGeometricDiffractionAndTransmission_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGeometricDiffractionAndTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalcEmitterVirtualPosition_MetaData[];
#endif
		static void NewProp_CalcEmitterVirtualPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CalcEmitterVirtualPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSpatialAudioSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of portals that sound can propagate through. The default value is 8." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth = { "MaxSoundPropagationDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxSoundPropagationDepth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance (in game units) that an emitter or listener has to move to trigger a recalculation of reflections and diffraction. A high distance value has a lower CPU load than a low distance value, but the accuracy is also lower. Note that this value does not affect the ray tracing itself. Rays are cast each time a Spatial Audio update is executed. The default value is 25." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold = { "MovementThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MovementThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of primary rays used in the ray tracing engine. A larger value increases the chances of finding reflection and diffraction paths but results in higher CPU usage. When the CPU limit is active (see the CPU Limit Percentage Spatial Audio Setting), this setting represents the maximum allowed number of primary rays. The default value is 35." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays = { "NumberOfPrimaryRays", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, NumberOfPrimaryRays), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum reflection order: the number of \"bounces\" in a reflection path.A higher reflection order renders more detail at the expense of higher CPU usage.The default value is 2." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder = { "ReflectionOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, ReflectionOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum diffraction order: the number of \"bends\" in a diffraction path. A high diffraction order accommodates more complex geometry at the expense of higher CPU usage. Diffraction must be enabled on the geometry to find diffraction paths. Set to 0 to disable diffraction on all geometry. This parameter limits the recursion depth of diffraction rays cast from the listener to scan the environment and also the depth of the diffraction search to find paths between emitter and listener. To optimize CPU usage, set it to the maximum number of edges you expect the obstructing geometry to traverse. The default value is 4." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder = { "DiffractionOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, DiffractionOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxEmitterRoomAuxSends_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of game-defined auxiliary sends that can originate from a single emitter. An emitter can send to its own Room and to all adjacent Rooms if the emitter and listener are in the same Room. If a limit is set, the most prominent sends are kept, based on spread to the adjacent portal from the emitter's perspective. Set to 1 to only allow emitters to send directly to their current Room, and to the Room a listener is transitioning to if inside a portal. Set to 0 to disable the limit. The default value is 3." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxEmitterRoomAuxSends = { "MaxEmitterRoomAuxSends", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaxEmitterRoomAuxSends), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxEmitterRoomAuxSends_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxEmitterRoomAuxSends_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum possible number of diffraction points at each end of a reflection path. Diffraction on reflection allows reflections to fade in and out smoothly as the listener or emitter moves in and out of the reflection's shadow zone. When greater than zero, diffraction rays are sent from the listener to search for reflections around one or more corners from the listener. Diffraction must be enabled on the geometry to find diffracted reflections. Set to 0 to disable diffraction on reflections. Set to 2 or greater to allow Reflection paths to travel through Portals. The default value is 2." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder = { "DiffractionOnReflectionsOrder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, DiffractionOnReflectionsOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of the rays that are cast inside Spatial Audio. Effectively caps the maximum length of an individual segment in a reflection or diffraction path. The default value is 100000." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength = { "MaximumPathLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, MaximumPathLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "DisplayName", "CPU Limit Percentage" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the targeted computation time allocated for the ray tracing engine as a percentage [0, 100] of the current audio frame. The ray tracing engine dynamically adapts the number of primary rays to target the specified computation time. The computed number of primary rays cannot exceed the value specified by the Number Of Primary Rays Spatial Audio Setting. A value of 0 indicates no target has been set. In this case, the number of primary rays is fixed and is set by the Number Of Primary Rays Spatial Audio Setting. The default value is 0." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage = { "CPULimitPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, CPULimitPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Load Balancing Spread" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The computation of spatial audio paths is spread on LoadBalancingSpread frames. Spreading the computation of paths over several frames can prevent CPU peaks. The spread introduces a delay in path computation. The default value is 1." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread = { "LoadBalancingSpread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkSpatialAudioSettings, LoadBalancingSpread), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable computation of geometric diffraction and transmission paths for all sources that have the \"Diffraction and Transmission\" option selected in the Positioning tab of the Wwise Property Editor. This flag enables sound paths around (diffraction) and through (transmission) geometry. Setting EnableGeometricDiffractionAndTransmission to false implies that geometry is only to be used for reflection calculation. Diffraction edges must be enabled on geometry for diffraction calculation. If EnableGeometricDiffractionAndTransmission is false but a sound has \"Diffraction and Transmission\" selected in the Positioning tab of Wwise Authoring, the sound will diffract through portals but pass through geometry as if it isn't there. Typically, we recommend you disable this setting if the game will perform obstruction calculations, but geometry is still passed to Spatial Audio for reflection calculations. The default value is true." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->EnableGeometricDiffractionAndTransmission = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission = { "EnableGeometricDiffractionAndTransmission", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Spatial Audio Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An emitter that is diffracted through a portal or around geometry will have its apparent or virtual position calculated by Wwise Spatial Audio and passed on to the sound engine. The default value is true." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_SetBit(void* Obj)
	{
		((FAkSpatialAudioSettings*)Obj)->CalcEmitterVirtualPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition = { "CalcEmitterVirtualPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkSpatialAudioSettings), &Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_MetaData), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxSoundPropagationDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MovementThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_NumberOfPrimaryRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_ReflectionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaxEmitterRoomAuxSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_DiffractionOnReflectionsOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_MaximumPathLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CPULimitPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_LoadBalancingSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_EnableGeometricDiffractionAndTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewProp_CalcEmitterVirtualPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkSpatialAudioSettings",
		Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers),
		sizeof(FAkSpatialAudioSettings),
		alignof(FAkSpatialAudioSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkSpatialAudioSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkCommunicationSettings;
class UScriptStruct* FAkCommunicationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkCommunicationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkCommunicationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettings>()
{
	return FAkCommunicationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PoolSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveryBroadcastPort_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_DiscoveryBroadcastPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandPort_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_CommandPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NetworkName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the communication pool." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData), Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The port where the authoring application broadcasts \"Game Discovery\" requests to discover games running on the network. Default value: 24024. (Cannot be set to 0)." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort = { "DiscoveryBroadcastPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, DiscoveryBroadcastPort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData), Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The \"command\" channel port. Set to 0 to request a dynamic/ephemeral port." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort = { "CommandPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, CommandPort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData), Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name used to identify this game within the authoring application. Leave empty to use FApp::GetProjectName()." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName = { "NetworkName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettings, NetworkName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData), Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_PoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_DiscoveryBroadcastPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_CommandPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewProp_NetworkName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkCommunicationSettings",
		Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers),
		sizeof(FAkCommunicationSettings),
		alignof(FAkCommunicationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkCommunicationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkCommunicationSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkCommunicationSettingsWithSystemInitialization>() == std::is_polymorphic<FAkCommunicationSettings>(), "USTRUCT FAkCommunicationSettingsWithSystemInitialization cannot be polymorphic unless super FAkCommunicationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization;
class UScriptStruct* FAkCommunicationSettingsWithSystemInitialization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettingsWithSystemInitialization"));
	}
	return Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettingsWithSystemInitialization>()
{
	return FAkCommunicationSettingsWithSystemInitialization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializeSystemComms_MetaData[];
#endif
		static void NewProp_InitializeSystemComms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InitializeSystemComms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithSystemInitialization>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether or not to initialize the communication system. Some consoles have critical requirements for initialization of their communications systems. Set to false only if your game already uses sockets before sound engine initialization." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_SetBit(void* Obj)
	{
		((FAkCommunicationSettingsWithSystemInitialization*)Obj)->InitializeSystemComms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms = { "InitializeSystemComms", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkCommunicationSettingsWithSystemInitialization), &Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommunicationSettings,
		&NewStructOps,
		"AkCommunicationSettingsWithSystemInitialization",
		Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers),
		sizeof(FAkCommunicationSettingsWithSystemInitialization),
		alignof(FAkCommunicationSettingsWithSystemInitialization),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization()
	{
		if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.InnerSingleton, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkCommunicationSettingsWithCommSelection>() == std::is_polymorphic<FAkCommunicationSettings>(), "USTRUCT FAkCommunicationSettingsWithCommSelection cannot be polymorphic unless super FAkCommunicationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection;
class UScriptStruct* FAkCommunicationSettingsWithCommSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettingsWithCommSelection"));
	}
	return Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettingsWithCommSelection>()
{
	return FAkCommunicationSettingsWithCommSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_CommunicationSystem_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSystem_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CommunicationSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithCommSelection>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_MetaData[] = {
		{ "Category", "Ak Initialization Settings|Communication Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select between Socket and HTCS communication protocol. Socket is the Default option." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem = { "CommunicationSystem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommunicationSettingsWithCommSelection, CommunicationSystem), Z_Construct_UEnum_AkAudio_EAkCommSystem, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_MetaData), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_MetaData) }; // 2737459228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommunicationSettings,
		&NewStructOps,
		"AkCommunicationSettingsWithCommSelection",
		Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers),
		sizeof(FAkCommunicationSettingsWithCommSelection),
		alignof(FAkCommunicationSettingsWithCommSelection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.InnerSingleton, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings;
class UScriptStruct* FAkCommonInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommonInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommonInitializationSettings>()
{
	return FAkCommonInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfMemoryPools_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumNumberOfMemoryPools;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumNumberOfPositioningPaths_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumNumberOfPositioningPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandQueueSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CommandQueueSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SamplesPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainOutputSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainOutputSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingLookAheadRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingLookAheadRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfRefillsInVoice_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_NumberOfRefillsInVoice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatialAudioSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpatialAudioSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of memory pools. A memory pool is required for each loaded bank." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools = { "MaximumNumberOfMemoryPools", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MaximumNumberOfMemoryPools), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools_MetaData), Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of automation paths for positioning sounds." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths = { "MaximumNumberOfPositioningPaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MaximumNumberOfPositioningPaths), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths_MetaData), Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the command queue." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize = { "CommandQueueSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, CommandQueueSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize_MetaData), Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of samples per audio frame (256, 512, 1024, or 2048)." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame = { "SamplesPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, SamplesPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame_MetaData), Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platform-independent initialization settings of output devices." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings = { "MainOutputSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, MainOutputSettings), Z_Construct_UScriptStruct_FAkMainOutputSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings_MetaData), Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings_MetaData) }; // 4165245320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplication factor for all streaming look-ahead heuristic values." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio = { "StreamingLookAheadRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, StreamingLookAheadRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio_MetaData), Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of refill buffers in voice buffer. Set to 2 for double-buffered. The default value is 4." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice = { "NumberOfRefillsInVoice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, NumberOfRefillsInVoice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice_MetaData), Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings = { "SpatialAudioSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettings, SpatialAudioSettings), Z_Construct_UScriptStruct_FAkSpatialAudioSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData), Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings_MetaData) }; // 2525999724
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfMemoryPools,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MaximumNumberOfPositioningPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_CommandQueueSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SamplesPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_MainOutputSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_StreamingLookAheadRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_NumberOfRefillsInVoice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewProp_SpatialAudioSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkCommonInitializationSettings",
		Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers),
		sizeof(FAkCommonInitializationSettings),
		alignof(FAkCommonInitializationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkCommonInitializationSettingsWithSampleRate>() == std::is_polymorphic<FAkCommonInitializationSettings>(), "USTRUCT FAkCommonInitializationSettingsWithSampleRate cannot be polymorphic unless super FAkCommonInitializationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate;
class UScriptStruct* FAkCommonInitializationSettingsWithSampleRate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommonInitializationSettingsWithSampleRate"));
	}
	return Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommonInitializationSettingsWithSampleRate>()
{
	return FAkCommonInitializationSettingsWithSampleRate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommonInitializationSettingsWithSampleRate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Common Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sampling Rate. Default is 48000 Hz. Use 24000hz for low quality. Any positive reasonable sample rate is supported; however, be careful setting a custom value. Using an odd or really low sample rate may cause the sound engine to malfunction." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkCommonInitializationSettingsWithSampleRate, SampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewProp_SampleRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommonInitializationSettings,
		&NewStructOps,
		"AkCommonInitializationSettingsWithSampleRate",
		Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers),
		sizeof(FAkCommonInitializationSettingsWithSampleRate),
		alignof(FAkCommonInitializationSettingsWithSampleRate),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate()
	{
		if (!Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.InnerSingleton, Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings;
class UScriptStruct* FAkAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAdvancedInitializationSettings>()
{
	return FAkAdvancedInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IO_MemorySize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IO_MemorySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IO_Granularity_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IO_Granularity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAutoStreamBufferLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetAutoStreamBufferLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseStreamCache_MetaData[];
#endif
		static void NewProp_UseStreamCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseStreamCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPinnedBytesInCache_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumPinnedBytesInCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableGameSyncPreparation_MetaData[];
#endif
		static void NewProp_EnableGameSyncPreparation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGameSyncPreparation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousPlaybackLookAhead_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ContinuousPlaybackLookAhead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonitorQueuePoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MonitorQueuePoolSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumHardwareTimeoutMs_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaximumHardwareTimeoutMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugOutOfRangeCheckEnabled_MetaData[];
#endif
		static void NewProp_DebugOutOfRangeCheckEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugOutOfRangeCheckEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugOutOfRangeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugOutOfRangeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VmPageSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_VmPageSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of memory pool for I/O (for automatic streams). It is rounded down to a multiple of uGranularity and then passed directly to AK::MemoryMgr::CreatePool()." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize = { "IO_MemorySize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_MemorySize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "I/O requests granularity (typical bytes/request)." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity = { "IO_Granularity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, IO_Granularity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Targeted automatic stream buffer length (ms). When a stream reaches that buffering, it stops being scheduled for I/O except if the scheduler is idle." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength = { "TargetAutoStreamBufferLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, TargetAutoStreamBufferLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the device attempts to reuse I/O buffers that have already been streamed from disk. This is particularly useful when streaming small looping sounds. However, there is a small increase in CPU usage when allocating memory, and a slightly larger memory footprint in the StreamManager pool." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->UseStreamCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache = { "UseStreamCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of bytes that can be \"pinned\" using AK::SoundEngine::PinEventInStreamCache() or AK::IAkStreamMgr::PinFileInCache()." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache = { "MaximumPinnedBytesInCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumPinnedBytesInCache), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true to enable AK::SoundEngine::PrepareGameSync usage." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->EnableGameSyncPreparation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation = { "EnableGameSyncPreparation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of quanta ahead when continuous containers instantiate a new voice before the following sounds start playing. This look-ahead time allows I/O to occur, and is especially useful to reduce the latency of continuous containers with trigger rate or sample-accurate transitions." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead = { "ContinuousPlaybackLookAhead", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, ContinuousPlaybackLookAhead), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the monitoring queue pool. This parameter is ignored in Release builds." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize = { "MonitorQueuePoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MonitorQueuePoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time (in milliseconds) to wait for hardware devices to trigger an audio interrupt. If there is no interrupt after that time, the sound engine reverts to silent mode and continues operating until the hardware responds." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs = { "MaximumHardwareTimeoutMs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, MaximumHardwareTimeoutMs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug setting: Enable checks for out-of-range (and NAN) floats in the processing code. Do not enable in any normal usage because this setting uses a lot of CPU. It prints error messages in the log if invalid values are found at various points in the pipeline. Contact AK Support with the new error messages for more information." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettings*)Obj)->DebugOutOfRangeCheckEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled = { "DebugOutOfRangeCheckEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "EditCondition", "DebugOutOfRangeCheckEnabled" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug setting: Only used when Debug Out Of Range Check Enabled is true. This defines the maximum values samples can have. Normal audio must be contained within +1/-1. Set this limit to a value greater than 1 to allow temporary or short excursions out of range. The default value is 16." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit = { "DebugOutOfRangeLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, DebugOutOfRangeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_VmPageSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Virtual memory page size. Modify the setting only if hitting an assert regarding memory page size." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_VmPageSize = { "VmPageSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettings, VmPageSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_VmPageSize_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_VmPageSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_MemorySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_IO_Granularity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_TargetAutoStreamBufferLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_UseStreamCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumPinnedBytesInCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_EnableGameSyncPreparation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_ContinuousPlaybackLookAhead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MonitorQueuePoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_MaximumHardwareTimeoutMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeCheckEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_DebugOutOfRangeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewProp_VmPageSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAdvancedInitializationSettings",
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers),
		sizeof(FAkAdvancedInitializationSettings),
		alignof(FAkAdvancedInitializationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>() == std::is_polymorphic<FAkAdvancedInitializationSettings>(), "USTRUCT FAkAdvancedInitializationSettingsWithMultiCoreRendering cannot be polymorphic unless super FAkAdvancedInitializationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering;
class UScriptStruct* FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"));
	}
	return Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAdvancedInitializationSettingsWithMultiCoreRendering>()
{
	return FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_EnableMultiCoreRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableMultiCoreRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumJobWorkers_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxNumJobWorkers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JobWorkerMaxExecutionTimeUSec_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_JobWorkerMaxExecutionTimeUSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedInitializationSettingsWithMultiCoreRendering>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable to run SoundEngine processing tasks on the Unreal Engine worker threads. Requires Editor restart." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_SetBit(void* Obj)
	{
		((FAkAdvancedInitializationSettingsWithMultiCoreRendering*)Obj)->EnableMultiCoreRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering = { "EnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), &Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "EditCondition", "EnableMultiCoreRendering" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configure the maximum number of workers that the Sound Engine will request at any given time. Requires Editor restart." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers = { "MaxNumJobWorkers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettingsWithMultiCoreRendering, MaxNumJobWorkers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "EditCondition", "EnableMultiCoreRendering" },
		{ "ModuleRelativePath", "Classes/InitializationSettings/AkInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum time allotted for each Sound Engine job in microseconds (0 is unlimited). Requires Editor restart." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec = { "JobWorkerMaxExecutionTimeUSec", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAdvancedInitializationSettingsWithMultiCoreRendering, JobWorkerMaxExecutionTimeUSec), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec_MetaData), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_EnableMultiCoreRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_MaxNumJobWorkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewProp_JobWorkerMaxExecutionTimeUSec,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings,
		&NewStructOps,
		"AkAdvancedInitializationSettingsWithMultiCoreRendering",
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers),
		sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
		alignof(FAkAdvancedInitializationSettingsWithMultiCoreRendering),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_Statics::EnumInfo[] = {
		{ EAkPanningRule_StaticEnum, TEXT("EAkPanningRule"), &Z_Registration_Info_UEnum_EAkPanningRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4234961449U) },
		{ EAkChannelConfigType_StaticEnum, TEXT("EAkChannelConfigType"), &Z_Registration_Info_UEnum_EAkChannelConfigType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2379294989U) },
		{ EAkChannelMask_StaticEnum, TEXT("EAkChannelMask"), &Z_Registration_Info_UEnum_EAkChannelMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1973465761U) },
		{ EAkCommSystem_StaticEnum, TEXT("EAkCommSystem"), &Z_Registration_Info_UEnum_EAkCommSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2737459228U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkMainOutputSettings::StaticStruct, Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics::NewStructOps, TEXT("AkMainOutputSettings"), &Z_Registration_Info_UScriptStruct_AkMainOutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMainOutputSettings), 4165245320U) },
		{ FAkSpatialAudioSettings::StaticStruct, Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics::NewStructOps, TEXT("AkSpatialAudioSettings"), &Z_Registration_Info_UScriptStruct_AkSpatialAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkSpatialAudioSettings), 2525999724U) },
		{ FAkCommunicationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics::NewStructOps, TEXT("AkCommunicationSettings"), &Z_Registration_Info_UScriptStruct_AkCommunicationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettings), 3132192014U) },
		{ FAkCommunicationSettingsWithSystemInitialization::StaticStruct, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewStructOps, TEXT("AkCommunicationSettingsWithSystemInitialization"), &Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettingsWithSystemInitialization), 1178487601U) },
		{ FAkCommunicationSettingsWithCommSelection::StaticStruct, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewStructOps, TEXT("AkCommunicationSettingsWithCommSelection"), &Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettingsWithCommSelection), 2018666966U) },
		{ FAkCommonInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics::NewStructOps, TEXT("AkCommonInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkCommonInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommonInitializationSettings), 1055472405U) },
		{ FAkCommonInitializationSettingsWithSampleRate::StaticStruct, Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics::NewStructOps, TEXT("AkCommonInitializationSettingsWithSampleRate"), &Z_Registration_Info_UScriptStruct_AkCommonInitializationSettingsWithSampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommonInitializationSettingsWithSampleRate), 1718117610U) },
		{ FAkAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAdvancedInitializationSettings), 2652713158U) },
		{ FAkAdvancedInitializationSettingsWithMultiCoreRendering::StaticStruct, Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics::NewStructOps, TEXT("AkAdvancedInitializationSettingsWithMultiCoreRendering"), &Z_Registration_Info_UScriptStruct_AkAdvancedInitializationSettingsWithMultiCoreRendering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering), 1793740867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_2795439692(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
