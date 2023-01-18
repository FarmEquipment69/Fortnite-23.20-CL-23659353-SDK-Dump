// ScriptStruct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x1d8
struct FGameplayEffectModifierMagnitude
{
	enum EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FScalableFloat ScalableFloatMagnitude; // 0x8 (0x28)
	struct FAttributeBasedFloat AttributeBasedMagnitude; // 0x30 (0x110)
	struct FCustomCalculationBasedFloat CustomMagnitude; // 0x140 (0x90)
	struct FSetByCallerFloat* SetByCallerMagnitude; // 0x1d0 (0x8)
};

