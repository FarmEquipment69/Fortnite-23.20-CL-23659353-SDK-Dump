// Class /Script/FortniteUI.FortCoreGamerScoreTracker
// Size: 0x330
class UFortCoreGamerScoreTracker : public UMinigameWidgetBase
{
	unsigned char unreflected_330[0x330]; 

	/* Functions */

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.PopulateTeamRows (Underlying native function: PopulateTeamRows 0xa667648)
	void PopulateTeamRows(struct TArray<class UFortCoreGamerScoreTrackerRow*>& ScoreTrackerRows); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.OnUpdate (Has no native function)
	void OnUpdate(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.OnSeparatorVisibilitySet (Has no native function)
	void OnSeparatorVisibilitySet(bool& bVisible); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetTimeRemainingText (Underlying native function: GetTimeRemainingText 0xa663024)
	struct FText GetTimeRemainingText(bool& bHasTimeLimit); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetTeamNameForPlayerState (Underlying native function: GetTeamNameForPlayerState 0xa662d64)
	struct FText GetTeamNameForPlayerState(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetTeamName (Underlying native function: GetTeamName 0xa662c4c)
	struct FText GetTeamName(int& InTeamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetTeamData (Underlying native function: GetTeamData 0xa662ae0)
	void GetTeamData(int& DesiredTeamIndex, struct FMinigameTeam& OutTeam, bool& bFoundTeam); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetScoreForTeam (Underlying native function: GetScoreForTeam 0xa662334)
	int GetScoreForTeam(int& InTeamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetScoreForPlayer (Underlying native function: GetScoreForPlayer 0x61c2b40)
	int GetScoreForPlayer(class APlayerState*& InPlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetRankings (Underlying native function: GetRankings 0x61c29e0)
	struct TArray<struct FCoreGamerRankingInfo> GetRankings(int& OutLocalRankingArrayIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetLocalTeamIndex (Underlying native function: GetLocalTeamIndex 0xa66143c)
	int GetLocalTeamIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetHighestOpposingTeamIndex (Underlying native function: GetHighestOpposingTeamIndex 0xa6611d8)
	int GetHighestOpposingTeamIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortCoreGamerScoreTracker.GetGoalScore (Underlying native function: GetGoalScore 0xa660f40)
	int GetGoalScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

