// Class /Script/SaveTheWorldUI.FortStoreSummary
// Size: 0x528
class UFortStoreSummary : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x8]; // 0x4e0 (0x8) 
	struct TArray<class UStoreCardObject*> StoreCardObjects; // 0x4e8 (0x10)
	class UCommonTileView* TileView; // 0x4f8 (0x8)
	class UClass* MulchConfirmationModalClass; // 0x500 (0x8)
	unsigned char unreflected_508[0x18]; // 0x508 (0x18) 
	class UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x520 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortStoreSummary.ShowMulchConfirmationModal (Underlying native function: ShowMulchConfirmationModal 0x759b154)
	void ShowMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.SetIsInChoiceSelectionMode (Underlying native function: SetIsInChoiceSelectionMode 0x759a8f8)
	void SetIsInChoiceSelectionMode(bool& InIsInChoiceSelectionMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.SetCards (Underlying native function: SetCards 0x759a0a8)
	void SetCards(struct TArray<struct FCard>& Cards); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.NotifyPanelDeactivated (Underlying native function: NotifyPanelDeactivated 0x75995e0)
	void NotifyPanelDeactivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.NotifyPanelActivated (Underlying native function: NotifyPanelActivated 0x75995a8)
	void NotifyPanelActivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.MarkDefaultItemsForMulch (Underlying native function: MarkDefaultItemsForMulch 0x7599564)
	void MarkDefaultItemsForMulch(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.HideMulchConfirmationModal (Underlying native function: HideMulchConfirmationModal 0x7598cc4)
	void HideMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChangedBP (Has no native function)
	void HandleContextMenuOpenChangedBP(bool& bIsOpen); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChanged (Underlying native function: HandleContextMenuOpenChanged 0x7597e20)
	void HandleContextMenuOpenChanged(bool& bIsOpen); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.GetIsInChoiceSelectionMode (Underlying native function: GetIsInChoiceSelectionMode 0x7596c60)
	bool GetIsInChoiceSelectionMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.FinalizeFavoriteStatus (Underlying native function: FinalizeFavoriteStatus 0x7596124)
	void FinalizeFavoriteStatus(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary.CloseSummaryScreen (Has no native function)
	void CloseSummaryScreen(); // (Event | Public | BlueprintEvent)
};

