// Class /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase
// Size: 0x1440
class UAthenaEventMatchPlayerWidgetBase : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	struct TWeakObjectPtr<class UAthenaRemotePlayerViewData> PlayerData; // 0x1438 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.SetPlayerData (Underlying native function: SetPlayerData 0xa5bd364)
	void SetPlayerData(class UAthenaRemotePlayerViewData*& InPlayerData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnTeamColorChanged (Has no native function)
	void OnTeamColorChanged(class UAthenaRemotePlayerViewData*& InPlayerData, struct FLinearColor& InTeamColor); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnSquadIdChanged (Has no native function)
	void OnSquadIdChanged(class UAthenaRemotePlayerViewData*& InPlayerData, unsigned char& InSquadId); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnShieldHealed (Has no native function)
	void OnShieldHealed(class UAthenaRemotePlayerViewData*& InPlayerData, float& InShield, float& InShieldMax); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnShieldDamaged (Has no native function)
	void OnShieldDamaged(class UAthenaRemotePlayerViewData*& InPlayerData, float& InShield, float& InShieldMax); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnPlayerStateChanged (Has no native function)
	void OnPlayerStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, class AFortPlayerStateAthena*& InPlayerState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnPlayerPawnChanged (Has no native function)
	void OnPlayerPawnChanged(class UAthenaRemotePlayerViewData*& InPlayerData, class AFortPlayerPawn*& InPlayerPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnPlayerNameChanged (Has no native function)
	void OnPlayerNameChanged(class UAthenaRemotePlayerViewData*& InPlayerData, struct FString& InPlayerName); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnPlayerDataChanged (Has no native function)
	void OnPlayerDataChanged(class UAthenaRemotePlayerViewData*& InPlayerData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnPlaceChanged (Has no native function)
	void OnPlaceChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InPlace); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnMaterialCountChanged (Has no native function)
	void OnMaterialCountChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnLocationChanged (Has no native function)
	void OnLocationChanged(class UAthenaRemotePlayerViewData*& InPlayerData, struct FString& InLocation); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnKillScoreChanged (Has no native function)
	void OnKillScoreChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InKillScore); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnIsReplayRelevancyPlayerChanged (Has no native function)
	void OnIsReplayRelevancyPlayerChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsReplayRelevancyPlayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnIsInRelevancyChanged (Has no native function)
	void OnIsInRelevancyChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsInRelevancy); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnIsFollowedPlayerChanged (Has no native function)
	void OnIsFollowedPlayerChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsFollowedPlayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnHealthHealed (Has no native function)
	void OnHealthHealed(class UAthenaRemotePlayerViewData*& InPlayerData, float& InHealth, float& InHealthMax); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnHealthDamaged (Has no native function)
	void OnHealthDamaged(class UAthenaRemotePlayerViewData*& InPlayerData, float& InHealth, float& InHealthMax); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnDisconnectedChanged (Has no native function)
	void OnDisconnectedChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsDisconnected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnDeadStateChanged (Has no native function)
	void OnDeadStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsDead); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnDBNOStateChanged (Has no native function)
	void OnDBNOStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsDBNO); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchPlayerWidgetBase.OnBeingRevivedStateChanged (Has no native function)
	void OnBeingRevivedStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bIsBeingRevived); // (Event | Protected | BlueprintEvent)
};

