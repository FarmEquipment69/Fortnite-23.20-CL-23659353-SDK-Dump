// Class /Script/MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance
// Size: 0x370
class UMusterCoreWeaponsAnimInstance : public UAnimInstance
{
	class AFortWeapon* OwningWeapon; // 0x348 (0x8)
	bool bIsShotFired; // 0x350 (0x1)
	unsigned char unreflected_351[0x3]; // 0x351 (0x3) 
	int LocalAmmoCount; // 0x354 (0x4)
	float CylinderMaskAlpha; // 0x358 (0x4)
	bool bIsAmmoCountTwo; // 0x35c (0x1)
	bool bIsAmmoCountOne; // 0x35d (0x1)
	bool bStateRuleFromFullToTwoAmmo; // 0x35e (0x1)
	bool bStateRuleFromTwoToOneAmmo; // 0x35f (0x1)
	bool bStateRuleFromOneToZero; // 0x360 (0x1)
	unsigned char padding_361[0xf]; // 0x361 (0xf)
};

