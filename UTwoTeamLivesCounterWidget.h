// Class /Script/FortniteUI.TwoTeamLivesCounterWidget
// Size: 0x340
class UTwoTeamLivesCounterWidget : public ULTMWidgetBase
{
	class AFortPlayerStateAthena* CurrentPlayerState; // 0x328 (0x8)
	unsigned char padding_330[0x10]; // 0x330 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.TwoTeamLivesCounterWidget.OnPlayerDied (Underlying native function: OnPlayerDied 0xa5a40b4)
	void OnPlayerDied(class AFortPlayerStateAthena*& DeadPlayer); // (Final | Native | Protected)

	// Function /Script/FortniteUI.TwoTeamLivesCounterWidget.OnLivesCountUpdated (Has no native function)
	void OnLivesCountUpdated(int& LocalLivesCount, int& EnemyLivesCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.TwoTeamLivesCounterWidget.OnFriendlyTeamScoreUpdated (Has no native function)
	void OnFriendlyTeamScoreUpdated(struct FTDMTeamScoreData& ScoreData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.TwoTeamLivesCounterWidget.OnEnemyTeamScoreUpdated (Has no native function)
	void OnEnemyTeamScoreUpdated(struct FTDMTeamScoreData& ScoreData); // (Event | Protected | BlueprintEvent)
};

