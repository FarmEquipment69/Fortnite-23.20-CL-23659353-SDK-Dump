// Class /Script/FortniteUI.BattlePassScreenPreviewRewardWidget
// Size: 0x1460
class UBattlePassScreenPreviewRewardWidget : public UCommonButtonLegacy
{
	class UCommonTextBlock* TextRewardName; // 0x1430 (0x8)
	class UFortLazyImage* ImageReward; // 0x1438 (0x8)
	class UCommonTextBlock* TextRewardLevel; // 0x1440 (0x8)
	class UCommonTextBlock* TextCurrency; // 0x1448 (0x8)
	class UCommonTextBlock* TextAdditionalCurrency; // 0x1450 (0x8)
	unsigned char padding_1458[0x8]; // 0x1458 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassScreenPreviewRewardWidget.OnSetDataForCurrency (Has no native function)
	void OnSetDataForCurrency(float& LayoutPosition); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenPreviewRewardWidget.OnSetDataForCharacter (Has no native function)
	void OnSetDataForCharacter(bool& bIsReadyToUnlock, float& LayoutPosition); // (Event | Protected | BlueprintEvent)
};

