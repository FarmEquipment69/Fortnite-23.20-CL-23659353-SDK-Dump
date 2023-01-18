// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1b0
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
	unsigned char unreflected_78[0x128]; // 0x78 (0x128) 
	class UAbilitySystemComponent* ExternalOwner; // 0x1a0 (0x8)
	unsigned char padding_1a8[0x8]; // 0x1a8 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback (Underlying native function: OnApplyGameplayEffectCallback 0x6ae7170)
	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent*& Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle*& ActiveHandle); // (Final | Native | Public | HasOutParms)
};

