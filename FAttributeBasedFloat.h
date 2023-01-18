// ScriptStruct /Script/GameplayAbilities.AttributeBasedFloat
// Size: 0x110
struct FAttributeBasedFloat
{
	struct FScalableFloat Coefficient; // 0x0 (0x28)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x28 (0x28)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x50 (0x28)
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute; // 0x78 (0x40)
	struct FCurveTableRowHandle AttributeCurve; // 0xb8 (0x10)
	enum EAttributeBasedFloatCalculationType AttributeCalculationType; // 0xc8 (0x1)
	enum EGameplayModEvaluationChannel FinalChannel; // 0xc9 (0x1)
	unsigned char unreflected_ca[0x6]; // 0xca (0x6) 
	struct FGameplayTagContainer SourceTagFilter; // 0xd0 (0x20)
	struct FGameplayTagContainer TargetTagFilter; // 0xf0 (0x20)
};

