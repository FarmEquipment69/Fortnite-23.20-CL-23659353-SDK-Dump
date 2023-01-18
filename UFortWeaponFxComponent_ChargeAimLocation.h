// Class /Script/FortniteGame.FortWeaponFxComponent_ChargeAimLocation
// Size: 0xf8
class UFortWeaponFxComponent_ChargeAimLocation : public UFortWeaponFxComponent
{
	float AimSmoothingSpeed; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x34]; // 0xac (0x34) 
	struct FVector ReplicatedAimOffset; // 0xe0 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponFxComponent_ChargeAimLocation.SetReplicatedAimOffset (Underlying native function: SetReplicatedAimOffset 0x871bb20)
	void SetReplicatedAimOffset(struct FVector& AimOffset); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponFxComponent_ChargeAimLocation.GetCachedDamageStartAndAim (Underlying native function: GetCachedDamageStartAndAim 0x8719c48)
	void GetCachedDamageStartAndAim(struct FVector& OutDamageStartLocation, struct FVector& OutAimDirection); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

