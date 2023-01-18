// Class /Script/FortniteUI.BattlePassLeaderboardListEntry
// Size: 0x2b0
class UBattlePassLeaderboardListEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class URichTextBlock* RichTextDisplayName; // 0x298 (0x8)
	class UCommonTextBlock* TextLevel; // 0x2a0 (0x8)
	bool bIsEntry; // 0x2a8 (0x1)
	unsigned char padding_2a9[0x7]; // 0x2a9 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassLeaderboardListEntry.UpdateEntryVisibility (Has no native function)
	void UpdateEntryVisibility(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassLeaderboardListEntry.OnEntryInitialized (Has no native function)
	void OnEntryInitialized(int& Rank, bool& bIsLocalPlayer); // (Event | Protected | BlueprintEvent)
};

