// Class /Script/FortniteGame.FortWeaponComponent_Swinging
// Size: 0x620
class UFortWeaponComponent_Swinging : public UFortWeaponComponent
{
	unsigned char unreflected_a0[0x10]; // 0xa0 (0x10) 
	struct FHitResult TargetingHitResult; // 0xb0 (0xe0)
	bool bFoundTarget; // 0x190 (0x1)
	bool bMaintainCurrentTargetAfterSweeps; // 0x191 (0x1)
	unsigned char unreflected_192[0x6]; // 0x192 (0x6) 
	struct FVector CameraLocation; // 0x198 (0x18)
	struct FVector CameraDirection; // 0x1b0 (0x18)
	struct FVector LastTargetPosition; // 0x1c8 (0x18)
	bool bGrounded; // 0x1e0 (0x1)
	bool bFastSpeed; // 0x1e1 (0x1)
	unsigned char unreflected_1e2[0x2]; // 0x1e2 (0x2) 
	float TimeBelowDetachSpeedThreshold; // 0x1e4 (0x4)
	struct FScalableFloat SpeedThresholdDetachTooSlow; // 0x1e8 (0x28)
	struct FScalableFloat TimeThresholdDetachTooSlow; // 0x210 (0x28)
	struct FScalableFloat DetachTooSlowMaxDotUp; // 0x238 (0x28)
	struct FScalableFloat LineTraceStartOffsetFromCamera; // 0x260 (0x28)
	struct FScalableFloat MaxRangeMultiplierBasedOnHeight; // 0x288 (0x28)
	struct FScalableFloat SphereTraceOneStartOffset; // 0x2b0 (0x28)
	struct FScalableFloat TargetOutOfRange; // 0x2d8 (0x28)
	struct FScalableFloat SphereTraceOneRange; // 0x300 (0x28)
	struct FScalableFloat SphereTraceTwoRange; // 0x328 (0x28)
	struct FScalableFloat SphereTraceOneRadius; // 0x350 (0x28)
	struct FScalableFloat SphereTraceTwoRadius; // 0x378 (0x28)
	struct FScalableFloat SpeedLinesThreshold; // 0x3a0 (0x28)
	struct FScalableFloat GroundedThreshold; // 0x3c8 (0x28)
	struct FScalableFloat MaxDotForProximityDetach; // 0x3f0 (0x28)
	struct FScalableFloat DistanceForProximityDetach; // 0x418 (0x28)
	struct FScalableFloat MinSpeedForProximityDetach; // 0x440 (0x28)
	struct FScalableFloat DotForValidTargetPosition; // 0x468 (0x28)
	struct FGameplayTag SpeedLinesTag; // 0x490 (0x4)
	struct FGameplayTag UseIsBlocked; // 0x494 (0x4)
	struct FGameplayTag SwingInputHeld; // 0x498 (0x4)
	unsigned char unreflected_49c[0x4]; // 0x49c (0x4) 
	class UClass* SpeedLinesGE; // 0x4a0 (0x8)
	struct FScalableFloat bAllowTargetWalkableTerrain; // 0x4a8 (0x28)
	bool bCheckForCloseDetach; // 0x4d0 (0x1)
	unsigned char unreflected_4d1[0x7]; // 0x4d1 (0x7) 
	struct FScalableFloat bAllowTargetNonBGAStaticMesh; // 0x4d8 (0x28)
	struct FScalableFloat bAllowTargetSplineMesh; // 0x500 (0x28)
	struct FScalableFloat bAllowTargetVehicles; // 0x528 (0x28)
	struct FScalableFloat bAllowTargetProjectiles; // 0x550 (0x28)
	struct FScalableFloat bAllowTargetPullablesWhileSwinging; // 0x578 (0x28)
	struct FScalableFloat bAllowTargetPickups; // 0x5a0 (0x28)
	struct FScalableFloat bAllowTargetRebootCards; // 0x5c8 (0x28)
	struct FScalableFloat AngleFromTargetForSphereSweep; // 0x5f0 (0x28)
	struct FName TargetingBlacklistedActorTag; // 0x618 (0x4)
	unsigned char padding_61c[0x4]; // 0x61c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponComponent_Swinging.UpdateReticle (Has no native function)
	void UpdateReticle(bool& bHitSomething, bool& bUseBlocked, bool& bIsWeaponAimingAtTarget, struct FVector& TargetPos); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponComponent_Swinging.SetTargetingResults (Has no native function)
	void SetTargetingResults(struct FHitResult& HitResult, bool& bHitSomething); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponComponent_Swinging.ServerSetTargetingResults (Underlying native function: ServerSetTargetingResults 0x871b940)
	void ServerSetTargetingResults(struct FHitResult& HitResult, bool& bHitSomething); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortWeaponComponent_Swinging.OnSpawnedProjectile (Underlying native function: OnSpawnedProjectile 0x871b610)
	void OnSpawnedProjectile(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortWeaponComponent_Swinging.OnSingleFire (Underlying native function: OnSingleFire 0x871b5fc)
	void OnSingleFire(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortWeaponComponent_Swinging.OnExitGround (Has no native function)
	void OnExitGround(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponComponent_Swinging.OnDetachTooSlow (Has no native function)
	void OnDetachTooSlow(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponComponent_Swinging.OnDetachTooClose (Has no native function)
	void OnDetachTooClose(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponComponent_Swinging.IsActorPullable (Underlying native function: IsActorPullable 0x871ab20)
	bool IsActorPullable(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

