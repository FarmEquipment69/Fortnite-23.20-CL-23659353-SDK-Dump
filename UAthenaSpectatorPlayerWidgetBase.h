// Class /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase
// Size: 0x378
class UAthenaSpectatorPlayerWidgetBase : public UCommonUserWidget
{
	unsigned char unreflected_378[0x378]; 

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.SetPlayerData (Underlying native function: SetPlayerData 0x1bb726c)
	void SetPlayerData(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bForceUpdate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnTeamColorChanged (Has no native function)
	void OnTeamColorChanged(struct FLinearColor& TeamColor); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnStormcapScoreChanged (Has no native function)
	void OnStormcapScoreChanged(float& Score); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnSquadIdVisibilityChanged (Has no native function)
	void OnSquadIdVisibilityChanged(bool& bVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnSquadIdChanged (Has no native function)
	void OnSquadIdChanged(unsigned char& SquadId); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnShieldHealed (Has no native function)
	void OnShieldHealed(float& Shield, float& ShieldMax); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnShieldDamaged (Has no native function)
	void OnShieldDamaged(float& Shield, float& ShieldMax); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnPlayerStateChanged (Has no native function)
	void OnPlayerStateChanged(class AFortPlayerStateAthena*& PlayerState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnPlayerPawnChanged (Has no native function)
	void OnPlayerPawnChanged(class AFortPlayerPawn*& PlayerPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnPlayerNameChanged (Has no native function)
	void OnPlayerNameChanged(struct FString& PlayerName); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnPlayerDataChanged (Has no native function)
	void OnPlayerDataChanged(class UAthenaRemotePlayerViewData*& InPlayerData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnPlaceChanged (Has no native function)
	void OnPlaceChanged(int& Place); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnPipModeChanged (Has no native function)
	void OnPipModeChanged(bool& bPipModeEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnMaterialCountChanged (Has no native function)
	void OnMaterialCountChanged(int& Count); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnLocationChanged (Has no native function)
	void OnLocationChanged(struct FString& Location); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnKillScoreChanged (Has no native function)
	void OnKillScoreChanged(int& KillScore); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnIsReplayRelevancyPlayerChanged (Has no native function)
	void OnIsReplayRelevancyPlayerChanged(bool& bIsReplayRelevancyPlayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnIsInRelevancyChanged (Has no native function)
	void OnIsInRelevancyChanged(bool& bIsInRelevancy); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnIsFollowedPlayerChanged (Has no native function)
	void OnIsFollowedPlayerChanged(bool& bIsFollowedPlayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnHealthHealed (Has no native function)
	void OnHealthHealed(float& Health, float& HealthMax); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnHealthDamaged (Has no native function)
	void OnHealthDamaged(float& Health, float& HealthMax); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnEventScoreChanged (Has no native function)
	void OnEventScoreChanged(int& EventScore); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnDisconnectedChanged (Has no native function)
	void OnDisconnectedChanged(bool& bIsDisconnected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnDeadStateChanged (Has no native function)
	void OnDeadStateChanged(bool& bIsDead); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnDBNOStateChanged (Has no native function)
	void OnDBNOStateChanged(bool& bIsDBNO); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.OnBeingRevivedStateChanged (Has no native function)
	void OnBeingRevivedStateChanged(bool& bIsBeingRevived); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleTeamColorChanged (Underlying native function: HandleTeamColorChanged 0xa5ba634)
	void HandleTeamColorChanged(class UAthenaRemotePlayerViewData*& InPlayerData, struct FLinearColor& TeamColor); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleSquadIdChanged (Underlying native function: HandleSquadIdChanged 0xa5ba3ac)
	void HandleSquadIdChanged(class UAthenaRemotePlayerViewData*& InPlayerData, unsigned char& SquadId); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleShieldHealed (Underlying native function: HandleShieldHealed 0x24f9cc8)
	void HandleShieldHealed(class UAthenaRemotePlayerViewData*& InPlayerData, float& Shield, float& MaxShield); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleShieldDamaged (Underlying native function: HandleShieldDamaged 0x26670e0)
	void HandleShieldDamaged(class UAthenaRemotePlayerViewData*& InPlayerData, float& Shield, float& MaxShield); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandlePlayerStateChanged (Underlying native function: HandlePlayerStateChanged 0xa5ba190)
	void HandlePlayerStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, class AFortPlayerStateAthena*& PlayerState); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandlePlayerNameChanged (Underlying native function: HandlePlayerNameChanged 0xa5b9ff4)
	void HandlePlayerNameChanged(class UAthenaRemotePlayerViewData*& InPlayerData, struct FString& PlayerName); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandlePlaceChanged (Underlying native function: HandlePlaceChanged 0x2507544)
	void HandlePlaceChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& Place); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleMaterialCountChanged (Underlying native function: HandleMaterialCountChanged 0xa5b9e34)
	void HandleMaterialCountChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& MaterialCount); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleKillScoreChanged (Underlying native function: HandleKillScoreChanged 0x252fbd0)
	void HandleKillScoreChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& KillScore); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleIsReplayRelevancyPlayerChanged (Underlying native function: HandleIsReplayRelevancyPlayerChanged 0x177bc50)
	void HandleIsReplayRelevancyPlayerChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsReplayRelevancyPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleIsInRelevancyChanged (Underlying native function: HandleIsInRelevancyChanged 0x24bad10)
	void HandleIsInRelevancyChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsInRelevancy); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleIsFollowedPlayerChanged (Underlying native function: HandleIsFollowedPlayerChanged 0x24b72ec)
	void HandleIsFollowedPlayerChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsFollowedPlayer); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleHealthHealed (Underlying native function: HandleHealthHealed 0x246518c)
	void HandleHealthHealed(class UAthenaRemotePlayerViewData*& InPlayerData, float& Health, float& MaxHealth); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleHealthDamaged (Underlying native function: HandleHealthDamaged 0x22df8dc)
	void HandleHealthDamaged(class UAthenaRemotePlayerViewData*& InPlayerData, float& Health, float& MaxHealth); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleDisconnectedChanged (Underlying native function: HandleDisconnectedChanged 0xa5b9b14)
	void HandleDisconnectedChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsDisconnected); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleDeadStateChanged (Underlying native function: HandleDeadStateChanged 0x24f7b08)
	void HandleDeadStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsDead); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleDBNOStateChanged (Underlying native function: HandleDBNOStateChanged 0x24d9840)
	void HandleDBNOStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsDBNO); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.HandleBeingRevivedStateChanged (Underlying native function: HandleBeingRevivedStateChanged 0xa5b9a34)
	void HandleBeingRevivedStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsBeingRevived); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.GetPlayerData (Underlying native function: GetPlayerData 0x21e7328)
	class UAthenaRemotePlayerViewData* GetPlayerData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaSpectatorPlayerWidgetBase.BP_HandlePlaylistExtensionWidgetCreated (Has no native function)
	void BPHandlePlaylistExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)
};

