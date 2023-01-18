// Class /Script/FortniteUI.BattlePassViewAllRewardsScreen
// Size: 0x6c0
class UBattlePassViewAllRewardsScreen : public UFortItemPreviewScreen
{
	unsigned char unreflected_668[0x8]; // 0x668 (0x8) 
	class UFortItem* LastViewedItem; // 0x670 (0x8)
	struct TArray<class UBattlePassViewRewardData*> AllRewardItems; // 0x678 (0x10)
	float StaggerTime; // 0x688 (0x4)
	unsigned char unreflected_68c[0x4]; // 0x68c (0x4) 
	class UCommonTextBlock* TextSortLabel; // 0x690 (0x8)
	class UCommonTextBlock* TextChapterLabel; // 0x698 (0x8)
	class UCommonTextBlock* TextSeasonLabel; // 0x6a0 (0x8)
	class UCommonButtonLegacy* ButtonCycleSort; // 0x6a8 (0x8)
	class UTileView* TileViewRewards; // 0x6b0 (0x8)
	unsigned char padding_6b8[0x8]; // 0x6b8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassViewAllRewardsScreen.OnItemViewed (Has no native function)
	void OnItemViewed(class UBattlePassViewRewardData*& ItemDisplayed); // (Event | Protected | BlueprintEvent)
};

