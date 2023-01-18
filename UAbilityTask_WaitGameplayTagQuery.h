// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery
// Size: 0x158
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask
{
	unsigned char unreflected_78[0xc0]; // 0x78 (0xc0) 
	struct FMulticastInlineDelegate Triggered; // 0x138 (0x10)
	class UAbilitySystemComponent* OptionalExternalTarget; // 0x148 (0x8)
	unsigned char padding_150[0x8]; // 0x150 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery (Underlying native function: WaitGameplayTagQuery 0x6aee1e0)
	static class UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(class UGameplayAbility*& OwningAbility, struct FGameplayTagQuery& TagQuery, class AActor*& InOptionalExternalTarget, enum EWaitGameplayTagQueryTriggerCondition& TriggerCondition, bool& bOnlyTriggerOnce); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags (Underlying native function: UpdateTargetTags 0x6aeaec4)
	void UpdateTargetTags(struct FGameplayTag& tag, int& NewCount); // (Final | Native | Protected)
};

