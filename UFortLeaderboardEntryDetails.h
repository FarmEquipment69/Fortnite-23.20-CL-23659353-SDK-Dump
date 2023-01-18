// Class /Script/FortniteUI.FortLeaderboardEntryDetails
// Size: 0x298
class UFortLeaderboardEntryDetails : public UCommonUserWidget
{
	bool bAllowProfileNavigation; // 0x290 (0x1)
	unsigned char padding_291[0x7]; // 0x291 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortLeaderboardEntryDetails.WatchLiveMatch (Underlying native function: WatchLiveMatch 0xa84cff4)
	void WatchLiveMatch(struct FString& SessionId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortLeaderboardEntryDetails.GetAlternativeLeaderboardTrackedStatLabel (Underlying native function: GetAlternativeLeaderboardTrackedStatLabel 0xa84720c)
	struct FText GetAlternativeLeaderboardTrackedStatLabel(struct FString& TrackedStatName); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortLeaderboardEntryDetails.GetAlternativeLeaderboardTrackedStat (Underlying native function: GetAlternativeLeaderboardTrackedStat 0xa846d50)
	struct FString GetAlternativeLeaderboardTrackedStat(struct FString& TournamentId, struct FString& EventWindowId, struct FString& LeaderboardGroupingKey, struct FString& LeaderboardInstanceId); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

