// Class /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
// Size: 0x2f0
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{
	class UClass* StatMatchClass; // 0x2c0 (0x8)
	bool bSummaryView; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x7]; // 0x2c9 (0x7) 
	struct TArray<class UFortSurvivorSquadStatMatchBase*> StatMatches; // 0x2d0 (0x10)
	unsigned char padding_2e0[0x10]; // 0x2e0 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.TryGetStaticSquadDataBP (Underlying native function: TryGetStaticSquadDataBP 0x75c3888)
	bool TryGetStaticSquadDataBP(struct FHomebaseSquad& OutSquadData); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetSummaryView (Underlying native function: SetSummaryView 0x75c2bcc)
	void SetSummaryView(bool& bInSummaryView); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetIdOfSquadToManageBP (Underlying native function: SetIdOfSquadToManageBP 0x75c2164)
	void SetIdOfSquadToManageBP(struct FName& SquadId); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.HandleDifferentSquadSetBP (Has no native function)
	void HandleDifferentSquadSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.GetIdOfSquadToManageBP (Underlying native function: GetIdOfSquadToManageBP 0x75bf154)
	struct FName GetIdOfSquadToManageBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.AddStatMatch (Has no native function)
	void AddStatMatch(class UFortSurvivorSquadStatMatchBase*& SetBonus); // (Event | Protected | BlueprintEvent)
};

