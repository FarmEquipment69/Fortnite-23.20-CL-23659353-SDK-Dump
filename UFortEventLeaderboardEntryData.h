// Class /Script/FortniteUI.FortEventLeaderboardEntryData
// Size: 0xa0
class UFortEventLeaderboardEntryData : public UObject
{
	unsigned char unreflected_a0[0xa0]; 

	/* Functions */

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.ShouldShowQualifiedIcon (Underlying native function: ShouldShowQualifiedIcon 0xa6b5f68)
	bool ShouldShowQualifiedIcon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTotalVictoryRoyales (Underlying native function: GetTotalVictoryRoyales 0xa6b3674)
	int GetTotalVictoryRoyales(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTotalTrackedStat (Underlying native function: GetTotalTrackedStat 0xa6b3510)
	int GetTotalTrackedStat(struct FString& TrackedStatName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTotalPointsForCategory (Underlying native function: GetTotalPointsForCategory 0xa6b3484)
	int GetTotalPointsForCategory(struct FName& ScoreCategoryId); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTotalMatchesPlayed (Underlying native function: GetTotalMatchesPlayed 0xa6b3468)
	int GetTotalMatchesPlayed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTotalEliminations (Underlying native function: GetTotalEliminations 0xa6b3444)
	int GetTotalEliminations(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTeammateDisplayNames (Underlying native function: GetTeammateDisplayNames 0xa6b3288)
	void GetTeammateDisplayNames(struct TArray<struct FString>& DisplayNames); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTeamDisplayNameText (Underlying native function: GetTeamDisplayNameText 0xa6b320c)
	struct FText GetTeamDisplayNameText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetTeamAccountId (Underlying native function: GetTeamAccountId 0xa6b3068)
	struct FString GetTeamAccountId(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetScore (Underlying native function: GetScore 0xa6b2ef8)
	int GetScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetRank (Underlying native function: GetRank 0x7a5d3b0)
	int GetRank(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetPageIndex (Underlying native function: GetPageIndex 0xa6b2e68)
	int GetPageIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetNumTeammates (Underlying native function: GetNumTeammates 0xa6b2e50)
	int GetNumTeammates(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetLiveSessionId (Underlying native function: GetLiveSessionId 0xa6b2bcc)
	struct FString GetLiveSessionId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetIsMatchPointWinner (Underlying native function: GetIsMatchPointWinner 0xa6b2b94)
	bool GetIsMatchPointWinner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetEventWindowId (Underlying native function: GetEventWindowId 0xa6b28cc)
	struct FString GetEventWindowId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetEventId (Underlying native function: GetEventId 0xa6b2858)
	struct FString GetEventId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetAverageTrackedStat (Underlying native function: GetAverageTrackedStat 0xa6b1f5c)
	float GetAverageTrackedStat(struct FString& TrackedStatName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetAveragePlacement (Underlying native function: GetAveragePlacement 0xa6b1f34)
	float GetAveragePlacement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.GetAverageMatchScore (Underlying native function: GetAverageMatchScore 0xa6b1f00)
	float GetAverageMatchScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEventLeaderboardEntryData.DoesLeaderboardHaveQualifiedIcons (Underlying native function: DoesLeaderboardHaveQualifiedIcons 0xa6b1e24)
	bool DoesLeaderboardHaveQualifiedIcons(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

