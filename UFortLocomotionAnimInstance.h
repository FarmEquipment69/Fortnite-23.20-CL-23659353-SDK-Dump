// Class /Script/FortniteGame.FortLocomotionAnimInstance
// Size: 0x670
class UFortLocomotionAnimInstance : public UFortBaseLayerAnimInstance
{
	struct FCachedAnimStateArray IdleStatesData; // 0x440 (0x18)
	struct FFortAnimInput_PlayerAnimAsset CurrentAnimSet; // 0x458 (0x200)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnim; // 0x658 (0x1)
	struct TEnumAsByte<EFortCustomGender> Gender; // 0x659 (0x1)
	unsigned char unreflected_65a[0x2]; // 0x65a (0x2) 
	float SpeedAdjustedPlayrate; // 0x65c (0x4)
	unsigned char bIsCrouching; // 0x660 (0x1)
	unsigned char bIsFemale; // 0x660 (0x1)
	unsigned char padding_661[0xf]; // 0x661 (0xf)
};

