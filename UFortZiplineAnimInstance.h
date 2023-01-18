// Class /Script/FortniteGame.FortZiplineAnimInstance
// Size: 0x6a0
class UFortZiplineAnimInstance : public UFortBaseLayerAnimInstance
{
	float LocalVelocityYawAngle; // 0x440 (0x4)
	unsigned char unreflected_444[0x4]; // 0x444 (0x4) 
	struct FFortAnimInput_Zipline ZiplineInput; // 0x448 (0x38)
	struct FFortAnimInput_CommonWeapon CommonWeaponInput; // 0x480 (0x2)
	unsigned char unreflected_482[0x6]; // 0x482 (0x6) 
	struct FFortAnimInput_PlayerAnimAsset CurrentAnimSet; // 0x488 (0x200)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnim; // 0x688 (0x1)
	unsigned char unreflected_689[0x3]; // 0x689 (0x3) 
	float ADSToNonADSBlendTime; // 0x68c (0x4)
	unsigned char bIsTargeting; // 0x690 (0x1)
	bool bIsRelaxedLevel2; // 0x691 (0x1)
	unsigned char padding_692[0xe]; // 0x692 (0xe)
};

