// ScriptStruct /Script/FortniteGame.FortGameplayAbilityMontageInfo
// Size: 0x58
struct FFortGameplayAbilityMontageInfo
{
	class UAnimMontage* MontageToPlay; // 0x0 (0x8)
	float AnimPlayRate; // 0x8 (0x4)
	float AnimRootMotionTranslationScale; // 0xc (0x4)
	enum EFortGameplayAbilityMontageSectionToPlay MontageSectionToPlay; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FName OverrideSection; // 0x14 (0x4)
	bool bPlayRandomSection; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct TArray<struct FFortCharacterPartMontageInfo> CharacterPartMontages; // 0x20 (0x10)
	unsigned char padding_30[0x28]; // 0x30 (0x28)
};

