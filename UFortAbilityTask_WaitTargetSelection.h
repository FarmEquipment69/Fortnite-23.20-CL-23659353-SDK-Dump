// Class /Script/FortniteGame.FortAbilityTask_WaitTargetSelection
// Size: 0xb0
class UFortAbilityTask_WaitTargetSelection : public UAbilityTask
{
	struct FMulticastInlineDelegate Targeted; // 0x78 (0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x88 (0x10)
	struct TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType; // 0x98 (0x1)
	bool bForceTargetingOnServer; // 0x99 (0x1)
	unsigned char unreflected_9a[0x2]; // 0x9a (0x2) 
	struct FGameplayTag InstantTargetTag; // 0x9c (0x4)
	unsigned char padding_a0[0x10]; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_WaitTargetSelection.WaitTargetSelection (Underlying native function: WaitTargetSelection 0x81e9ccc)
	static class UFortAbilityTask_WaitTargetSelection* WaitTargetSelection(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FGameplayTag& InApplicationTag, bool& bForceTargetingOnServer); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_WaitTargetSelection.OnTargetDataReadyCallback (Underlying native function: OnTargetDataReadyCallback 0x81e8ec8)
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAbilityTask_WaitTargetSelection.OnTargetDataCancelledCallback (Underlying native function: OnTargetDataCancelledCallback 0x81e8dac)
	void OnTargetDataCancelledCallback(); // (Final | Native | Public)
};

