// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1d0
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
	struct FMulticastInlineDelegate OnApplied; // 0x1b0 (0x10)
	unsigned char padding_1c0[0x10]; // 0x1c0 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query (Underlying native function: WaitGameplayEffectAppliedToTarget_Query 0x6aed888)
	static class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTargetQuery(class UGameplayAbility*& OwningAbility, struct FGameplayTargetDataFilterHandle& SourceFilter, struct FGameplayTagQuery& SourceTagQuery, struct FGameplayTagQuery& TargetTagQuery, bool& TriggerOnce, class AActor*& OptionalExternalOwner, bool& ListenForPeriodicEffect); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget (Underlying native function: WaitGameplayEffectAppliedToTarget 0x6aed57c)
	static class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility*& OwningAbility, struct FGameplayTargetDataFilterHandle& TargetFilter, struct FGameplayTagRequirements& SourceTagRequirements, struct FGameplayTagRequirements& TargetTagRequirements, bool& TriggerOnce, class AActor*& OptionalExternalOwner, bool& ListenForPeriodicEffects); // (Final | Native | Static | Public | BlueprintCallable)
};

