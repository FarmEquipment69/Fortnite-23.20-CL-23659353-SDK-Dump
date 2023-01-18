// Class /Script/FortniteUI.FortEventLeaderboardEntry
// Size: 0x1450
class UFortEventLeaderboardEntry : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UFortFlagImage* FlagImage; // 0x1438 (0x8)
	class UDynamicEntryBox* DynamicEntryBoxTeamEntries; // 0x1440 (0x8)
	unsigned char padding_1448[0x8]; // 0x1448 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortEventLeaderboardEntry.SetPlayerFlag (Underlying native function: SetPlayerFlag 0xa6b573c)
	void SetPlayerFlag(struct TWeakObjectPtr<class UTexture2D>& PlayerFlag); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortEventLeaderboardEntry.InitializeTeamTextEntry (Has no native function)
	void InitializeTeamTextEntry(class UUserWidget*& TeamEntryWidget, struct FText& Usernames); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortEventLeaderboardEntry.DisplayTeamUsernames (Underlying native function: DisplayTeamUsernames 0xa6b1da4)
	void DisplayTeamUsernames(class UFortEventLeaderboardEntryData*& LeaderboardEntryData); // (Final | Native | Protected | BlueprintCallable)
};

