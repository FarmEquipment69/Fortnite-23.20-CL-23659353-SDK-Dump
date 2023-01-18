// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xb0
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
	struct FMulticastInlineDelegate OnChange; // 0x78 (0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x88 (0x10)
	unsigned char padding_98[0x18]; // 0x98 (0x18)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange (Underlying native function: WaitForGameplayEffectStackChange 0x6aeca64)
	static class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility*& OwningAbility, struct FActiveGameplayEffectHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange (Underlying native function: OnGameplayEffectStackChange 0x6ae743c)
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle*& Handle, int& NewCount, int& OldCount); // (Final | Native | Public)
};

