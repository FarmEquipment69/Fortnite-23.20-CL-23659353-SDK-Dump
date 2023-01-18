// Class /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
// Size: 0x308
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{
	unsigned char unreflected_308[0x308]; 

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP (Underlying native function: SetIdOfSquadSlotToManageBP 0x75c1c34)
	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int& SquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP (Underlying native function: IsSquadSlotLockedBP 0x75c0920)
	bool IsSquadSlotLockedBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.HandlePostDifferentSquadSlotSetBP (Has no native function)
	void HandlePostDifferentSquadSlotSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP (Underlying native function: GetItemInSquadSlotBP 0x75bf23c)
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer*& LocalPlayer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP (Underlying native function: GetIdOfSquadSlotToManageBP 0x75becd8)
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int& OutSquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

