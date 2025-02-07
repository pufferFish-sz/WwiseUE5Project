// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGeometryComponent.h"
#include "AkAudio/Classes/AkGeometryData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometryComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMeshType();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkMeshType;
	static UEnum* AkMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMeshType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMeshType"));
		}
		return Z_Registration_Info_UEnum_AkMeshType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkMeshType>()
	{
		return AkMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enumerators[] = {
		{ "AkMeshType::StaticMesh", (int64)AkMeshType::StaticMesh },
		{ "AkMeshType::CollisionMesh", (int64)AkMeshType::CollisionMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enum_MetaDataParams[] = {
		{ "CollisionMesh.DisplayName", "Simple Collision" },
		{ "CollisionMesh.Name", "AkMeshType::CollisionMesh" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "StaticMesh.Name", "AkMeshType::StaticMesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkMeshType",
		"AkMeshType",
		Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkMeshType()
	{
		if (!Z_Registration_Info_UEnum_AkMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkMeshType.InnerSingleton, Z_Construct_UEnum_AkAudio_AkMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkMeshType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride;
class UScriptStruct* FAkGeometrySurfaceOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometrySurfaceOverride"));
	}
	return Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometrySurfaceOverride>()
{
	return FAkGeometrySurfaceOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusionOverride_MetaData[];
#endif
		static void NewProp_bEnableOcclusionOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusionOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceArea_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceArea;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfaceOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Acoustic Texture represents the sound absorption on the surface of the geometry when a sound bounces off of it.\n\x09* If left to None, the mesh's physical material will be used to fetch an acoustic texture.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Acoustic Texture represents the sound absorption on the surface of the geometry when a sound bounces off of it.\nIf left to None, the mesh's physical material will be used to fetch an acoustic texture." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable Transmission Loss Override */" },
#endif
		{ "DisplayName", "Enable Transmission Loss Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable Transmission Loss Override" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit(void* Obj)
	{
		((FAkGeometrySurfaceOverride*)Obj)->bEnableOcclusionOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride = { "bEnableOcclusionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAkGeometrySurfaceOverride), &Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Transmission loss value to set when modeling sound transmission through geometry. Transmission is modeled only when there is no direct line of sight from the emitter to the listener.\n\x09* If there is more than one surface between the emitter and the listener, the maximum of each surface's transmission loss value is used. If the emitter and listener are in different rooms, the room's transmission loss value is taken into account.\n\x09* Valid range : (0.0, 1.0)\n\x09*/" },
#endif
		{ "DisplayName", "Transmission Loss" },
		{ "EditCondition", "bEnableOcclusionOverride" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transmission loss value to set when modeling sound transmission through geometry. Transmission is modeled only when there is no direct line of sight from the emitter to the listener.\nIf there is more than one surface between the emitter and the listener, the maximum of each surface's transmission loss value is used. If the emitter and listener are in different rooms, the room's transmission loss value is taken into account.\nValid range : (0.0, 1.0)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, OcclusionValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea = { "SurfaceArea", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, SurfaceArea), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea_MetaData), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_SurfaceArea,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometrySurfaceOverride",
		Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers),
		sizeof(FAkGeometrySurfaceOverride),
		alignof(FAkGeometrySurfaceOverride),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride.InnerSingleton;
	}
	DEFINE_FUNCTION(UAkGeometryComponent::execRemoveGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGeometry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGeometryComponent::execUpdateGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGeometry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGeometryComponent::execSendGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendGeometry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGeometryComponent::execConvertMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertMesh();
		P_NATIVE_END;
	}
	void UAkGeometryComponent::StaticRegisterNativesUAkGeometryComponent()
	{
		UClass* Class = UAkGeometryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertMesh", &UAkGeometryComponent::execConvertMesh },
			{ "RemoveGeometry", &UAkGeometryComponent::execRemoveGeometry },
			{ "SendGeometry", &UAkGeometryComponent::execSendGeometry },
			{ "UpdateGeometry", &UAkGeometryComponent::execUpdateGeometry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convert the mesh into a local representation suited for Wwise:\n\x09* a set of vertices, triangles, surfaces, acoustic textures and transmission loss values. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert the mesh into a local representation suited for Wwise:\na set of vertices, triangles, surfaces, acoustic textures and transmission loss values." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "ConvertMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove the geometry and the corresponding instance from Wwise. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove the geometry and the corresponding instance from Wwise." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "RemoveGeometry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update a geometry in Spatial Audio by sending the converted mesh, as well as the rest of the AkGeometryParams to Wwise.\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateGeometry(). */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update a geometry in Spatial Audio by sending the converted mesh, as well as the rest of the AkGeometryParams to Wwise.\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. See UpdateGeometry()." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "SendGeometry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_SendGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add or update an instance of the geometry by sending the transform of this component to Wwise.\n\x09* A geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\n\x09* It is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add or update an instance of the geometry by sending the transform of this component to Wwise.\nA geometry instance is a unique instance of a geometry set with a specified transform (position, rotation and scale).\nIt is necessary to create at least one geometry instance for each geometry set that is to be used for diffraction and reflection simulation." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "UpdateGeometry", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkGeometryComponent);
	UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister()
	{
		return UAkGeometryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkGeometryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshSurfaceOverride_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshSurfaceOverride_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSurfaceOverride_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StaticMeshSurfaceOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshSurfaceOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionMeshSurfaceOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[];
#endif
		static void NewProp_bEnableDiffraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[];
#endif
		static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedRoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedRoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryData;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceAreas_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SurfaceAreas_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceAreas_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceAreas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGeometryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAcousticTextureSetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkGeometryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh, "ConvertMesh" }, // 498760574
		{ &Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry, "RemoveGeometry" }, // 1247406717
		{ &Z_Construct_UFunction_UAkGeometryComponent_SendGeometry, "SendGeometry" }, // 3589099323
		{ &Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry, "UpdateGeometry" }, // 890797472
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkGeometryComponent.h" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, MeshType), Z_Construct_UEnum_AkAudio_AkMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData), Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData) }; // 1490676638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Static Mesh's LOD to use */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Static Mesh's LOD to use" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, LOD), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD_MetaData), Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The local distance in Unreal units between two vertices to be welded together.\n\x09* Any two vertices closer than this threshold will be treated as the same unique vertex and assigned the same position.\n\x09* Increasing this threshold decreases the number of gaps between triangles, resulting in a more continuous mesh and less sound leaking though, as well as eliminating triangles that are too small to be significant.\n\x09* Increasing this threshold also helps Spatial Audio's edge-finding algorithm to find more valid diffraction edges.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The local distance in Unreal units between two vertices to be welded together.\nAny two vertices closer than this threshold will be treated as the same unique vertex and assigned the same position.\nIncreasing this threshold decreases the number of gaps between triangles, resulting in a more continuous mesh and less sound leaking though, as well as eliminating triangles that are too small to be significant.\nIncreasing this threshold also helps Spatial Audio's edge-finding algorithm to find more valid diffraction edges." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, WeldingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData), Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(0, nullptr) }; // 432106974
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp = { "StaticMeshSurfaceOverride_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the acoustic properties of this mesh per material.*/" },
#endif
		{ "DisplayName", "Acoustic Properties Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the acoustic properties of this mesh per material." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, StaticMeshSurfaceOverride), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData), Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData) }; // 432106974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Override the acoustic properties of the collision mesh.*/" },
#endif
		{ "DisplayName", "Acoustic Properties Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the acoustic properties of the collision mesh." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride = { "CollisionMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, CollisionMeshSurfaceOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData), Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData) }; // 432106974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game. */" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game." },
#endif
	};
#endif
	void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bEnableDiffraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData), Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process.  */" },
#endif
		{ "EditCondition", "bEnableDiffraction" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process." },
#endif
	};
#endif
	void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData), Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData[] = {
		{ "Category", "Geometry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** (Deprecated) Associate this Geometry component with a Room.\n\x09* This property is deprecated and will be removed in a future version. We recommend not using it by leaving it set to None.\n\x09* Associating a Geometry component with a particular Room limits the scope in which the geometry is accessible. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\n\x09* When set to None, this geometry has a global scope.\n\x09* Note if one or more geometry sets are associated with a room, that room can no longer access geometry that is in the global scope.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Deprecated) Associate this Geometry component with a Room.\nThis property is deprecated and will be removed in a future version. We recommend not using it by leaving it set to None.\nAssociating a Geometry component with a particular Room limits the scope in which the geometry is accessible. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\nWhen set to None, this geometry has a global scope.\nNote if one or more geometry sets are associated with a room, that room can no longer access geometry that is in the global scope." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom = { "AssociatedRoom", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, AssociatedRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData), Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData = { "GeometryData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, GeometryData), Z_Construct_UScriptStruct_FAkGeometryData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData), Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData) }; // 3169825265
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_ValueProp = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_Key_KeyProp = { "SurfaceAreas_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAkGeometryComponent, SurfaceAreas), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_MetaData), Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGeometryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGeometryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams = {
		&UAkGeometryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAkGeometryComponent()
	{
		if (!Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton, Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkGeometryComponent>()
	{
		return UAkGeometryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGeometryComponent);
	UAkGeometryComponent::~UAkGeometryComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGeometryComponent)
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::EnumInfo[] = {
		{ AkMeshType_StaticEnum, TEXT("AkMeshType"), &Z_Registration_Info_UEnum_AkMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1490676638U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ScriptStructInfo[] = {
		{ FAkGeometrySurfaceOverride::StaticStruct, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewStructOps, TEXT("AkGeometrySurfaceOverride"), &Z_Registration_Info_UScriptStruct_AkGeometrySurfaceOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometrySurfaceOverride), 432106974U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkGeometryComponent, UAkGeometryComponent::StaticClass, TEXT("UAkGeometryComponent"), &Z_Registration_Info_UClass_UAkGeometryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGeometryComponent), 3151727946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_715172131(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
