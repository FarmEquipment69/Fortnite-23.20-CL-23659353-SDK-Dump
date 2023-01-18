// Class /Script/FortniteGame.FortAbilityTask_CommitAccountCosts
// Size: 0xc0
class UFortAbilityTask_CommitAccountCosts : public UAbilityTask
{
	struct FMulticastInlineDelegate OnCommitted; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x88 (0x10)
	bool bWasCancellable; // 0x98 (0x1)
	bool bRequestPending; // 0x99 (0x1)
	bool bCommittedLocally; // 0x9a (0x1)
	unsigned char unreflected_9b[0x5]; // 0x9b (0x5) 
	struct FString PlayerName; // 0xa0 (0x10)
	struct FString AbilityName; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_CommitAccountCosts.CommitAccountCosts (Underlying native function: CommitAccountCosts 0x813f6cc)
	static class UFortAbilityTask_CommitAccountCosts* CommitAccountCosts(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)
};

