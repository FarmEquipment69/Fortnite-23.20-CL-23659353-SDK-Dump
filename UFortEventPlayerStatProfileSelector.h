// Class /Script/FortniteUI.FortEventPlayerStatProfileSelector
// Size: 0x530
class UFortEventPlayerStatProfileSelector : public UFortActivatablePanel
{
	class UCommonListView* ProfileList; // 0x518 (0x8)
	class UCommonTextBlock* HoveredName; // 0x520 (0x8)
	class UClass* StatsScreenClass; // 0x528 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortEventPlayerStatProfileSelector.SetProfilesByLeaderboardData (Underlying native function: SetProfilesByLeaderboardData 0xa873bb8)
	void SetProfilesByLeaderboardData(class UFortEventLeaderboardEntryData*& DataForDisplay); // (Final | Native | Protected | BlueprintCallable)
};

