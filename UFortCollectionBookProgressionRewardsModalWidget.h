// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
// Size: 0x580
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{
	struct TWeakObjectPtr<class UClass> RewardWidgetClass; // 0x518 (0x28)
	struct FMargin RewardWidgetPadding; // 0x540 (0x10)
	int NumRewardsToShow; // 0x550 (0x4)
	unsigned char unreflected_554[0x4]; // 0x554 (0x4) 
	class UVerticalBox* RewardBoxWidget; // 0x558 (0x8)
	class UVerticalBox* MajorRewardBoxWidget; // 0x560 (0x8)
	class UCommonTextBlock* XPTextWidget; // 0x568 (0x8)
	class UCommonNumericTextBlock* LevelTextWidget; // 0x570 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroup; // 0x578 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnSelectedButtonChanged (Underlying native function: OnSelectedButtonChanged 0x7571568)
	void OnSelectedButtonChanged(class UCommonButtonLegacy*& SelectedButton, int& ButtonIndex); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnLevelProgressionSet (Underlying native function: OnLevelProgressionSet 0x7570e48)
	void OnLevelProgressionSet(int& CurrentLevel, float& NextLvlPct, int& MaxAchievedLevel); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.InspectItemBP (Has no native function)
	void InspectItemBP(class UFortItem*& Item); // (Event | Protected | BlueprintEvent)
};

