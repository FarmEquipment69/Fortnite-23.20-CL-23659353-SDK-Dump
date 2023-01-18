// Class /Script/FortniteUI.AthenaSpectatorHUDControlsBase
// Size: 0x2a8
class UAthenaSpectatorHUDControlsBase : public UCommonUserWidget
{
	class UFortTimelineBase* ReplayTimeline; // 0x290 (0x8)
	class UCommonButtonLegacy* ButtonFocusTimeline; // 0x298 (0x8)
	class UIconTextButtonSpectatorBase* IconTextButtonReplayPlayHighlights; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorHUDControlsBase.ResetFocusToPlayPauseIfNeeded (Has no native function)
	void ResetFocusToPlayPauseIfNeeded(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorHUDControlsBase.OnFollowedPlayerChanged (Has no native function)
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatorPC, class AFortPlayerState*& NewFollowedPlayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorHUDControlsBase.OnCameraTypeChangedInternal (Underlying native function: OnCameraTypeChangedInternal 0x23cddf8)
	void OnCameraTypeChangedInternal(class AFortPlayerControllerSpectating*& SpectatorPC, enum ESpectatorCameraType& NewCameraType); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorHUDControlsBase.OnCameraTypeChanged (Has no native function)
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating*& SpectatorPC, enum ESpectatorCameraType& NewCameraType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorHUDControlsBase.HandleReplayHighlightsAvailable (Underlying native function: HandleReplayHighlightsAvailable 0x23cd56c)
	void HandleReplayHighlightsAvailable(class AFortReplaySpectator*& Sender, bool& bIsAvailable); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorHUDControlsBase.HandleBattleMapTimelineModeChanged (Has no native function)
	void HandleBattleMapTimelineModeChanged(bool& bIsOnTimelineMode); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorHUDControlsBase.CenterControls (Has no native function)
	void CenterControls(); // (Event | Public | BlueprintEvent)
};

