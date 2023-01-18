// Class /Script/FortniteUI.FortShowdownRegionPopupMenu
// Size: 0x530
class UFortShowdownRegionPopupMenu : public UCommonPopupMenuLegacy
{
	struct FMulticastInlineDelegate OnRegionChanged; // 0x4f8 (0x10)
	class UDynamicEntryBox* EntryBoxBindableActions; // 0x508 (0x8)
	class UClass* style; // 0x510 (0x8)
	class UCommonButtonGroupBase* ButtonGroup; // 0x518 (0x8)
	unsigned char padding_520[0x10]; // 0x520 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortShowdownRegionPopupMenu.HandleSelectedButtonClicked (Underlying native function: HandleSelectedButtonClicked 0xa8ef868)
	void HandleSelectedButtonClicked(class UCommonButtonBase*& SelectedButton, int& SelectedButtonIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortShowdownRegionPopupMenu.HandleMenuOpenChanged (Underlying native function: HandleMenuOpenChanged 0xa8ef27c)
	void HandleMenuOpenChanged(bool& bIsMenuPopupOpen); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortShowdownRegionPopupMenu.BP_SetButtonText (Has no native function)
	void BPSetButtonText(class UCommonButtonLegacy*& Button, struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)
};

