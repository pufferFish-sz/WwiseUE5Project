// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h"
#include "AkAudio/Classes/InitializationSettings/AkInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAndroidInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAndroidInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkAndroidAudioAPI;
	static UEnum* EAkAndroidAudioAPI_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkAndroidAudioAPI.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkAndroidAudioAPI.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkAndroidAudioAPI"));
		}
		return Z_Registration_Info_UEnum_EAkAndroidAudioAPI.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkAndroidAudioAPI>()
	{
		return EAkAndroidAudioAPI_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enumerators[] = {
		{ "EAkAndroidAudioAPI::AAudio", (int64)EAkAndroidAudioAPI::AAudio },
		{ "EAkAndroidAudioAPI::OpenSL_ES", (int64)EAkAndroidAudioAPI::OpenSL_ES },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enum_MetaDataParams[] = {
		{ "AAudio.Name", "EAkAndroidAudioAPI::AAudio" },
		{ "Bitmask", "" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
		{ "OpenSL_ES.Name", "EAkAndroidAudioAPI::OpenSL_ES" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkAndroidAudioAPI",
		"EAkAndroidAudioAPI",
		Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI()
	{
		if (!Z_Registration_Info_UEnum_EAkAndroidAudioAPI.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkAndroidAudioAPI.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkAndroidAudioAPI_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkAndroidAudioAPI.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAkAndroidAdvancedInitializationSettings>() == std::is_polymorphic<FAkAdvancedInitializationSettingsWithMultiCoreRendering>(), "USTRUCT FAkAndroidAdvancedInitializationSettings cannot be polymorphic unless super FAkAdvancedInitializationSettingsWithMultiCoreRendering is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings;
class UScriptStruct* FAkAndroidAdvancedInitializationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAndroidAdvancedInitializationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAndroidAdvancedInitializationSettings>()
{
	return FAkAndroidAdvancedInitializationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioAPI_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AudioAPI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundFrameSizeToHardwareSize_MetaData[];
#endif
		static void NewProp_RoundFrameSizeToHardwareSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RoundFrameSizeToHardwareSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseLowLatencyMode_MetaData[];
#endif
		static void NewProp_UseLowLatencyMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseLowLatencyMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseSink_MetaData[];
#endif
		static void NewProp_bVerboseSink_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseSink;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAndroidAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AkAudio.EAkAndroidAudioAPI" },
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main audio API to use. Leave set to \"Default\" for the default audio sink." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI = { "AudioAPI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAndroidAdvancedInitializationSettings, AudioAPI), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI_MetaData), Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used when hardware-preferred frame size and user-preferred frame size are not compatible. If true (default), the sound engine will initialize to a multiple of the HW setting, close to the user setting. If false, the user setting is used as is, regardless of the HW preference (might incur a performance hit)." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_SetBit(void* Obj)
	{
		((FAkAndroidAdvancedInitializationSettings*)Obj)->RoundFrameSizeToHardwareSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize = { "RoundFrameSizeToHardwareSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_MetaData), Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use the lowest output latency possible for the current hardware. If true (default), the output audio device will be initialized in low-latency operation, allowing for more responsive audio playback on most devices. However, when operating in low-latency mode, some devices may have differences in audio reproduction. If false, the output audio device will be initialized without low-latency operation." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode_SetBit(void* Obj)
	{
		((FAkAndroidAdvancedInitializationSettings*)Obj)->UseLowLatencyMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode = { "UseLowLatencyMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode_MetaData), Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable this to inspect sink behavior. Useful for debugging non-standard Android devices." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink_SetBit(void* Obj)
	{
		((FAkAndroidAdvancedInitializationSettings*)Obj)->bVerboseSink = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink = { "bVerboseSink", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkAndroidAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink_MetaData), Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_AudioAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_RoundFrameSizeToHardwareSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_UseLowLatencyMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewProp_bVerboseSink,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkAndroidAdvancedInitializationSettings",
		Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers),
		sizeof(FAkAndroidAdvancedInitializationSettings),
		alignof(FAkAndroidAdvancedInitializationSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.InnerSingleton, Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UAkAndroidInitializationSettings::execMigrateMultiCoreRendering)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UAkAndroidInitializationSettings::StaticRegisterNativesUAkAndroidInitializationSettings()
	{
		UClass* Class = UAkAndroidInitializationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MigrateMultiCoreRendering", &UAkAndroidInitializationSettings::execMigrateMultiCoreRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics
	{
		struct AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAndroidInitializationSettings, nullptr, "MigrateMultiCoreRendering", nullptr, nullptr, Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::AkAndroidInitializationSettings_eventMigrateMultiCoreRendering_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAndroidInitializationSettings);
	UClass* Z_Construct_UClass_UAkAndroidInitializationSettings_NoRegister()
	{
		return UAkAndroidInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkAndroidInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAndroidInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 3195182711
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings_MetaData), Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings_MetaData) }; // 1718117610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData), Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData) }; // 1178487601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Android/AkAndroidInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAndroidInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData), Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData) }; // 548016216
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommonSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::NewProp_AdvancedSettings,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister, (int32)VTABLE_OFFSET(UAkAndroidInitializationSettings, IAkPlatformInitialisationSettingsBase), false },  // 2070778024
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAndroidInitializationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::ClassParams = {
		&UAkAndroidInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAkAndroidInitializationSettings()
	{
		if (!Z_Registration_Info_UClass_UAkAndroidInitializationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAndroidInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkAndroidInitializationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAndroidInitializationSettings.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAndroidInitializationSettings>()
	{
		return UAkAndroidInitializationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAndroidInitializationSettings);
	UAkAndroidInitializationSettings::~UAkAndroidInitializationSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::EnumInfo[] = {
		{ EAkAndroidAudioAPI_StaticEnum, TEXT("EAkAndroidAudioAPI"), &Z_Registration_Info_UEnum_EAkAndroidAudioAPI, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 606860732U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::ScriptStructInfo[] = {
		{ FAkAndroidAdvancedInitializationSettings::StaticStruct, Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics::NewStructOps, TEXT("AkAndroidAdvancedInitializationSettings"), &Z_Registration_Info_UScriptStruct_AkAndroidAdvancedInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAndroidAdvancedInitializationSettings), 548016216U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAndroidInitializationSettings, UAkAndroidInitializationSettings::StaticClass, TEXT("UAkAndroidInitializationSettings"), &Z_Registration_Info_UClass_UAkAndroidInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAndroidInitializationSettings), 2564838219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_4031507274(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
