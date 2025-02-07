// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiBlueprints/AkWaapiFieldNames.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiFieldNames() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv();
	AKAUDIO_API UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkWaapiFieldNames;
class UScriptStruct* FAkWaapiFieldNames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiFieldNames, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiFieldNames"));
	}
	return Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWaapiFieldNames>()
{
	return FAkWaapiFieldNames::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Structure for Field Names\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiFieldNames.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure for Field Names" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiFieldNames>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "FieldName" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* The Field Name\n\x09*/" },
#endif
		{ "DisplayName", "Field Name" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiFieldNames.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Field Name" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkWaapiFieldNames, FieldName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName_MetaData), Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewProp_FieldName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWaapiFieldNames",
		Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::PropPointers),
		sizeof(FAkWaapiFieldNames),
		alignof(FAkWaapiFieldNames),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames()
	{
		if (!Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.InnerSingleton, Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkWaapiFieldNames.InnerSingleton;
	}
	DEFINE_FUNCTION(USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToText)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_INAkWaapiFieldNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(Z_Param_Out_INAkWaapiFieldNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToString)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_INAkWaapiFieldNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(Z_Param_Out_INAkWaapiFieldNames);
		P_NATIVE_END;
	}
	void USAkWaapiFieldNamesConv::StaticRegisterNativesUSAkWaapiFieldNamesConv()
	{
		UClass* Class = USAkWaapiFieldNamesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkWaapiFieldNamesToString", &USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToString },
			{ "Conv_FAkWaapiFieldNamesToText", &USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics
	{
		struct SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms
		{
			FAkWaapiFieldNames INAkWaapiFieldNames;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiFieldNames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkWaapiFieldNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames = { "INAkWaapiFieldNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms, INAkWaapiFieldNames), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames_MetaData), Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames_MetaData) }; // 1632355460
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an AkWaapiFieldName value to a string */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FAkWaapiFieldNames)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiFieldNames.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an AkWaapiFieldName value to a string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAkWaapiFieldNamesConv, nullptr, "Conv_FAkWaapiFieldNamesToString", nullptr, nullptr, Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics
	{
		struct SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms
		{
			FAkWaapiFieldNames INAkWaapiFieldNames;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiFieldNames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkWaapiFieldNames;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames = { "INAkWaapiFieldNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms, INAkWaapiFieldNames), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames_MetaData), Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames_MetaData) }; // 1632355460
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an AkWaapiFieldName value to a localizable text */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (FAkWaapiFieldNames)" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiFieldNames.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an AkWaapiFieldName value to a localizable text" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAkWaapiFieldNamesConv, nullptr, "Conv_FAkWaapiFieldNamesToText", nullptr, nullptr, Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USAkWaapiFieldNamesConv);
	UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv_NoRegister()
	{
		return USAkWaapiFieldNamesConv::StaticClass();
	}
	struct Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString, "Conv_FAkWaapiFieldNamesToString" }, // 3002761922
		{ &Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText, "Conv_FAkWaapiFieldNamesToText" }, // 3734436485
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\nUSAkWaapiFieldNamesConv\n------------------------------------------------------------------------------------*/" },
#endif
		{ "IncludePath", "AkWaapiBlueprints/AkWaapiFieldNames.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiBlueprints/AkWaapiFieldNames.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USAkWaapiFieldNamesConv" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAkWaapiFieldNamesConv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::ClassParams = {
		&USAkWaapiFieldNamesConv::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::Class_MetaDataParams), Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv()
	{
		if (!Z_Registration_Info_UClass_USAkWaapiFieldNamesConv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USAkWaapiFieldNamesConv.OuterSingleton, Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USAkWaapiFieldNamesConv.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<USAkWaapiFieldNamesConv>()
	{
		return USAkWaapiFieldNamesConv::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAkWaapiFieldNamesConv);
	USAkWaapiFieldNamesConv::~USAkWaapiFieldNamesConv() {}
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiFieldNames_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiFieldNames_h_Statics::ScriptStructInfo[] = {
		{ FAkWaapiFieldNames::StaticStruct, Z_Construct_UScriptStruct_FAkWaapiFieldNames_Statics::NewStructOps, TEXT("AkWaapiFieldNames"), &Z_Registration_Info_UScriptStruct_AkWaapiFieldNames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkWaapiFieldNames), 1632355460U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiFieldNames_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USAkWaapiFieldNamesConv, USAkWaapiFieldNamesConv::StaticClass, TEXT("USAkWaapiFieldNamesConv"), &Z_Registration_Info_UClass_USAkWaapiFieldNamesConv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USAkWaapiFieldNamesConv), 806381928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiFieldNames_h_1100532994(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiFieldNames_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiFieldNames_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiFieldNames_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiBlueprints_AkWaapiFieldNames_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
