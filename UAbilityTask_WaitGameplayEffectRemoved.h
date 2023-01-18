// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xb8
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
	struct FMulticastInlineDelegate OnRemoved; // 0x78 (0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x88 (0x10)
	unsigned char padding_98[0x20]; // 0x98 (0x20)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved (Underlying native function: WaitForGameplayEffectRemoved 0x6aec958)
	static class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility*& OwningAbility, struct FActiveGameplayEffectHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved (Underlying native function: OnGameplayEffectRemoved 0x6ae738c)
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo); // (Final | Native | Public | HasOutParms)
};

