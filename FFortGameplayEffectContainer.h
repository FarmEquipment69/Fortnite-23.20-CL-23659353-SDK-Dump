// ScriptStruct /Script/FortniteGame.FortGameplayEffectContainer
// Size: 0xb8
struct FFortGameplayEffectContainer
{
	struct FGameplayTag ApplicationTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FFortAbilityTargetSelectionList TargetSelection; // 0x8 (0x48)
	struct TArray<class UClass*> TargetGameplayEffectClasses; // 0x50 (0x10)
	struct TArray<class UClass*> OwnerGameplayEffectClasses; // 0x60 (0x10)
	struct FGameplayTagContainer ActivationCues; // 0x70 (0x20)
	struct FGameplayTagContainer ImpactCues; // 0x90 (0x20)
	bool bUseCalculationInTooltips; // 0xb0 (0x1)
	bool bOverrideChargeMagnitude; // 0xb1 (0x1)
	unsigned char unreflected_b2[0x2]; // 0xb2 (0x2) 
	float ChargeMagnitudeOverrideValue; // 0xb4 (0x4)
};

