// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flying/HostFlyingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHostFlyingPawn() {}
// Cross Module References
	FLYING_API UClass* Z_Construct_UClass_AHostFlyingPawn_NoRegister();
	FLYING_API UClass* Z_Construct_UClass_AHostFlyingPawn();
	FLYING_API UClass* Z_Construct_UClass_AFlyingPawn();
	UPackage* Z_Construct_UPackage__Script_Flying();
	FLYING_API UClass* Z_Construct_UClass_UHostNetworkComponent_NoRegister();
// End Cross Module References
	void AHostFlyingPawn::StaticRegisterNativesAHostFlyingPawn()
	{
	}
	UClass* Z_Construct_UClass_AHostFlyingPawn_NoRegister()
	{
		return AHostFlyingPawn::StaticClass();
	}
	struct Z_Construct_UClass_AHostFlyingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetworkComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHostFlyingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFlyingPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Flying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostFlyingPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HostFlyingPawn.h" },
		{ "ModuleRelativePath", "HostFlyingPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostFlyingPawn_Statics::NewProp_NetworkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostFlyingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostFlyingPawn_Statics::NewProp_NetworkComponent = { "NetworkComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostFlyingPawn, NetworkComponent), Z_Construct_UClass_UHostNetworkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostFlyingPawn_Statics::NewProp_NetworkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostFlyingPawn_Statics::NewProp_NetworkComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHostFlyingPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostFlyingPawn_Statics::NewProp_NetworkComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHostFlyingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHostFlyingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHostFlyingPawn_Statics::ClassParams = {
		&AHostFlyingPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHostFlyingPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHostFlyingPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHostFlyingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHostFlyingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHostFlyingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHostFlyingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHostFlyingPawn, 2309703363);
	template<> FLYING_API UClass* StaticClass<AHostFlyingPawn>()
	{
		return AHostFlyingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHostFlyingPawn(Z_Construct_UClass_AHostFlyingPawn, &AHostFlyingPawn::StaticClass, TEXT("/Script/Flying"), TEXT("AHostFlyingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHostFlyingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
