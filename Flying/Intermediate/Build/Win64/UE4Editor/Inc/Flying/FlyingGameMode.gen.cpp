// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flying/FlyingGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingGameMode() {}
// Cross Module References
	FLYING_API UClass* Z_Construct_UClass_AFlyingGameMode_NoRegister();
	FLYING_API UClass* Z_Construct_UClass_AFlyingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Flying();
// End Cross Module References
	void AFlyingGameMode::StaticRegisterNativesAFlyingGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFlyingGameMode_NoRegister()
	{
		return AFlyingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFlyingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlyingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Flying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FlyingGameMode.h" },
		{ "ModuleRelativePath", "FlyingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlyingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlyingGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlyingGameMode_Statics::ClassParams = {
		&AFlyingGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFlyingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlyingGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlyingGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlyingGameMode, 2759976094);
	template<> FLYING_API UClass* StaticClass<AFlyingGameMode>()
	{
		return AFlyingGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlyingGameMode(Z_Construct_UClass_AFlyingGameMode, &AFlyingGameMode::StaticClass, TEXT("/Script/Flying"), TEXT("AFlyingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyingGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
