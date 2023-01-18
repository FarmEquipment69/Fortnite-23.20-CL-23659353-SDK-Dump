// Class /Script/FortniteUI.GGProgressWidget
// Size: 0x348
class UGGProgressWidget : public ULTMWidgetBase
{
	int PointsToGoalThreshold; // 0x328 (0x4)
	unsigned char unreflected_32c[0x4]; // 0x32c (0x4) 
	struct TArray<struct FFortInGameLeaderboardPlacementData> TopPlacedEnemies; // 0x330 (0x10)
	unsigned char padding_340[0x8]; // 0x340 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.GGProgressWidget.UpdateTopThreeEnemies (Has no native function)
	void UpdateTopThreeEnemies(struct TArray<struct FFortInGameLeaderboardPlacementData>& TopThreeEnemies); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.GGProgressWidget.UpdateLocalPlayer (Has no native function)
	void UpdateLocalPlayer(struct FFortInGameLeaderboardPlacementData& LocalPlayer); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.GGProgressWidget.OnPlayerNearGoal (Has no native function)
	void OnPlayerNearGoal(struct FFortInGameLeaderboardPlacementData& PlayerNearGoal); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.GGProgressWidget.OnLeaderboardUpdate (Underlying native function: OnLeaderboardUpdate 0xa57f0ac)
	void OnLeaderboardUpdate(struct TArray<struct FFortInGameLeaderboardPlacementData>& Data); // (Final | Native | Protected | HasOutParms)
};

