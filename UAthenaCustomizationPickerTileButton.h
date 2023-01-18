// Class /Script/FortniteUI.AthenaCustomizationPickerTileButton
// Size: 0x1470
class UAthenaCustomizationPickerTileButton : public UFortCosmeticItemTileButton
{
	unsigned char unreflected_1450[0x8]; // 0x1450 (0x8) 
	class UFortBangWrapper_NUI* Bang; // 0x1458 (0x8)
	class UImage* ImageFavorite; // 0x1460 (0x8)
	class UImage* ImageClassIcon; // 0x1468 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCustomizationPickerTileButton.OnUpdateExclusiveWarning (Has no native function)
	void OnUpdateExclusiveWarning(bool& bShouldWarn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPickerTileButton.OnEquippedStateChanged (Has no native function)
	void OnEquippedStateChanged(bool& bEquipped, bool& bOnDifferentSlot); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPickerTileButton.OnChangeOwnedState (Has no native function)
	void OnChangeOwnedState(bool& bOwned); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationPickerTileButton.OnArchivedStatusUpdated (Has no native function)
	void OnArchivedStatusUpdated(bool& bShowAsArchived, bool& bUseAnimations); // (Event | Protected | BlueprintEvent)
};

