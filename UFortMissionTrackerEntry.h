// Class /Script/FortniteUI.FortMissionTrackerEntry
// Size: 0x338
class UFortMissionTrackerEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FMulticastInlineDelegate OnMissionEntryVisibilityChanged; // 0x298 (0x10)
	class UClass* SubEntryClass; // 0x2a8 (0x8)
	bool bConfigureAsHUD; // 0x2b0 (0x1)
	bool bHiddenByHeightConstraint; // 0x2b1 (0x1)
	unsigned char unreflected_2b2[0x6]; // 0x2b2 (0x6) 
	class UCommonTextBlock* MissionNameText; // 0x2b8 (0x8)
	class UVerticalBox* ObjectivesListBox; // 0x2c0 (0x8)
	class UImage* UpperSeparator; // 0x2c8 (0x8)
	class AFortMission* TrackedMission; // 0x2d0 (0x8)
	struct FMulticastInlineDelegate OnSizeEstimateChangedDelegate; // 0x2d8 (0x10)
	unsigned char padding_2e8[0x50]; // 0x2e8 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortMissionTrackerEntry.UpdateVisibility (Underlying native function: UpdateVisibility 0xa84824c)
	void UpdateVisibility(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortMissionTrackerEntry.OnMissionSet (Has no native function)
	void OnMissionSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortMissionTrackerEntry.HandleObjectivesChanged (Underlying native function: HandleObjectivesChanged 0xa848274)
	void HandleObjectivesChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortMissionTrackerEntry.HandleMissionInfoSet (Underlying native function: HandleMissionInfoSet 0xa84824c)
	void HandleMissionInfoSet(); // (Final | Native | Protected)
};

