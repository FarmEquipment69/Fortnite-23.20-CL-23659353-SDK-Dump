// Class /Script/CrewUI.FortProgressiveStageList
// Size: 0x3f8
class UFortProgressiveStageList : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	class UCommonButtonGroupBase* ButtonGroupStageItems; // 0x3c0 (0x8)
	class UAthenaScrollBox* ScrollBoxStageList; // 0x3c8 (0x8)
	class UFortSwipePanel* SwipePanelNavigation; // 0x3d0 (0x8)
	unsigned char unreflected_3d8[0x8]; // 0x3d8 (0x8) 
	struct TArray<class UFortProgressiveStageWidget*> Stages; // 0x3e0 (0x10)
	unsigned char padding_3f0[0x8]; // 0x3f0 (0x8)

	/* Functions */

	// Function /Script/CrewUI.FortProgressiveStageList.SelectStageInDirection (Underlying native function: SelectStageInDirection 0x73d3644)
	void SelectStageInDirection(int& Direction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CrewUI.FortProgressiveStageList.ClearStageWidgets (Has no native function)
	void ClearStageWidgets(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.FortProgressiveStageList.AddStageWidget (Has no native function)
	class UFortProgressiveStageWidget* AddStageWidget(); // (Event | Protected | BlueprintEvent)
};

