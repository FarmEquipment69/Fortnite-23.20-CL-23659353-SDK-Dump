// Class /Script/FortniteUI.XpEarnedSubNotification
// Size: 0x2b8
class UXpEarnedSubNotification : public UCommonUserWidget
{
	class UFortQuestItem* QuestItem; // 0x290 (0x8)
	bool bHasDisplayedXp; // 0x298 (0x1)
	bool bHasDisplayedBars; // 0x299 (0x1)
	unsigned char padding_29a[0x1e]; // 0x29a (0x1e)

	/* Functions */

	// Function /Script/FortniteUI.XpEarnedSubNotification.StartNotificationIntro (Has no native function)
	void StartNotificationIntro(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.XpEarnedSubNotification.SetRewardValue (Has no native function)
	void SetRewardValue(int& RewardValue, enum EFortEarnedSubRewardType& RewardType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.XpEarnedSubNotification.FinishedDisplayAnim (Underlying native function: FinishedDisplayAnim 0xa7c2d80)
	void FinishedDisplayAnim(); // (Final | Native | Public | BlueprintCallable)
};

