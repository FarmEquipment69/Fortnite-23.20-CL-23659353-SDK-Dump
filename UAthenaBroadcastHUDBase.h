// Class /Script/FortniteUI.AthenaBroadcastHUDBase
// Size: 0x728
class UAthenaBroadcastHUDBase : public UAthenaHUDBase
{
	struct FDataTableRowHandle ToggleMatchStatusActionRowHandle; // 0x5a8 (0x10)
	struct FDataTableRowHandle ToggleSquadStatusActionRowHandle; // 0x5b8 (0x10)
	struct FDataTableRowHandle ToggleRemainingPlayersActionRowHandle; // 0x5c8 (0x10)
	struct FDataTableRowHandle ToggleActiveGridScreenActionRowHandle; // 0x5d8 (0x10)
	struct FDataTableRowHandle ToggleEliminatedGridScreenActionRowHandle; // 0x5e8 (0x10)
	struct FDataTableRowHandle ToggleMatchStatusScreenActionRowHandle; // 0x5f8 (0x10)
	struct FDataTableRowHandle ToggleScoreboardScreenActionRowHandle; // 0x608 (0x10)
	struct FDataTableRowHandle ToggleKillFeedActionRowHandle; // 0x618 (0x10)
	struct FDataTableRowHandle ToggleActionFeedScreenActionRowHandle; // 0x628 (0x10)
	struct FDataTableRowHandle ToggleGotoTimeRowHandle; // 0x638 (0x10)
	struct FDataTableRowHandle TogglePipModeActionRowHandle; // 0x648 (0x10)
	struct FDataTableRowHandle ToggleFollowedPlayerInfoActionRowHandle; // 0x658 (0x10)
	struct FDataTableRowHandle ToggleFullscreenMapActionRowHandle; // 0x668 (0x10)
	struct TMap<struct TWeakObjectPtr<class UClass>, struct FUIExtension> ExtensionWidgetOverrides; // 0x678 (0x50)
	class UAthenaSpectatorHUDControlsBase* BroadcastHUDControls; // 0x6c8 (0x8)
	class UCommonActivatableWidgetStack* WidgetStackSpectatorPrimaryContent; // 0x6d0 (0x8)
	class UAthenaSpectatorNameplateLayerBase* NameplateLayer; // 0x6d8 (0x8)
	class UAthenaBroadcastMapPanelBase* AthenaBroadcastMapPanel; // 0x6e0 (0x8)
	class UCommonWidgetSwitcherLegacy* EventMatchInfoSwitcher; // 0x6e8 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherTopLeft; // 0x6f0 (0x8)
	class USpacer* TopLeftEmpty; // 0x6f8 (0x8)
	class UFortBroadcastViewSettings* TopLeftViewSettings; // 0x700 (0x8)
	class UAthenaReplayActionFeedScreenBase* TopLeftActionFeed; // 0x708 (0x8)
	class UFortReplayGoToTimeDialogue* TopLeftGoToTime; // 0x710 (0x8)
	class UFortReplayHighlightsWindow* TopLeftHighlights; // 0x718 (0x8)
	unsigned char padding_720[0x8]; // 0x720 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.TryHandleIfPlayerStateAlreadyInVolume (Underlying native function: TryHandleIfPlayerStateAlreadyInVolume 0xa5bdf80)
	void TryHandleIfPlayerStateAlreadyInVolume(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.SetFullscreenMapVisibility (Has no native function)
	void SetFullscreenMapVisibility(bool& bIsVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnVolumeMinigameChanged (Underlying native function: OnVolumeMinigameChanged 0xa5bc9ec)
	void OnVolumeMinigameChanged(class AFortMinigame*& Minigame); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnVolumeEndOverlap (Underlying native function: OnVolumeEndOverlap 0xa5bc8b0)
	void OnVolumeEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnVolumeBeginOverlap (Underlying native function: OnVolumeBeginOverlap 0xa5bc6b0)
	void OnVolumeBeginOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnUnableToPerformAction (Has no native function)
	void OnUnableToPerformAction(struct FGameplayTagContainer& FailedReason, struct FText& FailureText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnToggleSquadStatusActionExecuted (Has no native function)
	void OnToggleSquadStatusActionExecuted(bool& bPassThrough); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnToggleScoreboardScreenActionExecuted (Underlying native function: OnToggleScoreboardScreenActionExecuted 0xa5bc630)
	void OnToggleScoreboardScreenActionExecuted(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnToggleRemainingPlayersActionExecuted (Has no native function)
	void OnToggleRemainingPlayersActionExecuted(bool& bPassThrough); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnTogglePipModeActionExecuted (Underlying native function: OnTogglePipModeActionExecuted 0xa5bc5b4)
	void OnTogglePipModeActionExecuted(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnToggleMatchStatusScreenActionExecuted (Underlying native function: OnToggleMatchStatusScreenActionExecuted 0xa5bc534)
	void OnToggleMatchStatusScreenActionExecuted(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnToggleMatchStatusActionExecuted (Has no native function)
	void OnToggleMatchStatusActionExecuted(bool& bPassThrough); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnToggleKillFeedActionExecuted (Underlying native function: OnToggleKillFeedActionExecuted 0xa5bc4b8)
	void OnToggleKillFeedActionExecuted(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnToggleFollowedPlayerInfoActionExecuted (Has no native function)
	void OnToggleFollowedPlayerInfoActionExecuted(bool& bPassThrough); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnToggleEliminatedGridScreenActionExecuted (Underlying native function: OnToggleEliminatedGridScreenActionExecuted 0xa5bc438)
	void OnToggleEliminatedGridScreenActionExecuted(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnToggleActiveGridScreenActionExecuted (Underlying native function: OnToggleActiveGridScreenActionExecuted 0xa5bc3b8)
	void OnToggleActiveGridScreenActionExecuted(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnPlaylistDataChanged (Has no native function)
	void OnPlaylistDataChanged(class UFortPlaylistAthena*& PlaylistData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnPlayerTargetingChanged (Has no native function)
	void OnPlayerTargetingChanged(bool& bIsTargeting); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnPipModeChanged (Has no native function)
	void OnPipModeChanged(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnMinigameChanged (Has no native function)
	void OnMinigameChanged(class AFortMinigame*& NewMinigame); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnIndicatorModeChanged (Has no native function)
	void OnIndicatorModeChanged(bool& bIndicatorsEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnHudVisibilityChanged (Has no native function)
	void OnHudVisibilityChanged(enum EHudVisibilityState& NewVisibility); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnGameStateSet_BP (Has no native function)
	void OnGameStateSetBP(class AFortGameStateAthena*& GameStateAthena); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnGameStateSet (Underlying native function: OnGameStateSet 0xa5bb82c)
	void OnGameStateSet(class AFortGameState*& NewGameState); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnCursorModeChanging (Underlying native function: OnCursorModeChanging 0x293ba70)
	void OnCursorModeChanging(bool& bCursorModeEnabled, struct FName& ActionName); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.OnCurrentPlaylistChanged (Underlying native function: OnCurrentPlaylistChanged 0xa5bb77c)
	void OnCurrentPlaylistChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.HandleToggleReplayViewSettings (Underlying native function: HandleToggleReplayViewSettings 0xa5baa84)
	void HandleToggleReplayViewSettings(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.HandleToggleHighlightsList (Underlying native function: HandleToggleHighlightsList 0xa5baa68)
	void HandleToggleHighlightsList(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.HandleToggleGoToTime (Underlying native function: HandleToggleGoToTime 0xa5baa4c)
	void HandleToggleGoToTime(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.HandleToggleActionFeedScreen (Underlying native function: HandleToggleActionFeedScreen 0xa5baa30)
	void HandleToggleActionFeedScreen(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.HandleSpectatorViewTargetChanged (Underlying native function: HandleSpectatorViewTargetChanged 0xa5ba2d4)
	void HandleSpectatorViewTargetChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.HandleNameplatesEnabledChanged (Underlying native function: HandleNameplatesEnabledChanged 0xa5b9ef4)
	void HandleNameplatesEnabledChanged(bool& bInNameplatesEnabled); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.HandleHudVisibilityChanged (Underlying native function: HandleHudVisibilityChanged 0x29a5694)
	void HandleHudVisibilityChanged(enum EHudVisibilityState& NewVisibility); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastHUDBase.HandleFollowedPlayerRespawnTimeChanged (Has no native function)
	void HandleFollowedPlayerRespawnTimeChanged(float& RespawnTime); // (Event | Protected | BlueprintEvent)
};

