// Class /Script/FortniteUI.AthenaSpectatorTrapsLoadoutBase
// Size: 0x2e0
class UAthenaSpectatorTrapsLoadoutBase : public UFortHUDElementWidget
{
	struct TArray<class UAthenaSpectatorInventorySlotBase*> ItemSlots; // 0x2d0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorTrapsLoadoutBase.SelectSlot (Has no native function)
	void SelectSlot(int& SlotIdx); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorTrapsLoadoutBase.OnWorldItemListChanged (Underlying native function: OnWorldItemListChanged 0xa5bcba0)
	void OnWorldItemListChanged(struct TArray<class UFortWorldItem*>& ItemsAdded, struct TArray<class UFortWorldItem*>& ItemsRemoved); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaSpectatorTrapsLoadoutBase.ClearSlots (Underlying native function: ClearSlots 0xa5b7a38)
	void ClearSlots(); // (Final | Native | Private)
};

