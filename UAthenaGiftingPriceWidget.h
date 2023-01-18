// Class /Script/GiftingUI.AthenaGiftingPriceWidget
// Size: 0x2b0
class UAthenaGiftingPriceWidget : public UCommonUserWidget
{
	class UCommonTextBlock* TextRealMoneyPrice; // 0x290 (0x8)
	class UCommonTextBlock* TextFinalPrice; // 0x298 (0x8)
	class UCommonTextBlock* TextRegularPrice; // 0x2a0 (0x8)
	class UWidget* OverlaySalePrice; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode (Has no native function)
	void SetPresentationMode(enum EGiftingPricePresentationMode& Mode); // (Event | Protected | BlueprintEvent)
};

