// ScriptStruct /Script/MantisRuntime.FortMantisTechniqueData
// Size: 0x100
struct FFortMantisTechniqueData
{
	struct FName Name; // 0x0 (0x4)
	bool bStartsSequence; // 0x4 (0x1)
	bool bEndsSequence; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	float InputWindowDelay; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UAnimMontage* Montage; // 0x10 (0x8)
	bool bUseDynamicMontageStartSection; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	struct FName MontageStartSection; // 0x1c (0x4)
	struct FGameplayTagContainer ActivationGameplayCues; // 0x20 (0x20)
	bool bUseRootMotion; // 0x40 (0x1)
	enum EFortMantisTechniqueActivationInputType ActivationInputType; // 0x41 (0x1)
	enum EFortMantisTechniqueActivationTimingType ActivationTimingType; // 0x42 (0x1)
	unsigned char unreflected_43[0x1]; // 0x43 (0x1) 
	float MinInputHoldDuration; // 0x44 (0x4)
	float MaxInputHoldDuration; // 0x48 (0x4)
	int MaxConsecutiveBranchesToSelf; // 0x4c (0x4)
	struct FGameplayTagQuery ActivationTagQuery; // 0x50 (0x48)
	struct FGameplayTagQuery OngoingTagQuery; // 0x98 (0x48)
	struct FGameplayTag ApplicationTag; // 0xe0 (0x4)
	struct FGameplayTag ActivationApplicationTag; // 0xe4 (0x4)
	struct FFortMantisTechniqueCharacterSettings CharacterSettings; // 0xe8 (0x18)
};

