// Class /Script/GameplayAbilities.AbilityTask_Repeat
// Size: 0xb0
class UAbilityTask_Repeat : public UAbilityTask
{
	struct FMulticastInlineDelegate OnPerformAction; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x88 (0x10)
	unsigned char padding_98[0x18]; // 0x98 (0x18)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_Repeat.RepeatAction (Underlying native function: RepeatAction 0x6ae83f8)
	static class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility*& OwningAbility, float& TimeBetweenActions, int& TotalActionCount); // (Final | Native | Static | Public | BlueprintCallable)
};

