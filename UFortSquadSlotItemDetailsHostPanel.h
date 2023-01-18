// Class /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
// Size: 0x388
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{
	unsigned char unreflected_388[0x388]; 

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP (Underlying native function: SetIdOfSquadSlotToManageBP 0x75c1d04)
	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int& SquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP (Underlying native function: IsSquadSlotLockedBP 0x75c0964)
	bool IsSquadSlotLockedBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP (Underlying native function: GetItemInSquadSlotBP 0x75bf2e0)
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer*& LocalPlayer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP (Underlying native function: GetIdOfSquadSlotToManageBP 0x75bedb4)
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int& OutSquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

