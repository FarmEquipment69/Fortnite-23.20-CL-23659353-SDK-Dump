// Class /Script/FortniteUI.AthenaTeamScoreWidgetBase
// Size: 0x2f8
class UAthenaTeamScoreWidgetBase : public UFortHUDElementWidget
{
	class AFortPlayerStateAthena* CurrPlayerState; // 0x2d0 (0x8)
	int GoalScore; // 0x2d8 (0x4)
	int PreviousScore; // 0x2dc (0x4)
	int PreviousScorePlacement; // 0x2e0 (0x4)
	int PreviousDeltaScore; // 0x2e4 (0x4)
	bool bPreviousIsWinner; // 0x2e8 (0x1)
	bool bPreviousHasScore; // 0x2e9 (0x1)
	unsigned char padding_2ea[0xe]; // 0x2ea (0xe)

	/* Functions */

	// Function /Script/FortniteUI.AthenaTeamScoreWidgetBase.OnScoreChanged (Has no native function)
	void OnScoreChanged(int& Score); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTeamScoreWidgetBase.OnPlacementChanged (Has no native function)
	void OnPlacementChanged(int& Placement); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTeamScoreWidgetBase.OnLeaderboardChanged (Has no native function)
	void OnLeaderboardChanged(int& ScoreDelta, bool& bIsWinner, bool& bHasScore); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaTeamScoreWidgetBase.HandleUpdate (Underlying native function: HandleUpdate 0xa4aff40)
	void HandleUpdate(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaTeamScoreWidgetBase.HandleSpectatingChanged (Underlying native function: HandleSpectatingChanged 0xa4afdb4)
	void HandleSpectatingChanged(class AFortPlayerStateZone*& SpectatingTarget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaTeamScoreWidgetBase.HandleScoreChanged (Underlying native function: HandleScoreChanged 0xa4afd38)
	void HandleScoreChanged(int& Score); // (Final | Native | Protected)
};

