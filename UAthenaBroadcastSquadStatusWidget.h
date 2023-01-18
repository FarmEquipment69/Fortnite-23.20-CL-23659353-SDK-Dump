// Class /Script/FortniteUI.AthenaBroadcastSquadStatusWidget
// Size: 0x308
class UAthenaBroadcastSquadStatusWidget : public UAthenaEventMatchSquadWidgetBase
{
	struct FUniqueNetIdRepl FollowedPlayerUID; // 0x2d8 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.AthenaBroadcastSquadStatusWidget.OnPipModeChanged (Has no native function)
	void OnPipModeChanged(bool& bPipModeEnabled); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastSquadStatusWidget.OnMinigameTeamIdChanged (Has no native function)
	void OnMinigameTeamIdChanged(class UFortMinigameTeamIdentification*& MinigameTeamId); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastSquadStatusWidget.OnFollowedPlayerChanged (Has no native function)
	void OnFollowedPlayerChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaBroadcastSquadStatusWidget.HandleSquadIdChanged (Underlying native function: HandleSquadIdChanged 0xa5ba2e8)
	void HandleSquadIdChanged(class UAthenaRemoteSquadViewData*& InSquadData, unsigned char& SquadId); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaBroadcastSquadStatusWidget.HandleFollowedPlayerChanged (Underlying native function: HandleFollowedPlayerChanged 0x22812e8)
	void HandleFollowedPlayerChanged(class AFortPlayerControllerSpectating*& SpectatorController, class AFortPlayerState*& NewFollowedPlayer); // (Final | Native | Protected)
};

