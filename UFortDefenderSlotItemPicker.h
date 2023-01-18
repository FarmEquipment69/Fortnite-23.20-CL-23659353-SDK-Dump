// Class /Script/FortniteUI.FortDefenderSlotItemPicker
// Size: 0x3f0
class UFortDefenderSlotItemPicker : public UFortItemPickerBase
{
	enum EFortDefenderSlotType DefenderSlotType; // 0x3d0 (0x1)
	unsigned char unreflected_3d1[0x7]; // 0x3d1 (0x7) 
	struct TArray<enum EInventoryContentSortType> SortTypesList; // 0x3d8 (0x10)
	enum EInventoryContentSortType CurrentSortType; // 0x3e8 (0x1)
	unsigned char padding_3e9[0x7]; // 0x3e9 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortDefenderSlotItemPicker.SetSortType (Underlying native function: SetSortType 0xa91aa68)
	void SetSortType(enum EInventoryContentSortType& SortType); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortDefenderSlotItemPicker.PopulateDefenderSlotItems (Underlying native function: PopulateDefenderSlotItems 0xa9195d0)
	void PopulateDefenderSlotItems(class UFortDefenderItem*& DefenderItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortDefenderSlotItemPicker.OnCurrentSortTypeChanged (Has no native function)
	void OnCurrentSortTypeChanged(enum EInventoryContentSortType& SortType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortDefenderSlotItemPicker.NextSortType (Underlying native function: NextSortType 0xa9192ac)
	void NextSortType(); // (Final | Native | Protected | BlueprintCallable)
};

