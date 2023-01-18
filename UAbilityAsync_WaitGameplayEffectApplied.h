// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
// Size: 0xf8
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{
	struct FMulticastInlineDelegate OnApplied; // 0x38 (0x10)
	unsigned char padding_48[0xb0]; // 0x48 (0xb0)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor (Underlying native function: WaitGameplayEffectAppliedToActor 0x6aecc30)
	static class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor*& TargetActor, struct FGameplayTargetDataFilterHandle& SourceFilter, struct FGameplayTagRequirements& SourceTagRequirements, struct FGameplayTagRequirements& TargetTagRequirements, bool& TriggerOnce, bool& ListenForPeriodicEffect); // (Final | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature (Has no native function)
	void OnAppliedDelegateDelegateSignature(class AActor*& Source, struct FGameplayEffectSpecHandle& SpecHandle, struct FActiveGameplayEffectHandle*& ActiveHandle); // (MulticastDelegate | Public | Delegate)
};

