// Class /Script/FortniteUI.FortNotificationEntry_MiniChallenge
// Size: 0x2e8
class UFortNotificationEntry_MiniChallenge : public UFortNotificationEntry
{
	struct TWeakObjectPtr<class UFortQuestItem> CompletedQuest; // 0x2d0 (0x8)
	class UAthenaMiniChallengeEntry* MiniChallenge; // 0x2d8 (0x8)
	class UXpEarnedSubNotification* XpSubNotification; // 0x2e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortNotificationEntry_MiniChallenge.TryToUpdateXpCompWithQuestReward (Underlying native function: TryToUpdateXpCompWithQuestReward 0xa7c4524)
	void TryToUpdateXpCompWithQuestReward(); // (Final | Native | Public | BlueprintCallable)
};

