// Class /Script/FortniteUI.CreativeMinigameProgressWidget
// Size: 0x2e8
class UCreativeMinigameProgressWidget : public UCommonUserWidget
{
	struct TWeakObjectPtr<class AFortPlayerStateAthena> CurrentPlayerState; // 0x290 (0x8)
	struct FScalableFloat bEnabled; // 0x298 (0x28)
	bool bMinigameActive; // 0x2c0 (0x1)
	unsigned char padding_2c1[0x27]; // 0x2c1 (0x27)

	/* Functions */

	// Function /Script/FortniteUI.CreativeMinigameProgressWidget.OnPlayerStatUpdate (Has no native function)
	void OnPlayerStatUpdate(int& CurrentPlayerTeamScore, int& CurrentPlayerTeamPlacement, int& GoalScore, struct TArray<int>& SortedTeamStats); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.CreativeMinigameProgressWidget.OnPlayerScoringUpdate (Has no native function)
	void OnPlayerScoringUpdate(int& CurrentPlayerTeamScore, int& PreviousPlayerTeamScore, int& CurrentPlayerTeamPlacement, int& PreviousPlayerTeamPlacement, int& GoalScore, struct TArray<int>& SortedTeamScores); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.CreativeMinigameProgressWidget.BP_OnHandleMinigameStarted (Has no native function)
	void BPOnHandleMinigameStarted(struct FMinigameActivityStartedData& StartData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.CreativeMinigameProgressWidget.BP_OnHandleMinigameEnded (Has no native function)
	void BPOnHandleMinigameEnded(struct FMinigameActivityEndedData& EndData); // (Event | Protected | HasOutParms | BlueprintEvent)
};

