// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NGD_COURSEWORK_ClientPlayerPawn_generated_h
#error "ClientPlayerPawn.generated.h already included, missing '#pragma once' in ClientPlayerPawn.h"
#endif
#define NGD_COURSEWORK_ClientPlayerPawn_generated_h

#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_SPARSE_DATA
#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_RPC_WRAPPERS
#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClientPlayerPawn(); \
	friend struct Z_Construct_UClass_AClientPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AClientPlayerPawn, APlayerPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NGD_Coursework"), NO_API) \
	DECLARE_SERIALIZER(AClientPlayerPawn)


#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAClientPlayerPawn(); \
	friend struct Z_Construct_UClass_AClientPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AClientPlayerPawn, APlayerPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NGD_Coursework"), NO_API) \
	DECLARE_SERIALIZER(AClientPlayerPawn)


#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClientPlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClientPlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientPlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientPlayerPawn(AClientPlayerPawn&&); \
	NO_API AClientPlayerPawn(const AClientPlayerPawn&); \
public:


#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClientPlayerPawn(AClientPlayerPawn&&); \
	NO_API AClientPlayerPawn(const AClientPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClientPlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClientPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClientPlayerPawn)


#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NetworkComponent() { return STRUCT_OFFSET(AClientPlayerPawn, NetworkComponent); }


#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_14_PROLOG
#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_SPARSE_DATA \
	NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_RPC_WRAPPERS \
	NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_INCLASS \
	NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_SPARSE_DATA \
	NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_INCLASS_NO_PURE_DECLS \
	NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NGD_COURSEWORK_API UClass* StaticClass<class AClientPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NGD_Coursework_Source_NGD_Coursework_ClientPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
