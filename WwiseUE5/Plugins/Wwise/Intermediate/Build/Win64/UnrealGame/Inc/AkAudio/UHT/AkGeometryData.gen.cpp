// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGeometryData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometryData() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkAcousticSurface;
class UScriptStruct* FAkAcousticSurface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkAcousticSurface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkAcousticSurface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAcousticSurface, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticSurface"));
	}
	return Z_Registration_Info_UScriptStruct_AkAcousticSurface.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAcousticSurface>()
{
	return FAkAcousticSurface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkAcousticSurface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAcousticSurface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAcousticSurface, Texture), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData), Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData[] = {
		{ "DisplayName", "Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAcousticSurface, Occlusion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData), Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkAcousticSurface, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAcousticSurface",
		Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers),
		sizeof(FAkAcousticSurface),
		alignof(FAkAcousticSurface),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface()
	{
		if (!Z_Registration_Info_UScriptStruct_AkAcousticSurface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkAcousticSurface.InnerSingleton, Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkAcousticSurface.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkTriangle;
class UScriptStruct* FAkTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkTriangle, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_AkTriangle.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkTriangle>()
{
	return FAkTriangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkTriangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point0_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_Point0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point1_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_Point1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point2_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_Point2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_Surface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkTriangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0 = { "Point0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkTriangle, Point0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData), Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkTriangle, Point1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData), Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkTriangle, Point2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData), Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkTriangle, Surface), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData), Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkTriangle",
		Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers),
		sizeof(FAkTriangle),
		alignof(FAkTriangle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle()
	{
		if (!Z_Registration_Info_UScriptStruct_AkTriangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkTriangle.InnerSingleton, Z_Construct_UScriptStruct_FAkTriangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkTriangle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkGeometryData;
class UScriptStruct* FAkGeometryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkGeometryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkGeometryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometryData, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometryData"));
	}
	return Z_Registration_Info_UScriptStruct_AkGeometryData.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometryData>()
{
	return FAkGeometryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkGeometryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Surfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Surfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Surfaces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToOverrideAcousticTexture_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToOverrideAcousticTexture_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToOverrideAcousticTexture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToOverrideOcclusion_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToOverrideOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToOverrideOcclusion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometryData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData), Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_Inner = { "Surfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkAcousticSurface, METADATA_PARAMS(0, nullptr) }; // 500618553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces = { "Surfaces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, Surfaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData), Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData) }; // 500618553
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAkTriangle, METADATA_PARAMS(0, nullptr) }; // 3155725576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData), Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData) }; // 3155725576
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_Inner = { "ToOverrideAcousticTexture", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture = { "ToOverrideAcousticTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, ToOverrideAcousticTexture), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData), Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_Inner = { "ToOverrideOcclusion", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData[] = {
		{ "DisplayName", "To Override Transmission Loss" },
		{ "ModuleRelativePath", "Classes/AkGeometryData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion = { "ToOverrideOcclusion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAkGeometryData, ToOverrideOcclusion), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData), Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometryData",
		Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers),
		sizeof(FAkGeometryData),
		alignof(FAkGeometryData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData()
	{
		if (!Z_Registration_Info_UScriptStruct_AkGeometryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkGeometryData.InnerSingleton, Z_Construct_UScriptStruct_FAkGeometryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkGeometryData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryData_h_Statics::ScriptStructInfo[] = {
		{ FAkAcousticSurface::StaticStruct, Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewStructOps, TEXT("AkAcousticSurface"), &Z_Registration_Info_UScriptStruct_AkAcousticSurface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkAcousticSurface), 500618553U) },
		{ FAkTriangle::StaticStruct, Z_Construct_UScriptStruct_FAkTriangle_Statics::NewStructOps, TEXT("AkTriangle"), &Z_Registration_Info_UScriptStruct_AkTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkTriangle), 3155725576U) },
		{ FAkGeometryData::StaticStruct, Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewStructOps, TEXT("AkGeometryData"), &Z_Registration_Info_UScriptStruct_AkGeometryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometryData), 3169825265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryData_h_3636447133(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_shang_OneDrive_Documents_Unreal_Projects_WwiseUE5Project_WwiseUE5_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
