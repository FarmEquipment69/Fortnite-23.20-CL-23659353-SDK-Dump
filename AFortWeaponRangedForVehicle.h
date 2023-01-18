// Class /Script/FortniteGame.FortWeaponRangedForVehicle
// Size: 0x1628
class AFortWeaponRangedForVehicle : public AFortWeaponRanged
{
	unsigned char unreflected_1560[0x8]; // 0x1560 (0x8) 
	class USkeletalMeshComponent* CachedWeaponMeshCompOnVehicle; // 0x1568 (0x8)
	struct FVector WeaponLoc; // 0x1570 (0x18)
	struct FRotator WeaponRot; // 0x1588 (0x18)
	struct FMountedWeaponInfo MountedWeaponInfo; // 0x15a0 (0x40)
	struct FMountedWeaponInfoRepped MountedWeaponInfoRepped; // 0x15e0 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedForVehicle.OnRep_MountedWeaponInfoRepped (Underlying native function: OnRep_MountedWeaponInfoRepped 0x9058f74)
	void OnRepMountedWeaponInfoRepped(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortWeaponRangedForVehicle.OnHostVehicleSetup (Has no native function)
	void OnHostVehicleSetup(); // (Event | Public | BlueprintEvent)
};

