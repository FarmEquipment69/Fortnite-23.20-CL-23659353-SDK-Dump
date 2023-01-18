// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x90
class UAbilityTask_WaitDelay : public UAbilityTask
{
	struct FMulticastInlineDelegate OnFinish; // 0x78 (0x10)
	unsigned char padding_88[0x8]; // 0x88 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitDelay.WaitDelay (Underlying native function: WaitDelay 0x6aeb43c)
	static class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility*& OwningAbility, float& Time); // (Final | Native | Static | Public | BlueprintCallable)
};

