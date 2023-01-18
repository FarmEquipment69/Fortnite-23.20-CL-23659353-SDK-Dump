// Class /Script/SaveTheWorldUI.FortSquadSelectorButton
// Size: 0x1450
class UFortSquadSelectorButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1450[0x1450]; 

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.TryGetStaticSquadDataBP (Underlying native function: TryGetStaticSquadDataBP 0x75c36c8)
	bool TryGetStaticSquadDataBP(struct FHomebaseSquad& OutSquadData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.SetIdOfSquadToManageBP (Underlying native function: SetIdOfSquadToManageBP 0x75c20d4)
	void SetIdOfSquadToManageBP(struct FName& SquadId); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.HandleSquadChangedBP (Has no native function)
	void HandleSquadChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.HandleDifferentSquadSetBP (Has no native function)
	void HandleDifferentSquadSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSelectorButton.GetIdOfSquadToManageBP (Underlying native function: GetIdOfSquadToManageBP 0x75bf13c)
	struct FName GetIdOfSquadToManageBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

