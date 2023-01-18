// Class /Script/FortniteGame.FortReplaySpectator
// Size: 0x43d0
class AFortReplaySpectator : public AFortPlayerControllerSpectating
{
	unsigned char unreflected_3b10[0x8]; // 0x3b10 (0x8) 
	struct TArray<float> PlaybackSpeedLUT; // 0x3b18 (0x10)
	unsigned char unreflected_3b28[0x3c8]; // 0x3b28 (0x3c8) 
	struct FUniqueNetIdRepl FollowedPlayerUniqueId; // 0x3ef0 (0x30)
	class AFortPlayerState* FollowedPlayerPrivate; // 0x3f20 (0x8)
	unsigned char unreflected_3f28[0x30]; // 0x3f28 (0x30) 
	class APostProcessVolume* MotionBlurTargetFPSVolume; // 0x3f58 (0x8)
	unsigned char unreflected_3f60[0x2d8]; // 0x3f60 (0x2d8) 
	struct TScriptInterface<class IFortTimeOfDayManagerInterface> OverriddenTODManager; // 0x4238 (0x10)
	unsigned char unreflected_4248[0xb8]; // 0x4248 (0xb8) 
	class UFortReplaySequenceComponent* SequencerComponent; // 0x4300 (0x8)
	unsigned char unreflected_4308[0x1c]; // 0x4308 (0x1c) 
	float SequencerLoadingScreenRevealTime; // 0x4324 (0x4)
	bool bShouldUpdateReplayContextAboutSequencer; // 0x4328 (0x1)
	unsigned char unreflected_4329[0x3]; // 0x4329 (0x3) 
	float BaseSequencerRetryFindPawnGraceTime; // 0x432c (0x4)
	unsigned char unreflected_4330[0x8]; // 0x4330 (0x8) 
	struct FMulticastInlineDelegate OnServerHighlightsAvailableEvent; // 0x4338 (0x10)
	float HighlightAnnotationTime; // 0x4348 (0x4)
	float ExtendedGameHighlightsTargetSeconds; // 0x434c (0x4)
	float GameHighlightsTargetSeconds; // 0x4350 (0x4)
	float FeatureReelTargetSeconds; // 0x4354 (0x4)
	unsigned char unreflected_4358[0x3c]; // 0x4358 (0x3c) 
	float HighlightShotExtraLeadTime; // 0x4394 (0x4)
	class AUnicornDriver* UnicornDriver; // 0x4398 (0x8)
	unsigned char padding_43a0[0x30]; // 0x43a0 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortReplaySpectator.SkipToSequencerShot (Underlying native function: SkipToSequencerShot 0x8e49d6c)
	void SkipToSequencerShot(int& ShotIndex); // (Final | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortReplaySpectator.SkipToNextSequencerShot (Underlying native function: SkipToNextSequencerShot 0x8e49d44)
	void SkipToNextSequencerShot(); // (Final | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortReplaySpectator.ShouldSetupUIForRecording (Underlying native function: ShouldSetupUIForRecording 0x8e49b70)
	bool ShouldSetupUIForRecording(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortReplaySpectator.SetTimeOfDaySpeed (Underlying native function: SetTimeOfDaySpeed 0x8e49984)
	bool SetTimeOfDaySpeed(float& Speed); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplaySpectator.SetOverrideTimeOfDay (Underlying native function: SetOverrideTimeOfDay 0x8e49390)
	bool SetOverrideTimeOfDay(bool& bOverride, float& Time, bool& bImmediate, float& Speed); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortReplaySpectator.SetCloudAltitudes (Underlying native function: SetCloudAltitudes 0x8e49238)
	void SetCloudAltitudes(float& NewCloudAltitude); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.FortReplaySpectator.SetAllowTimeDilation (Underlying native function: SetAllowTimeDilation 0x8e4915c)
	void SetAllowTimeDilation(bool& bAllow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplaySpectator.SequencerLoadAndPlayFile (Underlying native function: SequencerLoadAndPlayFile 0x8e48fac)
	void SequencerLoadAndPlayFile(struct FString& SequenceFileName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortReplaySpectator.PlayThroughHightlightReel (Underlying native function: PlayThroughHightlightReel 0x8e48c14)
	void PlayThroughHightlightReel(struct FHighlightReel& Highlights); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplaySpectator.OnZoomOutEnd (Has no native function)
	void OnZoomOutEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortReplaySpectator.OnZoomOutBegin (Has no native function)
	void OnZoomOutBegin(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortReplaySpectator.OnZoomInEnd (Has no native function)
	void OnZoomInEnd(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortReplaySpectator.OnZoomInBegin (Has no native function)
	void OnZoomInBegin(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortReplaySpectator.OnShotStartGotoTimeComplete (Underlying native function: OnShotStartGotoTimeComplete 0x8e487c4)
	void OnShotStartGotoTimeComplete(bool& bWasSuccessful); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortReplaySpectator.OnScrubComplete (Underlying native function: OnScrubComplete 0x8e48744)
	void OnScrubComplete(bool& bWasSuccessful); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortReplaySpectator.OnReplayExtractionPreScrubComplete (Underlying native function: OnReplayExtractionPreScrubComplete 0x8e48630)
	void OnReplayExtractionPreScrubComplete(bool& bWasSuccessful); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortReplaySpectator.OnPlayerStatePlacementChanged (Underlying native function: OnPlayerStatePlacementChanged 0x8e48230)
	void OnPlayerStatePlacementChanged(class AFortPlayerStateAthena*& Sender, int& InPlace); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortReplaySpectator.OnPawnForReplayRelevancyChanged (Underlying native function: OnPawnForReplayRelevancyChanged 0x8e4812c)
	void OnPawnForReplayRelevancyChanged(class AFortPawn*& NewRelevancyPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortReplaySpectator.OnPauseStateChanged (Has no native function)
	void OnPauseStateChanged(bool& bNewPauseState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortReplaySpectator.OnNotifyNewPlaybackMultiplier (Has no native function)
	void OnNotifyNewPlaybackMultiplier(float& NewMultiplier); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortReplaySpectator.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x2f6526c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortReplaySpectator.OnDemoScrubComplete (Underlying native function: OnDemoScrubComplete 0x8e48014)
	void OnDemoScrubComplete(bool& bWasSuccessful); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortReplaySpectator.HasPermissionToViewHighlights (Underlying native function: HasPermissionToViewHighlights 0x8e476d0)
	bool HasPermissionToViewHighlights(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortReplaySpectator.GetSequencerComponent (Underlying native function: GetSequencerComponent 0x8e4676c)
	class UFortReplaySequenceComponent* GetSequencerComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortReplaySpectator.AreReplayGameHighlightsAvailable (Underlying native function: AreReplayGameHighlightsAvailable 0x8e45d78)
	bool AreReplayGameHighlightsAvailable(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

