// Class /Script/FortniteGame.BulletWhipTrackerComponentBase
// Size: 0xf8
class UBulletWhipTrackerComponentBase : public UActorComponent
{
	struct TArray<struct FBulletWhipTrackerData> WhipTrackerData; // 0xa0 (0x10)
	unsigned char bEnableGravityCheck; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x3]; // 0xb1 (0x3) 
	float FadeTimeOnProjectileStop; // 0xb4 (0x4)
	unsigned char unreflected_b8[0x30]; // 0xb8 (0x30) 
	class USceneComponent* CachedPassByPawn; // 0xe8 (0x8)
	unsigned char padding_f0[0x8]; // 0xf0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BulletWhipTrackerComponentBase.UpdateVelocity (Underlying native function: UpdateVelocity 0x8e614a0)
	void UpdateVelocity(struct FVector& CurrentVelocity); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BulletWhipTrackerComponentBase.Reset (Underlying native function: Reset 0x8e60128)
	void Reset(struct FVector& StartLocationIn); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BulletWhipTrackerComponentBase.Disable (Underlying native function: Disable 0x8e5dd94)
	void Disable(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

