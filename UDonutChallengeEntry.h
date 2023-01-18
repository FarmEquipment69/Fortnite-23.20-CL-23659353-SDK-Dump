// Class /Script/FortniteUI.DonutChallengeEntry
// Size: 0x1450
class UDonutChallengeEntry : public UCommonButtonLegacy
{
	class UCommonTextBlock* TextTitle; // 0x1430 (0x8)
	class UFortLazyImage* ImageReward; // 0x1438 (0x8)
	class UImage* ImageCompleted; // 0x1440 (0x8)
	class UAthenaChallengeProgressBar* ProgressBarChallenge; // 0x1448 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.DonutChallengeEntry.BPIsCompleted (Has no native function)
	void BPIsCompleted(bool& InCompletion); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.DonutChallengeEntry.BPHasRewardTexture (Has no native function)
	void BPHasRewardTexture(bool& InHasReward); // (Event | Public | BlueprintEvent)
};

