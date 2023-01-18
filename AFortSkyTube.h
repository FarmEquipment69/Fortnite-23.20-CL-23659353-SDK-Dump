// Class /Script/FortniteGame.FortSkyTube
// Size: 0x828
class AFortSkyTube : public AActor
{
	bool bExemptFromShutdown; // 0x288 (0x1)
	unsigned char unreflected_289[0x7]; // 0x289 (0x7) 
	class USplineComponent* Spline; // 0x290 (0x8)
	struct FScalableFloat ExitAcceleration; // 0x298 (0x28)
	struct FScalableFloat ExitGravity; // 0x2c0 (0x28)
	struct FScalableFloat TangentialAcceleration; // 0x2e8 (0x28)
	struct FScalableFloat TangentialMaxSpeed; // 0x310 (0x28)
	struct FScalableFloat TangentialMinSpeed; // 0x338 (0x28)
	bool bApplyTangentialForce; // 0x360 (0x1)
	unsigned char unreflected_361[0x7]; // 0x361 (0x7) 
	struct FScalableFloat MaxEntrySpeed; // 0x368 (0x28)
	struct FScalableFloat MaxPerpendicularEntrySpeed; // 0x390 (0x28)
	struct FScalableFloat EntryBiasTowardTangent; // 0x3b8 (0x28)
	struct FScalableFloat EntryVelocityAngleRequired; // 0x3e0 (0x28)
	unsigned char unreflected_408[0x8]; // 0x408 (0x8) 
	struct FScalableFloat ActiveForwardSteeringAngle; // 0x410 (0x28)
	unsigned char unreflected_438[0x4]; // 0x438 (0x4) 
	enum ESkyTubeMovementDirection AllowedMovementDirection; // 0x43c (0x1)
	unsigned char unreflected_43d[0x3]; // 0x43d (0x3) 
	struct FScalableFloat InnerMagnetRadius; // 0x440 (0x28)
	struct FScalableFloat OuterMagnetAccel; // 0x468 (0x28)
	struct FScalableFloat InnerMagnetDecel; // 0x490 (0x28)
	struct FScalableFloat OuterMagnetSpeedThreshold; // 0x4b8 (0x28)
	struct FScalableFloat InnerMagnetSpeedThreshold; // 0x4e0 (0x28)
	struct FScalableFloat ProjectileTangentialMinSpeed; // 0x508 (0x28)
	struct FScalableFloat ProjectileTangentialMaxSpeed; // 0x530 (0x28)
	struct FScalableFloat SpiralAccelerationProjectiles; // 0x558 (0x28)
	struct FScalableFloat ProjectileForceMultiplier; // 0x580 (0x28)
	struct FScalableFloat ProjectileEntryMultiplier; // 0x5a8 (0x28)
	struct FScalableFloat SpiralAccelerationPhysics; // 0x5d0 (0x28)
	struct FScalableFloat PhysicsForceMultiplier; // 0x5f8 (0x28)
	struct FScalableFloat PhysicsEntryMultiplier; // 0x620 (0x28)
	struct FScalableFloat MagnetMaxReductionFromSteering; // 0x648 (0x28)
	struct FScalableFloat MagnetMaxMultiplierWhenSteering; // 0x670 (0x28)
	struct FScalableFloat SteeringMagnetMaxSteerAngle; // 0x698 (0x28)
	unsigned char unreflected_6c0[0x8]; // 0x6c0 (0x8) 
	struct FScalableFloat MagnetLowVelocityThreshold; // 0x6c8 (0x28)
	struct FScalableFloat MagnetLowVelocityMinValue; // 0x6f0 (0x28)
	struct FScalableFloat SteeringReduceAccelerationPower; // 0x718 (0x28)
	struct FScalableFloat SteeringReduceDecelerationPower; // 0x740 (0x28)
	struct FScalableFloat MovementRestrictionRadius; // 0x768 (0x28)
	unsigned char unreflected_790[0x4]; // 0x790 (0x4) 
	bool bEnabled; // 0x794 (0x1)
	bool bShuttingDown; // 0x795 (0x1)
	unsigned char unreflected_796[0x2]; // 0x796 (0x2) 
	struct FScalableFloat bCanEverBeEnabled; // 0x798 (0x28)
	struct TArray<class UMeshComponent*> NonSkyTubeMeshComponents; // 0x7c0 (0x10)
	struct FSkyTubeConfig CachedSkyTubeConfig; // 0x7d0 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortSkyTube.OnStartShuttingDown (Has no native function)
	void OnStartShuttingDown(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSkyTube.OnEnabledChanged (Has no native function)
	void OnEnabledChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSkyTube.IsSkyTubeEnabled (Underlying native function: IsSkyTubeEnabled 0x88628c4)
	bool IsSkyTubeEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSkyTube.IsShuttingDown (Underlying native function: IsShuttingDown 0x88628ac)
	bool IsShuttingDown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSkyTube.IsMeshComponentPartOfSkyTube (Underlying native function: IsMeshComponentPartOfSkyTube 0x88627fc)
	bool IsMeshComponentPartOfSkyTube(class UMeshComponent*& MeshComponent); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSkyTube.IsExemptFromShutdown (Underlying native function: IsExemptFromShutdown 0x8862798)
	bool IsExemptFromShutdown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSkyTube.HandleForcedExit (Has no native function)
	void HandleForcedExit(class AActor*& ExitingPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortSkyTube.GetDelayUntilDisabled (Underlying native function: GetDelayUntilDisabled 0x8860b48)
	float GetDelayUntilDisabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSkyTube.DeferredEnableOverlaps (Underlying native function: DeferredEnableOverlaps 0x23eff98)
	void DeferredEnableOverlaps(); // (Native | Public)

	// Function /Script/FortniteGame.FortSkyTube.AddNonSkyTubeMeshComponent (Underlying native function: AddNonSkyTubeMeshComponent 0x885ec78)
	void AddNonSkyTubeMeshComponent(class UMeshComponent*& MeshComponent); // (Final | Native | Protected | BlueprintCallable)
};

