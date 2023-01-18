// Class /Script/FortniteUI.MashWidgetBase
// Size: 0x338
class UMashWidgetBase : public ULTMWidgetBase
{
	class AFortAthenaMutator_Mash* MashMutatorRef; // 0x328 (0x8)
	class AFortPlayerStateAthena* CachedLocalPlayerState; // 0x330 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.MashWidgetBase.OnTeamScoreMultiplierChanged (Has no native function)
	void OnTeamScoreMultiplierChanged(unsigned char& TeamScoreMultiplier); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashWidgetBase.OnSquadScoreUpdated (Has no native function)
	void OnSquadScoreUpdated(int& Score); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashWidgetBase.OnPlayerScoreUpdated (Has no native function)
	void OnPlayerScoreUpdated(int& Index, struct FString& PlayerName, int& Score, int& StreakLevel, int& MaxStreakLevel, float& StreakMultiplier, bool& IsLocalPlayer); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashWidgetBase.OnPlayerDataChanged (Underlying native function: OnPlayerDataChanged 0xa57f7d0)
	void OnPlayerDataChanged(); // (Final | Native | Protected)
};

