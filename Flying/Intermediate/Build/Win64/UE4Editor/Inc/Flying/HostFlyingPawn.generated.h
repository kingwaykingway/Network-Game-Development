// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLYING_HostFlyingPawn_generated_h
#error "HostFlyingPawn.generated.h already included, missing '#pragma once' in HostFlyingPawn.h"
#endif
#define FLYING_HostFlyingPawn_generated_h

#define Flying_Source_Flying_HostFlyingPawn_h_17_SPARSE_DATA
#define Flying_Source_Flying_HostFlyingPawn_h_17_RPC_WRAPPERS
#define Flying_Source_Flying_HostFlyingPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Flying_Source_Flying_HostFlyingPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHostFlyingPawn(); \
	friend struct Z_Construct_UClass_AHostFlyingPawn_Statics; \
public: \
	DECLARE_CLASS(AHostFlyingPawn, AFlyingPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flying"), NO_API) \
	DECLARE_SERIALIZER(AHostFlyingPawn)


#define Flying_Source_Flying_HostFlyingPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAHostFlyingPawn(); \
	friend struct Z_Construct_UClass_AHostFlyingPawn_Statics; \
public: \
	DECLARE_CLASS(AHostFlyingPawn, AFlyingPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flying"), NO_API) \
	DECLARE_SERIALIZER(AHostFlyingPawn)


#define Flying_Source_Flying_HostFlyingPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHostFlyingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHostFlyingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHostFlyingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHostFlyingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHostFlyingPawn(AHostFlyingPawn&&); \
	NO_API AHostFlyingPawn(const AHostFlyingPawn&); \
public:


#define Flying_Source_Flying_HostFlyingPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHostFlyingPawn(AHostFlyingPawn&&); \
	NO_API AHostFlyingPawn(const AHostFlyingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHostFlyingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHostFlyingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHostFlyingPawn)


#define Flying_Source_Flying_HostFlyingPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NetworkComponent() { return STRUCT_OFFSET(AHostFlyingPawn, NetworkComponent); }


#define Flying_Source_Flying_HostFlyingPawn_h_14_PROLOG
#define Flying_Source_Flying_HostFlyingPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flying_Source_Flying_HostFlyingPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Flying_Source_Flying_HostFlyingPawn_h_17_SPARSE_DATA \
	Flying_Source_Flying_HostFlyingPawn_h_17_RPC_WRAPPERS \
	Flying_Source_Flying_HostFlyingPawn_h_17_INCLASS \
	Flying_Source_Flying_HostFlyingPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flying_Source_Flying_HostFlyingPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flying_Source_Flying_HostFlyingPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Flying_Source_Flying_HostFlyingPawn_h_17_SPARSE_DATA \
	Flying_Source_Flying_HostFlyingPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Flying_Source_Flying_HostFlyingPawn_h_17_INCLASS_NO_PURE_DECLS \
	Flying_Source_Flying_HostFlyingPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLYING_API UClass* StaticClass<class AHostFlyingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flying_Source_Flying_HostFlyingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
