// Class /Script/FortniteUI.FortItemManagementItemTileButton
// Size: 0x14e0
class UFortItemManagementItemTileButton : public UFortItemTileButton
{
	struct TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen; // 0x1468 (0x8)
	bool HasTheItemToDetail; // 0x1470 (0x1)
	bool HasTheItemToCompareDetailsWith; // 0x1471 (0x1)
	bool HasAnItemMarkedForMulching; // 0x1472 (0x1)
	unsigned char unreflected_1473[0x1]; // 0x1473 (0x1) 
	int MulchCount; // 0x1474 (0x4)
	class UOverlay* NotCraftableOverlay; // 0x1478 (0x8)
	class UFortDynamicEntryBox* EquipSlotOverlay; // 0x1480 (0x8)
	class UMenuAnchor* PopupMenuAnchor; // 0x1488 (0x8)
	bool ShowCollectionBookIndicator; // 0x1490 (0x1)
	bool ShowRefundIndicator; // 0x1491 (0x1)
	unsigned char unreflected_1492[0x46]; // 0x1492 (0x46) 
	class UFortInventoryContext* InventoryContext; // 0x14d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.UpdateEquipSlotOverlay (Underlying native function: UpdateEquipSlotOverlay 0xa7e8ca0)
	void UpdateEquipSlotOverlay(int& CurrentSlotIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.PopulateEquipSlotOverlay (Underlying native function: PopulateEquipSlotOverlay 0xa7e7824)
	void PopulateEquipSlotOverlay(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.OnSlotItemComplete (Underlying native function: OnSlotItemComplete 0xa7e75a8)
	void OnSlotItemComplete(class UFortAccountItem*& SlottedItem, struct FName& SlotId); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.IsValidEquipSlotOverlayIndex (Underlying native function: IsValidEquipSlotOverlayIndex 0xa7e73f8)
	bool IsValidEquipSlotOverlayIndex(int& SlotIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.HandleShowRefundIndicatorChanged (Has no native function)
	void HandleShowRefundIndicatorChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.HandleShowCollectionBookIndicatorChanged (Has no native function)
	void HandleShowCollectionBookIndicatorChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.HandleItemMulchStateChanged (Has no native function)
	void HandleItemMulchStateChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.HandleItemChangedBP (Has no native function)
	void HandleItemChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.HandleHasItemToDetailChanged (Has no native function)
	void HandleHasItemToDetailChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.HandleHasItemToCompareDetailsWithChanged (Has no native function)
	void HandleHasItemToCompareDetailsWithChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.HandleEquipSlotChanged (Has no native function)
	void HandleEquipSlotChanged(int& EquipSlot); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.HandleDifferentItemManagementModeSetBP (Has no native function)
	void HandleDifferentItemManagementModeSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.GetPopupMenu (Underlying native function: GetPopupMenu 0x7597220)
	class UUserWidget* GetPopupMenu(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.GetItemManagementMode (Underlying native function: GetItemManagementMode 0xa7e577c)
	enum EFortItemManagementMode GetItemManagementMode(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementItemTileButton.GetHomebaseSquadSlotForItem (Underlying native function: GetHomebaseSquadSlotForItem 0x7596a58)
	struct FHomebaseSquadSlotId* GetHomebaseSquadSlotForItem(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

