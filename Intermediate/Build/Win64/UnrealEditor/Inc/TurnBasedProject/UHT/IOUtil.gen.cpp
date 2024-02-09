// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TurnBasedProject/IOUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOUtil() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TURNBASEDPROJECT_API UClass* Z_Construct_UClass_UIOUtil();
	TURNBASEDPROJECT_API UClass* Z_Construct_UClass_UIOUtil_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TurnBasedProject();
// End Cross Module References
	DEFINE_FUNCTION(UIOUtil::execFileLoadString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileNameA);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SaveTextA);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UIOUtil::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOUtil::execFileSaveString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveTextB);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileNameB);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UIOUtil::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB);
		P_NATIVE_END;
	}
	void UIOUtil::StaticRegisterNativesUIOUtil()
	{
		UClass* Class = UIOUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileLoadString", &UIOUtil::execFileLoadString },
			{ "FileSaveString", &UIOUtil::execFileSaveString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIOUtil_FileLoadString_Statics
	{
		struct IOUtil_eventFileLoadString_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveTextA;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::NewProp_FileNameA = { "FileNameA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IOUtil_eventFileLoadString_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::NewProp_SaveTextA = { "SaveTextA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IOUtil_eventFileLoadString_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IOUtil_eventFileLoadString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IOUtil_eventFileLoadString_Parms), &Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::NewProp_FileNameA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::NewProp_SaveTextA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "IOUtil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOUtil, nullptr, "FileLoadString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::IOUtil_eventFileLoadString_Parms), Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIOUtil_FileLoadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOUtil_FileLoadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOUtil_FileSaveString_Statics
	{
		struct IOUtil_eventFileSaveString_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveTextB;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameB;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::NewProp_SaveTextB = { "SaveTextB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IOUtil_eventFileSaveString_Parms, SaveTextB), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::NewProp_FileNameB = { "FileNameB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IOUtil_eventFileSaveString_Parms, FileNameB), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IOUtil_eventFileSaveString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IOUtil_eventFileSaveString_Parms), &Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::NewProp_SaveTextB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::NewProp_FileNameB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::Function_MetaDataParams[] = {
		{ "Category", "save" },
		{ "ModuleRelativePath", "IOUtil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOUtil, nullptr, "FileSaveString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::IOUtil_eventFileSaveString_Parms), Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIOUtil_FileSaveString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOUtil_FileSaveString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOUtil);
	UClass* Z_Construct_UClass_UIOUtil_NoRegister()
	{
		return UIOUtil::StaticClass();
	}
	struct Z_Construct_UClass_UIOUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TurnBasedProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIOUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIOUtil_FileLoadString, "FileLoadString" }, // 3914382696
		{ &Z_Construct_UFunction_UIOUtil_FileSaveString, "FileSaveString" }, // 1580631374
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOUtil_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IOUtil.h" },
		{ "ModuleRelativePath", "IOUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOUtil>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOUtil_Statics::ClassParams = {
		&UIOUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIOUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIOUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIOUtil()
	{
		if (!Z_Registration_Info_UClass_UIOUtil.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOUtil.OuterSingleton, Z_Construct_UClass_UIOUtil_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOUtil.OuterSingleton;
	}
	template<> TURNBASEDPROJECT_API UClass* StaticClass<UIOUtil>()
	{
		return UIOUtil::StaticClass();
	}
	UIOUtil::UIOUtil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOUtil);
	UIOUtil::~UIOUtil() {}
	struct Z_CompiledInDeferFile_FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOUtil, UIOUtil::StaticClass, TEXT("UIOUtil"), &Z_Registration_Info_UClass_UIOUtil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOUtil), 2446381011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_2361108645(TEXT("/Script/TurnBasedProject"),
		Z_CompiledInDeferFile_FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TurnBasedProject_Source_TurnBasedProject_IOUtil_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
