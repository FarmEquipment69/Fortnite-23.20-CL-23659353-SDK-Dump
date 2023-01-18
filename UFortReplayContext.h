// Class /Script/FortniteGame.FortReplayContext
// Size: 0x2e8
class UFortReplayContext : public UBlueprintContextBase
{
	struct FFortReplayPlaybackState PlaybackState; // 0x30 (0x18)
	struct FFortReplayFXState EffectsState; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnReplayFXStateChange; // 0x58 (0x10)
	float TimeBeforeEvent; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FMulticastInlineDelegate OnPauseStateChanged; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnSessionIdWatermarkVisibilityChanged; // 0x80 (0x10)
	struct FMulticastInlineDelegate OnReplayTimeChanged; // 0x90 (0x10)
	struct FMulticastInlineDelegate OnReplayTimelineChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnReplayPlaybackMultiplierChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate OnReplayHudVisibilityChanged; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnReplayHudNotificationSuppressionChanged; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnToggleReplayViewSettings; // 0xe0 (0x10)
	struct FMulticastInlineDelegate OnToggleReplayPlayerList; // 0xf0 (0x10)
	struct FMulticastInlineDelegate OnToggleHighlightsListEvent; // 0x100 (0x10)
	struct FMulticastInlineDelegate OnReplayLevelStreamingChanged; // 0x110 (0x10)
	struct FMulticastInlineDelegate OnSequencerReadyEvent; // 0x120 (0x10)
	struct FMulticastInlineDelegate OnReplayTimelineFocusChanged; // 0x130 (0x10)
	struct FMulticastInlineDelegate OnReplayTimelineMarkerAdded; // 0x140 (0x10)
	struct FMulticastInlineDelegate OnReplayTimelineMarkersCleared; // 0x150 (0x10)
	struct FMulticastInlineDelegate OnReplayScrubStart; // 0x160 (0x10)
	struct FMulticastInlineDelegate OnReplayScrubComplete; // 0x170 (0x10)
	struct FMulticastInlineDelegate OnToggleSequencer; // 0x180 (0x10)
	struct FMulticastInlineDelegate OnSequenceFinished; // 0x190 (0x10)
	struct FMulticastInlineDelegate OnSequenceShotChanged; // 0x1a0 (0x10)
	struct FMulticastInlineDelegate OnHighlightPlayingEvent; // 0x1b0 (0x10)
	unsigned char unreflected_1c0[0xc0]; // 0x1c0 (0xc0) 
	struct TArray<class UFortSpectateClickableMapIcon*> InteractiveMapIcons; // 0x280 (0x10)
	unsigned char UniqueMapIconVisibility_290[0x50]; // 0x290 (0x50) (UNHANDLED PROPERTY TYPE: MapProperty UID: 0)
	struct TWeakObjectPtr<class AFortPlayerControllerSpectating> SpectatingPC; // 0x2e0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortReplayContext.ToggleViewSettingsVisibility (Underlying native function: ToggleViewSettingsVisibility 0x8e49ef0)
	void ToggleViewSettingsVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.TogglePlayPause (Underlying native function: TogglePlayPause 0x8e49edc)
	void TogglePlayPause(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.TogglePlayerListVisibility (Underlying native function: TogglePlayerListVisibility 0x87b6030)
	void TogglePlayerListVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.ToggleIconVisibility (Underlying native function: ToggleIconVisibility 0x8e49e38)
	bool ToggleIconVisibility(class UClass*& ToToggle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.ToggleHUDVisibility (Underlying native function: ToggleHUDVisibility 0x8e49e00)
	void ToggleHUDVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.ToggleHighlightsListVisibility (Underlying native function: ToggleHighlightsListVisibility 0x8e49e1c)
	void ToggleHighlightsListVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.TakeScreenshot (Underlying native function: TakeScreenshot 0x8e49dec)
	void TakeScreenshot(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.SkipTo (Underlying native function: SkipTo 0x8e49cc0)
	void SkipTo(float& TimeInSeconds); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.SkipForward (Underlying native function: SkipForward 0x8e49c2c)
	void SkipForward(float& TimeInSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.SkipBack (Underlying native function: SkipBack 0x8e49b94)
	void SkipBack(float& TimeInSeconds); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.SetSessionIdWatermarkVisible (Underlying native function: SetSessionIdWatermarkVisible 0x8e49830)
	void SetSessionIdWatermarkVisible(bool& bIsVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.ReplayHUDCleanup (Underlying native function: ReplayHUDCleanup 0x2fb63a4)
	void ReplayHUDCleanup(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.OnHighQualityFxEnabledChanged (Underlying native function: OnHighQualityFxEnabledChanged 0x8e480ac)
	void OnHighQualityFxEnabledChanged(bool& bEnabled); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortReplayContext.JumpToPreviousEvent (Underlying native function: JumpToPreviousEvent 0x8e47c20)
	void JumpToPreviousEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.JumpToNextEvent (Underlying native function: JumpToNextEvent 0x8e47bac)
	void JumpToNextEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.JumpToEvent (Underlying native function: JumpToEvent 0x8e47b2c)
	void JumpToEvent(int& EventIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.JumpReplayToTimelinePosition (Underlying native function: JumpReplayToTimelinePosition 0x8e47a98)
	void JumpReplayToTimelinePosition(float& TimeRatio); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.IsDepthOfFieldActive (Underlying native function: IsDepthOfFieldActive 0x8e47790)
	bool IsDepthOfFieldActive(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.IncreasePlaybackMultiplier (Underlying native function: IncreasePlaybackMultiplier 0x8e47758)
	void IncreasePlaybackMultiplier(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.GetMaxMapZoomLevel (Underlying native function: GetMaxMapZoomLevel 0x8e462c0)
	float GetMaxMapZoomLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortReplayContext.GetEventTooltip (Underlying native function: GetEventTooltip 0x8e46184)
	struct FString GetEventTooltip(int& EventIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortReplayContext.GetCameraNameFromType (Underlying native function: GetCameraNameFromType 0x25ce6e0)
	struct FText GetCameraNameFromType(enum ESpectatorCameraType& CamType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortReplayContext.DecreasePlaybackMultiplier (Underlying native function: DecreasePlaybackMultiplier 0x8e45ef4)
	void DecreasePlaybackMultiplier(); // (Final | Native | Public | BlueprintCallable)
};

