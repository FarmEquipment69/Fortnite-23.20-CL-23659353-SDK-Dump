// Class /Script/FortniteUI.AthenaLeaderboardScreenBase
// Size: 0x750
class UAthenaLeaderboardScreenBase : public UFortActivatablePanel
{
	class UFortTabListWidgetBase_Legacy* LeaderboardTabList; // 0x518 (0x8)
	class UCommonRotator* MatchRotator; // 0x520 (0x8)
	class UCommonRotator* LeaderboardTypeRotator; // 0x528 (0x8)
	class UCommonTextBlock* RefreshTimeText; // 0x530 (0x8)
	class UCommonTextBlock* NoDataMessageText; // 0x538 (0x8)
	class UCommonBorder* BorderLocalUserFocus; // 0x540 (0x8)
	class UWidget* WidgetProfileStats; // 0x548 (0x8)
	class UFortProfileStatsRow* AthenaStatsWins; // 0x550 (0x8)
	class UFortProfileStatsRow* AthenaStatsSecondTierFinishes; // 0x558 (0x8)
	class UFortProfileStatsRow* AthenaStatsThirdTierFinishes; // 0x560 (0x8)
	class UFortProfileStatsRow* AthenaStatsEliminations; // 0x568 (0x8)
	class UFortProfileStatsRow* AthenaStatsMatchesPlayer; // 0x570 (0x8)
	class UCommonButtonBase* ButtonChangeFlag; // 0x578 (0x8)
	class UFortFlagImage* ImageYourFlag; // 0x580 (0x8)
	struct FName LTMPlaylistDefaultName; // 0x588 (0x4)
	unsigned char unreflected_58c[0x4]; // 0x58c (0x4) 
	class UClass* FortFlagSelectionModalClass; // 0x590 (0x8)
	struct TMap<struct FName, class UFortProfileStatsRow*> ActiveProfileRows; // 0x598 (0x50)
	unsigned char unreflected_5e8[0x90]; // 0x5e8 (0x90) 
	class UDataTable* PlaylistsData; // 0x678 (0x8)
	struct TMap<struct FName, class UCommonButtonBase*> ActiveTabButtons; // 0x680 (0x50)
	struct TArray<class UFortLeaderboardRowProxyInstance*> RowProxies; // 0x6d0 (0x10)
	class UFortLeaderboardRowProxyInstance* LocalUserRowProxy; // 0x6e0 (0x8)
	struct FLeaderboardFilter CurrentLeaderboardFilter; // 0x6e8 (0x18)
	unsigned char padding_700[0x50]; // 0x700 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.AthenaLeaderboardScreenBase.OnUpdateTabButtonText (Has no native function)
	void OnUpdateTabButtonText(class UCommonButtonBase*& Button, struct FAthenaPlaylistLeaderboardData& PlaylistTabData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLeaderboardScreenBase.OnUpdateListHeader (Has no native function)
	void OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData& PlaylistTabData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLeaderboardScreenBase.OnUpdateLeaderboardListUI (Has no native function)
	void OnUpdateLeaderboardListUI(bool& bWasSuccessful, class UFortLeaderboardRowProxyInstance*& LocalUserRow, struct FText& QueryErrorStr); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLeaderboardScreenBase.OnQueryStarted (Has no native function)
	void OnQueryStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLeaderboardScreenBase.OnQueryFinished (Has no native function)
	void OnQueryFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLeaderboardScreenBase.OnPlaylistChanged (Underlying native function: OnPlaylistChanged 0xa4b0300)
	void OnPlaylistChanged(struct FName& NewPlaylistName, enum ECommonInputType& NewInputType); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaLeaderboardScreenBase.OnMatchTypeChanged (Underlying native function: OnMatchTypeChanged 0xa4b020c)
	void OnMatchTypeChanged(int& MatchTypeIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaLeaderboardScreenBase.OnFriendsFilterChanged (Underlying native function: OnFriendsFilterChanged 0xa4b00d0)
	void OnFriendsFilterChanged(int& FriendsFilterIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaLeaderboardScreenBase.OnActiveLeaderboardTabChanged (Underlying native function: OnActiveLeaderboardTabChanged 0xa4b003c)
	void OnActiveLeaderboardTabChanged(int& ActiveWidgetIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaLeaderboardScreenBase.CanShowFriendsOnlyLeaderboard (Underlying native function: CanShowFriendsOnlyLeaderboard 0x27c9608)
	bool CanShowFriendsOnlyLeaderboard(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

