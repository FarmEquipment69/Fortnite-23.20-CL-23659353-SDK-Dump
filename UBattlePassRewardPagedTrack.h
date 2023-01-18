// Class /Script/FortniteUI.BattlePassRewardPagedTrack
// Size: 0x350
class UBattlePassRewardPagedTrack : public UBattlePassRewardViewBase
{
	float UpdateItemCardsDelay; // 0x2c0 (0x4)
	unsigned char unreflected_2c4[0x4]; // 0x2c4 (0x4) 
	struct TArray<class UCommonButtonLegacy*> Pips; // 0x2c8 (0x10)
	int LastPageIndex; // 0x2d8 (0x4)
	int PageIndex; // 0x2dc (0x4)
	int PagesHidden; // 0x2e0 (0x4)
	int LocalFocusedIndex; // 0x2e4 (0x4)
	unsigned char unreflected_2e8[0x8]; // 0x2e8 (0x8) 
	class UFortBattlePassReward* FocusReward; // 0x2f0 (0x8)
	class UFortBattlePassReward* DefaultFocusReward; // 0x2f8 (0x8)
	struct TArray<struct FBattlePassPageData*> PageData; // 0x300 (0x10)
	struct FTimerHandle* UpdateItemCardsHandle; // 0x310 (0x8)
	class UDynamicEntryBox* EntryBoxRewards; // 0x318 (0x8)
	class UCommonButtonLegacy* ButtonNextPage; // 0x320 (0x8)
	class UCommonButtonLegacy* ButtonPreviousPage; // 0x328 (0x8)
	class UDynamicEntryBox* EntryBoxPips; // 0x330 (0x8)
	class UCommonRichTextBlock* TextPageNumbers; // 0x338 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroupPips; // 0x340 (0x8)
	class UFortSwipePanel* SwipePanelChangePage; // 0x348 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassRewardPagedTrack.OnPageChanged (Has no native function)
	void OnPageChanged(bool& bIsForward); // (Event | Protected | BlueprintEvent)
};

