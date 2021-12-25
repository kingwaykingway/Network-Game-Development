// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NGD_Coursework/HostPlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHostPlayerPawn() {}
// Cross Module References
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_AHostPlayerPawn_NoRegister();
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_AHostPlayerPawn();
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_APlayerPawn();
	UPackage* Z_Construct_UPackage__Script_NGD_Coursework();
	NGD_COURSEWORK_API UClass* Z_Construct_UClass_UHostPlayerPawnNetworkComponent_NoRegister();
// End Cross Module References
	void AHostPlayerPawn::StaticRegisterNativesAHostPlayerPawn()
	{
	}
	UClass* Z_Construct_UClass_AHostPlayerPawn_NoRegister()
	{
		return AHostPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AHostPlayerPawn_Statics
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
	UObject* (*const Z_Construct_UClass_AHostPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_NGD_Coursework,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HostPlayerPawn.h" },
		{ "ModuleRelativePath", "HostPlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHostPlayerPawn_Statics::NewProp_NetworkComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HostPlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHostPlayerPawn_Statics::NewProp_NetworkComponent = { "NetworkComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHostPlayerPawn, NetworkComponent), Z_Construct_UClass_UHostPlayerPawnNetworkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHostPlayerPawn_Statics::NewProp_NetworkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHostPlayerPawn_Statics::NewProp_NetworkComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHostPlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHostPlayerPawn_Statics::NewProp_NetworkComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHostPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHostPlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHostPlayerPawn_Statics::ClassParams = {
		&AHostPlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHostPlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHostPlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHostPlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHostPlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHostPlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHostPlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHostPlayerPawn, 1155105758);
	template<> NGD_COURSEWORK_API UClass* StaticClass<AHostPlayerPawn>()
	{
		return AHostPlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHostPlayerPawn(Z_Construct_UClass_AHostPlayerPawn, &AHostPlayerPawn::StaticClass, TEXT("/Script/NGD_Coursework"), TEXT("AHostPlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHostPlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
