// Class /Script/FortniteUI.FortMissionTrackerSubEntry
// Size: 0x2c8
class UFortMissionTrackerSubEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FMulticastInlineDelegate OnMissionSubEntryVisibilityChanged; // 0x298 (0x10)
	bool bConfigureAsHUD; // 0x2a8 (0x1)
	bool bHiddenByHeightConstraint; // 0x2a9 (0x1)
	unsigned char unreflected_2aa[0x6]; // 0x2aa (0x6) 
	class AFortObjectiveBase* TrackedObjective; // 0x2b0 (0x8)
	struct FMulticastInlineDelegate OnSizeEstimateChangedDelegate; // 0x2b8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortMissionTrackerSubEntry.OnObjectiveSet (Has no native function)
	void OnObjectiveSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionTrackerSubEntry.OnHiddenByHeightConstraintChanged (Has no native function)
	void OnHiddenByHeightConstraintChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionTrackerSubEntry.NotifyVisibilityChanged (Underlying native function: NotifyVisibilityChanged 0xa848b94)
	void NotifyVisibilityChanged(); // (Final | Native | Protected | BlueprintCallable)
};

