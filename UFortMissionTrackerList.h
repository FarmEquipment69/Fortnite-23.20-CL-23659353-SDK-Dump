// Class /Script/FortniteUI.FortMissionTrackerList
// Size: 0x330
class UFortMissionTrackerList : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UClass* MissionEntryClass; // 0x298 (0x8)
	bool bConfigureAsHUD; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x7]; // 0x2a1 (0x7) 
	class UVerticalBox* MissionsListBox; // 0x2a8 (0x8)
	class UVerticalBox* SecondaryMissionsListBox; // 0x2b0 (0x8)
	struct FMulticastInlineDelegate OnMissionTrackerListVisibilityChanged; // 0x2b8 (0x10)
	int VisibleMissionCategories; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	struct FMulticastInlineDelegate OnSizeEstimateChangedDelegate; // 0x2d0 (0x10)
	unsigned char padding_2e0[0x50]; // 0x2e0 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.FortMissionTrackerList.UpdateVisibleMissionCategories (Underlying native function: UpdateVisibleMissionCategories 0xa84cf74)
	void UpdateVisibleMissionCategories(int& InVisibleMissionCategories); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionTrackerList.UpdateVisibility (Underlying native function: UpdateVisibility 0xa84cf60)
	void UpdateVisibility(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortMissionTrackerList.HandleSizeEstimateChanged (Underlying native function: HandleSizeEstimateChanged 0xa848308)
	void HandleSizeEstimateChanged(class UObject*& ChangedElement); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortMissionTrackerList.HandleMissionsUpdated (Underlying native function: HandleMissionsUpdated 0xa848260)
	void HandleMissionsUpdated(); // (Final | Native | Protected)
};

