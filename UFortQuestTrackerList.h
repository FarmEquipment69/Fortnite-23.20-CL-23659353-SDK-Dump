// Class /Script/FortniteUI.FortQuestTrackerList
// Size: 0x2d0
class UFortQuestTrackerList : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	bool bConfigureAsHUD; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	class UCommonListView* QuestList; // 0x2a0 (0x8)
	struct TArray<class UFortQuestItem*> HUDCachedQuests; // 0x2a8 (0x10)
	struct FMulticastInlineDelegate OnSizeEstimateChangedDelegate; // 0x2b8 (0x10)
	bool bHasHiddenItemsDueToSize; // 0x2c8 (0x1)
	unsigned char padding_2c9[0x7]; // 0x2c9 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortQuestTrackerList.HandleSizeEstimateChanged (Underlying native function: HandleSizeEstimateChanged 0xa88e7a0)
	void HandleSizeEstimateChanged(class UObject*& ChangedElement); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortQuestTrackerList.HandleQuestsUpdated (Underlying native function: HandleQuestsUpdated 0xa88e5c0)
	void HandleQuestsUpdated(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortQuestTrackerList.HandlePinnedQuestsChanged (Underlying native function: HandlePinnedQuestsChanged 0xa88e4b0)
	void HandlePinnedQuestsChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortQuestTrackerList.HandleHUDFinalObjectiveHidden (Underlying native function: HandleHUDFinalObjectiveHidden 0xa88e034)
	void HandleHUDFinalObjectiveHidden(class UFortQuestItem*& QuestItem); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortQuestTrackerList.GetVisibleQuestsToDisplay (Underlying native function: GetVisibleQuestsToDisplay 0xa88d518)
	struct TArray<class UFortQuestItem*> GetVisibleQuestsToDisplay(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuestTrackerList.GetQuestsToDisplay (Has no native function)
	struct TArray<class UFortQuestItem*> GetQuestsToDisplay(); // (Event | Protected | BlueprintEvent)
};

