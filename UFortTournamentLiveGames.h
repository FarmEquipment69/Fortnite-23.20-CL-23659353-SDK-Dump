// Class /Script/FortniteUI.FortTournamentLiveGames
// Size: 0x450
class UFortTournamentLiveGames : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x80]; // 0x3a8 (0x80) 
	struct TArray<class UFortTournamentLiveGameSessionData*> LiveSessions; // 0x428 (0x10)
	class UFortTournamentLiveGameSessionData* SelectedGame; // 0x438 (0x8)
	class UListView* ListViewSessionEntries; // 0x440 (0x8)
	class UCommonButtonLegacy* ButtonWatchGame; // 0x448 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortTournamentLiveGames.SetTournamentIds (Underlying native function: SetTournamentIds 0xa93a4e0)
	void SetTournamentIds(struct FString& InTournamentId, struct FString& InEventWindowId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTournamentLiveGames.OnViewLiveGames (Underlying native function: OnViewLiveGames 0xa939d80)
	void OnViewLiveGames(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTournamentLiveGames.NotifyNoLiveGames (Has no native function)
	void NotifyNoLiveGames(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTournamentLiveGames.NotifyLoadingMoreGames (Has no native function)
	void NotifyLoadingMoreGames(bool& bIsLoading); // (Event | Protected | BlueprintEvent)
};

