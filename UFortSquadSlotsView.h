// Class /Script/SaveTheWorldUI.FortSquadSlotsView
// Size: 0x388
class UFortSquadSlotsView : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	struct FMulticastInlineDelegate OnDifferentSquadSlotSelectedEvent; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnRequestOpenSquadSlotEvent; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnRequestViewInAllEvent; // 0x2c0 (0x10)
	bool bReadOnlyModeWIFE; // 0x2d0 (0x1)
	unsigned char unreflected_2d1[0x3]; // 0x2d1 (0x3) 
	int IndexOfSelectedSquadSlot; // 0x2d4 (0x4)
	bool bSlotButtonsRequireSelection; // 0x2d8 (0x1)
	bool bInPreviewMode; // 0x2d9 (0x1)
	unsigned char unreflected_2da[0x6]; // 0x2da (0x6) 
	struct TMap<enum ESquadSlotType, struct FSquadSlotSortTypes> SquadSlotSortTypesMap; // 0x2e0 (0x50)
	class UClass* DisableAutoSlottingToOpenSquadSlotPromptAction; // 0x330 (0x8)
	class UFortCommittableButtonGroup* SquadSlotButtonGroup; // 0x338 (0x8)
	unsigned char unreflected_340[0x30]; // 0x340 (0x30) 
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0x370 (0x10)
	unsigned char padding_380[0x8]; // 0x380 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.TryGetStaticSquadDataBP (Underlying native function: TryGetStaticSquadDataBP 0x75c37b4)
	bool TryGetStaticSquadDataBP(struct FHomebaseSquad& OutSquadData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.TryGetSelectedSquadSlotSortTypes (Underlying native function: TryGetSelectedSquadSlotSortTypes 0x75c32e8)
	bool TryGetSelectedSquadSlotSortTypes(struct FSquadSlotSortTypes& OutSlotSortTypes); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetIsSelectionLocked (Underlying native function: SetIsSelectionLocked 0x75c2564)
	void SetIsSelectionLocked(bool& ShouldSelectionBeLocked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetInPreviewMode (Underlying native function: SetInPreviewMode 0x75c2284)
	void SetInPreviewMode(bool& bPreview); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetIdOfSquadToManageBP (Underlying native function: SetIdOfSquadToManageBP 0x75c2164)
	void SetIdOfSquadToManageBP(struct FName& SquadId); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SelectSlot (Underlying native function: SelectSlot 0x75c1478)
	void SelectSlot(int& SquadSlotIndex); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/SaveTheWorldUI.FortSquadSlotsView.OnDifferentSquadSlotSelected__DelegateSignature (Has no native function)
	void OnDifferentSquadSlotSelectedDelegateSignature(int& SquadSlotIndex); // (MulticastDelegate | Public | Delegate)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleSelectedButtonChanged (Underlying native function: HandleSelectedButtonChanged 0x75c03f0)
	void HandleSelectedButtonChanged(class UCommonButtonLegacy*& SelectedButton, int& ButtonIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleRequestViewInAll (Underlying native function: HandleRequestViewInAll 0x75c0350)
	void HandleRequestViewInAll(int& SquadSlotIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleRequestOpenSquadSlot (Underlying native function: HandleRequestOpenSquadSlot 0x75c02d0)
	void HandleRequestOpenSquadSlot(int& SquadSlotIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleHoveredButtonChanged (Underlying native function: HandleHoveredButtonChanged 0x75bfb94)
	void HandleHoveredButtonChanged(class UCommonButtonLegacy*& HoveredButton, int& ButtonIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleButtonDoubleClicked (Underlying native function: HandleButtonDoubleClicked 0x75bf9c4)
	void HandleButtonDoubleClicked(class UCommonButtonLegacy*& CommittedButton, int& ButtonIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleButtonClicked (Underlying native function: HandleButtonClicked 0x75bf848)
	void HandleButtonClicked(class UCommonButtonLegacy*& CommittedButton, int& ButtonIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.GetIndexOfSelectedSquadSlot (Underlying native function: GetIndexOfSelectedSquadSlot 0x7349664)
	int GetIndexOfSelectedSquadSlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.GetIdOfSquadToManageBP (Underlying native function: GetIdOfSquadToManageBP 0x75bf154)
	struct FName GetIdOfSquadToManageBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.CreateAndAddSquadSlotButton (Has no native function)
	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int& SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget*& OutSquadSlotButtonHost); // (Event | Protected | HasOutParms | BlueprintEvent)
};

