// Class /Script/FortniteGame.FortWorldMultiItem
// Size: 0x308
class UFortWorldMultiItem : public UFortWorldItem
{
	struct FMulticastInlineDelegate OnItemSwitched; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnItemXPChanged; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnPowerUpPending; // 0x2c0 (0x10)
	struct FTimerHandle* TimeToSwitchHandle; // 0x2d0 (0x8)
	struct FTimerHandle* TimeToEndSwitchHandle; // 0x2d8 (0x8)
	struct FTimerHandle* TimeToRetrySwitchHandle; // 0x2e0 (0x8)
	struct FTimerHandle* TimeToReenableEquipAnim; // 0x2e8 (0x8)
	float TimeOfLastSwitch; // 0x2f0 (0x4)
	unsigned char bWantsToSwitch; // 0x2f4 (0x1)
	unsigned char bTellHasBegun; // 0x2f4 (0x1)
	unsigned char bDisableEquipAnimationThisFrame; // 0x2f4 (0x1)
	unsigned char unreflected_2f5[0x3]; // 0x2f5 (0x3) 
	int CurrentSelectedItemIndex; // 0x2f8 (0x4)
	float CurrentItemXP; // 0x2fc (0x4)
	int PendingPowerUpLevel; // 0x300 (0x4)
	unsigned char padding_304[0x4]; // 0x304 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortWorldMultiItem.StopDisablingEquipAnimation (Underlying native function: StopDisablingEquipAnimation 0x8a93554)
	void StopDisablingEquipAnimation(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortWorldMultiItem.OnOwnerPlayerPawnAbilityEndedWithData (Underlying native function: OnOwnerPlayerPawnAbilityEndedWithData 0x8a933b0)
	void OnOwnerPlayerPawnAbilityEndedWithData(struct FAbilityEndedData& AbilityEndedData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortWorldMultiItem.OnOwnerPlayerPawnAbilityActivated (Underlying native function: OnOwnerPlayerPawnAbilityActivated 0x8a932b0)
	void OnOwnerPlayerPawnAbilityActivated(class UFortGameplayAbility*& GameplayAbility, struct FGameplayTagContainer& AbilityTags); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortWorldMultiItem.IncrementItemXP (Underlying native function: IncrementItemXP 0x8a931d4)
	void IncrementItemXP(float& IncrementAmount); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWorldMultiItem.GetCurrentActiveItemDefinition (Underlying native function: GetCurrentActiveItemDefinition 0x8a92870)
	class UFortItemDefinition* GetCurrentActiveItemDefinition(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

