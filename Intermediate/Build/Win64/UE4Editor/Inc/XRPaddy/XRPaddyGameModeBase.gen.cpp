// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRPaddy/XRPaddyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRPaddyGameModeBase() {}
// Cross Module References
	XRPADDY_API UClass* Z_Construct_UClass_AXRPaddyGameModeBase_NoRegister();
	XRPADDY_API UClass* Z_Construct_UClass_AXRPaddyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_XRPaddy();
// End Cross Module References
	void AXRPaddyGameModeBase::StaticRegisterNativesAXRPaddyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AXRPaddyGameModeBase_NoRegister()
	{
		return AXRPaddyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AXRPaddyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRPaddyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_XRPaddy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRPaddyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "XRPaddyGameModeBase.h" },
		{ "ModuleRelativePath", "XRPaddyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRPaddyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRPaddyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AXRPaddyGameModeBase_Statics::ClassParams = {
		&AXRPaddyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AXRPaddyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXRPaddyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRPaddyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AXRPaddyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AXRPaddyGameModeBase, 1297439322);
	template<> XRPADDY_API UClass* StaticClass<AXRPaddyGameModeBase>()
	{
		return AXRPaddyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AXRPaddyGameModeBase(Z_Construct_UClass_AXRPaddyGameModeBase, &AXRPaddyGameModeBase::StaticClass, TEXT("/Script/XRPaddy"), TEXT("AXRPaddyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRPaddyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
