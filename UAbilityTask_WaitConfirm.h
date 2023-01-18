// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0x98
class UAbilityTask_WaitConfirm : public UAbilityTask
{
	struct FMulticastInlineDelegate OnConfirm; // 0x78 (0x10)
	unsigned char padding_88[0x10]; // 0x88 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm (Underlying native function: WaitConfirm 0x6aeb2bc)
	static class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback (Underlying native function: OnConfirmCallback 0x6ae72f8)
	void OnConfirmCallback(class UGameplayAbility*& InAbility); // (Final | Native | Public)
};

