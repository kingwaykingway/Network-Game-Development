// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLYING_FlyingPawn_generated_h
#error "FlyingPawn.generated.h already included, missing '#pragma once' in FlyingPawn.h"
#endif
#define FLYING_FlyingPawn_generated_h

#define Flying_Source_Flying_FlyingPawn_h_11_SPARSE_DATA
#define Flying_Source_Flying_FlyingPawn_h_11_RPC_WRAPPERS
#define Flying_Source_Flying_FlyingPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Flying_Source_Flying_FlyingPawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlyingPawn(); \
	friend struct Z_Construct_UClass_AFlyingPawn_Statics; \
public: \
	DECLARE_CLASS(AFlyingPawn, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flying"), NO_API) \
	DECLARE_SERIALIZER(AFlyingPawn)


#define Flying_Source_Flying_FlyingPawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAFlyingPawn(); \
	friend struct Z_Construct_UClass_AFlyingPawn_Statics; \
public: \
	DECLARE_CLASS(AFlyingPawn, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flying"), NO_API) \
	DECLARE_SERIALIZER(AFlyingPawn)


#define Flying_Source_Flying_FlyingPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlyingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlyingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlyingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlyingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlyingPawn(AFlyingPawn&&); \
	NO_API AFlyingPawn(const AFlyingPawn&); \
public:


#define Flying_Source_Flying_FlyingPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlyingPawn(AFlyingPawn&&); \
	NO_API AFlyingPawn(const AFlyingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlyingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlyingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlyingPawn)


#define Flying_Source_Flying_FlyingPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(AFlyingPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AFlyingPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AFlyingPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(AFlyingPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(AFlyingPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(AFlyingPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(AFlyingPawn, MinSpeed); }


#define Flying_Source_Flying_FlyingPawn_h_8_PROLOG
#define Flying_Source_Flying_FlyingPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flying_Source_Flying_FlyingPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	Flying_Source_Flying_FlyingPawn_h_11_SPARSE_DATA \
	Flying_Source_Flying_FlyingPawn_h_11_RPC_WRAPPERS \
	Flying_Source_Flying_FlyingPawn_h_11_INCLASS \
	Flying_Source_Flying_FlyingPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Flying_Source_Flying_FlyingPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Flying_Source_Flying_FlyingPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	Flying_Source_Flying_FlyingPawn_h_11_SPARSE_DATA \
	Flying_Source_Flying_FlyingPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Flying_Source_Flying_FlyingPawn_h_11_INCLASS_NO_PURE_DECLS \
	Flying_Source_Flying_FlyingPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLYING_API UClass* StaticClass<class AFlyingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Flying_Source_Flying_FlyingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
