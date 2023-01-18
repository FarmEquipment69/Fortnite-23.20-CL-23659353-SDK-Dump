// ScriptStruct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
// Size: 0x478
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{
	unsigned char unreflected_108[0x28]; // 0x108 (0x28) 
	struct TArray<struct FActiveGameplayEffect> GameplayEffectsInternal; // 0x130 (0x10)
	unsigned char unreflected_140[0x310]; // 0x140 (0x310) 
	struct TArray<class UGameplayEffect*> ApplicationImmunityQueryEffects; // 0x450 (0x10)
	unsigned char padding_460[0x18]; // 0x460 (0x18)
};

