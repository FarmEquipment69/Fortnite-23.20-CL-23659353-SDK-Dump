// Class /Script/FortniteUI.FortQuestTrackerEntry
// Size: 0x2f0
class UFortQuestTrackerEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	class UCommonTextBlock* QuestNameText; // 0x2a0 (0x8)
	class UCommonListView* ObjectivesList; // 0x2a8 (0x8)
	class UFortQuestItem* TrackedQuest; // 0x2b0 (0x8)
	struct FMulticastInlineDelegate OnHUDQuestFinalObjectiveHiddenDelegate; // 0x2b8 (0x10)
	struct TArray<class UFortQuestObjectiveInfo*> HUDCachedObjectiveInfos; // 0x2c8 (0x10)
	bool bConfigureAsHUD; // 0x2d8 (0x1)
	unsigned char unreflected_2d9[0x7]; // 0x2d9 (0x7) 
	struct FMulticastInlineDelegate OnSizeEstimateChangedDelegate; // 0x2e0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortQuestTrackerEntry.OnSetup (Has no native function)
	void OnSetup(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestTrackerEntry.HandleHUDObjectiveCompletion (Underlying native function: HandleHUDObjectiveCompletion 0xa88e0b4)
	void HandleHUDObjectiveCompletion(class UFortQuestObjectiveInfo*& QuestObjective); // (Final | Native | Protected)
};

