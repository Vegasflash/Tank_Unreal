// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHBATTLEPROJECT_TankBarrel_generated_h
#error "TankBarrel.generated.h already included, missing '#pragma once' in TankBarrel.h"
#endif
#define MECHBATTLEPROJECT_TankBarrel_generated_h

#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_RPC_WRAPPERS
#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUTankBarrel(); \
	friend MECHBATTLEPROJECT_API class UClass* Z_Construct_UClass_UTankBarrel(); \
	public: \
	DECLARE_CLASS(UTankBarrel, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MechBattleProject"), NO_API) \
	DECLARE_SERIALIZER(UTankBarrel) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesUTankBarrel(); \
	friend MECHBATTLEPROJECT_API class UClass* Z_Construct_UClass_UTankBarrel(); \
	public: \
	DECLARE_CLASS(UTankBarrel, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MechBattleProject"), NO_API) \
	DECLARE_SERIALIZER(UTankBarrel) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankBarrel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankBarrel(UTankBarrel&&); \
	NO_API UTankBarrel(const UTankBarrel&); \
public:


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankBarrel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankBarrel(UTankBarrel&&); \
	NO_API UTankBarrel(const UTankBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankBarrel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankBarrel)


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxDegreesPerSecond() { return STRUCT_OFFSET(UTankBarrel, MaxDegreesPerSecond); } \
	FORCEINLINE static uint32 __PPO__MinBarrelElevation() { return STRUCT_OFFSET(UTankBarrel, MinBarrelElevation); } \
	FORCEINLINE static uint32 __PPO__MaxBarrelElevation() { return STRUCT_OFFSET(UTankBarrel, MaxBarrelElevation); }


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_11_PROLOG
#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_PRIVATE_PROPERTY_OFFSET \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_RPC_WRAPPERS \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_INCLASS \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_PRIVATE_PROPERTY_OFFSET \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_INCLASS_NO_PURE_DECLS \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MechBattleProject_4_14_Source_MechBattleProject_Public_TankBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
