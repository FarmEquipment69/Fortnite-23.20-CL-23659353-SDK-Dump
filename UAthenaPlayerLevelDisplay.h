// Class /Script/FortniteUI.AthenaPlayerLevelDisplay
// Size: 0x2d8
class UAthenaPlayerLevelDisplay : public UFortAccountWidgetBase
{
	class UCommonTextBlock* TextLevel; // 0x2c8 (0x8)
	class UAthenaSeasonItemRewardIcon* RewardIcon; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaPlayerLevelDisplay.UpdateBPStatus (Has no native function)
	void UpdateBPStatus(enum EBPStatus& Status); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerLevelDisplay.OnUpdateXpBar (Has no native function)
	void OnUpdateXpBar(float& Progress, bool& bIsMaxLevel); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaPlayerLevelDisplay.OnUpdateRewardIcon (Has no native function)
	void OnUpdateRewardIcon(class UFortItem*& RewardItem, struct TWeakObjectPtr<class UTexture2D>& RewardTexture, bool& bHasAdditionalStylesToDisplay, int& RewardLevel, bool& bRequiresBattlePass); // (Event | Protected | HasOutParms | BlueprintEvent)
};

