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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerPawnNetworkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerPawnNetworkComponent_Statics::ClassParams = {
		&UPlayerPawnNetworkComponent::StaticClass,
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
	IMPLEMENT_CLASS(UPlayerPawnNetworkComponent, 3156731790);
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
