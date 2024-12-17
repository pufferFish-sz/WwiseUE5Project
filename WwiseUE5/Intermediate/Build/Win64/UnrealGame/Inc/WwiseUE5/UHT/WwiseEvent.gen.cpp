// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseUE5/Public/WwiseEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseEvent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_WwiseUE5();
	WWISEUE5_API UClass* Z_Construct_UClass_UWwiseEvent();
	WWISEUE5_API UClass* Z_Construct_UClass_UWwiseEvent_NoRegister();
// End Cross Module References
	void UWwiseEvent::StaticRegisterNativesUWwiseEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseEvent);
	UClass* Z_Construct_UClass_UWwiseEvent_NoRegister()
	{
		return UWwiseEvent::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestEvent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TestEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseUE5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseEvent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WwiseEvent.h" },
		{ "ModuleRelativePath", "Public/WwiseEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseEvent_Statics::NewProp_TestEvent_MetaData[] = {
		{ "Category", "WwiseEvent" },
		{ "ModuleRelativePath", "Public/WwiseEvent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWwiseEvent_Statics::NewProp_TestEvent = { "TestEvent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWwiseEvent, TestEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseEvent_Statics::NewProp_TestEvent_MetaData), Z_Construct_UClass_UWwiseEvent_Statics::NewProp_TestEvent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseEvent_Statics::NewProp_TestEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseEvent_Statics::ClassParams = {
		&UWwiseEvent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWwiseEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseEvent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWwiseEvent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseEvent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWwiseEvent()
	{
		if (!Z_Registration_Info_UClass_UWwiseEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseEvent.OuterSingleton, Z_Construct_UClass_UWwiseEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseEvent.OuterSingleton;
	}
	template<> WWISEUE5_API UClass* StaticClass<UWwiseEvent>()
	{
		return UWwiseEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseEvent);
	UWwiseEvent::~UWwiseEvent() {}
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Source_WwiseUE5_Public_WwiseEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Source_WwiseUE5_Public_WwiseEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseEvent, UWwiseEvent::StaticClass, TEXT("UWwiseEvent"), &Z_Registration_Info_UClass_UWwiseEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseEvent), 1779750069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Source_WwiseUE5_Public_WwiseEvent_h_288403224(TEXT("/Script/WwiseUE5"),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Source_WwiseUE5_Public_WwiseEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Source_WwiseUE5_Public_WwiseEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
