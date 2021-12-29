// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flying/NetworkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkComponent() {}
// Cross Module References
	FLYING_API UClass* Z_Construct_UClass_UNetworkComponent_NoRegister();
	FLYING_API UClass* Z_Construct_UClass_UNetworkComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Flying();
// End Cross Module References
	void UNetworkComponent::StaticRegisterNativesUNetworkComponent()
	{
	}
	UClass* Z_Construct_UClass_UNetworkComponent_NoRegister()
	{
		return UNetworkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_ip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_port;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Flying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NetworkComponent.h" },
		{ "ModuleRelativePath", "NetworkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkComponent_Statics::NewProp_m_ip_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "NetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNetworkComponent_Statics::NewProp_m_ip = { "m_ip", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetworkComponent, m_ip), METADATA_PARAMS(Z_Construct_UClass_UNetworkComponent_Statics::NewProp_m_ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkComponent_Statics::NewProp_m_ip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkComponent_Statics::NewProp_m_port_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "NetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNetworkComponent_Statics::NewProp_m_port = { "m_port", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetworkComponent, m_port), METADATA_PARAMS(Z_Construct_UClass_UNetworkComponent_Statics::NewProp_m_port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkComponent_Statics::NewProp_m_port_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkComponent_Statics::NewProp_m_ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkComponent_Statics::NewProp_m_port,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetworkComponent_Statics::ClassParams = {
		&UNetworkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetworkComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetworkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetworkComponent, 685537676);
	template<> FLYING_API UClass* StaticClass<UNetworkComponent>()
	{
		return UNetworkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetworkComponent(Z_Construct_UClass_UNetworkComponent, &UNetworkComponent::StaticClass, TEXT("/Script/Flying"), TEXT("UNetworkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
