// ScriptStruct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// Size: 0x28
struct FGameplayEffectAttributeCaptureSpecContainer
{
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes; // 0x0 (0x10)
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes; // 0x10 (0x10)
	bool bHasNonSnapshottedAttributes; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

