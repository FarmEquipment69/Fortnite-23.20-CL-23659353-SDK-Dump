// Class /Script/FortniteUI.FortNotificationEntry_Quest
// Size: 0x388
class UFortNotificationEntry_Quest : public UFortNotificationEntry
{
	struct TArray<struct FName> BoundActions; // 0x2d0 (0x10)
	int GoalCount; // 0x2e0 (0x4)
	int CurrentCount; // 0x2e4 (0x4)
	int PreviousCount; // 0x2e8 (0x4)
	bool bNeedsStagedNotification; // 0x2ec (0x1)
	unsigned char unreflected_2ed[0x3]; // 0x2ed (0x3) 
	class UFortLazyImage* LazyImageSourceIcon; // 0x2f0 (0x8)
	class UFortLazyImage* LazyImagePunchcardIcon; // 0x2f8 (0x8)
	class UCommonTextBlock* TextHeader; // 0x300 (0x8)
	class UAthenaChallengeDateTimeTextBlock* DateTimeTextTimeRemaining; // 0x308 (0x8)
	class UCommonTextBlock* TextDescription; // 0x310 (0x8)
	class UCommonTextBlock* TextCategoryDisplay; // 0x318 (0x8)
	class URichTextBlock* RichTextObjectivesCompleted; // 0x320 (0x8)
	class UCommonTextBlock* TextFlavorText; // 0x328 (0x8)
	class UBorder* BorderAssistedBy; // 0x330 (0x8)
	class UXpEarnedSubNotification* XpSubNotification; // 0x338 (0x8)
	class UButton* ButtonMobileClickCatcher; // 0x340 (0x8)
	struct TWeakObjectPtr<class UFortQuestItem> WeakQuest; // 0x348 (0x8)
	struct TWeakObjectPtr<class UObject> DefaultPortraitDisplayAsset; // 0x350 (0x28)
	struct FName ObjectiveName; // 0x378 (0x4)
	unsigned char padding_37c[0xc]; // 0x37c (0xc)

	/* Functions */

	// Function /Script/FortniteUI.FortNotificationEntry_Quest.UpdateQuestVisuals (Has no native function)
	void UpdateQuestVisuals(struct FFortChallengeSetStyle& DisplayStyle); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortNotificationEntry_Quest.UpdateDefaultObjectiveVisuals (Has no native function)
	void UpdateDefaultObjectiveVisuals(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortNotificationEntry_Quest.TrackCurrentQuest (Underlying native function: TrackCurrentQuest 0xa7c42dc)
	void TrackCurrentQuest(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortNotificationEntry_Quest.ShowNextStagedObjectiveInformation (Underlying native function: ShowNextStagedObjectiveInformation 0xa7c42c8)
	void ShowNextStagedObjectiveInformation(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortNotificationEntry_Quest.SetAssistData (Has no native function)
	void SetAssistData(bool& bWasAssisted, struct FString& OtherPlayersName); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortNotificationEntry_Quest.OnUpdateNotificationBackground (Has no native function)
	void OnUpdateNotificationBackground(bool& bUseRarityContainer, bool& bIsDailyPunchcardQuest); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortNotificationEntry_Quest.OnPlayRushedNotificationIntro (Has no native function)
	void OnPlayRushedNotificationIntro(float& Rate); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortNotificationEntry_Quest.OnEnableCompleteFlavorText (Has no native function)
	void OnEnableCompleteFlavorText(bool& IsEnabled); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortNotificationEntry_Quest.BP_OnTimerSet (Has no native function)
	void BPOnTimerSet(enum EAthenaChallengeTimerState& TimerState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortNotificationEntry_Quest.BP_OnRaritySet (Has no native function)
	void BPOnRaritySet(enum EFortRarity& Rarity); // (Event | Protected | BlueprintEvent)
};

