// ScriptStruct /Script/FortniteGame.FortGameplayEffectContainerSpec
// Size: 0xb8
struct FFortGameplayEffectContainerSpec
{
	struct FFortAbilityTargetSelectionList TargetSelection; // 0x0 (0x48)
	struct TArray<struct FGameplayEffectSpecHandle> TargetGameplayEffectSpecs; // 0x48 (0x10)
	struct TArray<struct FGameplayEffectSpecHandle> OwnerGameplayEffectSpecs; // 0x58 (0x10)
	struct FGameplayTagContainer ActivationCues; // 0x68 (0x20)
	struct FGameplayTagContainer ImpactCues; // 0x88 (0x20)
	float ImpactNoiseRange; // 0xa8 (0x4)
	float FlyByNoiseRange; // 0xac (0x4)
	bool bOverrideChargeMagnitude; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x3]; // 0xb1 (0x3) 
	float ChargeMagnitudeOverrideValue; // 0xb4 (0x4)
};

