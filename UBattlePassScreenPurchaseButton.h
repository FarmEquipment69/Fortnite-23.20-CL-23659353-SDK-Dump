// Class /Script/FortniteUI.BattlePassScreenPurchaseButton
// Size: 0x1470
class UBattlePassScreenPurchaseButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x10]; // 0x1430 (0x10) 
	class UCommonTextBlock* TextFinalCost; // 0x1440 (0x8)
	class UCommonTextBlock* TextPurchaseTitle; // 0x1448 (0x8)
	class UCommonTextBlock* TextPurchaseSubtitle; // 0x1450 (0x8)
	class UCommonTextBlock* TextOriginalCost; // 0x1458 (0x8)
	class UCommonTextBlock* TextDiscountedPercentage; // 0x1460 (0x8)
	unsigned char padding_1468[0x8]; // 0x1468 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassScreenPurchaseButton.OnSetData (Has no native function)
	void OnSetData(enum EBattlePassPurchaseButtonLayout& LayoutType); // (Event | Protected | BlueprintEvent)
};

