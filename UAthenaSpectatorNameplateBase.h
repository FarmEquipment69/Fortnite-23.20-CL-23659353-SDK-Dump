// Class /Script/FortniteUI.AthenaSpectatorNameplateBase
// Size: 0x398
class UAthenaSpectatorNameplateBase : public UFortActorIndicatorWidget
{
	float DistanceToCameraOffsetScale; // 0x378 (0x4)
	float MinZOffset; // 0x37c (0x4)
	float MaxZOffset; // 0x380 (0x4)
	bool bOverrideNameplateScaleToMax; // 0x384 (0x1)
	unsigned char unreflected_385[0x3]; // 0x385 (0x3) 
	struct TWeakObjectPtr<class UAthenaRemotePlayerViewData> PlayerData; // 0x388 (0x8)
	enum EAthenaSpectatorNameplateDistanceState CurrentDistanceState; // 0x390 (0x1)
	enum EAthenaSpectatorNameplateDetailState CurrentDetailState; // 0x391 (0x1)
	unsigned char padding_392[0x6]; // 0x392 (0x6)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.SetTeamColorVisible (Has no native function)
	void SetTeamColorVisible(bool& bTeamColorVisible); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.SetSquadIdVisibility (Has no native function)
	void SetSquadIdVisibility(bool& bSquadIdVisible); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.SetArrowTeamColorVisible (Has no native function)
	void SetArrowTeamColorVisible(bool& bArrowTeamColorVisible); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.OnVehicleStateChanged (Has no native function)
	void OnVehicleStateChanged(class AActor*& NewVehicle, class AActor*& OldVehicle); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.OnTeamColorChanged (Has no native function)
	void OnTeamColorChanged(class UAthenaRemotePlayerViewData*& InPlayerData, struct FLinearColor& InTeamColor); // (Event | Protected | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.OnSquadIDsDisplayModeHoldUpdate (Has no native function)
	void OnSquadIDsDisplayModeHoldUpdate(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.OnSquadIdChanged (Has no native function)
	void OnSquadIdChanged(class UAthenaRemotePlayerViewData*& InPlayerData, unsigned char& InSquadId); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.OnSessionRankChanged (Has no native function)
	void OnSessionRankChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InGamerank); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.OnPlayerPawnChanged (Underlying native function: OnPlayerPawnChanged 0x259e990)
	void OnPlayerPawnChanged(class UAthenaRemotePlayerViewData*& InPlayerData, class AFortPlayerPawn*& InPlayerPawn); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.OnPlayerNameChanged (Has no native function)
	void OnPlayerNameChanged(class UAthenaRemotePlayerViewData*& InPlayerData, struct FString& InPlayerName); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.OnPlayerDataSet (Has no native function)
	void OnPlayerDataSet(class UAthenaRemotePlayerViewData*& InPlayerData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.OnDistanceStateChanged (Has no native function)
	void OnDistanceStateChanged(enum EAthenaSpectatorNameplateDistanceState& NewDistanceState); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.OnDetailStateChanged (Has no native function)
	void OnDetailStateChanged(enum EAthenaSpectatorNameplateDetailState& NewDetailState); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorNameplateBase.HandleDisplaySessionRankChanged (Has no native function)
	void HandleDisplaySessionRankChanged(bool& bDisplay); // (Event | Protected | BlueprintEvent)
};

