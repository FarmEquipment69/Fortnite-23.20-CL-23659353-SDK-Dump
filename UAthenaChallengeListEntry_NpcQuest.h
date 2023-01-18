// Class /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest
// Size: 0x4b0
class UAthenaChallengeListEntry_NpcQuest : public UAthenaChallengeListEntryBase
{
	class URichTextBlock* RichTextChallengeDesc; // 0x2a8 (0x8)
	class URichTextBlock* RichTextObjectivesCompletedSelected; // 0x2b0 (0x8)
	class URichTextBlock* RichTextObjectivesCompletedUnselected; // 0x2b8 (0x8)
	class UFortLazyImage* LazyImageSourceIcon; // 0x2c0 (0x8)
	class URichTextBlock* RichTextSourceName; // 0x2c8 (0x8)
	class URichTextBlock* RichTextFlavorText; // 0x2d0 (0x8)
	class UAthenaChallengeDateTimeTextBlock* DateTimeTextTimeRemaining; // 0x2d8 (0x8)
	class UCommonButtonBase* ButtonRemoveQuest; // 0x2e0 (0x8)
	class UFortHoldableButton* ButtonReplaceQuest; // 0x2e8 (0x8)
	class USizeBox* SizeBoxCornerUL; // 0x2f0 (0x8)
	class UFortLazyImage* LazyImageIconUL; // 0x2f8 (0x8)
	class UAthenaChallengeRewards* UserWidgetRewards; // 0x300 (0x8)
	class UCommonTextBlock* TextQuestID; // 0x308 (0x8)
	class UCommonTextBlock* TextReplaceQuest; // 0x310 (0x8)
	class USizeBox* SizeBoxReplaceQuest; // 0x318 (0x8)
	class USizeBox* SizeBoxStyleSize; // 0x320 (0x8)
	class UFortLazyImage* LazyImageReplaceQuestIndicator; // 0x328 (0x8)
	class UCommonActionWidget* ActionWidgetReplaceQuest; // 0x330 (0x8)
	class USizeBox* SizeBoxPlayerLeftMatch; // 0x338 (0x8)
	struct FText TextConfirmRemoveQuestTitle; // 0x340 (0x18)
	struct FText TextConfirmRemoveQuestDescription; // 0x358 (0x18)
	struct FText TextReplaceQuestGamepad; // 0x370 (0x18)
	struct FText TextReplaceQuestMouse; // 0x388 (0x18)
	struct FText TextReplaceQuestTouch; // 0x3a0 (0x18)
	struct FText TextExpiredQuest; // 0x3b8 (0x18)
	struct FText TextExpiredQuestFrontEnd; // 0x3d0 (0x18)
	struct TWeakObjectPtr<class UObject> DefaultPortraitDisplayAsset; // 0x3e8 (0x28)
	struct TWeakObjectPtr<class UObject> PinnedQuestIcon; // 0x410 (0x28)
	struct TWeakObjectPtr<class UObject> SharedQuestIcon; // 0x438 (0x28)
	unsigned char unreflected_460[0x18]; // 0x460 (0x18) 
	class UHorizontalBox* HorizontalBoxDefaultWidgetsRoot; // 0x478 (0x8)
	enum EChallengeListEntryType EntryType; // 0x480 (0x1)
	unsigned char padding_481[0x2f]; // 0x481 (0x2f)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.UpdateIconUL (Underlying native function: UpdateIconUL 0xa4e3418)
	void UpdateIconUL(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.OnSetState (Has no native function)
	void OnSetState(bool& bIsCompleted, bool& bIsLocked, bool& bIsPartyAssisted, bool& bIsGroupChallenge); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.OnReplaceQuestConfirmed__DelegateSignature (Has no native function)
	void OnReplaceQuestConfirmedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.IsSelected (Underlying native function: IsSelected 0xa4e2410)
	bool IsSelected(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.IsChallengeRefreshingDaily (Underlying native function: IsChallengeRefreshingDaily 0xa4e233c)
	bool IsChallengeRefreshingDaily(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.HandleQuestSeen (Underlying native function: HandleQuestSeen 0xa4e1ab4)
	void HandleQuestSeen(class UFortAccountItem*& AccountItem); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.HandleObjectiveUpdate (Underlying native function: HandleObjectiveUpdate 0xa4e1400)
	void HandleObjectiveUpdate(class UFortQuestItem*& QuestItem, struct FName& Objective, int& AchievedCount, int& GoalCount); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.GetIsCompleted (Underlying native function: GetIsCompleted 0x88f97bc)
	bool GetIsCompleted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.BP_OnTimerSet (Has no native function)
	void BPOnTimerSet(enum EAthenaChallengeTimerState& TimerState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.BP_OnSelectedForQuestReplacing (Has no native function)
	void BPOnSelectedForQuestReplacing(bool& bSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.BP_OnRaritySet (Has no native function)
	void BPOnRaritySet(enum EFortRarity& Rarity); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.BP_OnChallengeSeenChanged (Has no native function)
	void BPOnChallengeSeenChanged(bool& bChallengeSeen); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeListEntry_NpcQuest.BP_FormatForChallengeOwnerLeftGame (Has no native function)
	void BPFormatForChallengeOwnerLeftGame(bool& bHasOwnerLeftGame); // (Event | Protected | BlueprintEvent)
};

