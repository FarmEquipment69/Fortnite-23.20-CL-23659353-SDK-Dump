// Class /Script/FortniteUI.AthenaSpatialStyleChallengeUnlockReason
// Size: 0x2b8
class UAthenaSpatialStyleChallengeUnlockReason : public UCommonUserWidget
{
	class UCommonRichTextBlock* RichTextDescription; // 0x290 (0x8)
	class UHorizontalBox* HBoxMissionProgress; // 0x298 (0x8)
	class UProgressBar* ProgressBarPercentCompleteFront; // 0x2a0 (0x8)
	class UProgressBar* ProgressBarPercentCompleteBack; // 0x2a8 (0x8)
	unsigned char padding_2b0[0x8]; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpatialStyleChallengeUnlockReason.UpdateMissionProgressCount (Has no native function)
	void UpdateMissionProgressCount(int& CompletedCount, int& RequiredCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialStyleChallengeUnlockReason.ShowBattlepassPurchaseReason (Has no native function)
	void ShowBattlepassPurchaseReason(struct FText& InSeason); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialStyleChallengeUnlockReason.ShowBattlepassLevelReason (Has no native function)
	void ShowBattlepassLevelReason(int& InLevel); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialStyleChallengeUnlockReason.OnUnlockReasonUpdated (Has no native function)
	void OnUnlockReasonUpdated(bool& bInUnlocked); // (Event | Protected | BlueprintEvent)
};

