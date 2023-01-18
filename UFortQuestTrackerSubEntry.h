// Class /Script/FortniteUI.FortQuestTrackerSubEntry
// Size: 0x2d0
class UFortQuestTrackerSubEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	class UFortQuestObjectiveInfo* TrackedObjective; // 0x2a0 (0x8)
	struct FMulticastInlineDelegate OnSizeEstimateChangedDelegate; // 0x2a8 (0x10)
	struct FMulticastInlineDelegate OnHUDQuestObjectiveCompletedDelegate; // 0x2b8 (0x10)
	bool bConfigureAsHUD; // 0x2c8 (0x1)
	unsigned char padding_2c9[0x7]; // 0x2c9 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortQuestTrackerSubEntry.OnSetup (Has no native function)
	void OnSetup(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestTrackerSubEntry.OnQuestsUpdated (Has no native function)
	void OnQuestsUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestTrackerSubEntry.OnPlayObjectiveCompletedAnimation (Has no native function)
	void OnPlayObjectiveCompletedAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuestTrackerSubEntry.NotifyCompletionAnimationFinished (Underlying native function: NotifyCompletionAnimationFinished 0xa88efc8)
	void NotifyCompletionAnimationFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuestTrackerSubEntry.HandleQuestsUpdated (Underlying native function: HandleQuestsUpdated 0xa88e5e4)
	void HandleQuestsUpdated(); // (Final | Native | Protected)
};

