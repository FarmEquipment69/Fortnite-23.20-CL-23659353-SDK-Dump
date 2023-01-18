// Class /Script/FortniteUI.TwoTeamScoreWidgetBase
// Size: 0x338
class UTwoTeamScoreWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x28]; // 0x2d0 (0x28) 
	struct TArray<float> PlayScoreProgressSoundPercentagesMild; // 0x2f8 (0x10)
	struct TArray<float> PlayScoreProgressSoundPercentagesMedium; // 0x308 (0x10)
	struct TArray<float> PlayScoreProgressSoundPercentagesStrong; // 0x318 (0x10)
	float PercentageScoreToPlayCountdown; // 0x328 (0x4)
	float PercentageScoreToPlayFinalCountdown; // 0x32c (0x4)
	float ScoreCountdownSoundFrequency; // 0x330 (0x4)
	unsigned char LastViewedTeam; // 0x334 (0x1)
	unsigned char padding_335[0x3]; // 0x335 (0x3)

	/* Functions */

	// Function /Script/FortniteUI.TwoTeamScoreWidgetBase.UpdateAllUI (Underlying native function: UpdateAllUI 0xa5a46f8)
	void UpdateAllUI(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.TwoTeamScoreWidgetBase.OnUpdateTotalScore (Has no native function)
	void OnUpdateTotalScore(struct FText& TotalScoreText, int& Score); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.TwoTeamScoreWidgetBase.OnUpdateTeamScore (Has no native function)
	void OnUpdateTeamScore(int& TeamIndex, struct FTDMTeamScoreData& ScoreData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.TwoTeamScoreWidgetBase.OnPlayScoreProgressSound (Has no native function)
	void OnPlayScoreProgressSound(enum ETDMScoreProgressTypes& ScoreProgressType, bool& bIsLocalTeam); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.TwoTeamScoreWidgetBase.OnHandleSpectatingChanged (Underlying native function: OnHandleSpectatingChanged 0xa5a3d94)
	void OnHandleSpectatingChanged(class AFortPlayerStateZone*& SpectatingTarget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.TwoTeamScoreWidgetBase.OnCountdownTimerUpdate (Underlying native function: OnCountdownTimerUpdate 0xa5a3aa8)
	void OnCountdownTimerUpdate(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.TwoTeamScoreWidgetBase.HandleGamePhaseChanged (Underlying native function: HandleGamePhaseChanged 0xa5a30b8)
	void HandleGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)
};

