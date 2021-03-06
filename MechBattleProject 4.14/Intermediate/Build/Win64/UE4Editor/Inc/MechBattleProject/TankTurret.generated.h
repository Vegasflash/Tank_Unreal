// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHBATTLEPROJECT_TankTurret_generated_h
#error "TankTurret.generated.h already included, missing '#pragma once' in TankTurret.h"
#endif
#define MECHBATTLEPROJECT_TankTurret_generated_h

#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_RPC_WRAPPERS
#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUTankTurret(); \
	friend MECHBATTLEPROJECT_API class UClass* Z_Construct_UClass_UTankTurret(); \
	public: \
	DECLARE_CLASS(UTankTurret, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MechBattleProject"), NO_API) \
	DECLARE_SERIALIZER(UTankTurret) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_INCLASS \
	private: \
	static void StaticRegisterNativesUTankTurret(); \
	friend MECHBATTLEPROJECT_API class UClass* Z_Construct_UClass_UTankTurret(); \
	public: \
	DECLARE_CLASS(UTankTurret, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MechBattleProject"), NO_API) \
	DECLARE_SERIALIZER(UTankTurret) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTankTurret(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTankTurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTurret(UTankTurret&&); \
	NO_API UTankTurret(const UTankTurret&); \
public:


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTankTurret(UTankTurret&&); \
	NO_API UTankTurret(const UTankTurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankTurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankTurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTankTurret)


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxTurretRotation() { return STRUCT_OFFSET(UTankTurret, MaxTurretRotation); } \
	FORCEINLINE static uint32 __PPO__MinBarrelElevation() { return STRUCT_OFFSET(UTankTurret, MinBarrelElevation); } \
	FORCEINLINE static uint32 __PPO__MaxBarrelElevation() { return STRUCT_OFFSET(UTankTurret, MaxBarrelElevation); }


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_9_PROLOG
#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_PRIVATE_PROPERTY_OFFSET \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_RPC_WRAPPERS \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_INCLASS \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_PRIVATE_PROPERTY_OFFSET \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_INCLASS_NO_PURE_DECLS \
	MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MechBattleProject_4_14_Source_MechBattleProject_Public_TankTurret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
