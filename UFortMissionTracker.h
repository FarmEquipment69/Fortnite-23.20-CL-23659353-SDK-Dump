// Class /Script/FortniteUI.FortMissionTracker
// Size: 0x328
class UFortMissionTracker : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x8]; // 0x2d0 (0x8) 
	class UFortMissionTrackerList* MissionTrackerList; // 0x2d8 (0x8)
	class UFortQuestTrackerList* MainQuestList; // 0x2e0 (0x8)
	class UFortQuestTrackerList* PinnedQuestsList; // 0x2e8 (0x8)
	class UWidget* AdditionalEntriesIndicator; // 0x2f0 (0x8)
	class UCommonNumericTextBlock* DebugHeightEstimate; // 0x2f8 (0x8)
	float AllowedSize; // 0x300 (0x4)
	bool bEnforceHeightLimit; // 0x304 (0x1)
	bool bEnableMainQuestList; // 0x305 (0x1)
	bool bEnablePinnedQuestList; // 0x306 (0x1)
	unsigned char unreflected_307[0x1]; // 0x307 (0x1) 
	int VisibleMissionCategories; // 0x308 (0x4)
	bool bSizeEstimateNeedsRefresh; // 0x30c (0x1)
	unsigned char unreflected_30d[0x3]; // 0x30d (0x3) 
	float LastRemainingSizeForPinnedQuests; // 0x310 (0x4)
	unsigned char padding_314[0x14]; // 0x314 (0x14)

	/* Functions */

	// Function /Script/FortniteUI.FortMissionTracker.SetEnablePinnedQuestList (Underlying native function: SetEnablePinnedQuestList 0xa84981c)
	void SetEnablePinnedQuestList(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionTracker.SetEnableMainQuestList (Underlying native function: SetEnableMainQuestList 0xa84976c)
	void SetEnableMainQuestList(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionTracker.RefreshSizeEstimate (Underlying native function: RefreshSizeEstimate 0xa849230)
	void RefreshSizeEstimate(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortMissionTracker.HandleSizeEstimateChanged (Underlying native function: HandleSizeEstimateChanged 0xa848288)
	void HandleSizeEstimateChanged(class UObject*& ChangedElement); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortMissionTracker.HandleDebugHUDObjectiveHeightChanged (Underlying native function: HandleDebugHUDObjectiveHeightChanged 0xa847c0c)
	void HandleDebugHUDObjectiveHeightChanged(bool& bIsDebugging); // (Final | Native | Protected)
};

