// Class /Script/SaveTheWorldUI.FortStoreSummaryItemButton
// Size: 0x1480
class UFortStoreSummaryItemButton : public UCommonButtonLegacy
{
	bool HasAnItemMarkedForMulching; // 0x1430 (0x1)
	unsigned char unreflected_1431[0x2f]; // 0x1431 (0x2f) 
	class UMenuAnchor* PopupMenuAnchor; // 0x1460 (0x8)
	class UStoreCardObject* StoreCardObject; // 0x1468 (0x8)
	class UFortInventoryContext* InventoryContext; // 0x1470 (0x8)
	unsigned char padding_1478[0x8]; // 0x1478 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.UpdateMulchListWithItem (Underlying native function: UpdateMulchListWithItem 0x759baa8)
	void UpdateMulchListWithItem(bool& bAddingItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.SetStoreCardObject (Underlying native function: SetStoreCardObject 0x759acec)
	void SetStoreCardObject(class UStoreCardObject*& CardObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.HandleMenuOpenChanged (Underlying native function: HandleMenuOpenChanged 0x7598750)
	void HandleMenuOpenChanged(bool& bIsOpen); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.HandleItemMulchStateChanged (Has no native function)
	void HandleItemMulchStateChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.GetStoreCardObject (Underlying native function: GetStoreCardObject 0x7597894)
	class UStoreCardObject* GetStoreCardObject(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.GetPopupMenu (Underlying native function: GetPopupMenu 0x7597244)
	class UUserWidget* GetPopupMenu(); // (Final | Native | Private)
};

