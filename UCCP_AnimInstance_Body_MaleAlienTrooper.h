// Class /Script/FortniteGame.CCP_AnimInstance_Body_MaleAlienTrooper
// Size: 0x790
class UCCP_AnimInstance_Body_MaleAlienTrooper : public UCustomCharacterPartAnimInstance
{
	bool bIsRifleOut; // 0x6e8 (0x1)
	bool bIsPistolOut; // 0x6e9 (0x1)
	unsigned char unreflected_6ea[0x2]; // 0x6ea (0x2) 
	float PistolAimUpAlpha; // 0x6ec (0x4)
	float PistolAimDownAlpha; // 0x6f0 (0x4)
	float PistolAimMidAlpha; // 0x6f4 (0x4)
	float RifleAimUpAlpha; // 0x6f8 (0x4)
	float RifleAimDownAlpha; // 0x6fc (0x4)
	float IsCustomEmotePlayingAlpha; // 0x700 (0x4)
	unsigned char unreflected_704[0x4]; // 0x704 (0x4) 
	struct FVector GravityOverride; // 0x708 (0x18)
	struct FMapRangeClamped_Ranges PistolAimUpRanges; // 0x720 (0x10)
	struct FMapRangeClamped_Ranges PistolAimDownRanges; // 0x730 (0x10)
	struct FMapRangeClamped_Ranges PistolAimMidLowBoundRanges; // 0x740 (0x10)
	struct FMapRangeClamped_Ranges PistolAimMidHighBoundRanges; // 0x750 (0x10)
	struct FMapRangeClamped_Ranges RifleAimUpRanges; // 0x760 (0x10)
	struct FMapRangeClamped_Ranges RifleAimDownRanges; // 0x770 (0x10)
	struct TArray<struct TWeakObjectPtr<class UAnimMontage>> CustomEmoteMontageList; // 0x780 (0x10)
};

