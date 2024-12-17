// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioDeviceShareSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "WwiseResourceLoader/Public/Wwise/CookedData/WwiseAudioDeviceShareSetCookedData.h"
#include "WwiseResourceLoader/Public/Wwise/Info/WwiseObjectInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioDeviceShareSet() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSet();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioDeviceShareSet_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseObjectInfo();
// End Cross Module References
	void UAkAudioDeviceShareSet::StaticRegisterNativesUAkAudioDeviceShareSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioDeviceShareSet);
	UClass* Z_Construct_UClass_UAkAudioDeviceShareSet_NoRegister()
	{
		return UAkAudioDeviceShareSet::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioDeviceShareSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSetCookedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioDeviceShareSetCookedData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioDeviceShareSetInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioDeviceShareSetInfo;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAudioType,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAudioDeviceShareSet.h" },
		{ "ModuleRelativePath", "Classes/AkAudioDeviceShareSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetCookedData_MetaData[] = {
		{ "Category", "AkAudioDeviceShareSet" },
		{ "ModuleRelativePath", "Classes/AkAudioDeviceShareSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetCookedData = { "AudioDeviceShareSetCookedData", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioDeviceShareSet, AudioDeviceShareSetCookedData), Z_Construct_UScriptStruct_FWwiseAudioDeviceShareSetCookedData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetCookedData_MetaData), Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetCookedData_MetaData) }; // 609195887
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetInfo_MetaData[] = {
		{ "Category", "AkAudioDeviceShareSet" },
		{ "ModuleRelativePath", "Classes/AkAudioDeviceShareSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetInfo = { "AudioDeviceShareSetInfo", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkAudioDeviceShareSet, AudioDeviceShareSetInfo), Z_Construct_UScriptStruct_FWwiseObjectInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetInfo_MetaData), Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetInfo_MetaData) }; // 2788776191
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetCookedData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::NewProp_AudioDeviceShareSetInfo,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioDeviceShareSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::ClassParams = {
		&UAkAudioDeviceShareSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAkAudioDeviceShareSet()
	{
		if (!Z_Registration_Info_UClass_UAkAudioDeviceShareSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioDeviceShareSet.OuterSingleton, Z_Construct_UClass_UAkAudioDeviceShareSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAudioDeviceShareSet.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioDeviceShareSet>()
	{
		return UAkAudioDeviceShareSet::StaticClass();
	}
	UAkAudioDeviceShareSet::UAkAudioDeviceShareSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioDeviceShareSet);
	UAkAudioDeviceShareSet::~UAkAudioDeviceShareSet() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkAudioDeviceShareSet)
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioDeviceShareSet, UAkAudioDeviceShareSet::StaticClass, TEXT("UAkAudioDeviceShareSet"), &Z_Registration_Info_UClass_UAkAudioDeviceShareSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioDeviceShareSet), 3515344119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_1705373635(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkAudioDeviceShareSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
