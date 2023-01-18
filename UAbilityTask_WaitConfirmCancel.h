// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xa0
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
	struct FMulticastInlineDelegate OnConfirm; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x88 (0x10)
	unsigned char padding_98[0x8]; // 0x98 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel (Underlying native function: WaitConfirmCancel 0x6aeb37c)
	static class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback (Underlying native function: OnLocalConfirmCallback 0x6ae7890)
	void OnLocalConfirmCallback(); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback (Underlying native function: OnLocalCancelCallback 0x6ae787c)
	void OnLocalCancelCallback(); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback (Underlying native function: OnConfirmCallback 0x6ae7378)
	void OnConfirmCallback(); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback (Underlying native function: OnCancelCallback 0x6ae72e4)
	void OnCancelCallback(); // (Final | Native | Public)
};

