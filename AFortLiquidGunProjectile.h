// Class /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile
// Size: 0xb70
class AFortLiquidGunProjectile : public AFortProjectileBase
{
	class USceneComponent* AttachComponent; // 0xa20 (0x8)
	struct FVector AttachOffset; // 0xa28 (0x18)
	int ProjectileIndex; // 0xa40 (0x4)
	unsigned char unreflected_a44[0x4]; // 0xa44 (0x4) 
	struct FVector StopNormal; // 0xa48 (0x18)
	class ALiquidRibbonManager* RibbonManager; // 0xa60 (0x8)
	struct FScalableFloat MinDistBetweenProjectilesForSplineCollisionTest; // 0xa68 (0x28)
	struct FScalableFloat MinDistBetweenInLineProjectilesForSplineCollisionTest; // 0xa90 (0x28)
	struct FScalableFloat MinProjectileVelocityAngleToBeInLine; // 0xab8 (0x28)
	struct TEnumAsByte<ECollisionChannel> BroadSphereOverlapTraceChannel; // 0xae0 (0x1)
	unsigned char unreflected_ae1[0x3]; // 0xae1 (0x3) 
	struct FName CapsuleTraceProfileName; // 0xae4 (0x4)
	bool bCapsuleTraceComplex; // 0xae8 (0x1)
	unsigned char unreflected_ae9[0x7]; // 0xae9 (0x7) 
	struct FVector_NetQuantize RandomDetachmentAngleFirstHalf; // 0xaf0 (0x18)
	struct FVector_NetQuantize RandomDetachmentAngleSecondHalf; // 0xb08 (0x18)
	bool bDrawDebugCollision; // 0xb20 (0x1)
	bool bDrawDebugCollisionOnlyCapsuleTraceHits; // 0xb21 (0x1)
	enum ELiquidRibbonDetachmentReason DetachmentReason; // 0xb22 (0x1)
	unsigned char padding_b23[0x4d]; // 0xb23 (0x4d)

	/* Functions */

	// Function /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile.SetDetachmentReason (Underlying native function: SetDetachmentReason 0x77c0ff8)
	void SetDetachmentReason(enum ELiquidRibbonDetachmentReason& InDetachmentReason); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile.HandleSplineHit (Has no native function)
	void HandleSplineHit(struct FHitResult& Hit); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/UnstableLiquidGunRuntime.FortLiquidGunProjectile.GetDetachmentReason (Underlying native function: GetDetachmentReason 0x77c0d44)
	enum ELiquidRibbonDetachmentReason GetDetachmentReason(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

