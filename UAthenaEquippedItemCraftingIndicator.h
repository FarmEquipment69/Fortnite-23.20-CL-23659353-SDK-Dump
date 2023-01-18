// Class /Script/CraftingUI.AthenaEquippedItemCraftingIndicator
// Size: 0x2b0
class UAthenaEquippedItemCraftingIndicator : public UCommonUserWidget
{
	unsigned char unreflected_2b0[0x2b0]; 

	/* Functions */

	// Function /Script/CraftingUI.AthenaEquippedItemCraftingIndicator.OnIsCraftableItemChanged (Has no native function)
	void OnIsCraftableItemChanged(bool& bIsCraftableItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/CraftingUI.AthenaEquippedItemCraftingIndicator.OnCanCraftNowChanged (Has no native function)
	void OnCanCraftNowChanged(bool& bCanCraftNow); // (Event | Protected | BlueprintEvent)

	// Function /Script/CraftingUI.AthenaEquippedItemCraftingIndicator.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0x7302418)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Private)
};

