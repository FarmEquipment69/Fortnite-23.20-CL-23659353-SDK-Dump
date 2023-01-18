// Class /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator
// Size: 0x2c8
class UAthenaQuickBarSlotCraftingIndicator : public UAthenaQuickBarSlotExtensionWidgetBase
{
	unsigned char unreflected_298[0x20]; // 0x298 (0x20) 
	bool bCheckForIngredientChangesWhenCraftable; // 0x2b8 (0x1)
	unsigned char padding_2b9[0xf]; // 0x2b9 (0xf)

	/* Functions */

	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIsCraftableItemChanged (Has no native function)
	void OnIsCraftableItemChanged(bool& bIsCraftableItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIngredientChanged (Has no native function)
	void OnIngredientChanged(bool& bCanCraftNow); // (Event | Protected | BlueprintEvent)

	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnCanCraftNowChanged (Has no native function)
	void OnCanCraftNowChanged(bool& bCanCraftNow); // (Event | Protected | BlueprintEvent)

	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.HandleWeaponEquipped (Underlying native function: HandleWeaponEquipped 0x73024ec)
	void HandleWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Private)
};

