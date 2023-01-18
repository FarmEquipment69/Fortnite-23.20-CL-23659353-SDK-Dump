// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0x98
class UAbilityTask_WaitInputPress : public UAbilityTask
{
	struct FMulticastInlineDelegate OnPress; // 0x78 (0x10)
	unsigned char padding_88[0x10]; // 0x88 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress (Underlying native function: WaitInputPress 0x6aee7a4)
	static class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility*& OwningAbility, bool& bTestAlreadyPressed); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback (Underlying native function: OnPressCallback 0x6ae7b98)
	void OnPressCallback(); // (Final | Native | Public)
};

