// ScriptStruct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
// Size: 0x38
struct FGameplayAbilityRepAnimMontage
{
	class UAnimMontage* AnimMontage; // 0x0 (0x8)
	float PlayRate; // 0x8 (0x4)
	float Position; // 0xc (0x4)
	float BlendTime; // 0x10 (0x4)
	unsigned char NextSectionID; // 0x14 (0x1)
	unsigned char PlayInstanceId; // 0x15 (0x1)
	unsigned char bRepPosition; // 0x16 (0x1)
	unsigned char IsStopped; // 0x16 (0x1)
	unsigned char SkipPositionCorrection; // 0x16 (0x1)
	unsigned char bSkipPlayRate; // 0x16 (0x1)
	unsigned char unreflected_17[0x1]; // 0x17 (0x1) 
	struct FPredictionKey PredictionKey; // 0x18 (0x18)
	unsigned char SectionIdToPlay; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

