// Class /Script/SaveTheWorldUI.FortSquadManagementScreenBase
// Size: 0x638
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x10]; // 0x518 (0x10) 
	bool bReadOnlyModeWIFE; // 0x528 (0x1)
	unsigned char unreflected_529[0x7]; // 0x529 (0x7) 
	class UFortSquadStatsWidgetBase* SquadStatsWidget; // 0x530 (0x8)
	class UFortSquadSlotsView* SquadSlotsView; // 0x538 (0x8)
	class UFortSquadSlotDetailsPanel* SelectedSlotDetailsPanel; // 0x540 (0x8)
	class UFortSquadSlotItemPicker* SelectedSlotItemPicker; // 0x548 (0x8)
	struct FDataTableRowHandle InspectInputActionRowHandle; // 0x550 (0x10)
	struct FDataTableRowHandle ManageInputActionRowHandle; // 0x560 (0x10)
	struct FDataTableRowHandle BackInputActionRowHandle; // 0x570 (0x10)
	struct FDataTableRowHandle InventoryInputActionRowHandle; // 0x580 (0x10)
	struct FDataTableRowHandle InventoryCloseInputActionRowHandle; // 0x590 (0x10)
	struct FDataTableRowHandle ClosePickerInputActionRowHandle; // 0x5a0 (0x10)
	struct FDataTableRowHandle SelectPickerSlotActionRowHandle; // 0x5b0 (0x10)
	struct FDataTableRowHandle CyclePickerSortActionRowHandle; // 0x5c0 (0x10)
	struct FDataTableRowHandle PreviousSquadActionRowHandle; // 0x5d0 (0x10)
	struct FDataTableRowHandle NextSquadActionRowHandle; // 0x5e0 (0x10)
	struct FDataTableRowHandle ClearAllActionRowHandle; // 0x5f0 (0x10)
	struct FDataTableRowHandle HelpScreenActionRowHandle; // 0x600 (0x10)
	class UClass* DisableAutoSlottingToClearSquadPromptAction; // 0x610 (0x8)
	unsigned char unreflected_618[0x10]; // 0x618 (0x10) 
	class UFortItemViewContext_SquadSlotsView* ItemViewContextSquadSlotsView; // 0x628 (0x8)
	class UFortItemViewContext_SquadSlotItemPicker* ItemViewContextSquadSlotItemPicker; // 0x630 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetStaticSquadDataBP (Underlying native function: TryGetStaticSquadDataBP 0x75c3618)
	bool TryGetStaticSquadDataBP(struct FHomebaseSquad& OutSquadData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadTeamAttribute (Underlying native function: TryGetSquadTeamAttribute 0x75c352c)
	bool TryGetSquadTeamAttribute(struct FGameplayAttribute& OutGameplayAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadMainAttribute (Underlying native function: TryGetSquadMainAttribute 0x75c3394)
	bool TryGetSquadMainAttribute(struct FGameplayAttribute& OutGameplayAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetAttributeValueFromSquad (Underlying native function: TryGetAttributeValueFromSquad 0x75c2e68)
	bool TryGetAttributeValueFromSquad(float& OutValue, struct FGameplayAttribute& Attribute); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.ShowWarningReadOnlyWIFE (Has no native function)
	void ShowWarningReadOnlyWIFE(bool& Force); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SetupInputHandlers (Underlying native function: SetupInputHandlers 0x7181fa8)
	void SetupInputHandlers(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SetIdOfSquadToManageBP (Underlying native function: SetIdOfSquadToManageBP 0x75c2044)
	void SetIdOfSquadToManageBP(struct FName& SquadId); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectSquadWithOffset (Underlying native function: SelectSquadWithOffset 0x75c14f8)
	void SelectSquadWithOffset(int& Offset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectPreviousSquad (Underlying native function: SelectPreviousSquad 0x75c1460)
	void SelectPreviousSquad(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectNextSquad (Underlying native function: SelectNextSquad 0x75c1448)
	void SelectNextSquad(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.NavigateToSquadSlot (Underlying native function: NavigateToSquadSlot 0x75c0bf0)
	void NavigateToSquadSlot(int& SquadSlotIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.IsScreenWIFE (Underlying native function: IsScreenWIFE 0x75c0878)
	bool IsScreenWIFE(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleViewInAll (Underlying native function: HandleViewInAll 0x75c04b4)
	void HandleViewInAll(int& SquadSlotIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadStateChanged (Has no native function)
	void HandleSquadStateChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerShown (Has no native function)
	void HandleSquadSlotPickerShown(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerHidden (Has no native function)
	void HandleSquadSlotPickerHidden(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleShouldAutoSlotSurvivorSquadsChanged (Underlying native function: HandleShouldAutoSlotSurvivorSquadsChanged 0x7181fa8)
	void HandleShouldAutoSlotSurvivorSquadsChanged(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSelectPickerSlotInputAction (Underlying native function: HandleSelectPickerSlotInputAction 0x75c03dc)
	void HandleSelectPickerSlotInputAction(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePreviousSquadInputAction (Has no native function)
	void HandlePreviousSquadInputAction(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionCommitted (Underlying native function: HandlePickerSelectionCommitted 0x75c01d0)
	void HandlePickerSelectionCommitted(class UFortItem*& CommittedItem); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionChanged (Underlying native function: HandlePickerSelectionChanged 0x75c0150)
	void HandlePickerSelectionChanged(class UFortItem*& SelectedItem); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleOpenSquadSlot (Underlying native function: HandleOpenSquadSlot 0x75c00bc)
	void HandleOpenSquadSlot(int& SquadSlotIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleNextSquadInputAction (Has no native function)
	void HandleNextSquadInputAction(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleManageInputAction (Underlying native function: HandleManageInputAction 0x75bfd00)
	void HandleManageInputAction(); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleInventoryInputAction (Underlying native function: HandleInventoryInputAction 0x75bfc70)
	void HandleInventoryInputAction(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleInspectInputAction (Underlying native function: HandleInspectInputAction 0x75bfc5c)
	void HandleInspectInputAction(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSlotSelected (Underlying native function: HandleDifferentSquadSlotSelected 0x75bfafc)
	void HandleDifferentSquadSlotSelected(int& SquadSlotIndex); // (Native | Protected)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSetBP (Has no native function)
	void HandleDifferentSquadSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleCyclePickerSortInputAction (Underlying native function: HandleCyclePickerSortInputAction 0x75bfae8)
	void HandleCyclePickerSortInputAction(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleClosePickerInputAction (Underlying native function: HandleClosePickerInputAction 0x75bfad4)
	void HandleClosePickerInputAction(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleBackInputAction (Underlying native function: HandleBackInputAction 0x75bf7ac)
	void HandleBackInputAction(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.GetNumUnlockedSquads (Underlying native function: GetNumUnlockedSquads 0x75bf4f8)
	int GetNumUnlockedSquads(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.GetIdOfSquadToManageBP (Underlying native function: GetIdOfSquadToManageBP 0x75bf124)
	struct FName GetIdOfSquadToManageBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.ClearSquad (Underlying native function: ClearSquad 0x75be460)
	void ClearSquad(); // (Final | Native | Public | BlueprintCallable)
};

