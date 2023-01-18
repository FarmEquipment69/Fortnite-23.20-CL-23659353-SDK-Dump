// Class /Script/SaveTheWorldUI.FortItemInspectCycleWidget
// Size: 0x2e0
class UFortItemInspectCycleWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnItemToRepresentChanged; // 0x290 (0x10)
	struct TWeakObjectPtr<class UFortItemTileView> ItemTileView; // 0x2a0 (0x8)
	struct TWeakObjectPtr<class UFortItem> ItemToRepresent; // 0x2a8 (0x8)
	struct FDataTableRowHandle PreviousItemActionRowHandle; // 0x2b0 (0x10)
	struct FDataTableRowHandle NextItemActionRowHandle; // 0x2c0 (0x10)
	unsigned char padding_2d0[0x10]; // 0x2d0 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetupActionHandlers (Underlying native function: SetupActionHandlers 0x759b06c)
	void SetupActionHandlers(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetOwningItemInspectScreen (Underlying native function: SetOwningItemInspectScreen 0x759aaf8)
	void SetOwningItemInspectScreen(class UFortItemInspectionScreen*& ItemInspect); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetItemToRepresent (Underlying native function: SetItemToRepresent 0x759a9f8)
	void SetItemToRepresent(class UFortItem*& NewItemToRepresent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectPreviousItem (Underlying native function: SelectPreviousItem 0x7599f70)
	void SelectPreviousItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectNextItem (Underlying native function: SelectNextItem 0x7599f58)
	void SelectNextItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectItemWithOffset (Underlying native function: SelectItemWithOffset 0x7599ed8)
	void SelectItemWithOffset(int& Offset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.OnItemCycled (Has no native function)
	void OnItemCycled(class UFortItem*& OldItem, class UFortItem*& NewItem, int& OffsetFromPreviousItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.GetItemWithOffset_BP (Underlying native function: GetItemWithOffset_BP 0x7596f5c)
	class UFortItem* GetItemWithOffsetBP(int& IndexOffset); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

