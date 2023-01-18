// Class /Script/FortniteUI.FortTrapDefenderItemPicker
// Size: 0x440
class UFortTrapDefenderItemPicker : public UFortItemPickerBase
{
	class UFortItemDetailsHostPanel* DetailsPanel; // 0x3d0 (0x8)
	struct TWeakObjectPtr<class ABuildingTrapDefender> DefenderTrap; // 0x3d8 (0x8)
	unsigned char padding_3e0[0x60]; // 0x3e0 (0x60)

	/* Functions */

	// Function /Script/FortniteUI.FortTrapDefenderItemPicker.HandleSelectionCommittedBP (Has no native function)
	void HandleSelectionCommittedBP(class UFortItem*& CommittedItem); // (Event | Protected | BlueprintEvent)
};

