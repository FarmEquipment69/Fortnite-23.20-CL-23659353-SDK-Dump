// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xb0
class UAbilityTask_StartAbilityState : public UAbilityTask
{
	struct FMulticastInlineDelegate OnStateEnded; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnStateInterrupted; // 0x88 (0x10)
	unsigned char padding_98[0x18]; // 0x98 (0x18)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState (Underlying native function: StartAbilityState 0x6aea3d4)
	static class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility*& OwningAbility, struct FName& StateName, bool& bEndCurrentState); // (Final | Native | Static | Public | BlueprintCallable)
};

