// Class /Script/FortniteUI.FortQuestUpdateEntry
// Size: 0x300
class UFortQuestUpdateEntry : public UCommonUserWidget
{
	struct FMulticastInlineDelegate FinishedDisplayingQuests; // 0x290 (0x10)
	class UPanelWidget* ObjectivesBox; // 0x2a0 (0x8)
	int NumberOfObjectivesToDisplayAtTheSameTime; // 0x2a8 (0x4)
	int NumberOfWidgetsToPreCreateWhenDisplayingAllObjectives; // 0x2ac (0x4)
	class UFortQuestItem* QuestItem; // 0x2b0 (0x8)
	unsigned char unreflected_2b8[0x8]; // 0x2b8 (0x8) 
	class UClass* SubEntryClass; // 0x2c0 (0x8)
	struct TArray<class UFortQuestObjectiveEntry*> QuestObjectiveEntryPool; // 0x2c8 (0x10)
	struct TArray<class UFortQuestObjectiveEntry*> AvailableQuestObjectiveEntryArray; // 0x2d8 (0x10)
	unsigned char padding_2e8[0x18]; // 0x2e8 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortQuestUpdateEntry.StartQuestOutro (Has no native function)
	void StartQuestOutro(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestUpdateEntry.StartQuestIntro (Has no native function)
	void StartQuestIntro(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestUpdateEntry.SetupAsAnnouncement (Has no native function)
	void SetupAsAnnouncement(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestUpdateEntry.SetQuestItem (Underlying native function: SetQuestItem 0xa88f960)
	void SetQuestItem(class UFortQuestObjectiveInfo*& ObjectiveInfo, bool& bIsAnnouncement); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuestUpdateEntry.QuestItemSet (Has no native function)
	void QuestItemSet(class UFortQuestItem*& QuestItemToCheck); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestUpdateEntry.GetNumDisplayedObjectives (Underlying native function: GetNumDisplayedObjectives 0xa88d3c4)
	int GetNumDisplayedObjectives(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuestUpdateEntry.FinishQuestOutro (Underlying native function: FinishQuestOutro 0x756d600)
	void FinishQuestOutro(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuestUpdateEntry.FinishQuestIntro (Underlying native function: FinishQuestIntro 0xa88d244)
	void FinishQuestIntro(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuestUpdateEntry.CurrentlyDisplayedObjectiveFinished (Underlying native function: CurrentlyDisplayedObjectiveFinished 0xa88d07c)
	void CurrentlyDisplayedObjectiveFinished(class UFortQuestObjectiveEntry*& QuestObjective); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortQuestUpdateEntry.CanAddObjective (Underlying native function: CanAddObjective 0xa88ce68)
	bool CanAddObjective(class UFortQuestItem*& QuestItemToCheck); // (Final | Native | Public | BlueprintCallable)
};

