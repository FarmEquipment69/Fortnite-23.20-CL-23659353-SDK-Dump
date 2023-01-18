// Class /Script/CommonUI.CommonWidgetCarouselNavBar
// Size: 0x190
class UCommonWidgetCarouselNavBar : public UWidget
{
	class UClass* ButtonWidgetType; // 0x148 (0x8)
	struct FMargin ButtonPadding; // 0x150 (0x10)
	unsigned char unreflected_160[0x10]; // 0x160 (0x10) 
	class UCommonWidgetCarousel* LinkedCarousel; // 0x170 (0x8)
	class UCommonButtonGroupBase* ButtonGroup; // 0x178 (0x8)
	struct TArray<class UCommonButtonBase*> Buttons; // 0x180 (0x10)

	/* Functions */

	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel (Underlying native function: SetLinkedCarousel 0x6a4de4c)
	void SetLinkedCarousel(class UCommonWidgetCarousel*& CommonCarousel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged (Underlying native function: HandlePageChanged 0x6a4c050)
	void HandlePageChanged(class UCommonWidgetCarousel*& CommonCarousel, int& PageIndex); // (Final | Native | Protected)

	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked (Underlying native function: HandleButtonClicked 0x6a4bee0)
	void HandleButtonClicked(class UCommonButtonBase*& AssociatedButton, int& ButtonIndex); // (Final | Native | Protected)
};

