// Class /Script/FortniteUI.RumbleLeaderBoard
// Size: 0x340
class URumbleLeaderBoard : public ULTMWidgetBase
{
	struct TArray<struct FSoundThreshold> ThresholdArray; // 0x328 (0x10)
	unsigned char padding_338[0x8]; // 0x338 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.RumbleLeaderBoard.UpdateVisuals (Has no native function)
	void UpdateVisuals(struct TArray<struct FFortInGameLeaderboardPlacementData>& Data); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.RumbleLeaderBoard.SetGoalValue (Has no native function)
	void SetGoalValue(float& NewValue); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.RumbleLeaderBoard.OnThresholdPassed (Has no native function)
	void OnThresholdPassed(struct FSoundThreshold& SoundThreshold, int& ThresholdIndex, bool& bIsLocalPlayer); // (Event | Protected | HasOutParms | BlueprintEvent)
};

