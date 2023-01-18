// Class /Script/CommonUI.CommonWidgetCarousel
// Size: 0x1a8
class UCommonWidgetCarousel : public UPanelWidget
{
	int ActiveWidgetIndex; // 0x160 (0x4)
	unsigned char unreflected_164[0x4]; // 0x164 (0x4) 
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x168 (0x10)
	unsigned char padding_178[0x30]; // 0x178 (0x30)

	/* Functions */

	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex (Underlying native function: SetActiveWidgetIndex 0x6a4cdfc)
	void SetActiveWidgetIndex(int& Index); // (Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidget (Underlying native function: SetActiveWidget 0x6a4cd78)
	void SetActiveWidget(class UWidget*& Widget); // (Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonWidgetCarousel.PreviousPage (Underlying native function: PreviousPage 0x6a4c7b8)
	void PreviousPage(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonWidgetCarousel.NextPage (Underlying native function: NextPage 0x6a4c674)
	void NextPage(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonWidgetCarousel.GetWidgetAtIndex (Underlying native function: GetWidgetAtIndex 0x6a4be38)
	class UWidget* GetWidgetAtIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex (Underlying native function: GetActiveWidgetIndex 0x6a4abf8)
	int GetActiveWidgetIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonWidgetCarousel.EndAutoScrolling (Underlying native function: EndAutoScrolling 0x6a4a980)
	void EndAutoScrolling(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonWidgetCarousel.BeginAutoScrolling (Underlying native function: BeginAutoScrolling 0x6a4a490)
	void BeginAutoScrolling(float& ScrollInterval); // (Final | Native | Public | BlueprintCallable)
};

