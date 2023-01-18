// Class /Script/FortniteUI.FortLeaderboardViewTab
// Size: 0x3c8
class UFortLeaderboardViewTab : public UCommonActivatableWidget
{
	bool bDisplayTabHeaders; // 0x3a8 (0x1)
	unsigned char unreflected_3a9[0x7]; // 0x3a9 (0x7) 
	class UCommonWidgetSwitcherLegacy* SwitcherLeaderboardEntries; // 0x3b0 (0x8)
	class UFortLeaderboardListViewWrapper* ActivatableContentLeaderboardListWrapper; // 0x3b8 (0x8)
	class UCommonBorder* ContentNoLeaderboardEntries; // 0x3c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortLeaderboardViewTab.OnLeaderboardDisplayTypeChanged (Has no native function)
	void OnLeaderboardDisplayTypeChanged(enum ELeaderboardDisplayType& NewDisplayType); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortLeaderboardViewTab.GetListView (Underlying native function: GetListView 0xa6b2bac)
	class UListView* GetListView(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

