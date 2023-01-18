// Class /Script/FortniteUI.CobaltTournamentBracketWidgetBase
// Size: 0x380
class UCobaltTournamentBracketWidgetBase : public UCobaltWidgetBase
{
	struct TArray<class UCobaltTournamentBracketNodeWidgetBase*> LocalTeamNodes; // 0x360 (0x10)
	struct TArray<class UCobaltTournamentBracketNodeWidgetBase*> EnemyTeamNodes; // 0x370 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.CobaltTournamentBracketWidgetBase.UpdateTournamentBracket_BP (Has no native function)
	void UpdateTournamentBracketBP(int& CurrentActiveRound); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltTournamentBracketWidgetBase.UpdateTournamentBracket (Underlying native function: UpdateTournamentBracket 0xa5807b4)
	void UpdateTournamentBracket(int& CurrentActiveRound); // (Final | Native | Public | BlueprintCallable)
};

