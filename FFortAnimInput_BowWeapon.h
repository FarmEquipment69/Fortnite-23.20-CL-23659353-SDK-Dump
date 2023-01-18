// ScriptStruct /Script/FortniteGame.FortAnimInput_BowWeapon
// Size: 0xe0
struct FFortAnimInput_BowWeapon
{
	class UCurveFloat* BowChargeSpeedModifierCurve; // 0x0 (0x8)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform RightHandIKExtraOffset; // 0x10 (0x60)
	struct FVector RightHandIKOffsetLocation; // 0x70 (0x18)
	struct FRotator RightHandIKOffsetRotation; // 0x88 (0x18)
	struct FName WeaponAttachmentSocketName; // 0xa0 (0x4)
	struct FName ArrowNockSocketName; // 0xa4 (0x4)
	float BowAimYaw; // 0xa8 (0x4)
	float BowAimPitch; // 0xac (0x4)
	float ChargeBlendSpaceCrouchSpeed; // 0xb0 (0x4)
	float ChargeBlendSpaceCrouchSpeedInterpRate; // 0xb4 (0x4)
	float ChargeBlendSpaceCrouchSpeedTarget; // 0xb8 (0x4)
	float ChargePlayRate; // 0xbc (0x4)
	float ChargeBlendInTime; // 0xc0 (0x4)
	float FastChargeThreshold; // 0xc4 (0x4)
	float ChargeBlendInTimeDefault; // 0xc8 (0x4)
	float ChargeBlendInTimeFastCharge; // 0xcc (0x4)
	float WeaponRaisedAdditiveLeanMultiplier; // 0xd0 (0x4)
	unsigned char bIsBowEquipped; // 0xd4 (0x1)
	unsigned char bIsBowCharging; // 0xd4 (0x1)
	unsigned char bIsBowAtMaxCharge; // 0xd4 (0x1)
	unsigned char bEnableRightHandIK; // 0xd4 (0x1)
	unsigned char padding_d5[0xb]; // 0xd5 (0xb)
};

