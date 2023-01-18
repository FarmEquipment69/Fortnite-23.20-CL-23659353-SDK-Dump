// Class /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker
// Size: 0x3f0
class UFortHeroLoadoutGadgetPicker : public UFortItemPickerBase
{
	struct TWeakObjectPtr<class UFortCampaignHeroLoadoutItem> TargetLoadoutItem; // 0x3d0 (0x8)
	int TargetSlotIndex; // 0x3d8 (0x4)
	unsigned char unreflected_3dc[0x4]; // 0x3dc (0x4) 
	struct TArray<class UFortItem*> TemporaryGadgetItemInstances; // 0x3e0 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker.SetTargetLoadoutSlot (Underlying native function: SetTargetLoadoutSlot 0x759adec)
	void SetTargetLoadoutSlot(class UFortCampaignHeroLoadoutItem*& LoadoutItem, int& SlotIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker.HandleDifferentTargetLoadoutSlotSetBP (Has no native function)
	void HandleDifferentTargetLoadoutSlotSetBP(); // (Event | Protected | BlueprintEvent)
};

