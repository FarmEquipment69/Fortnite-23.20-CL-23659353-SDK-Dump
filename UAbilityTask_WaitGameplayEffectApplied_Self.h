// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1d0
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
	struct FMulticastInlineDelegate OnApplied; // 0x1b0 (0x10)
	unsigned char padding_1c0[0x10]; // 0x1c0 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query (Underlying native function: WaitGameplayEffectAppliedToSelf_Query 0x6aed208)
	static class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelfQuery(class UGameplayAbility*& OwningAbility, struct FGameplayTargetDataFilterHandle& SourceFilter, struct FGameplayTagQuery& SourceTagQuery, struct FGameplayTagQuery& TargetTagQuery, bool& TriggerOnce, class AActor*& OptionalExternalOwner, bool& ListenForPeriodicEffect); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf (Underlying native function: WaitGameplayEffectAppliedToSelf 0x6aecefc)
	static class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility*& OwningAbility, struct FGameplayTargetDataFilterHandle& SourceFilter, struct FGameplayTagRequirements& SourceTagRequirements, struct FGameplayTagRequirements& TargetTagRequirements, bool& TriggerOnce, class AActor*& OptionalExternalOwner, bool& ListenForPeriodicEffect); // (Final | Native | Static | Public | BlueprintCallable)
};

