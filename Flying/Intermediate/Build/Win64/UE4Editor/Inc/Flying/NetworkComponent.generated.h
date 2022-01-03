// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLYING_NetworkComponent_generated_h
#error "NetworkComponent.generated.h already included, missing '#pragma once' in NetworkComponent.h"
#endif
#define FLYING_NetworkComponent_generated_h

#define Flying_Source_Flying_NetworkComponent_h_39_SPARSE_DATA
#define Flying_Source_Flying_NetworkComponent_h_39_RPC_WRAPPERS
#define Flying_Source_Flying_NetworkComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Flying_Source_Flying_NetworkComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkComponent(); \
	friend struct Z_Construct_UClass_UNetworkComponent_Statics; \
public: \
	DECLARE_CLASS(UNetworkComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flying"), NO_API) \
	DECLARE_SERIALIZER(UNetworkComponent)


#define Flying_Source_Flying_NetworkComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUNetworkComponent(); \
	friend struct Z_Construct_UClass_UNetworkComponent_Statics; \
public: \
	DECLARE_CLASS(UNetworkComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flying"), NO_API) \
	DECLARE_SERIALIZER(UNetworkComponent)


#define Flying_Source_Flying_NetworkComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkComponent(UNetworkComponent&&); \
	NO_API UNetworkComponent(const UNetworkComponent&); \
public:


#define Flying_Source_Flying_NetworkComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkComponent(UNetworkComponent&&); \
	NO_API UNetworkComponent(const UNetworkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkComponent)


#define Flying_Source_Flying_NetworkComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ip() { return STRUCT_OFFSET(UNetworkComponent, m_ip); } \
	FORCEINLINE static uint32 __PPO__m_port() { return STRUCT_OFFSET(UNetworkComponent, m_port); }


#define Flying_Source_Flying_NetworkComponent_h_36_PROLOG
#define Flying_Source_Flying_NetworkComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flying_Source_Flying_NetworkComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Flying_Source_Flying_NetworkComponent_h_39_SPARSE_DATA \
	Flying_Source_Flying_NetworkComponent_h_39_RPC_WRAPPERS \
	Flying_Source_Flying_NetworkComponent_h_39_INCLASS \
	Flying_Source_Flying_NetworkComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flying_Source_Flying_NetworkComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flying_Source_Flying_NetworkComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Flying_Source_Flying_NetworkComponent_h_39_SPARSE_DATA \
	Flying_Source_Flying_NetworkComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Flying_Source_Flying_NetworkComponent_h_39_INCLASS_NO_PURE_DECLS \
	Flying_Source_Flying_NetworkComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLYING_API UClass* StaticClass<class UNetworkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flying_Source_Flying_NetworkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
