// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Perlin_Noise/Public/Perlin_NoiseBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerlin_NoiseBPLibrary() {}
// Cross Module References
	PERLIN_NOISE_API UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary_NoRegister();
	PERLIN_NOISE_API UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Perlin_Noise();
// End Cross Module References
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execSetSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPerlin_NoiseBPLibrary::SetSeed(Z_Param_seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execFourD_Perlin_Fractal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_w);
		P_GET_PROPERTY(FIntProperty,Z_Param_levels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::FourD_Perlin_Fractal(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execThreeD_Perlin_Fractal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_GET_PROPERTY(FIntProperty,Z_Param_levels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::ThreeD_Perlin_Fractal(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execTwoD_Perlin_Fractal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FIntProperty,Z_Param_levels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::TwoD_Perlin_Fractal(Z_Param_x,Z_Param_y,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execOneD_Perlin_Fractal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_levels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFade);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AmpFade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::OneD_Perlin_Fractal(Z_Param_x,Z_Param_levels,Z_Param_scale,Z_Param_amplitude,Z_Param_ScaleFade,Z_Param_AmpFade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execFourD_Perlin_Noise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_w);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::FourD_Perlin_Noise(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w,Z_Param_scale,Z_Param_amplitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execThreeD_Perlin_Noise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::ThreeD_Perlin_Noise(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_scale,Z_Param_amplitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execTwoD_Perlin_Noise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::TwoD_Perlin_Noise(Z_Param_x,Z_Param_y,Z_Param_scale,Z_Param_amplitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerlin_NoiseBPLibrary::execOneD_Perlin_Noise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPerlin_NoiseBPLibrary::OneD_Perlin_Noise(Z_Param_x,Z_Param_scale,Z_Param_amplitude);
		P_NATIVE_END;
	}
	void UPerlin_NoiseBPLibrary::StaticRegisterNativesUPerlin_NoiseBPLibrary()
	{
		UClass* Class = UPerlin_NoiseBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FourD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execFourD_Perlin_Fractal },
			{ "FourD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execFourD_Perlin_Noise },
			{ "OneD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execOneD_Perlin_Fractal },
			{ "OneD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execOneD_Perlin_Noise },
			{ "SetSeed", &UPerlin_NoiseBPLibrary::execSetSeed },
			{ "ThreeD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execThreeD_Perlin_Fractal },
			{ "ThreeD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execThreeD_Perlin_Noise },
			{ "TwoD_Perlin_Fractal", &UPerlin_NoiseBPLibrary::execTwoD_Perlin_Fractal },
			{ "TwoD_Perlin_Noise", &UPerlin_NoiseBPLibrary::execTwoD_Perlin_Noise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics
	{
		struct Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms
		{
			float x;
			float y;
			float z;
			float w;
			int32 levels;
			float scale;
			float amplitude;
			float ScaleFade;
			float AmpFade;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_levels;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, w), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ScaleFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_AmpFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "7" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "4D Perlin Fractal" },
		{ "Keywords", "Four 4D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 4D fractal perlin noise at the given X,Y,Z,W coordinate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "FourD_Perlin_Fractal", nullptr, nullptr, sizeof(Perlin_NoiseBPLibrary_eventFourD_Perlin_Fractal_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics
	{
		struct Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms
		{
			float x;
			float y;
			float z;
			float w;
			float scale;
			float amplitude;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, w), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "4D Perlin Noise" },
		{ "Keywords", "Four 4D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 4D perlin noise at the given X,Y,Z,W coordinate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "FourD_Perlin_Noise", nullptr, nullptr, sizeof(Perlin_NoiseBPLibrary_eventFourD_Perlin_Noise_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics
	{
		struct Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms
		{
			float x;
			int32 levels;
			float scale;
			float amplitude;
			float ScaleFade;
			float AmpFade;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_levels;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ScaleFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_AmpFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "1D Perlin Fractal" },
		{ "Keywords", "One 1D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 1D fractal perlin noise at the given X coordinate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "OneD_Perlin_Fractal", nullptr, nullptr, sizeof(Perlin_NoiseBPLibrary_eventOneD_Perlin_Fractal_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics
	{
		struct Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms
		{
			float x;
			float scale;
			float amplitude;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "1D Perlin Noise" },
		{ "Keywords", "One 1D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 1D perlin noise at the given X coordinate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "OneD_Perlin_Noise", nullptr, nullptr, sizeof(Perlin_NoiseBPLibrary_eventOneD_Perlin_Noise_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics
	{
		struct Perlin_NoiseBPLibrary_eventSetSeed_Parms
		{
			int32 seed;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_seed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventSetSeed_Parms, seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::NewProp_seed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "DisplayName", "Set Noise Seed" },
		{ "Keywords", "Set_Seed seed set seed" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Set the seed for noise generation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "SetSeed", nullptr, nullptr, sizeof(Perlin_NoiseBPLibrary_eventSetSeed_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics
	{
		struct Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms
		{
			float x;
			float y;
			float z;
			int32 levels;
			float scale;
			float amplitude;
			float ScaleFade;
			float AmpFade;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_levels;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ScaleFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_AmpFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "3D Perlin Fractal" },
		{ "Keywords", "Three 3D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 3D fractal perlin noise at the given X,Y,Z coordinate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "ThreeD_Perlin_Fractal", nullptr, nullptr, sizeof(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Fractal_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics
	{
		struct Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms
		{
			float x;
			float y;
			float z;
			float scale;
			float amplitude;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "3D Perlin Noise" },
		{ "Keywords", "Three 3D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 3D perlin noise at the given X,Y,Z coordinate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "ThreeD_Perlin_Noise", nullptr, nullptr, sizeof(Perlin_NoiseBPLibrary_eventThreeD_Perlin_Noise_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics
	{
		struct Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms
		{
			float x;
			float y;
			int32 levels;
			float scale;
			float amplitude;
			float ScaleFade;
			float AmpFade;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_levels;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmpFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmpFade;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, levels), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, amplitude), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade = { "ScaleFade", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, ScaleFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade = { "AmpFade", nullptr, (EPropertyFlags)0x0010040000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, AmpFade), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ScaleFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_AmpFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "5" },
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_AmpFade", "2.000000" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "CPP_Default_ScaleFade", "2.000000" },
		{ "DisplayName", "2D Perlin Fractal" },
		{ "Keywords", "Two 2D Perlin_Noise perlin noise fractal" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 2D fractal perlin noise at the given X,Y coordinate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "TwoD_Perlin_Fractal", nullptr, nullptr, sizeof(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Fractal_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics
	{
		struct Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms
		{
			float x;
			float y;
			float scale;
			float amplitude;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amplitude;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, scale), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude = { "amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, amplitude), METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Perlin_Noise" },
		{ "CPP_Default_amplitude", "1.000000" },
		{ "CPP_Default_scale", "1.000000" },
		{ "DisplayName", "2D Perlin Noise" },
		{ "Keywords", "Two 2D Perlin_Noise perlin noise Perlin Noise" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "Sample 2D perlin noise at the given X,Y coordinate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerlin_NoiseBPLibrary, nullptr, "TwoD_Perlin_Noise", nullptr, nullptr, sizeof(Perlin_NoiseBPLibrary_eventTwoD_Perlin_Noise_Parms), Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary_NoRegister()
	{
		return UPerlin_NoiseBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Perlin_Noise,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Fractal, "FourD_Perlin_Fractal" }, // 824873391
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_FourD_Perlin_Noise, "FourD_Perlin_Noise" }, // 3414102428
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Fractal, "OneD_Perlin_Fractal" }, // 2356793877
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_OneD_Perlin_Noise, "OneD_Perlin_Noise" }, // 3443322680
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_SetSeed, "SetSeed" }, // 3005555040
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Fractal, "ThreeD_Perlin_Fractal" }, // 1759512609
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_ThreeD_Perlin_Noise, "ThreeD_Perlin_Noise" }, // 3791604756
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Fractal, "TwoD_Perlin_Fractal" }, // 4099751581
		{ &Z_Construct_UFunction_UPerlin_NoiseBPLibrary_TwoD_Perlin_Noise, "TwoD_Perlin_Noise" }, // 2480895425
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09@author Alex R.\n\x09@published 2021\n*/" },
		{ "IncludePath", "Perlin_NoiseBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Perlin_NoiseBPLibrary.h" },
		{ "ToolTip", "@author Alex R.\n@published 2021" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerlin_NoiseBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::ClassParams = {
		&UPerlin_NoiseBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerlin_NoiseBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerlin_NoiseBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerlin_NoiseBPLibrary, 316013111);
	template<> PERLIN_NOISE_API UClass* StaticClass<UPerlin_NoiseBPLibrary>()
	{
		return UPerlin_NoiseBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerlin_NoiseBPLibrary(Z_Construct_UClass_UPerlin_NoiseBPLibrary, &UPerlin_NoiseBPLibrary::StaticClass, TEXT("/Script/Perlin_Noise"), TEXT("UPerlin_NoiseBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerlin_NoiseBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
