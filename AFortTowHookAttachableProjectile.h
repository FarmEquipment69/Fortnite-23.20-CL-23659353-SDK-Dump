// Class /Script/FortniteGame.FortTowHookAttachableProjectile
// Size: 0xb58
class AFortTowHookAttachableProjectile : public AFortAttachableProjectileDeprecated
{
	struct FName RopeAttachSocketName; // 0xb48 (0x4)
	struct FName CollisionProfileNameOverride; // 0xb4c (0x4)
	class AFortPhysicsTowHook* OwningTowHook; // 0xb50 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortTowHookAttachableProjectile.GetRopeAttachLocation (Underlying native function: GetRopeAttachLocation 0x90681d4)
	struct FVector GetRopeAttachLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTowHookAttachableProjectile.DestroyProjectile (Underlying native function: DestroyProjectile 0x7062174)
	void DestroyProjectile(); // (Final | Native | Public)
};

