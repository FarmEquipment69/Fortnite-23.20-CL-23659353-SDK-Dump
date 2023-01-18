// Class /Script/FortniteUI.FortQuestUpdatesLog
// Size: 0x360
class UFortQuestUpdatesLog : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	class UClass* QuestEntryClass; // 0x310 (0x8)
	int MaxDisplayedQuestUpdates; // 0x318 (0x4)
	int MaxDisplayedQuestObjectives; // 0x31c (0x4)
	bool bShowFeatQuests; // 0x320 (0x1)
	bool bFeatShowNonVisibleObjectives; // 0x321 (0x1)
	unsigned char unreflected_322[0x6]; // 0x322 (0x6) 
	class UVerticalBox* QuestUpdatesBox; // 0x328 (0x8)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x330 (0x2)
	unsigned char unreflected_332[0x6]; // 0x332 (0x6) 
	struct TArray<class UFortQuestObjectiveInfo*> QueuedQuestObjectiveInfos; // 0x338 (0x10)
	struct TArray<class UFortQuestUpdateEntry*> QuestUpdateWidgets; // 0x348 (0x10)
	unsigned char padding_358[0x8]; // 0x358 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortQuestUpdatesLog.HandleQuestUpdateFinished (Underlying native function: HandleQuestUpdateFinished 0xa88e540)
	void HandleQuestUpdateFinished(class UFortQuestUpdateEntry*& QuestEntryFinished); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortQuestUpdatesLog.HandleDisplayDynamicQuestUpdate (Underlying native function: HandleDisplayDynamicQuestUpdate 0xa88dcf8)
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo*& QuestObjective, bool& DisplayStatusUpdate, bool& DisplayAnnouncementUpdate); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortQuestUpdatesLog.CreateAnnouncementUpdate (Has no native function)
	void CreateAnnouncementUpdate(class UFortQuestObjectiveInfo*& QuestItemToCheck); // (Event | Public | BlueprintEvent)
};

