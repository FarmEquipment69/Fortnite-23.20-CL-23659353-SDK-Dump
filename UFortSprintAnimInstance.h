// Class /Script/FortniteGame.FortSprintAnimInstance
// Size: 0x6c0
class UFortSprintAnimInstance : public UFortLocomotionAnimInstance
{
	struct FFortAnimInput_WeaponAdditiveAnimAsset CurrentWeaponAdditiveAnimSet; // 0x668 (0x30)
	class UFortWeaponAdditiveAnimSet* WeaponAdditiveAnimSet; // 0x698 (0x8)
	class UAnimSequence* ConsumableOffsetPose; // 0x6a0 (0x8)
	float SprintYawAngle; // 0x6a8 (0x4)
	float LeanAngle; // 0x6ac (0x4)
	float LeftArmMaskWeight; // 0x6b0 (0x4)
	float LeanAdditiveAlpha; // 0x6b4 (0x4)
	unsigned char bIsDoorBashExit; // 0x6b8 (0x1)
	unsigned char bIsCrouchSprinting; // 0x6b8 (0x1)
	unsigned char bPlayUpperBodyTargeting; // 0x6b8 (0x1)
	unsigned char bIsSurfaceSwimming; // 0x6b8 (0x1)
	unsigned char padding_6b9[0x7]; // 0x6b9 (0x7)
};

