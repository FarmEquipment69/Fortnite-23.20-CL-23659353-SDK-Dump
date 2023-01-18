// Class /Script/FortniteUI.FortBattlePassReward
// Size: 0x14a0
class UFortBattlePassReward : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x18]; // 0x1430 (0x18) 
	struct FName ImageParamName; // 0x1448 (0x4)
	unsigned char unreflected_144c[0x4]; // 0x144c (0x4) 
	class UFortLazyImage* ImageRewardIcon; // 0x1450 (0x8)
	class UImage* ImageRewardLockedTint; // 0x1458 (0x8)
	class UImage* ImageChaseRewardSpacer; // 0x1460 (0x8)
	class UImage* ImageSelectionBorder; // 0x1468 (0x8)
	class UWidgetSwitcher* SwitcherEarnedRewardState; // 0x1470 (0x8)
	class UWidgetSwitcher* SwitcherRewardTrackType; // 0x1478 (0x8)
	class UWidgetSwitcher* SwitcherTrackNumber; // 0x1480 (0x8)
	class UOverlay* OverlayNewTechInfo; // 0x1488 (0x8)
	class UCommonTextBlock* TextFreeLevelNumber; // 0x1490 (0x8)
	class UCommonTextBlock* TextPaidLevelNumber; // 0x1498 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortBattlePassReward.UpdateVisualsToCompletedState (Has no native function)
	void UpdateVisualsToCompletedState(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortBattlePassReward.SetLargeRewardVisuals (Has no native function)
	void SetLargeRewardVisuals(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortBattlePassReward.ResetToDefault (Has no native function)
	void ResetToDefault(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortBattlePassReward.OnOverrideIcon (Has no native function)
	void OnOverrideIcon(struct TWeakObjectPtr<class UTexture2D>& IconOverride); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortBattlePassReward.InitForReward (Has no native function)
	void InitForReward(class UFortItemDefinition*& RewardItem); // (Event | Public | BlueprintEvent)
};

