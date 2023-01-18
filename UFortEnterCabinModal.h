// Class /Script/FortniteUI.FortEnterCabinModal
// Size: 0x3d8
class UFortEnterCabinModal : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UWidgetSwitcher* WidgetSwitcherCabinScreens; // 0x3b0 (0x8)
	class UWidget* VerticalBoxCrewCancelled; // 0x3b8 (0x8)
	class UWidget* VerticalBoxEnterCabin; // 0x3c0 (0x8)
	class UFortRichTextBlockLegacy* LinkText; // 0x3c8 (0x8)
	class UCommonButtonBase* ButtonContinue; // 0x3d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortEnterCabinModal.SwapPanel (Has no native function)
	void SwapPanel(class UWidget*& PanelToSwapTo); // (Event | Protected | BlueprintEvent)
};

