// Class /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu
// Size: 0x508
class UFortCollectionBookItemPopupMenu : public UFortPopupMenu_Legacy
{
	unsigned char unreflected_508[0x508]; 

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemUpdated (Has no native function)
	void HandleItemUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.HandleItemChanged (Has no native function)
	void HandleItemChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.GetHostButton (Underlying native function: GetHostButton 0x756dcb4)
	class UFortCollectionBookSlotButton* GetHostButton(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBeUnslotted (Underlying native function: CanItemBeUnslotted 0x756d5ac)
	bool CanItemBeUnslotted(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu.CanItemBePurchased (Underlying native function: CanItemBePurchased 0x756d588)
	bool CanItemBePurchased(); // (Final | Native | Protected | BlueprintCallable)
};

