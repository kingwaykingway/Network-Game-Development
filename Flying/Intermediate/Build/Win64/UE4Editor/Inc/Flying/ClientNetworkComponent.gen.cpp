// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flying/ClientNetworkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientNetworkComponent() {}
// Cross Module References
	FLYING_API UClass* Z_Construct_UClass_UClientNetworkComponent_NoRegister();
	FLYING_API UClass* Z_Construct_UClass_UClientNetworkComponent();
	FLYING_API UClass* Z_Construct_UClass_UNetworkComponent();
	UPackage* Z_Construct_UPackage__Script_Flying();
// End Cross Module References
	void UClientNetworkComponent::StaticRegisterNativesUClientNetworkComponent()
	{
	}
	UClass* Z_Construct_UClass_UClientNetworkComponent_NoRegister()
	{
		return UClientNetworkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClientNetworkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClientNetworkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetworkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Flying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientNetworkComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ClientNetworkComponent.h" },
		{ "ModuleRelativePath", "ClientNetworkComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClientNetworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClientNetworkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClientNetworkComponent_Statics::ClassParams = {
		&UClientNetworkComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UClientNetworkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClientNetworkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClientNetworkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClientNetworkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClientNetworkComponent, 3573201814);
	template<> FLYING_API UClass* StaticClass<UClientNetworkComponent>()
	{
		return UClientNetworkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClientNetworkComponent(Z_Construct_UClass_UClientNetworkComponent, &UClientNetworkComponent::StaticClass, TEXT("/Script/Flying"), TEXT("UClientNetworkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientNetworkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
