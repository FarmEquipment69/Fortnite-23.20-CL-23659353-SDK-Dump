// Class /Script/FortniteUI.BattleLabRewardWidget
// Size: 0x380
class UBattleLabRewardWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	struct TArray<class UFortQuestItem*> CompletedQuests; // 0x310 (0x10)
	struct TArray<class UFortQuestItem*> NewlyGrantedQuests; // 0x320 (0x10)
	struct TArray<struct FFortItemQuantityPair> GrantedRewards; // 0x330 (0x10)
	struct TArray<class UFortQuestItem*> OldQuests; // 0x340 (0x10)
	unsigned char unreflected_350[0x8]; // 0x350 (0x8) 
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x358 (0x2)
	unsigned char unreflected_35a[0x6]; // 0x35a (0x6) 
	struct FGameplayTagContainer RequiredTags; // 0x360 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.BattleLabRewardWidget.OpenWidget (Has no native function)
	void OpenWidget(struct FBattleLabDisplayData& DisplayData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.BattleLabRewardWidget.OnWidgetIsFinished (Underlying native function: OnWidgetIsFinished 0xa580014)
	void OnWidgetIsFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.BattleLabRewardWidget.HandleOnQuestsGranted (Underlying native function: HandleOnQuestsGranted 0xa57e08c)
	void HandleOnQuestsGranted(struct TArray<class UFortQuestItem*>& Quests); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.BattleLabRewardWidget.HandleOnQuestCompleted (Underlying native function: HandleOnQuestCompleted 0xa57dff0)
	void HandleOnQuestCompleted(struct TArray<class UFortQuestItem*>& Quests); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.BattleLabRewardWidget.HandleDisplayDynamicQuestUpdate (Underlying native function: HandleDisplayDynamicQuestUpdate 0xa57d89c)
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo*& QuestObjective, bool& DisplayStatusUpdate, bool& DisplayAnnouncementUpdate); // (Final | Native | Protected)
};

