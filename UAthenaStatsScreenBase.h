// Class /Script/FortniteUI.AthenaStatsScreenBase
// Size: 0x6c8
class UAthenaStatsScreenBase : public UFortActivatablePanel
{
	class UCommonTabListWidgetBase* StatsTabList; // 0x518 (0x8)
	class UFortProfileStatsMainTile* WinsTile; // 0x520 (0x8)
	class UFortProfileStatsMainTile* SecondTierTile; // 0x528 (0x8)
	class UFortProfileStatsMainTile* ThirdTierTile; // 0x530 (0x8)
	class UFortProfileStatsRow* KillsRow; // 0x538 (0x8)
	class UFortProfileStatsRow* MatchesPlayedRow; // 0x540 (0x8)
	class UCommonTextBlock* LastUpdatedTime; // 0x548 (0x8)
	class UCommonTextBlock* PlayerName; // 0x550 (0x8)
	class UWidget* SeasonContainer; // 0x558 (0x8)
	class UWidget* AccountContainer; // 0x560 (0x8)
	class UWidget* MainStatsContainer; // 0x568 (0x8)
	class UCommonButtonBase* PlatformButton; // 0x570 (0x8)
	class UImage* ImagePlatformIcon; // 0x578 (0x8)
	class UCommonTextBlock* LTMDisclaimer; // 0x580 (0x8)
	class UCommonButtonBase* ButtonChangeFlag; // 0x588 (0x8)
	class UFortFlagImage* ImageYourFlag; // 0x590 (0x8)
	class UFortFlagImage* ImageOtherUserFlag; // 0x598 (0x8)
	class UWidgetSwitcher* SwitcherFlagDisplay; // 0x5a0 (0x8)
	bool bWasLastQuerySuccessful; // 0x5a8 (0x1)
	unsigned char unreflected_5a9[0x7]; // 0x5a9 (0x7) 
	class UDataTable* PlaylistsData; // 0x5b0 (0x8)
	struct FName LTMPlaylistDefaultName; // 0x5b8 (0x4)
	unsigned char unreflected_5bc[0x4]; // 0x5bc (0x4) 
	class UClass* FortFlagSelectionModalClass; // 0x5c0 (0x8)
	struct FText PlatformButtonDisplayText; // 0x5c8 (0x18)
	unsigned char unreflected_5e0[0xd0]; // 0x5e0 (0xd0) 
	class USocialUser* QueriedSocialUser; // 0x6b0 (0x8)
	unsigned char padding_6b8[0x10]; // 0x6b8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaStatsScreenBase.SetPlatformButtonText (Has no native function)
	void SetPlatformButtonText(struct FText& PlatformButtonText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaStatsScreenBase.SetDisplayName (Underlying native function: SetDisplayName 0xa4b09f0)
	void SetDisplayName(struct FText& InDisplayName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaStatsScreenBase.SetAccountIdToQueryFromString (Underlying native function: SetAccountIdToQueryFromString 0xa4b081c)
	void SetAccountIdToQueryFromString(struct FString& InAccountId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaStatsScreenBase.OnTabSelected (Underlying native function: OnTabSelected 0xa4b04c0)
	void OnTabSelected(struct FName& TabName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaStatsScreenBase.OnQueryStarted (Has no native function)
	void OnQueryStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaStatsScreenBase.OnQueryFinished (Has no native function)
	void OnQueryFinished(bool& bWasSuccessful, bool& bHasStatsToDisplay); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaStatsScreenBase.DisplayQueriedUserPlatformProfile (Underlying native function: DisplayQueriedUserPlatformProfile 0xa4af3b8)
	void DisplayQueriedUserPlatformProfile(); // (Final | Native | Public | BlueprintCallable)
};

