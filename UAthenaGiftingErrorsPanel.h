// Class /Script/GiftingUI.AthenaGiftingErrorsPanel
// Size: 0x408
class UAthenaGiftingErrorsPanel : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x30]; // 0x3a8 (0x30) 
	class URichTextBlock* TextRecipientInfo; // 0x3d8 (0x8)
	class URichTextBlock* TextTitle; // 0x3e0 (0x8)
	class UCommonButtonLegacy* ButtonMobileClose; // 0x3e8 (0x8)
	class UCommonButtonLegacy* ButtonBack; // 0x3f0 (0x8)
	class UCommonButtonLegacy* ButtonContinue; // 0x3f8 (0x8)
	class UTileView* TileViewItems; // 0x400 (0x8)

	/* Functions */

	// Function /Script/GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility (Has no native function)
	void UpdateGiftEligibility(bool& bStillGiftable); // (Event | Protected | BlueprintEvent)
};

