// Class /Script/FortniteUI.FortShowdownRegionButton
// Size: 0x1480
class UFortShowdownRegionButton : public UCommonPopupButtonLegacy
{
	struct FMulticastInlineDelegate OnPopupChanged; // 0x1440 (0x10)
	struct FMulticastInlineDelegate OnRegionChanged; // 0x1450 (0x10)
	class UClass* BindingMenuClass; // 0x1460 (0x8)
	class UCommonTextBlock* TextRegionName; // 0x1468 (0x8)
	class UFortShowdownRegionPopupMenu* RegionMenuInstance; // 0x1470 (0x8)
	unsigned char padding_1478[0x8]; // 0x1478 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortShowdownRegionButton.HandleRegionSelectedChanged (Underlying native function: HandleRegionSelectedChanged 0xa8ef7c4)
	void HandleRegionSelectedChanged(int& SelectedButtonIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortShowdownRegionButton.HandlePopupChanged (Underlying native function: HandlePopupChanged 0xa8ef5c0)
	void HandlePopupChanged(bool& bIsOpen); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortShowdownRegionButton.ClosePopup (Underlying native function: ClosePopup 0xa8ea338)
	void ClosePopup(); // (Final | Native | Public | BlueprintCallable)
};

