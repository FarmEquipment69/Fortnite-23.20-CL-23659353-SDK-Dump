// Class /Script/FortniteUI.AthenaSpectatorQuickbarBase
// Size: 0x2e0
class UAthenaSpectatorQuickbarBase : public UFortHUDElementWidget
{
	struct TArray<class UAthenaSpectatorInventorySlotBase*> ItemSlots; // 0x2d0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorQuickbarBase.OnQuickbarSlotFocusChanged (Underlying native function: OnQuickbarSlotFocusChanged 0xa5bbf10)
	void OnQuickbarSlotFocusChanged(enum EFortQuickBars& QuickbarIndex, int& FocusedSlotIdx); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorQuickbarBase.OnQuickbarContentsChanged (Underlying native function: OnQuickbarContentsChanged 0xa5bbe2c)
	void OnQuickbarContentsChanged(enum EFortQuickBars& QuickbarIndex, struct TArray<int>& ChangedSlots); // (Final | Native | Private | HasOutParms)
};

