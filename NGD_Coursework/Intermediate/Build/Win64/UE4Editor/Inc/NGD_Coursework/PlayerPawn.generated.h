// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NGD_COURSEWORK_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define NGD_COURSEWORK_PlayerPawn_generated_h

#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_SPARSE_DATA
#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_RPC_WRAPPERS
#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NGD_Coursework"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NGD_Coursework"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(APlayerPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APlayerPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayerPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(APlayerPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(APlayerPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(APlayerPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(APlayerPawn, MinSpeed); }


#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_10_PROLOG
#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_SPARSE_DATA \
	NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_RPC_WRAPPERS \
	NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_INCLASS \
	NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_SPARSE_DATA \
	NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_INCLASS_NO_PURE_DECLS \
	NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NGD_COURSEWORK_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NGD_Coursework_Source_NGD_Coursework_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
