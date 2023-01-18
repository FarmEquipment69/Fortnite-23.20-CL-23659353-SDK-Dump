// Class /Script/FortniteGame.FortItemLayerAnimInstance_ChargedWeapon
// Size: 0x460
class UFortItemLayerAnimInstance_ChargedWeapon : public UFortBaseLayerAnimInstance
{
	class UCurveFloat* ChargeSpeedModifierCurve; // 0x440 (0x8)
	class UAnimSequence* WeaponChargeLoop; // 0x448 (0x8)
	float ChargeAlpha; // 0x450 (0x4)
	float ChargeBlendInTime; // 0x454 (0x4)
	bool bWeaponIsCharging; // 0x458 (0x1)
	bool bWeaponIsAtMaxCharge; // 0x459 (0x1)
	unsigned char padding_45a[0x6]; // 0x45a (0x6)
};

