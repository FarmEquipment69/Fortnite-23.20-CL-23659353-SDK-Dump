// Class /Script/FortniteUI.BattlePassListViewScreen
// Size: 0x338
class UBattlePassListViewScreen : public UCommonUserWidget
{
	class UClass* FriendLeaderboardClass; // 0x290 (0x8)
	class UBattlePassScreenListView* ListViewRewards; // 0x298 (0x8)
	class UCommonTextBlock* TextSocialUserRightCounter; // 0x2a0 (0x8)
	class UCommonTextBlock* TextSocialUserLeftCounter; // 0x2a8 (0x8)
	class UAthenaSeasonItemDefinition* CachedSeasonData; // 0x2b0 (0x8)
	class UAthenaSeasonItemData_Level* CachedSeasonDataLevel; // 0x2b8 (0x8)
	struct TArray<struct FBattlePassRewardInfo> AllActiveSeasonRewards; // 0x2c0 (0x10)
	unsigned char padding_2d0[0x68]; // 0x2d0 (0x68)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassListViewScreen.OnHandleRotateReward (Has no native function)
	void OnHandleRotateReward(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassListViewScreen.OnHandleFriendLeaderboard (Has no native function)
	void OnHandleFriendLeaderboard(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassListViewScreen.HandleOnUpdatedVisibleFriendCount (Has no native function)
	void HandleOnUpdatedVisibleFriendCount(int& LeftFriendCount, int& RightFriendCount); // (Event | Protected | BlueprintEvent)
};

