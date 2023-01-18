// Class /Script/FortniteGame.FortFirstPersonProceduralAnimInstance
// Size: 0x790
class UFortFirstPersonProceduralAnimInstance : public UFortBaseLayerAnimInstance
{
	unsigned char unreflected_440[0x10]; // 0x440 (0x10) 
	struct FName RightHandName; // 0x450 (0x4)
	struct FName LeftHandName; // 0x454 (0x4)
	struct FName RightShoulderName; // 0x458 (0x4)
	struct FName LeftShoulderName; // 0x45c (0x4)
	struct FVector FPLeftHandTarget; // 0x460 (0x18)
	struct FRotator FPLeftHandRotator; // 0x478 (0x18)
	struct FVector FPLeftShoulderTarget; // 0x490 (0x18)
	struct FRotator FPLeftShoulderRotator; // 0x4a8 (0x18)
	struct FVector FPRightHandTarget; // 0x4c0 (0x18)
	struct FRotator FPRightHandRotator; // 0x4d8 (0x18)
	struct FVector FPRightShoulderTarget; // 0x4f0 (0x18)
	struct FRotator FPRightShoulderRotator; // 0x508 (0x18)
	struct FTransform PreUpdateLeftHand; // 0x520 (0x60)
	struct FTransform PreUpdateRightHand; // 0x580 (0x60)
	struct FTransform PreUpdateLeftShoulder; // 0x5e0 (0x60)
	struct FTransform PreUpdateRightShoulder; // 0x640 (0x60)
	struct FTransform PreUpdateHead; // 0x6a0 (0x60)
	struct FTransform PreUpdateRightHandAttach; // 0x700 (0x60)
	float FPHandIKWeight; // 0x760 (0x4)
	unsigned char unreflected_764[0x4]; // 0x764 (0x4) 
	struct FRotator FPBodyLean; // 0x768 (0x18)
	float FPBodyLeanWeight; // 0x780 (0x4)
	unsigned char padding_784[0xc]; // 0x784 (0xc)
};

