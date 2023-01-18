// Class /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator
// Size: 0x2b0
class UAthenaInventoryItemInfoCraftingIndicator : public UCommonUserWidget
{
	unsigned char unreflected_2b0[0x2b0]; 

	/* Functions */

	// Function /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnIsCraftableItemChanged (Has no native function)
	void OnIsCraftableItemChanged(bool& bIsCraftableItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnCanCraftNowChanged (Has no native function)
	void OnCanCraftNowChanged(bool& bCanCraftNow); // (Event | Protected | BlueprintEvent)

	// Function /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator.HandleInventoryItemSelected (Underlying native function: HandleInventoryItemSelected 0x7302318)
	void HandleInventoryItemSelected(class UFortItem*& SelectedItem); // (Final | Native | Private)
};

