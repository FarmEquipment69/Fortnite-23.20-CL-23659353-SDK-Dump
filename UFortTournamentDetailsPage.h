// Class /Script/FortniteUI.FortTournamentDetailsPage
// Size: 0x730
class UFortTournamentDetailsPage : public UFortShowdownDetailView
{
	unsigned char unreflected_730[0x730]; 

	/* Functions */

	// Function /Script/FortniteUI.FortTournamentDetailsPage.OnHandleBack (Has no native function)
	void OnHandleBack(bool& bResult); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTournamentDetailsPage.OnActivateScreen (Has no native function)
	void OnActivateScreen(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortTournamentDetailsPage.HandleBackClicked (Underlying native function: HandleBackClicked 0xa9393b4)
	void HandleBackClicked(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTournamentDetailsPage.FindTournamentScoringRules (Underlying native function: FindTournamentScoringRules 0xa938e74)
	struct TArray<struct FFortShowdownScoringRuleInfo> FindTournamentScoringRules(struct FString& TournamentSeriesId, struct FString& TournamentId); // (Final | Native | Public | BlueprintCallable)
};

