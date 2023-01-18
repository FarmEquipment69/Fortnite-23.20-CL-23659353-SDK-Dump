// Class /Script/FortniteUI.BattlePassScreenPreview
// Size: 0x400
class UBattlePassScreenPreview : public UCommonUserWidget
{
	class UBattlePassScreenPreviewRewardWidget* CharacterWidget1; // 0x290 (0x8)
	class UBattlePassScreenPreviewRewardWidget* CharacterWidget2; // 0x298 (0x8)
	class UBattlePassScreenPreviewRewardWidget* CharacterWidget3; // 0x2a0 (0x8)
	class UBattlePassScreenPreviewRewardWidget* CharacterWidget4; // 0x2a8 (0x8)
	class UBattlePassScreenPreviewRewardWidget* CharacterWidget5; // 0x2b0 (0x8)
	class UBattlePassScreenPreviewRewardWidget* CharacterWidget6; // 0x2b8 (0x8)
	class UBattlePassScreenPreviewRewardWidget* CharacterWidget7; // 0x2c0 (0x8)
	class UBattlePassScreenPreviewRewardWidget* CurrencyWidget; // 0x2c8 (0x8)
	class UBattlePassScreenPurchaseButton* ButtonPurchaseBattlepass; // 0x2d0 (0x8)
	class UBattlePassScreenPurchaseButton* ButtonPurchaseBattlePassBundle; // 0x2d8 (0x8)
	class UCommonTextBlock* TextInstantUnlockTotalRewardCount; // 0x2e0 (0x8)
	class UCommonTextBlock* TextInstantUnlockSpecificSummary; // 0x2e8 (0x8)
	class UCommonTextBlock* TextInstantAdditionalRewards; // 0x2f0 (0x8)
	class UBattlePassVBuckSummary* WidgetVBuckSummary; // 0x2f8 (0x8)
	unsigned char unreflected_300[0x30]; // 0x300 (0x30) 
	struct TArray<class UBattlePassScreenPreviewRewardWidget*> CharacterWidgets; // 0x330 (0x10)
	struct FPreviewUnlockData PreviewUnlockData; // 0x340 (0xb0)
	class UBattlePassPreviewDisplayData* PreviewDisplayData; // 0x3f0 (0x8)
	float PreviewCycleRate; // 0x3f8 (0x4)
	unsigned char padding_3fc[0x4]; // 0x3fc (0x4)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassScreenPreview.OnInitData (Has no native function)
	void OnInitData(struct FPreviewUnlockData& Data, class UFortItem*& SinglePreviewCycleReward, bool& bReadyToUnlock, int& LevelUnlocked, bool& bPurchasedAnnualPass); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenPreview.OnCyclePreviewReward (Has no native function)
	void OnCyclePreviewReward(class UFortItem*& NextReward, bool& bReadyToUnlock, int& LevelUnlocked); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenPreview.HandleOnGainedFocus (Has no native function)
	void HandleOnGainedFocus(); // (Event | Protected | BlueprintEvent)
};

