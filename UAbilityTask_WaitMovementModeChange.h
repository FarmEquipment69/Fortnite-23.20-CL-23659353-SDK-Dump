// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0x98
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
	struct FMulticastInlineDelegate OnChange; // 0x78 (0x10)
	unsigned char padding_88[0x10]; // 0x88 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange (Underlying native function: OnMovementModeChange 0x6ae7a48)
	void OnMovementModeChange(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange (Underlying native function: CreateWaitMovementModeChange 0x6ade62c)
	static class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility*& OwningAbility, struct TEnumAsByte<EMovementMode>& NewMode); // (Final | Native | Static | Public | BlueprintCallable)
};

