// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x90
class UAbilityTask_WaitCancel : public UAbilityTask
{
	struct FMulticastInlineDelegate OnCancel; // 0x78 (0x10)
	unsigned char padding_88[0x8]; // 0x88 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.WaitCancel (Underlying native function: WaitCancel 0x6aeb1fc)
	static class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback (Underlying native function: OnLocalCancelCallback 0x6ae7868)
	void OnLocalCancelCallback(); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback (Underlying native function: OnCancelCallback 0x6ae72d0)
	void OnCancelCallback(); // (Final | Native | Public)
};

