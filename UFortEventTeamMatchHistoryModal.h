// Class /Script/FortniteUI.FortEventTeamMatchHistoryModal
// Size: 0x540
class UFortEventTeamMatchHistoryModal : public UFortActivatablePanel
{
	class UCommonListView* ListViewMatchHistory; // 0x518 (0x8)
	class UCommonTextBlock* TextTeamNames; // 0x520 (0x8)
	class UFortEventLeaderboardEntryData* LeaderboardEntryData; // 0x528 (0x8)
	class UFortEventTeamMatchHistoryEntryData* LastClickedMatchHistoryEntry; // 0x530 (0x8)
	unsigned char padding_538[0x8]; // 0x538 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortEventTeamMatchHistoryModal.SetupMatchHistory (Underlying native function: SetupMatchHistory 0xa6231b0)
	void SetupMatchHistory(class UFortEventLeaderboardEntryData*& DataForDisplay, struct FString& TournamentId, struct FString& EventWindowId, struct FString& LeaderboardGroupingKey, struct FString& LeaderboardInstanceId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortEventTeamMatchHistoryModal.OnSetupMatchHistory (Has no native function)
	void OnSetupMatchHistory(struct FString& TournamentId, struct FString& EventWindowId); // (Event | Protected | BlueprintEvent)
};

