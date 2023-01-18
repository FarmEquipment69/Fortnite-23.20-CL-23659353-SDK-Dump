// Class /Script/SaveTheWorldUI.FortSquadSlotItemPicker
// Size: 0x498
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{
	unsigned char unreflected_3d0[0x38]; // 0x3d0 (0x38) 
	struct FMulticastInlineDelegate OnSortChanged; // 0x408 (0x10)
	unsigned char padding_418[0x80]; // 0x418 (0x80)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.SetSortTypes (Underlying native function: SetSortTypes 0x75c2a64)
	void SetSortTypes(struct FSquadSlotSortTypes& SquadSlotSortTypes); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP (Underlying native function: SetIdOfSquadSlotToManageBP 0x75c1dd4)
	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int& SquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP (Underlying native function: GetIdOfSquadSlotToManageBP 0x75bee90)
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int& OutSquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/SaveTheWorldUI.FortSquadSlotItemPicker.FortSquadSlotSortChanged__DelegateSignature (Has no native function)
	void FortSquadSlotSortChangedDelegateSignature(enum ESquadSlotSortType& CurrentSortType, enum ESquadSlotType& SquadSlotType); // (MulticastDelegate | Public | Delegate)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.CycleSortType (Underlying native function: CycleSortType 0x75be6e4)
	void CycleSortType(); // (Final | Native | Public | BlueprintCallable)
};

