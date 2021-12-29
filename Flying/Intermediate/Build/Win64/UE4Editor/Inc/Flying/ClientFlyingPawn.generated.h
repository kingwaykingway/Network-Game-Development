// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLYING_ClientFlyingPawn_generated_h
#error "ClientFlyingPawn.generated.h already included, missing '#pragma once' in ClientFlyingPawn.h"
#endif
#define FLYING_ClientFlyingPawn_generated_h

#define Flying_Source_Flying_ClientFlyingPawn_h_17_SPARSE_DATA
#define Flying_Source_Flying_ClientFlyingPawn_h_17_RPC_WRAPPERS
#define Flying_Source_Flying_ClientFlyingPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Flying_Source_Flying_ClientFlyingPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClientFlyingPawn(); \
	friend struct Z_Construct_UClass_AClientFlyingPawn_Statics; \
public: \
	DECLARE_CLASS(AClientFlyingPawn, AFlyingPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flying"), NO_API) \
	DECLARE_SERIALIZER(AClientFlyingPawn)


#define Flying_Source_Flying_ClientFlyingPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAClientFlyingPawn(); \
	friend struct Z_Construct_UClass_AClientFlyingPawn_Statics; \
public: \
	DECLARE_CLASS(AClientFlyingPawn, AFlyingPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flying"), NO_API) \
	DECLARE_SERIALIZER(AClientFlyingPawn)


#define Flying_Source_Flying_ClientFlyingPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClientFlyingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClientFlyingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientFlyingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientFlyingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientFlyingPawn(AClientFlyingPawn&&); \
	NO_API AClientFlyingPawn(const AClientFlyingPawn&); \
public:


#define Flying_Source_Flying_ClientFlyingPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientFlyingPawn(AClientFlyingPawn&&); \
	NO_API AClientFlyingPawn(const AClientFlyingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientFlyingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientFlyingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClientFlyingPawn)


#define Flying_Source_Flying_ClientFlyingPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NetworkComponent() { return STRUCT_OFFSET(AClientFlyingPawn, NetworkComponent); }


#define Flying_Source_Flying_ClientFlyingPawn_h_14_PROLOG
#define Flying_Source_Flying_ClientFlyingPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flying_Source_Flying_ClientFlyingPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Flying_Source_Flying_ClientFlyingPawn_h_17_SPARSE_DATA \
	Flying_Source_Flying_ClientFlyingPawn_h_17_RPC_WRAPPERS \
	Flying_Source_Flying_ClientFlyingPawn_h_17_INCLASS \
	Flying_Source_Flying_ClientFlyingPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flying_Source_Flying_ClientFlyingPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flying_Source_Flying_ClientFlyingPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Flying_Source_Flying_ClientFlyingPawn_h_17_SPARSE_DATA \
	Flying_Source_Flying_ClientFlyingPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Flying_Source_Flying_ClientFlyingPawn_h_17_INCLASS_NO_PURE_DECLS \
	Flying_Source_Flying_ClientFlyingPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLYING_API UClass* StaticClass<class AClientFlyingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flying_Source_Flying_ClientFlyingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
