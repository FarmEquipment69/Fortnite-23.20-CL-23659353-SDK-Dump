// Class /Script/FortniteGame.FortSpaghettiTowhookAttachableProjectile
// Size: 0xb58
class AFortSpaghettiTowhookAttachableProjectile : public AFortAttachableProjectileDeprecated
{
	struct FName RopeAttachSocketName; // 0xb48 (0x4)
	struct FName CollisionProfileNameOverride; // 0xb4c (0x4)
	class AFortSpaghettiVehicle* OwningVehicle; // 0xb50 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSpaghettiTowhookAttachableProjectile.GetRopeAttachLocation (Underlying native function: GetRopeAttachLocation 0x906819c)
	struct FVector GetRopeAttachLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSpaghettiTowhookAttachableProjectile.DestroyProjectile (Underlying native function: DestroyProjectile 0x7062174)
	void DestroyProjectile(); // (Final | Native | Public)
};

