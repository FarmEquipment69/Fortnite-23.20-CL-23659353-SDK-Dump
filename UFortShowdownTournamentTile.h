// Class /Script/FortniteUI.FortShowdownTournamentTile
// Size: 0x1460
class UFortShowdownTournamentTile : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x18]; // 0x1430 (0x18) 
	class UFortTournamentPosterViolator* ShowdownDetailViewViolator; // 0x1448 (0x8)
	class UFortShowdownDetailView* ShowdownDetailViewPoster; // 0x1450 (0x8)
	class UTournamentListEntryData* TournamentListEntryData; // 0x1458 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortShowdownTournamentTile.GetTournamentListEntryData (Underlying native function: GetTournamentListEntryData 0xa8ee694)
	class UTournamentListEntryData* GetTournamentListEntryData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortShowdownTournamentTile.GetTileTournament (Underlying native function: GetTileTournament 0xa8ee378)
	struct FString GetTileTournament(); // (Final | Native | Public | BlueprintCallable)
};

