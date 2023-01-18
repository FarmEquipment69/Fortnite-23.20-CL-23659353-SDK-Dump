// Class /Script/CrewUI.BattlePassCrewPurchaseButton
// Size: 0x14a0
class UBattlePassCrewPurchaseButton : public UFortHoldableButton
{
	enum EBattlePassPurchaseButtonCurrencyType CurrencyType; // 0x1478 (0x1)
	unsigned char unreflected_1479[0x7]; // 0x1479 (0x7) 
	class UCommonTextBlock* TextLabel; // 0x1480 (0x8)
	class UCommonTextBlock* TextSecondaryLabel; // 0x1488 (0x8)
	class UCommonTextBlock* TextFinalCost; // 0x1490 (0x8)
	class UWidget* ContainerSecondaryLabel; // 0x1498 (0x8)

	/* Functions */

	// Function /Script/CrewUI.BattlePassCrewPurchaseButton.OnCurrencyUpdated (Has no native function)
	void OnCurrencyUpdated(); // (Event | Protected | BlueprintEvent)
};

