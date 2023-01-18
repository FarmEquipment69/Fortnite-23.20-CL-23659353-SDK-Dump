// Class /Script/FortniteUI.FortPageNavigator
// Size: 0x440
class UFortPageNavigator : public UCommonActivatableWidget
{
	bool bEnableRightStickScrolling; // 0x3a8 (0x1)
	bool bEnableNavigationButtons; // 0x3a9 (0x1)
	unsigned char unreflected_3aa[0x6]; // 0x3aa (0x6) 
	class UFortPageNavigationButton* ButtonNext; // 0x3b0 (0x8)
	class UFortPageNavigationButton* ButtonPrevious; // 0x3b8 (0x8)
	class UAthenaScrollBox* ScrollBoxPages; // 0x3c0 (0x8)
	class UVerticalBox* VBoxPages; // 0x3c8 (0x8)
	bool bEnableSnapScrolling; // 0x3d0 (0x1)
	unsigned char unreflected_3d1[0x3]; // 0x3d1 (0x3) 
	float SnapScrollingThreshold; // 0x3d4 (0x4)
	struct FMargin PagePadding; // 0x3d8 (0x10)
	unsigned char unreflected_3e8[0x18]; // 0x3e8 (0x18) 
	class UDynamicEntryBox* EntryBoxPagesPips; // 0x400 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroupPagesPips; // 0x408 (0x8)
	unsigned char padding_410[0x30]; // 0x410 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.FortPageNavigator.SelectPage (Underlying native function: SelectPage 0xa8737d0)
	void SelectPage(int& PageIndex, bool& bSkipAnimation, bool& bForceFocusRefresh); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPageNavigator.RequestPreviousPage (Underlying native function: RequestPreviousPage 0xa873738)
	void RequestPreviousPage(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPageNavigator.RequestNextPage (Underlying native function: RequestNextPage 0xa873720)
	void RequestNextPage(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPageNavigator.OnPipButtonCreated (Has no native function)
	void OnPipButtonCreated(class UFortTextButton*& NewPipButton); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPageNavigator.HandleUserScrolled (Underlying native function: HandleUserScrolled 0xa8732a8)
	void HandleUserScrolled(float& ScrollAmount); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortPageNavigator.HandleScrollCompleted (Underlying native function: HandleScrollCompleted 0xa873210)
	void HandleScrollCompleted(float& ScrollAmount); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortPageNavigator.ClearPages (Underlying native function: ClearPages 0xa872c50)
	void ClearPages(); // (Final | Native | Public | BlueprintCallable)
};

