// Class /Script/FortniteGame.FortWeaponRangedMountedCannon
// Size: 0x1630
class AFortWeaponRangedMountedCannon : public AFortWeaponRangedForVehicle
{
	int FirePlayerInSeat; // 0x1628 (0x4)
	bool bUseLegacyLaunchLogic; // 0x162c (0x1)
	enum MountedCannonLaunchPlayerMode LaunchMode; // 0x162d (0x1)
	bool bCanFireNormalProjectile; // 0x162e (0x1)
	unsigned char padding_162f[0x1]; // 0x162f (0x1)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedMountedCannon.ServerFireActorInCannon (Underlying native function: ServerFireActorInCannon 0x905946c)
	void ServerFireActorInCannon(struct FVector& LaunchDir); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortWeaponRangedMountedCannon.OnPreLaunchPawn (Has no native function)
	void OnPreLaunchPawn(class AFortPlayerPawn*& Pawn, struct FVector& LaunchDir); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedMountedCannon.OnLaunchPawn (Has no native function)
	void OnLaunchPawn(class AFortPlayerPawn*& Pawn, struct FVector& LaunchDir); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortWeaponRangedMountedCannon.GetVehicleSkeletalMesh (Underlying native function: GetVehicleSkeletalMesh 0x90583c8)
	class USkeletalMeshComponent* GetVehicleSkeletalMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

