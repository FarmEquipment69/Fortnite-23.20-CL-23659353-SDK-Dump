// Class /Script/BattlePassS23UI.BattlePassRewardPageS23
// Size: 0x548
class UBattlePassRewardPageS23 : public UBattlePassRewardPageBase
{
	class UClass* RewardsTrackClass; // 0x4b0 (0x8)
	class UFortBattlePassTile* FocusedReward; // 0x4b8 (0x8)
	struct TArray<class UFortBattlePassRewardTrack*> TrackPages; // 0x4c0 (0x10)
	unsigned char unreflected_4d0[0x4]; // 0x4d0 (0x4) 
	enum ERewardPageType RewardPageType; // 0x4d4 (0x1)
	unsigned char unreflected_4d5[0x3]; // 0x4d5 (0x3) 
	int HoldTileTooltipClaimedRewardsToHide; // 0x4d8 (0x4)
	int HoldTileTooltipRequiredBattleStarsToShow; // 0x4dc (0x4)
	int LevelRequirementUnlockTooltipRequiredLevel; // 0x4e0 (0x4)
	int ClaimAllRewardsTooltipRequiredLevelToShow; // 0x4e4 (0x4)
	class UCommonAnimatedSwitcher* SwitcherRewardTracks; // 0x4e8 (0x8)
	class UFortBattlePassTutorialTooltipS23* TutorialTooltipLevelRequirementUnlock; // 0x4f0 (0x8)
	class UFortBattlePassTutorialTooltipS23* TutorialTooltipClaimAllRewards; // 0x4f8 (0x8)
	class UFortBattlePassTutorialTooltipS23* TutorialTooltipHoldTile; // 0x500 (0x8)
	class UAthenaSeasonItemData_BattleStar* SeasonDataBattleStar; // 0x508 (0x8)
	class UBattlePassBulkBuyInputData* BulkBuyInputData; // 0x510 (0x8)
	class UCommonButtonBase* ButtonNextPage; // 0x518 (0x8)
	class UCommonButtonBase* ButtonPreviousPage; // 0x520 (0x8)
	unsigned char padding_528[0x20]; // 0x528 (0x20)

	/* Functions */

	// Function /Script/BattlePassS23UI.BattlePassRewardPageS23.OnPageChanged (Has no native function)
	void OnPageChanged(int& PageNumber, int& RewardPageTotal); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassRewardPageS23.OnLoadingScreenSelectedChanged (Has no native function)
	void OnLoadingScreenSelectedChanged(bool& bIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassRewardPageS23.OnInputMethodChanged (Has no native function)
	void OnInputMethodChanged(enum ECommonInputType& InputType); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassRewardPageS23.OnInitForPageType (Has no native function)
	void OnInitForPageType(enum ERewardPageType& InRewardPageType); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassS23UI.BattlePassRewardPageS23.HandleRewardTracksBoundaryNavigation (Underlying native function: HandleRewardTracksBoundaryNavigation 0x727b488)
	class UWidget* HandleRewardTracksBoundaryNavigation(enum EUINavigation& InNavigation); // (Final | Native | Private)

	// Function /Script/BattlePassS23UI.BattlePassRewardPageS23.GetRewardPageBackgroundData (Underlying native function: GetRewardPageBackgroundData 0x1a5dfa8)
	struct FVaultWorldBackgroundData GetRewardPageBackgroundData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

