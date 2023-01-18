// Class /Script/FortniteGame.FortGoopAnimInstance
// Size: 0x670
class UFortGoopAnimInstance : public UFortBaseLayerAnimInstance
{
	struct FVector LocalVelocity; // 0x440 (0x18)
	bool bIsInGoop; // 0x458 (0x1)
	unsigned char bIsRelaxedLevel2; // 0x459 (0x1)
	unsigned char unreflected_45a[0x6]; // 0x45a (0x6) 
	struct FFortAnimInput_PlayerAnimAsset CurrentAnimSet; // 0x460 (0x200)
	float ADSToNonADSBlendTime; // 0x660 (0x4)
	struct TEnumAsByte<EFortWeaponCoreAnimation> WeaponCoreAnim; // 0x664 (0x1)
	bool bGoopJumpExecuted; // 0x665 (0x1)
	unsigned char bIsTargeting; // 0x666 (0x1)
	unsigned char padding_667[0x9]; // 0x667 (0x9)
};

