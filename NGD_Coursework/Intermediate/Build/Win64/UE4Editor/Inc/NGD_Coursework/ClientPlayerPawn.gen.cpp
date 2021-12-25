// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NGD_Coursework/ClientPlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientPlayerPawn() {}
// Cross Module References
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_AClientPlayerPawn_NoRegister();
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_AClientPlayerPawn();
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_APlayerPawn();
	UPackage* Z_Construct_UPackage__Script_NGD_Coursework();
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_UClientPlayerPawnNetworkComponent_NoRegister();
// End Cross Module References
	void AClientPlayerPawn::StaticRegisterNativesAClientPlayerPawn()
	{
	}
	UClass* Z_Construct_UClass_AClientPlayerPawn_NoRegister()
	{
		return AClientPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AClientPlayerPawn_Statics
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
	UObject* (*const Z_Construct_UClass_AClientPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_NGD_Coursework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ClientPlayerPawn.h" },
		{ "ModuleRelativePath", "ClientPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClientPlayerPawn_Statics::NewProp_NetworkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ClientPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AClientPlayerPawn_Statics::NewProp_NetworkComponent = { "NetworkComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AClientPlayerPawn, NetworkComponent), Z_Construct_UClass_UClientPlayerPawnNetworkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AClientPlayerPawn_Statics::NewProp_NetworkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AClientPlayerPawn_Statics::NewProp_NetworkComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClientPlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClientPlayerPawn_Statics::NewProp_NetworkComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClientPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClientPlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClientPlayerPawn_Statics::ClassParams = {
		&AClientPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AClientPlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AClientPlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AClientPlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClientPlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClientPlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClientPlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClientPlayerPawn, 1653115299);
	template<> NGD_COURSEWORK_API UClass* StaticClass<AClientPlayerPawn>()
	{
		return AClientPlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClientPlayerPawn(Z_Construct_UClass_AClientPlayerPawn, &AClientPlayerPawn::StaticClass, TEXT("/Script/NGD_Coursework"), TEXT("AClientPlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClientPlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
