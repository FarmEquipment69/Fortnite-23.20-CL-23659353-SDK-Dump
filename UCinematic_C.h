// WidgetBlueprintGeneratedClass /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C
// Size: 0x5a1
class UCinematic_C : public UFortUIStateWidget_NUI
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x548 (0x8)
	class UNamedSlot* LocalizedAudioOnlyMovieSlot; // 0x550 (0x8)
	class UCommonWidgetStackLegacy* MainContentStack; // 0x558 (0x8)
	class UNamedSlot* MovieSlot; // 0x560 (0x8)
	class UOverlay* OverlayMovieOverlay; // 0x568 (0x8)
	class USubtitles_C* Subtitles; // 0x570 (0x8)
	class UTeamMicStack_C* TeamMicStack; // 0x578 (0x8)
	class UBuildWatermark_C* WidgetBuildWatermark; // 0x580 (0x8)
	class ULegacy_MovieWidget_C* MovieWidget; // 0x588 (0x8)
	class UFortMediaSubtitlesPlayer* SubtitlesPlayer; // 0x590 (0x8)
	class UObject* CinematicMediaSoundWave; // 0x598 (0x8)
	bool bFinished; // 0x5a0 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.GetAudioTrackIndex (Has no native function)
	void GetAudioTrackIndex(int& AudioTrack, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, struct TArray<struct FString>& CallFuncGetPreferredLanguagesReturnValue, struct TArray<struct FName>& CallFuncGetDataTableRowNamesOutRowNames, struct FString& CallFuncArrayGetItem, struct FName& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue, struct FCinematicLanuageToTrackStruct& CallFuncGetDataTableRowFromNameOutRow, bool& CallFuncGetDataTableRowFromNameReturnValue, bool& CallFuncLessIntIntReturnValue, struct FString& CallFuncConvNameToStringReturnValue, bool& CallFuncEqualEqualStriStriReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.StopAndClearSubtitles (Has no native function)
	void StopAndClearSubtitles(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary (Has no native function)
	void ClearOldSubtitlesIfNecessary(bool& NewSubtitlesExist, class UFortMediaSubtitlesPlayer*& NewSubtitles, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.SetMoviePlaying (Has no native function)
	void SetMoviePlaying(bool& MoviePlaying); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.ClearMovieWidget (Has no native function)
	void ClearMovieWidget(class UFortMovieWidget*& MovieWidgetToClear, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsValidReturnValue, class UMediaPlayer*& CallFuncGetMediaPlayerReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.ClearMovieSlot (Has no native function)
	void ClearMovieSlot(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.PopContentWidgetInternal (Has no native function)
	class UWidget* PopContentWidgetInternal(struct FContentPushState& State); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.SkipMovie (Has no native function)
	void SkipMovie(class UMediaPlayer*& CallFuncGetMediaPlayerReturnValue, bool& CallFuncIsPlayingReturnValue, bool& CallFuncPauseReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.ClearMovie (Has no native function)
	void ClearMovie(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.Show Movie (Has no native function)
	void ShowMovie(class UMediaPlayer*& MediaPlayer, class UMediaSource*& MediaSource, int& CallFuncGetAudioTrackIndexAudioTrack, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UMediaPlayer*& CallFuncGetMediaPlayerReturnValue, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class UPanelSlot*& CallFuncAddChildReturnValue, class ULegacy_MovieWidget_C*& CallFuncCreateReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic (Has no native function)
	void HandleClientEventQueueCinematic(class UObject*& EventSource, class UObject*& EventFocus, struct FFortClientEvent& ClientEvent); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.HandleEndReached (Has no native function)
	void HandleEndReached(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic (Has no native function)
	void HandleClientEventSkipCinematic(class UObject*& EventSource, class UObject*& EventFocus, struct FFortClientEvent& ClientEvent); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.PushContentWidgetInternal (Has no native function)
	void PushContentWidgetInternal(class UWidget*& Widget, struct FContentPushState& State); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.OnEnterState (Has no native function)
	void OnEnterState(enum EFortUIState& PreviousUIState); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.OnExitState (Has no native function)
	void OnExitState(enum EFortUIState& NextUIState); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic (Has no native function)
	void ExecuteUbergraphCinematic(int& EntryPoint, class UObject*& K2NodeHandleClientEventEventSource, class UObject*& K2NodeHandleClientEventEventFocus, struct FFortClientEvent& K2NodeHandleClientEventClientEvent, class UObject*& K2NodeHandleClientEventEventSource1, class UObject*& K2NodeHandleClientEventEventFocus1, struct FFortClientEvent& K2NodeHandleClientEventClientEvent1, class UFortMediaSubtitlesPlayer*& K2NodeDynamicCastAsFortMediaSubtitlesPlayer, bool& K2NodeDynamicCastbSuccess, class UFortMediaInfo*& K2NodeDynamicCastAsFortMediaInfo, bool& K2NodeDynamicCastbSuccess1, class UWidget*& K2NodeEventWidget, struct FContentPushState& K2NodeEventState, enum EFortUIState& K2NodeEventPreviousUIState, enum EFortUIState& K2NodeEventNextUIState, class APlayerController*& CallFuncGetPlayerControllerReturnValue, class APlayerController*& CallFuncGetPlayerControllerReturnValue1, bool& CallFuncIsValidReturnValue, class UMediaPlayer*& CallFuncGetMediaPlayerReturnValue, class UMediaPlayer*& CallFuncGetMediaPlayerReturnValue1, bool& CallFuncIsPreparingReturnValue, bool& CallFuncIsPlayingReturnValue, bool& CallFuncBooleanORReturnValue); // (Final | 0x00008000 | HasDefaults)
};

