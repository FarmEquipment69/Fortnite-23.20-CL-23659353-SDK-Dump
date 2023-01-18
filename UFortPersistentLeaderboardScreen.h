// Class /Script/FortniteUI.FortPersistentLeaderboardScreen
// Size: 0x498
class UFortPersistentLeaderboardScreen : public UFortCompetitiveLeaderboardScreen
{
	bool bAllowMeTab; // 0x410 (0x1)
	unsigned char unreflected_411[0x7]; // 0x411 (0x7) 
	struct FDataTableRowHandle ColorSchemeRowHandle; // 0x418 (0x10)
	struct FDataTableRowHandle TabViewLeftAction; // 0x428 (0x10)
	struct FDataTableRowHandle TabViewRightAction; // 0x438 (0x10)
	class UCommonButtonLegacy* ButtonClose; // 0x448 (0x8)
	class UCommonButtonLegacy* ButtonBack; // 0x450 (0x8)
	class UDynamicEntryBox* EntryBoxViewButtons; // 0x458 (0x8)
	class UCommonActionWidget* ActionWidgetTabLeft; // 0x460 (0x8)
	class UCommonActionWidget* ActionWidgetTabRight; // 0x468 (0x8)
	class UCommonActivatableWidgetSwitcher* SwitcherViewTabs; // 0x470 (0x8)
	class UFortArenaPersonalViewTab* ActivatableContentMeViewTab; // 0x478 (0x8)
	class UCommonButtonLegacy* GlobalTabButton; // 0x480 (0x8)
	class UCommonButtonLegacy* MeTabButton; // 0x488 (0x8)
	class UCommonButtonGroupLegacy* ViewButtonGroup; // 0x490 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPersistentLeaderboardScreen.SetupForEvent (Has no native function)
	void SetupForEvent(struct FString& EventId, struct FString& EventWindowId); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPersistentLeaderboardScreen.OnLeaderboardTabsLoaded (Has no native function)
	void OnLeaderboardTabsLoaded(bool& bNoLeaderboardTabs); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPersistentLeaderboardScreen.OnColorize (Has no native function)
	void OnColorize(struct FFortTournamentDisplayInfo& ColorInfo); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPersistentLeaderboardScreen.HandleViewTabSelectionChanged (Underlying native function: HandleViewTabSelectionChanged 0xa6b4050)
	void HandleViewTabSelectionChanged(class UCommonButtonLegacy*& TabButton, int& TabIdx); // (Final | Native | Private)
};

