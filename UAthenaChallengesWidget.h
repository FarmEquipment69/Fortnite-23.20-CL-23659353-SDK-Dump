// Class /Script/FortniteUI.AthenaChallengesWidget
// Size: 0x378
class UAthenaChallengesWidget : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	class UCommonTextBlock* TextChallenges; // 0x310 (0x8)
	class UDynamicEntryBox* DynamicEntryBoxChallengeEntries; // 0x318 (0x8)
	unsigned char unreflected_320[0x50]; // 0x320 (0x50) 
	struct FFortPrioritizedWidgetData PrioritizedWidgetData; // 0x370 (0x2)
	bool bXPSystemRequiredForChallenges; // 0x372 (0x1)
	unsigned char padding_373[0x5]; // 0x373 (0x5)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengesWidget.IsXPSystemRequiredForChallenges (Underlying native function: IsXPSystemRequiredForChallenges 0xa4706e0)
	bool IsXPSystemRequiredForChallenges(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaChallengesWidget.HandleDisplayDynamicQuestUpdate (Underlying native function: HandleDisplayDynamicQuestUpdate 0xa46fec0)
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo*& QuestObjective, bool& DisplayStatusUpdate, bool& DisplayAnnouncementUpdate); // (Native | Protected)

	// Function /Script/FortniteUI.AthenaChallengesWidget.BP_WidgetIsFinished (Has no native function)
	void BPWidgetIsFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengesWidget.BP_OnWidgetActivated (Has no native function)
	void BPOnWidgetActivated(); // (Event | Protected | BlueprintEvent)
};

