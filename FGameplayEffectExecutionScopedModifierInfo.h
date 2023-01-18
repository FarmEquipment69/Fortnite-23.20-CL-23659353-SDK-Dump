// ScriptStruct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x2a8
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // 0x0 (0x40)
	struct FGameplayTag TransientAggregatorIdentifier; // 0x40 (0x4)
	enum EGameplayEffectScopedModifierAggregatorType AggregatorType; // 0x44 (0x1)
	struct TEnumAsByte<EGameplayModOp> ModifierOp; // 0x45 (0x1)
	unsigned char unreflected_46[0x2]; // 0x46 (0x2) 
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x48 (0x1d8)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x220 (0x1)
	unsigned char unreflected_221[0x7]; // 0x221 (0x7) 
	struct FGameplayTagRequirements SourceTags; // 0x228 (0x40)
	struct FGameplayTagRequirements TargetTags; // 0x268 (0x40)
};

