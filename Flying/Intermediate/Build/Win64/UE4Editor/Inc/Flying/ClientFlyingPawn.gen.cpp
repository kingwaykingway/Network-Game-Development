// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flying/ClientFlyingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientFlyingPawn() {}
// Cross Module References
	FLYING_API UClass* Z_Construct_UClass_AClientFlyingPawn_NoRegister();
	FLYING_API UClass* Z_Construct_UClass_AClientFlyingPawn();
	FLYING_API UClass* Z_Construct_UClass_AFlyingPawn();
	UPackage* Z_Construct_UPackage__Script_Flying();
	FLYING_API UClass* Z_Construct_UClass_UClientNetworkComponent_NoRegister();
// End Cross Module References
	void AClientFlyingPawn::StaticRegisterNativesAClientFlyingPawn()
	{
	}
	UClass* Z_Construct_UClass_AClientFlyingPawn_NoRegister()
	{
		return AClientFlyingPawn::StaticClass();
	}
	struct Z_Construct_UClass_AClientFlyingPawn_Statics
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
	UObject* (*const Z_Construct_UClass_AClientFlyingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFlyingPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Flying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientFlyingPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ClientFlyingPawn.h" },
		{ "ModuleRelativePath", "ClientFlyingPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientFlyingPawn_Statics::NewProp_NetworkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClientFlyingPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClientFlyingPawn_Statics::NewProp_NetworkComponent = { "NetworkComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClientFlyingPawn, NetworkComponent), Z_Construct_UClass_UClientNetworkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClientFlyingPawn_Statics::NewProp_NetworkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClientFlyingPawn_Statics::NewProp_NetworkComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClientFlyingPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClientFlyingPawn_Statics::NewProp_NetworkComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClientFlyingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClientFlyingPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClientFlyingPawn_Statics::ClassParams = {
		&AClientFlyingPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AClientFlyingPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AClientFlyingPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClientFlyingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClientFlyingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClientFlyingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClientFlyingPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClientFlyingPawn, 2239639552);
	template<> FLYING_API UClass* StaticClass<AClientFlyingPawn>()
	{
		return AClientFlyingPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClientFlyingPawn(Z_Construct_UClass_AClientFlyingPawn, &AClientFlyingPawn::StaticClass, TEXT("/Script/Flying"), TEXT("AClientFlyingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClientFlyingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
