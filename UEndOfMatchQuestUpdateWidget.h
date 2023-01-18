// Class /Script/FortniteUI.EndOfMatchQuestUpdateWidget
// Size: 0x328
class UEndOfMatchQuestUpdateWidget : public UCommonUserWidget
{
	unsigned char unreflected_290[0x18]; // 0x290 (0x18) 
	struct TArray<struct FQuestRecapData> QuestUpdates; // 0x2a8 (0x10)
	struct TArray<class UEndOfMatchQuestCategoryWidget*> CreatedWidgets; // 0x2b8 (0x10)
	int MaxNumQuestWidgets; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	class UDynamicEntryBox* EntryBoxQuestUpdates; // 0x2d0 (0x8)
	class UScrollBox* ScrollBoxQuest; // 0x2d8 (0x8)
	unsigned char unreflected_2e0[0x38]; // 0x2e0 (0x38) 
	class UEndOfMatchQuestCategoryWidget* InProgressCategoryEntryWidget; // 0x318 (0x8)
	class UEndOfMatchQuestCategoryWidget* CompletedCategoryEntryWidget; // 0x320 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.EndOfMatchQuestUpdateWidget.TryToShowNextQuestUpdate (Underlying native function: TryToShowNextQuestUpdate 0xa4e32d4)
	void TryToShowNextQuestUpdate(bool& bShouldStartShowingQuests); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.EndOfMatchQuestUpdateWidget.TryPlayCreatedWidgets (Underlying native function: TryPlayCreatedWidgets 0xa4e32ac)
	void TryPlayCreatedWidgets(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.EndOfMatchQuestUpdateWidget.StartCategoryPlay (Underlying native function: StartCategoryPlay 0xa4e30bc)
	void StartCategoryPlay(class UEndOfMatchQuestCategoryWidget*& CategoryWidget); // (Final | Native | Private)

	// Function /Script/FortniteUI.EndOfMatchQuestUpdateWidget.RunIntroAnim (Has no native function)
	void RunIntroAnim(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.EndOfMatchQuestUpdateWidget.QuestUpdated (Underlying native function: QuestUpdated 0xa4e2d70)
	void QuestUpdated(class UFortQuestItem*& InUpdateData); // (Final | Native | Public)

	// Function /Script/FortniteUI.EndOfMatchQuestUpdateWidget.QuestUpdateCompleted (Underlying native function: QuestUpdateCompleted 0xa4e2a4c)
	void QuestUpdateCompleted(class UAthenaChallengeRecapEntry*& EntryWidget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.EndOfMatchQuestUpdateWidget.HandleTileFocused (Underlying native function: HandleTileFocused 0xa4e1ffc)
	void HandleTileFocused(class UCommonUserWidget*& QuestEntry); // (Final | Native | Protected)

	// Function /Script/FortniteUI.EndOfMatchQuestUpdateWidget.FinishedUpdateingQuests (Has no native function)
	void FinishedUpdateingQuests(); // (Event | Public | BlueprintEvent)
};

