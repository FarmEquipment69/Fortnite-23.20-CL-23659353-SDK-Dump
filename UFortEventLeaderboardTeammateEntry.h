// Class /Script/FortniteUI.FortEventLeaderboardTeammateEntry
// Size: 0x2a0
class UFortEventLeaderboardTeammateEntry : public UCommonUserWidget
{
	class UCommonTextBlock* TextPlayerName; // 0x290 (0x8)
	class UFortFlagImage* IdentityFlag; // 0x298 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortEventLeaderboardTeammateEntry.SetPlayerName (Underlying native function: SetPlayerName 0xa6b59b4)
	void SetPlayerName(struct FString& PlayerName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortEventLeaderboardTeammateEntry.SetPlayerFlag (Underlying native function: SetPlayerFlag 0xa6b5878)
	void SetPlayerFlag(struct TWeakObjectPtr<class UTexture2D>& PlayerFlag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortEventLeaderboardTeammateEntry.OnLeaderboardEntrySelected (Has no native function)
	void OnLeaderboardEntrySelected(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortEventLeaderboardTeammateEntry.OnLeaderboardEntryDeselected (Has no native function)
	void OnLeaderboardEntryDeselected(); // (Event | Public | BlueprintEvent)
};

