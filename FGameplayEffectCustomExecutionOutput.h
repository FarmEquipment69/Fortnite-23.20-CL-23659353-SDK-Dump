// ScriptStruct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
// Size: 0x18
struct FGameplayEffectCustomExecutionOutput
{
	struct TArray<struct FGameplayModifierEvaluatedData> OutputModifiers; // 0x0 (0x10)
	unsigned char bTriggerConditionalGameplayEffects; // 0x10 (0x1)
	unsigned char bHandledStackCountManually; // 0x10 (0x1)
	unsigned char bHandledGameplayCuesManually; // 0x10 (0x1)
	unsigned char padding_11[0x7]; // 0x11 (0x7)
};

