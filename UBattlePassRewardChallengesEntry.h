// Class /Script/FortniteUI.BattlePassRewardChallengesEntry
// Size: 0x2b0
class UBattlePassRewardChallengesEntry : public UCommonUserWidget
{
	class UCommonTextBlock* TextObjectiveDescription; // 0x290 (0x8)
	class UCommonTextBlock* TextObjectivesCompleted; // 0x298 (0x8)
	class UProgressBar* ProgressBarObjectivesCompleted; // 0x2a0 (0x8)
	class UFortLazyImage* ImageCompletedObjective; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassRewardChallengesEntry.OnResetChallenge (Has no native function)
	void OnResetChallenge(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassRewardChallengesEntry.OnChallengeComplete (Has no native function)
	void OnChallengeComplete(); // (Event | Protected | BlueprintEvent)
};

