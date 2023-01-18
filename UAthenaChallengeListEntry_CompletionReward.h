// Class /Script/FortniteUI.AthenaChallengeListEntry_CompletionReward
// Size: 0x2c0
class UAthenaChallengeListEntry_CompletionReward : public UAthenaChallengeListEntryBase
{
	class UAthenaChallengeRewardDisplay* RewardCompletionReward; // 0x2a8 (0x8)
	class UCommonRichTextBlock* RichTextDescription; // 0x2b0 (0x8)
	class UAthenaChallengeProgressBar* ChallengeProgressObjectivesCompleted; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeListEntry_CompletionReward.OnRewardInfoSet (Has no native function)
	void OnRewardInfoSet(bool& bIsCompleted, struct FFortChallengeSetStyle& DisplayStyle); // (Event | Protected | HasOutParms | BlueprintEvent)
};

