// Class /Script/FortniteUI.FortHighlightWidget
// Size: 0x298
class UFortHighlightWidget : public UUserWidget
{
	unsigned char unreflected_268[0x18]; // 0x268 (0x18) 
	bool bDisableHighlightNotification; // 0x280 (0x1)
	unsigned char unreflected_281[0x7]; // 0x281 (0x7) 
	class UCommonTextBlock* TextHeader; // 0x288 (0x8)
	class UCommonTextBlock* TextDescription; // 0x290 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortHighlightWidget.OnShowNotification (Has no native function)
	void OnShowNotification(bool& bShowNotification); // (Event | Protected | BlueprintEvent)
};

