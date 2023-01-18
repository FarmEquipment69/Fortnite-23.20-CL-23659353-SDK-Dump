// Class /Script/FortniteUI.FortLeaderboardListViewWrapper
// Size: 0x3b8
class UFortLeaderboardListViewWrapper : public UCommonActivatableWidget
{
	class UListView* ListViewLeaderboardEntries; // 0x3a8 (0x8)
	class UHorizontalBox* ContentLoadingEntries; // 0x3b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortLeaderboardListViewWrapper.OnLeaderboardEntryAdded (Has no native function)
	void OnLeaderboardEntryAdded(enum ELeaderboardDisplayType& NewDisplayType); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortLeaderboardListViewWrapper.OnLeaderboardDisplayTypeChanged (Has no native function)
	void OnLeaderboardDisplayTypeChanged(enum ELeaderboardDisplayType& NewDisplayType); // (Event | Public | BlueprintEvent)
};

