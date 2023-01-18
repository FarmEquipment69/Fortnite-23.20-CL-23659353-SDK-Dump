// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
// Size: 0x2b0
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{
	class UCommonNumericTextBlock* LevelTextWidget; // 0x290 (0x8)
	class UFortRewardInfoWidget_Legacy* RewardWidget; // 0x298 (0x8)
	class UWidget* CheckmarkImage; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x8]; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.SetAssociatedLevel (Underlying native function: SetAssociatedLevel 0x7573290)
	void SetAssociatedLevel(int& Level); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.OnXPRequiredChanged (Has no native function)
	void OnXPRequiredChanged(int& NewXPRequired); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.GetXPRequired (Underlying native function: GetXPRequired 0x2d00ed4)
	int GetXPRequired(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

