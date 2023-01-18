// Class /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy
// Size: 0x1480
class UFortStoreSummaryItemButton_Legacy : public UCommonButtonLegacy
{
	bool HasAnItemMarkedForMulching; // 0x1430 (0x1)
	unsigned char unreflected_1431[0x2f]; // 0x1431 (0x2f) 
	class UMenuAnchor* PopupMenuAnchor; // 0x1460 (0x8)
	class UStoreCardObject* StoreCardObject; // 0x1468 (0x8)
	class UFortInventoryContext* InventoryContext; // 0x1470 (0x8)
	unsigned char padding_1478[0x8]; // 0x1478 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.UpdateMulchListWithItem (Underlying native function: UpdateMulchListWithItem 0x5b47630)
	void UpdateMulchListWithItem(bool& bAddingItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.SetStoreCardObject (Underlying native function: SetStoreCardObject 0x5b47400)
	void SetStoreCardObject(class UStoreCardObject*& CardObject); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.OnContextMenuOpenChangedEvent__DelegateSignature (Has no native function)
	void OnContextMenuOpenChangedEventDelegateSignature(bool& bIsOpen); // (MulticastDelegate | Public | Delegate)

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleMenuOpenChanged (Underlying native function: HandleMenuOpenChanged 0x5b470c0)
	void HandleMenuOpenChanged(bool& bIsOpen); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleItemMulchStateChanged (Has no native function)
	void HandleItemMulchStateChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetStoreCardObject (Underlying native function: GetStoreCardObject 0x5b46e10)
	class UStoreCardObject* GetStoreCardObject(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetPopupMenu (Underlying native function: GetPopupMenu 0x5b46de0)
	class UUserWidget* GetPopupMenu(); // (Final | Native | Private)
};

