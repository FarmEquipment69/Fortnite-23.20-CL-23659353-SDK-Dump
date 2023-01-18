// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xe8
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
	struct FMulticastInlineDelegate OnCommit; // 0x78 (0x10)
	unsigned char padding_88[0x60]; // 0x88 (0x60)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query (Underlying native function: WaitForAbilityCommit_Query 0x6aebb6c)
	static class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommitQuery(class UGameplayAbility*& OwningAbility, struct FGameplayTagQuery& Query, bool& TriggerOnce); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit (Underlying native function: WaitForAbilityCommit 0x6aeba1c)
	static class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility*& OwningAbility, struct FGameplayTag& WithTag, struct FGameplayTag& WithoutTage, bool& TriggerOnce); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit (Underlying native function: OnAbilityCommit 0x6ae70f0)
	void OnAbilityCommit(class UGameplayAbility*& ActivatedAbility); // (Final | Native | Public)
};

