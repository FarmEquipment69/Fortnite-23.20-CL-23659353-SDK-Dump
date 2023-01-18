// Class /Script/FortniteUI.AthenaHUDFeedbackLine
// Size: 0x358
class UAthenaHUDFeedbackLine : public UFortHUDElementWidget
{
	class UFortKeybindWidget* KeybindFeedback; // 0x2d0 (0x8)
	class UCommonRichTextBlock* RichTextFeedback; // 0x2d8 (0x8)
	unsigned char padding_2e0[0x78]; // 0x2e0 (0x78)

	/* Functions */

	// Function /Script/FortniteUI.AthenaHUDFeedbackLine.OnShowEnabledUpdated (Has no native function)
	void OnShowEnabledUpdated(bool& bShowEnabled); // (Event | Protected | BlueprintEvent)
};

