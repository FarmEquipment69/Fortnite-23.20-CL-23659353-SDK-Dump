// Class /Script/FortniteUI.AthenaVisitedAreaDisplay
// Size: 0x408
class UAthenaVisitedAreaDisplay : public UAthenaDiscoverabilityBase
{
	unsigned char unreflected_328[0xd8]; // 0x328 (0xd8) 
	class UCommonTextBlock* CommonTextBlockAvailableChallenges; // 0x400 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaVisitedAreaDisplay.OnNewVisited (Has no native function)
	void OnNewVisited(struct FText& LocalizedLocationName, struct TWeakObjectPtr<class USoundCue>& DiscoveredSoundCue, bool& bIsNamedLocation, bool& bIsDiscovered); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaVisitedAreaDisplay.HandleNewContextualObjectives (Underlying native function: HandleNewContextualObjectives 0xa4e1350)
	void HandleNewContextualObjectives(struct TArray<class UFortQuestItem*>& ContextualQuests); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.AthenaVisitedAreaDisplay.HandleContextualObjectivesInvalidated (Underlying native function: HandleContextualObjectivesInvalidated 0xa4e0e3c)
	void HandleContextualObjectivesInvalidated(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaVisitedAreaDisplay.BP_HandlePlaylistExtensionWidgetCreated (Has no native function)
	void BPHandlePlaylistExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)
};

