// ScriptStruct /Script/GameplayAbilities.GameplayModifierInfo
// Size: 0x2c8
struct FGameplayModifierInfo
{
	struct FGameplayAttribute Attribute; // 0x0 (0x38)
	struct TEnumAsByte<EGameplayModOp> ModifierOp; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FScalableFloat Magnitude; // 0x40 (0x28)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x68 (0x1d8)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x240 (0x1)
	unsigned char unreflected_241[0x7]; // 0x241 (0x7) 
	struct FGameplayTagRequirements SourceTags; // 0x248 (0x40)
	struct FGameplayTagRequirements TargetTags; // 0x288 (0x40)
};

