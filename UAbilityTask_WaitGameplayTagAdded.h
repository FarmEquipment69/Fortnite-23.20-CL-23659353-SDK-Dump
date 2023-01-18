// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xa8
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
	struct FMulticastInlineDelegate Added; // 0x98 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd (Underlying native function: WaitGameplayTagAdd 0x6aee018)
	static class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility*& OwningAbility, struct FGameplayTag& tag, class AActor*& InOptionalExternalTarget, bool& OnlyTriggerOnce); // (Final | Native | Static | Public | BlueprintCallable)
};

