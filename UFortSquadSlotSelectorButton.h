// Class /Script/SaveTheWorldUI.FortSquadSlotSelectorButton
// Size: 0x14b0
class UFortSquadSlotSelectorButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x20]; // 0x1430 (0x20) 
	struct FMulticastInlineDelegate OnRequestOpenSquadSlotEvent; // 0x1450 (0x10)
	struct FMulticastInlineDelegate OnRequestViewInAllEvent; // 0x1460 (0x10)
	class UFortSquadSlotWidget* SquadSlotWidget; // 0x1470 (0x8)
	class UMenuAnchor* PopupMenuAnchor; // 0x1478 (0x8)
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0x1480 (0x10)
	unsigned char padding_1490[0x20]; // 0x1490 (0x20)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.ViewInAll (Underlying native function: ViewInAll 0x75c3c08)
	void ViewInAll(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.SquadSlotWidgetUpdated (Underlying native function: SquadSlotWidgetUpdated 0x75c2c60)
	void SquadSlotWidgetUpdated(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.SetIdOfSquadSlotToManageBP (Underlying native function: SetIdOfSquadSlotToManageBP 0x75c1ea4)
	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int& SquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.OpenSquadSlot (Underlying native function: OpenSquadSlot 0x75c0d78)
	void OpenSquadSlot(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.IsSquadSlotLockedBP (Underlying native function: IsSquadSlotLockedBP 0x75c09a8)
	bool IsSquadSlotLockedBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePreDifferentSquadSlotSetBP (Has no native function)
	void HandlePreDifferentSquadSlotSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePostDifferentSquadSlotSetBP (Has no native function)
	void HandlePostDifferentSquadSlotSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetPopupMenu (Underlying native function: GetPopupMenu 0x75bf5b4)
	class UUserWidget* GetPopupMenu(); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetInPreviewMode (Underlying native function: GetInPreviewMode 0x75bf16c)
	bool GetInPreviewMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetIdOfSquadSlotToManageBP (Underlying native function: GetIdOfSquadSlotToManageBP 0x75bef6c)
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int& OutSquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

