// Class /Script/FortniteUI.FortItemManagementItemPopupMenu
// Size: 0x508
class UFortItemManagementItemPopupMenu : public UFortPopupMenu_Legacy
{
	unsigned char unreflected_508[0x508]; 

	/* Functions */

	// Function /Script/FortniteUI.FortItemManagementItemPopupMenu.MulchItem (Underlying native function: MulchItem 0xa7e74c8)
	void MulchItem(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementItemPopupMenu.HandleItemChanged (Has no native function)
	void HandleItemChanged(bool& bItemChanged, bool& bAmmoChanged, bool& bIngredientsChanged); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementItemPopupMenu.HandleCompareAction (Underlying native function: HandleCompareAction 0xa7e6070)
	void HandleCompareAction(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemManagementItemPopupMenu.GetHostButton (Underlying native function: GetHostButton 0xa7e560c)
	class UFortItemManagementItemTileButton* GetHostButton(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

