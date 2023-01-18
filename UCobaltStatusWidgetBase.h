// Class /Script/FortniteUI.CobaltStatusWidgetBase
// Size: 0x388
class UCobaltStatusWidgetBase : public UCobaltWidgetBase
{
	unsigned char LastViewedTeam; // 0x360 (0x1)
	unsigned char unreflected_361[0x7]; // 0x361 (0x7) 
	class UCommonTextBlock* RoundName; // 0x368 (0x8)
	float CountdownSoundStartTime; // 0x370 (0x4)
	unsigned char padding_374[0x14]; // 0x374 (0x14)

	/* Functions */

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.UpdateTimerVisuals (Has no native function)
	void UpdateTimerVisuals(float& TimeRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.UpdateScoringUI (Underlying native function: UpdateScoringUI 0xa580778)
	void UpdateScoringUI(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.ShowTimer (Has no native function)
	void ShowTimer(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.RoundAdvanced (Underlying native function: RoundAdvanced 0xa580060)
	void RoundAdvanced(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.OnUpdateTieBreakerUI (Has no native function)
	void OnUpdateTieBreakerUI(bool& bHasTieBreaker); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.OnUpdateTeamScore (Has no native function)
	void OnUpdateTeamScore(int& TeamIndex, int& Score, bool& bIsTeamLeading, bool& bPlayAnimation); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.OnTieBreakerChangedSound (Has no native function)
	void OnTieBreakerChangedSound(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.OnResetUI (Has no native function)
	void OnResetUI(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.OnPlayScoreProgressSound (Has no native function)
	void OnPlayScoreProgressSound(bool& bIsLocalTeam); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.OnPlayLeadChangedSound (Has no native function)
	void OnPlayLeadChangedSound(bool& bTookTheLead); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CobaltStatusWidgetBase.OnPlayCountdownSound (Has no native function)
	void OnPlayCountdownSound(); // (Event | Protected | BlueprintEvent)
};

