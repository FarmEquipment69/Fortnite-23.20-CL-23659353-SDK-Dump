// Class /Script/FortniteGame.FortBowWeaponAnimInstance
// Size: 0x550
class UFortBowWeaponAnimInstance : public UFortAnimInstance
{
	float ChargeBlendSpaceCrouchSpeed; // 0x530 (0x4)
	float ChargePlayRate; // 0x534 (0x4)
	float OutOfAmmoAlpha; // 0x538 (0x4)
	float BowAimYaw; // 0x53c (0x4)
	float BowAimPitch; // 0x540 (0x4)
	struct TEnumAsByte<EFortCustomGender> OwnerGender; // 0x544 (0x1)
	unsigned char bIsBowCharging; // 0x545 (0x1)
	unsigned char bEnterChargingNormalTransition; // 0x545 (0x1)
	unsigned char bEnterChargingFastTransition; // 0x545 (0x1)
	unsigned char bShouldPlayDefaultPose; // 0x545 (0x1)
	unsigned char bIsBowAtMaxCharge; // 0x545 (0x1)
	unsigned char bIsCrouchMoving; // 0x545 (0x1)
	unsigned char padding_546[0xa]; // 0x546 (0xa)
};

