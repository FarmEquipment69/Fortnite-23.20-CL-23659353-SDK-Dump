// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x120
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
	struct FMulticastInlineDelegate bLocked; // 0x78 (0x10)
	unsigned char unreflected_88[0x88]; // 0x88 (0x88) 
	class UAbilitySystemComponent* ExternalOwner; // 0x110 (0x8)
	unsigned char padding_118[0x8]; // 0x118 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity (Underlying native function: WaitGameplayEffectBlockedByImmunity 0x6aedbfc)
	static class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility*& OwningAbility, struct FGameplayTagRequirements& SourceTagRequirements, struct FGameplayTagRequirements& TargetTagRequirements, class AActor*& OptionalExternalTarget, bool& OnlyTriggerOnce); // (Final | Native | Static | Public | BlueprintCallable)
};

