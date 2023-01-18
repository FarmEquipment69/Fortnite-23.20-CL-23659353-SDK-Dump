// Class /Script/FortniteGame.CCP_AnimInstance_FaceAcc_JourneyMentor
// Size: 0x740
class UCCP_AnimInstance_FaceAcc_JourneyMentor : public UCustomCharacterPartAnimInstance
{
	bool bIsWearingBackpack; // 0x6e8 (0x1)
	bool bIsWearingBackpackAndNotPlayingEmote; // 0x6e9 (0x1)
	unsigned char unreflected_6ea[0x2]; // 0x6ea (0x2) 
	float HeadAlpha; // 0x6ec (0x4)
	float UpperArmLRotUpAlpha; // 0x6f0 (0x4)
	float TransformBackBraidAlpha; // 0x6f4 (0x4)
	float IsCrouchMovingAlpha; // 0x6f8 (0x4)
	float IsSkyDivingAlpha; // 0x6fc (0x4)
	struct FMapRangeClamped_Ranges HeadAlphaRanges; // 0x700 (0x10)
	struct FMapRangeClamped_Ranges UpperArmLRotUpAlphaRanges; // 0x710 (0x10)
	struct FName HeadAlphaBoneName; // 0x720 (0x4)
	struct FName HeadAlphaBaseName; // 0x724 (0x4)
	struct FName UpperArmLRotUpAlphaBoneName; // 0x728 (0x4)
	struct FName UpperArmLRotUpAlphaBaseName; // 0x72c (0x4)
	float TransformBackBraidAlphaSpeed; // 0x730 (0x4)
	float LongBackblingThreshold; // 0x734 (0x4)
	unsigned char padding_738[0x8]; // 0x738 (0x8)
};

