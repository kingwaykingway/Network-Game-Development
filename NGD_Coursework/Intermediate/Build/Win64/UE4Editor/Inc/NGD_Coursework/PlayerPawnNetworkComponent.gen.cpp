// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NGD_Coursework/PlayerPawnNetworkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawnNetworkComponent() {}
// Cross Module References
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_UPlayerPawnNetworkComponent_NoRegister();
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_UPlayerPawnNetworkComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NGD_Coursework();
// End Cross Module References
	void UPlayerPawnNetworkComponent::StaticRegisterNativesUPlayerPawnNetworkComponent()
	{
	}
	UClass* Z_Construct_UClass_UPlayerPawnNetworkComponent_NoRegister()
	{
		return UPlayerPawnNetworkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics
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
	UObject* (*const Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NGD_Coursework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerPawnNetworkComponent.h" },
		{ "ModuleRelativePath", "PlayerPawnNetworkComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::NewProp_m_ip_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "PlayerPawnNetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::NewProp_m_ip = { "m_ip", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerPawnNetworkComponent, m_ip), METADATA_PARAMS(Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::NewProp_m_ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::NewProp_m_ip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::NewProp_m_port_MetaData[] = {
		{ "Category", "Network" },
		{ "ModuleRelativePath", "PlayerPawnNetworkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::NewProp_m_port = { "m_port", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerPawnNetworkComponent, m_port), METADATA_PARAMS(Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::NewProp_m_port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::NewProp_m_port_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::NewProp_m_ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::NewProp_m_port,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerPawnNetworkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::ClassParams = {
		&UPlayerPawnNetworkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerPawnNetworkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerPawnNetworkComponent, 1201824237);
	template<> NGD_COURSEWORK_API UClass* StaticClass<UPlayerPawnNetworkComponent>()
	{
		return UPlayerPawnNetworkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerPawnNetworkComponent(Z_Construct_UClass_UPlayerPawnNetworkComponent, &UPlayerPawnNetworkComponent::StaticClass, TEXT("/Script/NGD_Coursework"), TEXT("UPlayerPawnNetworkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerPawnNetworkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
