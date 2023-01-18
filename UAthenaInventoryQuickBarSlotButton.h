// Class /Script/FortniteUI.AthenaInventoryQuickBarSlotButton
// Size: 0x14d0
class UAthenaInventoryQuickBarSlotButton : public UAthenaQuickBarSlotButtonBase
{
	unsigned char unreflected_14d0[0x14d0]; 

	/* Functions */

	// Function /Script/FortniteUI.AthenaInventoryQuickBarSlotButton.OnSwapStarted (Has no native function)
	void OnSwapStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryQuickBarSlotButton.OnSwapComplete (Has no native function)
	void OnSwapComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryQuickBarSlotButton.OnExtensionWidgetAdded (Has no native function)
	void OnExtensionWidgetAdded(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& ExtensionWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryQuickBarSlotButton.HandleInventorySwapStarted (Underlying native function: HandleInventorySwapStarted 0xa555b38)
	void HandleInventorySwapStarted(int& SwapSlotIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaInventoryQuickBarSlotButton.HandleInventorySwapComplete (Underlying native function: HandleInventorySwapComplete 0xa555af0)
	void HandleInventorySwapComplete(); // (Final | Native | Private)
};

