// Class /Script/SaveTheWorldUI.FortStoreSummary_Legacy
// Size: 0x528
class UFortStoreSummary_Legacy : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x8]; // 0x4e0 (0x8) 
	struct TArray<class UStoreCardObject*> StoreCardObjects; // 0x4e8 (0x10)
	class UCommonTileView* TileView; // 0x4f8 (0x8)
	class UClass* MulchConfirmationModalClass; // 0x500 (0x8)
	unsigned char unreflected_508[0x18]; // 0x508 (0x18) 
	class UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x520 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.ShowMulchConfirmationModal (Underlying native function: ShowMulchConfirmationModal 0x5b474c0)
	void ShowMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.SetIsInChoiceSelectionMode (Underlying native function: SetIsInChoiceSelectionMode 0x5b47360)
	void SetIsInChoiceSelectionMode(bool& InIsInChoiceSelectionMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.SetCards (Underlying native function: SetCards 0x5b472b0)
	void SetCards(struct TArray<struct FCard>& Cards); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelDeactivated (Underlying native function: NotifyPanelDeactivated 0x5b47280)
	void NotifyPanelDeactivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelActivated (Underlying native function: NotifyPanelActivated 0x5b47250)
	void NotifyPanelActivated(); // (Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.MarkDefaultItemsForMulch (Underlying native function: MarkDefaultItemsForMulch 0x5b471a0)
	void MarkDefaultItemsForMulch(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HideMulchConfirmationModal (Underlying native function: HideMulchConfirmationModal 0x5b47170)
	void HideMulchConfirmationModal(); // (Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChangedBP (Has no native function)
	void HandleContextMenuOpenChangedBP(bool& bIsOpen); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChanged (Underlying native function: HandleContextMenuOpenChanged 0x5b46e30)
	void HandleContextMenuOpenChanged(bool& bIsOpen); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.GetIsInChoiceSelectionMode (Underlying native function: GetIsInChoiceSelectionMode 0x5b46dc0)
	bool GetIsInChoiceSelectionMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.FinalizeFavoriteStatus (Underlying native function: FinalizeFavoriteStatus 0x5b46d30)
	void FinalizeFavoriteStatus(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.CloseSummaryScreen (Has no native function)
	void CloseSummaryScreen(); // (Event | Public | BlueprintEvent)
};

