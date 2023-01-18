// Class /Script/FortniteGame.FortHookGunRope
// Size: 0x310
class AFortHookGunRope : public AActor
{
	class UStaticMeshComponent* RopeMesh; // 0x288 (0x8)
	class UStaticMeshComponent* RopeProjectileMesh; // 0x290 (0x8)
	struct FVector StartLocation; // 0x298 (0x18)
	struct FVector EndLocation; // 0x2b0 (0x18)
	class USkeletalMeshComponentBudgeted* WeaponMesh; // 0x2c8 (0x8)
	struct FName WeaponMeshSocketName; // 0x2d0 (0x4)
	unsigned char unreflected_2d4[0x4]; // 0x2d4 (0x4) 
	class UStaticMeshComponent* OwningProjectileMesh; // 0x2d8 (0x8)
	struct FName OwningProjectileMeshSocketName; // 0x2e0 (0x4)
	unsigned char unreflected_2e4[0x4]; // 0x2e4 (0x4) 
	struct FMulticastInlineDelegate OnEndReel; // 0x2e8 (0x10)
	bool bProjectileGone; // 0x2f8 (0x1)
	unsigned char unreflected_2f9[0x3]; // 0x2f9 (0x3) 
	struct FHookGunRopeRepData HookGunRopeRepData; // 0x2fc (0x10)
	unsigned char padding_30c[0x4]; // 0x30c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortHookGunRope.SetWeaponMesh (Underlying native function: SetWeaponMesh 0x8392d78)
	void SetWeaponMesh(class USkeletalMeshComponentBudgeted*& NewValue); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortHookGunRope.SetWeaponAndProjectile (Underlying native function: SetWeaponAndProjectile 0x8392b88)
	void SetWeaponAndProjectile(class AFortWeapon*& InWeapon, class AFortProjectileBase*& InProjectile); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortHookGunRope.SetStartPointOfRope (Underlying native function: SetStartPointOfRope 0x8392b74)
	void SetStartPointOfRope(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortHookGunRope.SetOwningProjectileMesh (Underlying native function: SetOwningProjectileMesh 0x8392a10)
	void SetOwningProjectileMesh(class UStaticMeshComponent*& NewValue); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortHookGunRope.OnRep_HookGunRopeRepData (Underlying native function: OnRep_HookGunRopeRepData 0x8392468)
	void OnRepHookGunRopeRepData(); // (Final | Native | Protected)
};

