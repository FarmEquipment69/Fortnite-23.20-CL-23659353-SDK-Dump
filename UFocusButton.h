// Class /Script/EventModeUI.FocusButton
// Size: 0x3e8
class UFocusButton : public UBacchusActionButton
{
	class UPaperSprite* StartFocusingSprite; // 0x3d8 (0x8)
	class UPaperSprite* StopFocusingSprite; // 0x3e0 (0x8)

	/* Functions */

	// Function /Script/EventModeUI.FocusButton.HandleEventModeFocusingChanged (Underlying native function: HandleEventModeFocusingChanged 0x7426bec)
	void HandleEventModeFocusingChanged(bool& bIsEventModeFocusing); // (Final | Native | Private)

	// Function /Script/EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged (Underlying native function: HandleCanUseEventModeFocusChanged 0x7426af0)
	void HandleCanUseEventModeFocusChanged(bool& bCanUseEventModeFocus); // (Final | Native | Private)
};

