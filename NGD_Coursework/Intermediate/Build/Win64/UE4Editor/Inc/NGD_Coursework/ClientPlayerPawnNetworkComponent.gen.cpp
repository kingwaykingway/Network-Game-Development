// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NGD_Coursework/Public/ClientPlayerPawnNetworkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientPlayerPawnNetworkComponent() {}
// Cross Module References
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_UClientPlayerPawnNetworkComponent_NoRegister();
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_UClientPlayerPawnNetworkComponent();
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_UPlayerPawnNetworkComponent();
	UPackage* Z_Construct_UPackage__Script_NGD_Coursework();
// End Cross Module References
	void UClientPlayerPawnNetworkComponent::StaticRegisterNativesUClientPlayerPawnNetworkComponent()
	{
	}
	UClass* Z_Construct_UClass_UClientPlayerPawnNetworkComponent_NoRegister()
	{
		return UClientPlayerPawnNetworkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClientPlayerPawnNetworkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClientPlayerPawnNetworkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerPawnNetworkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NGD_Coursework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientPlayerPawnNetworkComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ClientPlayerPawnNetworkComponent.h" },
		{ "ModuleRelativePath", "Public/ClientPlayerPawnNetworkComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClientPlayerPawnNetworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClientPlayerPawnNetworkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClientPlayerPawnNetworkComponent_Statics::ClassParams = {
		&UClientPlayerPawnNetworkComponent::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_UClientPlayerPawnNetworkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClientPlayerPawnNetworkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClientPlayerPawnNetworkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClientPlayerPawnNetworkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClientPlayerPawnNetworkComponent, 227103867);
	template<> NGD_COURSEWORK_API UClass* StaticClass<UClientPlayerPawnNetworkComponent>()
	{
		return UClientPlayerPawnNetworkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClientPlayerPawnNetworkComponent(Z_Construct_UClass_UClientPlayerPawnNetworkComponent, &UClientPlayerPawnNetworkComponent::StaticClass, TEXT("/Script/NGD_Coursework"), TEXT("UClientPlayerPawnNetworkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientPlayerPawnNetworkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif