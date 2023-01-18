// Class /Script/FortniteUI.FortEventLeaderboardScreen
// Size: 0x4c8
class UFortEventLeaderboardScreen : public UFortCompetitiveLeaderboardScreen
{
	enum ETournamentDisplayType EventDisplayType; // 0x410 (0x1)
	unsigned char unreflected_411[0x7]; // 0x411 (0x7) 
	struct FDataTableRowHandle TabViewLeftAction; // 0x418 (0x10)
	struct FDataTableRowHandle TabViewRightAction; // 0x428 (0x10)
	class UDynamicEntryBox* EntryBoxViewButtons; // 0x438 (0x8)
	class UCommonActionWidget* ActionWidgetTabLeft; // 0x440 (0x8)
	class UCommonActionWidget* ActionWidgetTabRight; // 0x448 (0x8)
	class UCommonButtonLegacy* ButtonViewLiveGames; // 0x450 (0x8)
	class UCommonButtonGroupLegacy* ViewButtonGroup; // 0x458 (0x8)
	struct TMap<class UCommonButtonLegacy*, struct FFortLeaderboardRequestIds> TabButtonToTournamentIds; // 0x460 (0x50)
	bool bIsMainLeaderboardNonWindow; // 0x4b0 (0x1)
	unsigned char padding_4b1[0x17]; // 0x4b1 (0x17)

	/* Functions */

	// Function /Script/FortniteUI.FortEventLeaderboardScreen.OnTabVisibilityChange (Has no native function)
	void OnTabVisibilityChange(bool& bIsVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortEventLeaderboardScreen.OnShowLeaderboard (Has no native function)
	void OnShowLeaderboard(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortEventLeaderboardScreen.OnDetailsPanelUpdate (Has no native function)
	void OnDetailsPanelUpdate(bool& bShowDetailsPanel); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortEventLeaderboardScreen.InitializeTabButton (Has no native function)
	void InitializeTabButton(class UCommonButtonLegacy*& TabButton, struct FText& TabText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortEventLeaderboardScreen.HandleViewTabSelectionChanged (Underlying native function: HandleViewTabSelectionChanged 0xa6b3f8c)
	void HandleViewTabSelectionChanged(class UCommonButtonLegacy*& TabButton, int& TabIdx); // (Final | Native | Private)
};

