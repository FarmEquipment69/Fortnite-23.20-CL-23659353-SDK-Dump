// Class /Script/FortniteGame.FortAbilityTask_TargetSelectionContinuous
// Size: 0xa0
class UFortAbilityTask_TargetSelectionContinuous : public UAbilityTask
{
	struct FMulticastInlineDelegate Targeted; // 0x78 (0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x88 (0x10)
	unsigned char padding_98[0x8]; // 0x98 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_TargetSelectionContinuous.DoTargetSelectionContinuous (Underlying native function: DoTargetSelectionContinuous 0x81e86f8)
	static class UFortAbilityTask_TargetSelectionContinuous* DoTargetSelectionContinuous(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FGameplayTag& ApplicationTag); // (Final | Native | Static | Public | BlueprintCallable)
};

