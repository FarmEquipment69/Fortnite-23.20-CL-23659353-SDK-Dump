// ScriptStruct /Script/GameplayAbilities.GameplayAbilityActivationInfo
// Size: 0x20
struct FGameplayAbilityActivationInfo
{
	struct TEnumAsByte<EGameplayAbilityActivationMode> ActivationMode; // 0x0 (0x1)
	unsigned char bCanBeEndedByOtherInstance; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct FPredictionKey PredictionKeyWhenActivated; // 0x8 (0x18)
};

