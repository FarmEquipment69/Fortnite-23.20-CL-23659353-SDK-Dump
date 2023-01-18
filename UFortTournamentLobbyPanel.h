// Class /Script/FortniteUI.FortTournamentLobbyPanel
// Size: 0x768
class UFortTournamentLobbyPanel : public UFortShowdownDetailView
{
	struct FDataTableRowHandle EventDetailsAction; // 0x718 (0x10)
	class UCommonButtonLegacy* ButtonEventDetails; // 0x728 (0x8)
	class UClass* TournamentModalClass; // 0x730 (0x8)
	class UCommonTextBlock* TextTimeRemainingScheduledMatch; // 0x738 (0x8)
	class UCommonTextBlock* TextScheduledMatchInfo; // 0x740 (0x8)
	unsigned char padding_748[0x20]; // 0x748 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortTournamentLobbyPanel.UsesScheduledMatchmaking (Underlying native function: UsesScheduledMatchmaking 0xa8f3438)
	bool UsesScheduledMatchmaking(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

