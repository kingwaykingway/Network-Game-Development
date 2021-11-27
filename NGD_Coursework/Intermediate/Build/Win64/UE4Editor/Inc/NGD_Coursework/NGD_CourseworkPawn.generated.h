// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NGD_COURSEWORK_NGD_CourseworkPawn_generated_h
#error "NGD_CourseworkPawn.generated.h already included, missing '#pragma once' in NGD_CourseworkPawn.h"
#endif
#define NGD_COURSEWORK_NGD_CourseworkPawn_generated_h

#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_SPARSE_DATA
#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_RPC_WRAPPERS
#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANGD_CourseworkPawn(); \
	friend struct Z_Construct_UClass_ANGD_CourseworkPawn_Statics; \
public: \
	DECLARE_CLASS(ANGD_CourseworkPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NGD_Coursework"), NO_API) \
	DECLARE_SERIALIZER(ANGD_CourseworkPawn)


#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesANGD_CourseworkPawn(); \
	friend struct Z_Construct_UClass_ANGD_CourseworkPawn_Statics; \
public: \
	DECLARE_CLASS(ANGD_CourseworkPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NGD_Coursework"), NO_API) \
	DECLARE_SERIALIZER(ANGD_CourseworkPawn)


#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANGD_CourseworkPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANGD_CourseworkPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANGD_CourseworkPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANGD_CourseworkPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANGD_CourseworkPawn(ANGD_CourseworkPawn&&); \
	NO_API ANGD_CourseworkPawn(const ANGD_CourseworkPawn&); \
public:


#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANGD_CourseworkPawn(ANGD_CourseworkPawn&&); \
	NO_API ANGD_CourseworkPawn(const ANGD_CourseworkPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANGD_CourseworkPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANGD_CourseworkPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANGD_CourseworkPawn)


#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(ANGD_CourseworkPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ANGD_CourseworkPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ANGD_CourseworkPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(ANGD_CourseworkPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(ANGD_CourseworkPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(ANGD_CourseworkPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(ANGD_CourseworkPawn, MinSpeed); }


#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_8_PROLOG
#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_SPARSE_DATA \
	NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_RPC_WRAPPERS \
	NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_INCLASS \
	NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_SPARSE_DATA \
	NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_INCLASS_NO_PURE_DECLS \
	NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NGD_COURSEWORK_API UClass* StaticClass<class ANGD_CourseworkPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NGD_Coursework_Source_NGD_Coursework_NGD_CourseworkPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
