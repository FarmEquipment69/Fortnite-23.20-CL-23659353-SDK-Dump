// ScriptStruct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// Size: 0x40
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute AttributeToCapture; // 0x0 (0x38)
	enum EGameplayEffectAttributeCaptureSource AttributeSource; // 0x38 (0x1)
	bool bSnapshot; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};

