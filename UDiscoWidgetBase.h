// Class /Script/FortniteUI.DiscoWidgetBase
// Size: 0x340
class UDiscoWidgetBase : public UFortHUDElementWidget
{
	struct TArray<struct FDiscoCaptureIconData> CapturePointIconList; // 0x2d0 (0x10)
	unsigned char unreflected_2e0[0x20]; // 0x2e0 (0x20) 
	struct TArray<float> PlayScoreProgressSoundPercentagesMild; // 0x300 (0x10)
	struct TArray<float> PlayScoreProgressSoundPercentagesMedium; // 0x310 (0x10)
	struct TArray<float> PlayScoreProgressSoundPercentagesStrong; // 0x320 (0x10)
	float PercentageScoreToPlayCountdown; // 0x330 (0x4)
	float PercentageScoreToPlayFinalCountdown; // 0x334 (0x4)
	float ScoreCountdownSoundFrequency; // 0x338 (0x4)
	bool bLocalTeamIsScoring; // 0x33c (0x1)
	bool bEnemyTeamIsScoring; // 0x33d (0x1)
	unsigned char LastViewedTeam; // 0x33e (0x1)
	unsigned char padding_33f[0x1]; // 0x33f (0x1)

	/* Functions */

	// Function /Script/FortniteUI.DiscoWidgetBase.UpdateAllUI (Underlying native function: UpdateAllUI 0xa5805f0)
	void UpdateAllUI(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.DiscoWidgetBase.OnUpdateTeamScore (Has no native function)
	void OnUpdateTeamScore(int& TeamIndex, struct FDiscoTeamScoreData& ScoreData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.DiscoWidgetBase.OnUpdateCapturePoint (Has no native function)
	void OnUpdateCapturePoint(int& IconIndex, struct FDiscoCaptureIconData& IconData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.DiscoWidgetBase.OnPlayScoreProgressSound (Has no native function)
	void OnPlayScoreProgressSound(enum EDiscoScoreProgressTypes& ScoreProgressType, bool& bIsLocalTeam); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.DiscoWidgetBase.OnMutatorObjectUpdated (Underlying native function: OnMutatorObjectUpdated 0xa57f4bc)
	void OnMutatorObjectUpdated(struct FGameplayMutatorObjectDataArray& MutatorArray); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.DiscoWidgetBase.OnHandleSpectatingChanged (Underlying native function: OnHandleSpectatingChanged 0xa57ef0c)
	void OnHandleSpectatingChanged(class AFortPlayerStateZone*& SpectatingTarget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.DiscoWidgetBase.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0xa57eb94)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteUI.DiscoWidgetBase.OnCountdownTimerUpdate (Underlying native function: OnCountdownTimerUpdate 0xa57e9bc)
	void OnCountdownTimerUpdate(); // (Final | Native | Protected)
};

