// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiUMG/Components/AkItemBoolProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemBoolProperties() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolProperties();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolProperties_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms
		{
			FString PropertySelected;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertySelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::NewProp_PropertySelected = { "PropertySelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms, PropertySelected), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::NewProp_PropertySelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A delegate type invoked when a selection changes somewhere. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A delegate type invoked when a selection changes somewhere." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemBoolPropertySelectionChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::_Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::_Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemBoolPropertySelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemBoolPropertySelectionChanged, const FString& PropertySelected)
{
	struct _Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms
	{
		FString PropertySelected;
	};
	_Script_AkAudio_eventOnItemBoolPropertySelectionChanged_Parms Parms;
	Parms.PropertySelected=PropertySelected;
	OnItemBoolPropertySelectionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms
		{
			FString PropertyDragged;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyDragged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged = { "PropertyDragged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms, PropertyDragged), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A delegate type invoked when a property is being dragged. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A delegate type invoked when a property is being dragged." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemBoolPropertyDragDetected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemBoolPropertyDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemBoolPropertyDragDetected, const FString& PropertyDragged)
{
	struct _Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms
	{
		FString PropertyDragged;
	};
	_Script_AkAudio_eventOnItemBoolPropertyDragDetected_Parms Parms;
	Parms.PropertyDragged=PropertyDragged;
	OnItemBoolPropertyDragDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkBoolPropertyToControl;
class UScriptStruct* FAkBoolPropertyToControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkBoolPropertyToControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkBoolPropertyToControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkBoolPropertyToControl, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkBoolPropertyToControl"));
	}
	return Z_Registration_Info_UScriptStruct_AkBoolPropertyToControl.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkBoolPropertyToControl>()
{
	return FAkBoolPropertyToControl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Structure for property to be controlled by the UI.\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure for property to be controlled by the UI." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkBoolPropertyToControl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewProp_ItemProperty_MetaData[] = {
		{ "Category", "ItemProperty" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09\x09* The name of the item to control\n\x09\x09*/" },
#endif
		{ "DisplayName", "Property" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the item to control" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkBoolPropertyToControl, ItemProperty), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewProp_ItemProperty_MetaData), Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewProp_ItemProperty_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewProp_ItemProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkBoolPropertyToControl",
		Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::PropPointers),
		sizeof(FAkBoolPropertyToControl),
		alignof(FAkBoolPropertyToControl),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl()
	{
		if (!Z_Registration_Info_UScriptStruct_AkBoolPropertyToControl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkBoolPropertyToControl.InnerSingleton, Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkBoolPropertyToControl.InnerSingleton;
	}
	DEFINE_FUNCTION(UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToText)
	{
		P_GET_STRUCT_REF(FAkBoolPropertyToControl,Z_Param_Out_INAkBoolPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(Z_Param_Out_INAkBoolPropertyToControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToString)
	{
		P_GET_STRUCT_REF(FAkBoolPropertyToControl,Z_Param_Out_INAkBoolPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(Z_Param_Out_INAkBoolPropertyToControl);
		P_NATIVE_END;
	}
	void UAkItemBoolPropertiesConv::StaticRegisterNativesUAkItemBoolPropertiesConv()
	{
		UClass* Class = UAkItemBoolPropertiesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkBoolPropertyToControlToString", &UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToString },
			{ "Conv_FAkBoolPropertyToControlToText", &UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics
	{
		struct AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms
		{
			FAkBoolPropertyToControl INAkBoolPropertyToControl;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkBoolPropertyToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkBoolPropertyToControl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl = { "INAkBoolPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms, INAkBoolPropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl_MetaData), Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl_MetaData) }; // 1808365282
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an AkBoolPropertyToControl value to a string */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (FAkBoolPropertyToControl)" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an AkBoolPropertyToControl value to a string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolPropertiesConv, nullptr, "Conv_FAkBoolPropertyToControlToString", nullptr, nullptr, Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics
	{
		struct AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms
		{
			FAkBoolPropertyToControl INAkBoolPropertyToControl;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkBoolPropertyToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkBoolPropertyToControl;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl = { "INAkBoolPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms, INAkBoolPropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl_MetaData), Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl_MetaData) }; // 1808365282
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Converts an AkBoolPropertyToControl value to a localizable text */" },
#endif
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (FAkBoolPropertyToControl)" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an AkBoolPropertyToControl value to a localizable text" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolPropertiesConv, nullptr, "Conv_FAkBoolPropertyToControlToText", nullptr, nullptr, Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkItemBoolPropertiesConv);
	UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv_NoRegister()
	{
		return UAkItemBoolPropertiesConv::StaticClass();
	}
	struct Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString, "Conv_FAkBoolPropertyToControlToString" }, // 620682589
		{ &Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText, "Conv_FAkBoolPropertyToControlToText" }, // 1896137344
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*------------------------------------------------------------------------------------\nUAkItemBoolPropertiesConv\n------------------------------------------------------------------------------------*/" },
#endif
		{ "IncludePath", "AkWaapiUMG/Components/AkItemBoolProperties.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAkItemBoolPropertiesConv" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemBoolPropertiesConv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::ClassParams = {
		&UAkItemBoolPropertiesConv::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv()
	{
		if (!Z_Registration_Info_UClass_UAkItemBoolPropertiesConv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkItemBoolPropertiesConv.OuterSingleton, Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkItemBoolPropertiesConv.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkItemBoolPropertiesConv>()
	{
		return UAkItemBoolPropertiesConv::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemBoolPropertiesConv);
	UAkItemBoolPropertiesConv::~UAkItemBoolPropertiesConv() {}
	DEFINE_FUNCTION(UAkItemBoolProperties::execSetSearchText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_newText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSearchText(Z_Param_newText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemBoolProperties::execGetSearchText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSearchText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemBoolProperties::execGetSelectedProperty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSelectedProperty();
		P_NATIVE_END;
	}
	void UAkItemBoolProperties::StaticRegisterNativesUAkItemBoolProperties()
	{
		UClass* Class = UAkItemBoolProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSearchText", &UAkItemBoolProperties::execGetSearchText },
			{ "GetSelectedProperty", &UAkItemBoolProperties::execGetSelectedProperty },
			{ "SetSearchText", &UAkItemBoolProperties::execSetSearchText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics
	{
		struct AkItemBoolProperties_eventGetSearchText_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemBoolProperties_eventGetSearchText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** returns the current text of the searchBox */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "returns the current text of the searchBox" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolProperties, nullptr, "GetSearchText", nullptr, nullptr, Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::AkItemBoolProperties_eventGetSearchText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::AkItemBoolProperties_eventGetSearchText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics
	{
		struct AkItemBoolProperties_eventGetSelectedProperty_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemBoolProperties_eventGetSelectedProperty_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns all properties currently selected in the Wwise properties list */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all properties currently selected in the Wwise properties list" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolProperties, nullptr, "GetSelectedProperty", nullptr, nullptr, Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::AkItemBoolProperties_eventGetSelectedProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::AkItemBoolProperties_eventGetSelectedProperty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics
	{
		struct AkItemBoolProperties_eventSetSearchText_Parms
		{
			FString newText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_newText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::NewProp_newText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::NewProp_newText = { "newText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AkItemBoolProperties_eventSetSearchText_Parms, newText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::NewProp_newText_MetaData), Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::NewProp_newText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::NewProp_newText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** sets the current text of the searchBox */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sets the current text of the searchBox" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolProperties, nullptr, "SetSearchText", nullptr, nullptr, Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::AkItemBoolProperties_eventSetSearchText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::AkItemBoolProperties_eventSetSearchText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkItemBoolProperties);
	UClass* Z_Construct_UClass_UAkItemBoolProperties_NoRegister()
	{
		return UAkItemBoolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UAkItemBoolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDragged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDragged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkItemBoolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkItemBoolProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText, "GetSearchText" }, // 2067025482
		{ &Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty, "GetSelectedProperty" }, // 3970788844
		{ &Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText, "SetSearchText" }, // 97429937
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemBoolProperties_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* A widget that shows the Wwise properties list.\n*/" },
#endif
		{ "IncludePath", "AkWaapiUMG/Components/AkItemBoolProperties.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A widget that shows the Wwise properties list." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Widget Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the property selection changes. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the property selection changes." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkItemBoolProperties, OnSelectionChanged), Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnSelectionChanged_MetaData), Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnSelectionChanged_MetaData) }; // 2670501010
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnPropertyDragged_MetaData[] = {
		{ "Category", "Widget Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when a property is dragged from the property list. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkItemBoolProperties.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a property is dragged from the property list." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnPropertyDragged = { "OnPropertyDragged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkItemBoolProperties, OnPropertyDragged), Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnPropertyDragged_MetaData), Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnPropertyDragged_MetaData) }; // 3535238735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkItemBoolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnSelectionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnPropertyDragged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkItemBoolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemBoolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkItemBoolProperties_Statics::ClassParams = {
		&UAkItemBoolProperties::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkItemBoolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkItemBoolProperties_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAkItemBoolProperties()
	{
		if (!Z_Registration_Info_UClass_UAkItemBoolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkItemBoolProperties.OuterSingleton, Z_Construct_UClass_UAkItemBoolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkItemBoolProperties.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkItemBoolProperties>()
	{
		return UAkItemBoolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemBoolProperties);
	UAkItemBoolProperties::~UAkItemBoolProperties() {}
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_Statics::ScriptStructInfo[] = {
		{ FAkBoolPropertyToControl::StaticStruct, Z_Construct_UScriptStruct_FAkBoolPropertyToControl_Statics::NewStructOps, TEXT("AkBoolPropertyToControl"), &Z_Registration_Info_UScriptStruct_AkBoolPropertyToControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkBoolPropertyToControl), 1808365282U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkItemBoolPropertiesConv, UAkItemBoolPropertiesConv::StaticClass, TEXT("UAkItemBoolPropertiesConv"), &Z_Registration_Info_UClass_UAkItemBoolPropertiesConv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkItemBoolPropertiesConv), 2159834369U) },
		{ Z_Construct_UClass_UAkItemBoolProperties, UAkItemBoolProperties::StaticClass, TEXT("UAkItemBoolProperties"), &Z_Registration_Info_UClass_UAkItemBoolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkItemBoolProperties), 2666462959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_3395384960(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemBoolProperties_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
