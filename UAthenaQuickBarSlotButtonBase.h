// Class /Script/FortniteUI.AthenaQuickBarSlotButtonBase
// Size: 0x13f0
class UAthenaQuickBarSlotButtonBase : public UCommonButtonBase
{
	enum EFortQuickBars QuickbarIndex; // 0x13e0 (0x1)
	unsigned char unreflected_13e1[0x3]; // 0x13e1 (0x3) 
	int SlotIndex; // 0x13e4 (0x4)
	class UAthenaItemIcon* ItemIcon; // 0x13e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaQuickBarSlotButtonBase.OnSlottedItemChanged (Has no native function)
	void OnSlottedItemChanged(class UFortItem*& SlottedItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaQuickBarSlotButtonBase.OnOwnerDeactivated (Has no native function)
	void OnOwnerDeactivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaQuickBarSlotButtonBase.OnOwnerActivated (Has no native function)
	void OnOwnerActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaQuickBarSlotButtonBase.HandleQuickbarContentsChanged (Underlying native function: HandleQuickbarContentsChanged 0xa556380)
	void HandleQuickbarContentsChanged(enum EFortQuickBars& InQuickBarIndex, struct TArray<int>& ChangedSlots); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaQuickBarSlotButtonBase.HandleInventoryItemSelected (Underlying native function: HandleInventoryItemSelected 0xa555a48)
	void HandleInventoryItemSelected(class UFortItem*& SelectedItem); // (Final | Native | Private)
};

