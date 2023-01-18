// Class /Script/FortniteUI.MashScoreEventWidgetBase
// Size: 0x440
class UMashScoreEventWidgetBase : public ULTMWidgetBase
{
	class AFortAthenaMutator_Mash* MashMutatorRef; // 0x328 (0x8)
	class AFortPlayerStateAthena* CachedLocalPlayerState; // 0x330 (0x8)
	struct FMashPlayerDataEntry CachedLocalPlayerEntry; // 0x338 (0xf8)
	float StreakScoreMultiplierRemainingTime; // 0x430 (0x4)
	unsigned char padding_434[0xc]; // 0x434 (0xc)

	/* Functions */

	// Function /Script/FortniteUI.MashScoreEventWidgetBase.UpdateStreakScoreMultiplierCountdown (Underlying native function: UpdateStreakScoreMultiplierCountdown 0xa58078c)
	void UpdateStreakScoreMultiplierCountdown(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.MashScoreEventWidgetBase.OnStreakScoreMultiplierUpdated (Has no native function)
	void OnStreakScoreMultiplierUpdated(unsigned char& StreakScoreLevel, unsigned char& MaxStreakScoreLevel, float& ScoreMultiplier); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashScoreEventWidgetBase.OnStreakScoreMultiplierKillCountUpdated (Has no native function)
	void OnStreakScoreMultiplierKillCountUpdated(int& TotalStreakKillCount, float& StreakLevelProgressRatio); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashScoreEventWidgetBase.OnStreakScoreMultiplierExpires (Underlying native function: OnStreakScoreMultiplierExpires 0xa57fe90)
	void OnStreakScoreMultiplierExpires(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.MashScoreEventWidgetBase.OnStreakScoreMultiplierCountdownUpdated (Has no native function)
	void OnStreakScoreMultiplierCountdownUpdated(float& RemainingTimeBeforeReset); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashScoreEventWidgetBase.OnScoreEvent (Has no native function)
	void OnScoreEvent(int& ScoreValue, struct FText& ScoreText, struct TEnumAsByte<EMashScoreEvent>& ScoreEventType); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.MashScoreEventWidgetBase.OnPlayerDataChanged (Underlying native function: OnPlayerDataChanged 0xa57f7bc)
	void OnPlayerDataChanged(); // (Final | Native | Protected)
};

