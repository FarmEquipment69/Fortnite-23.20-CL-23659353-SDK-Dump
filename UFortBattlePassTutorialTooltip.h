// Class /Script/BattlePassBase.FortBattlePassTutorialTooltip
// Size: 0x2a0
class UFortBattlePassTutorialTooltip : public UCommonUserWidget
{
	class UCommonRichTextBlock* TextTooltip; // 0x290 (0x8)
	unsigned char padding_298[0x8]; // 0x298 (0x8)

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.ShowTooltip (Has no native function)
	void ShowTooltip(); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.SetTooltipEnabled (Underlying native function: SetTooltipEnabled 0x7271028)
	void SetTooltipEnabled(bool& bEnable); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.SetText (Underlying native function: SetText 0x7270f1c)
	void SetText(struct FText& Text); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.HideTooltip (Has no native function)
	void HideTooltip(); // (Event | Protected | BlueprintEvent)
};

