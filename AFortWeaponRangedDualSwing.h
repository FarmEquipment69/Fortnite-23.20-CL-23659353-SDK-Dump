// Class /Script/FortniteGame.FortWeaponRangedDualSwing
// Size: 0x1648
class AFortWeaponRangedDualSwing : public AFortWeaponRangedDual
{
	bool bAlwaysUseDefaultReticleColor; // 0x15b8 (0x1)
	unsigned char unreflected_15b9[0x7]; // 0x15b9 (0x7) 
	class AActor* RopeAttachPointActor; // 0x15c0 (0x8)
	class UStaticMeshComponent* RopeAnchor; // 0x15c8 (0x8)
	class UStaticMeshComponent* Rope; // 0x15d0 (0x8)
	struct FName SwingSocketName; // 0x15d8 (0x4)
	float RopeMeshLengthMultiplier; // 0x15dc (0x4)
	float RopeUpdateFrequency; // 0x15e0 (0x4)
	float RopeFadeTime; // 0x15e4 (0x4)
	unsigned char unreflected_15e8[0x18]; // 0x15e8 (0x18) 
	struct FScalableFloat HitCheckFrequency; // 0x1600 (0x28)
	float MaximumHeightToStartSkidding; // 0x1628 (0x4)
	struct FGameplayTag SkiddingTag; // 0x162c (0x4)
	float MaximumSwingHitWallAngle; // 0x1630 (0x4)
	float MinimumSwingHitGroundAngle; // 0x1634 (0x4)
	unsigned char padding_1638[0x10]; // 0x1638 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.UpdateRope (Underlying native function: UpdateRope 0x905a13c)
	void UpdateRope(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnRopeUpdated (Has no native function)
	void OnRopeUpdated(struct FVector& RopeDirection, float& RopeLength); // (BlueprintCosmetic | Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnRopeStartFadeOut (Has no native function)
	void OnRopeStartFadeOut(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnRopeFadeOutComplete (Has no native function)
	void OnRopeFadeOutComplete(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnRopeAttached (Has no native function)
	void OnRopeAttached(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnRep_RopeAttachPointActor (Underlying native function: OnRep_RopeAttachPointActor 0x90590b0)
	void OnRepRopeAttachPointActor(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnPlayerTouchedGroundAfterSwingEnded (Has no native function)
	void OnPlayerTouchedGroundAfterSwingEnded(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnPlayerStartSkidding (Has no native function)
	void OnPlayerStartSkidding(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnPlayerHitWhileSwinging (Has no native function)
	void OnPlayerHitWhileSwinging(struct FHitResult& Hit); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnPlayerHitWallWhileSwinging (Has no native function)
	void OnPlayerHitWallWhileSwinging(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.OnPlayerHit (Underlying native function: OnPlayerHit 0x9058a1c)
	void OnPlayerHit(class AActor*& HitPlayer, class AActor*& HitActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.GetRopeAttachSocketLocation (Underlying native function: GetRopeAttachSocketLocation 0x9058300)
	struct FVector GetRopeAttachSocketLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.DetachRope (Underlying native function: DetachRope 0x9057c84)
	void DetachRope(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRangedDualSwing.AttachRope (Underlying native function: AttachRope 0x90573ac)
	void AttachRope(class AActor*& AttachPointActor); // (Final | Native | Public | BlueprintCallable)
};

