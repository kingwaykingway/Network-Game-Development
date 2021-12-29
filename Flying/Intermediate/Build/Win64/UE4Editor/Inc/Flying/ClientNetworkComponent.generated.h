// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLYING_ClientNetworkComponent_generated_h
#error "ClientNetworkComponent.generated.h already included, missing '#pragma once' in ClientNetworkComponent.h"
#endif
#define FLYING_ClientNetworkComponent_generated_h

#define Flying_Source_Flying_ClientNetworkComponent_h_15_SPARSE_DATA
#define Flying_Source_Flying_ClientNetworkComponent_h_15_RPC_WRAPPERS
#define Flying_Source_Flying_ClientNetworkComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Flying_Source_Flying_ClientNetworkComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClientNetworkComponent(); \
	friend struct Z_Construct_UClass_UClientNetworkComponent_Statics; \
public: \
	DECLARE_CLASS(UClientNetworkComponent, UNetworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flying"), NO_API) \
	DECLARE_SERIALIZER(UClientNetworkComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Flying_Source_Flying_ClientNetworkComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUClientNetworkComponent(); \
	friend struct Z_Construct_UClass_UClientNetworkComponent_Statics; \
public: \
	DECLARE_CLASS(UClientNetworkComponent, UNetworkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flying"), NO_API) \
	DECLARE_SERIALIZER(UClientNetworkComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Flying_Source_Flying_ClientNetworkComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientNetworkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClientNetworkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientNetworkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientNetworkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientNetworkComponent(UClientNetworkComponent&&); \
	NO_API UClientNetworkComponent(const UClientNetworkComponent&); \
public:


#define Flying_Source_Flying_ClientNetworkComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClientNetworkComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClientNetworkComponent(UClientNetworkComponent&&); \
	NO_API UClientNetworkComponent(const UClientNetworkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClientNetworkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClientNetworkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClientNetworkComponent)


#define Flying_Source_Flying_ClientNetworkComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define Flying_Source_Flying_ClientNetworkComponent_h_12_PROLOG
#define Flying_Source_Flying_ClientNetworkComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flying_Source_Flying_ClientNetworkComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Flying_Source_Flying_ClientNetworkComponent_h_15_SPARSE_DATA \
	Flying_Source_Flying_ClientNetworkComponent_h_15_RPC_WRAPPERS \
	Flying_Source_Flying_ClientNetworkComponent_h_15_INCLASS \
	Flying_Source_Flying_ClientNetworkComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flying_Source_Flying_ClientNetworkComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flying_Source_Flying_ClientNetworkComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Flying_Source_Flying_ClientNetworkComponent_h_15_SPARSE_DATA \
	Flying_Source_Flying_ClientNetworkComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Flying_Source_Flying_ClientNetworkComponent_h_15_INCLASS_NO_PURE_DECLS \
	Flying_Source_Flying_ClientNetworkComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLYING_API UClass* StaticClass<class UClientNetworkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flying_Source_Flying_ClientNetworkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
