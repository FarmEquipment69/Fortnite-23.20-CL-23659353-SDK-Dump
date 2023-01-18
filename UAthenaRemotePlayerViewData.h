// Class /Script/FortniteUI.AthenaRemotePlayerViewData
// Size: 0x2a8
class UAthenaRemotePlayerViewData : public UObject
{
	struct FMulticastInlineDelegate OnPlayerStateChanged; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnTeamColorChanged; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnSquadIdChanged; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnPlayerNameChanged; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnKillScoreChanged; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnLocationChanged; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnHealthHealed; // 0x88 (0x10)
	struct FMulticastInlineDelegate OnHealthDamaged; // 0x98 (0x10)
	struct FMulticastInlineDelegate OnShieldHealed; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnShieldDamaged; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnOvershieldHealed; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnOvershieldDamaged; // 0xd8 (0x10)
	struct FMulticastInlineDelegate OnDBNOStateChanged; // 0xe8 (0x10)
	struct FMulticastInlineDelegate OnDeadStateChanged; // 0xf8 (0x10)
	struct FMulticastInlineDelegate OnBeingRevivedStateChanged; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnDisconnectedChanged; // 0x118 (0x10)
	struct FMulticastInlineDelegate OnPlayerPawnChanged; // 0x128 (0x10)
	struct FMulticastInlineDelegate OnWeaponChanged; // 0x138 (0x10)
	struct FMulticastInlineDelegate OnDistanceToStormChanged; // 0x148 (0x10)
	struct FMulticastInlineDelegate OnPlaceChanged; // 0x158 (0x10)
	struct FMulticastInlineDelegate OnMaterialCountChanged; // 0x168 (0x10)
	struct FMulticastInlineDelegate OnIsInRelevancyChanged; // 0x178 (0x10)
	struct FMulticastInlineDelegate OnIsFollowedPlayerChanged; // 0x188 (0x10)
	struct FMulticastInlineDelegate OnIsReplayRelevancyPlayerChanged; // 0x198 (0x10)
	struct FMulticastInlineDelegate OnVehicleHealthHealed; // 0x1a8 (0x10)
	struct FMulticastInlineDelegate OnVehicleHealthDamaged; // 0x1b8 (0x10)
	struct FMulticastInlineDelegate OnSessionRankChanged; // 0x1c8 (0x10)
	struct FUniqueNetIdRepl PlayerUID; // 0x1d8 (0x30)
	struct TWeakObjectPtr<class AFortPlayerStateAthena> PlayerState; // 0x208 (0x8)
	unsigned char unreflected_210[0x5c]; // 0x210 (0x5c) 
	struct TWeakObjectPtr<class AFortPlayerPawn> CachedPlayerPawn; // 0x26c (0x8)
	unsigned char padding_274[0x34]; // 0x274 (0x34)

	/* Functions */

	// DelegateFunction /Script/FortniteUI.AthenaRemotePlayerViewData.WeaponDelegate__DelegateSignature (Has no native function)
	void WeaponDelegateDelegateSignature(class UAthenaRemotePlayerViewData*& PlayerData, class AFortWeapon*& WeaponParam); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.UpdatePlayerPawn (Underlying native function: UpdatePlayerPawn 0x27d016c)
	void UpdatePlayerPawn(); // (Final | Native | Public)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.UpdateDistanceToStorm (Underlying native function: UpdateDistanceToStorm 0xa5bdfbc)
	void UpdateDistanceToStorm(); // (Final | Native | Public)

	// DelegateFunction /Script/FortniteUI.AthenaRemotePlayerViewData.UInt8Delegate__DelegateSignature (Has no native function)
	void UInt8DelegateDelegateSignature(class UAthenaRemotePlayerViewData*& PlayerData, unsigned char& IntParam); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaRemotePlayerViewData.TwoFloatDelegate__DelegateSignature (Has no native function)
	void TwoFloatDelegateDelegateSignature(class UAthenaRemotePlayerViewData*& PlayerData, float& FloatParam, float& FloatParamMax); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaRemotePlayerViewData.StringDelegate__DelegateSignature (Has no native function)
	void StringDelegateDelegateSignature(class UAthenaRemotePlayerViewData*& PlayerData, struct FString& StringParam); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.SetPlayerState (Underlying native function: SetPlayerState 0xa5bd554)
	void SetPlayerState(class AFortPlayerStateAthena*& InPlayerState); // (Final | Native | Public)

	// DelegateFunction /Script/FortniteUI.AthenaRemotePlayerViewData.PlayerStateDelegate__DelegateSignature (Has no native function)
	void PlayerStateDelegateDelegateSignature(class UAthenaRemotePlayerViewData*& PlayerData, class AFortPlayerStateAthena*& PlayerState); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaRemotePlayerViewData.PawnDelegate__DelegateSignature (Has no native function)
	void PawnDelegateDelegateSignature(class UAthenaRemotePlayerViewData*& PlayerData, class AFortPlayerPawn*& PawnParam); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaRemotePlayerViewData.LinearColorDelegate__DelegateSignature (Has no native function)
	void LinearColorDelegateDelegateSignature(class UAthenaRemotePlayerViewData*& PlayerData, struct FLinearColor& ColorParam); // (MulticastDelegate | Public | Delegate | HasDefaults)

	// DelegateFunction /Script/FortniteUI.AthenaRemotePlayerViewData.IntDelegate__DelegateSignature (Has no native function)
	void IntDelegateDelegateSignature(class UAthenaRemotePlayerViewData*& PlayerData, int& IntParam); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetVehicleMaxHealth (Underlying native function: GetVehicleMaxHealth 0x10191c0)
	float GetVehicleMaxHealth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetVehicleHealthPercent (Underlying native function: GetVehicleHealthPercent 0xa5b9788)
	float GetVehicleHealthPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetVehicleHealth (Underlying native function: GetVehicleHealth 0x1019198)
	float GetVehicleHealth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetVehicle (Underlying native function: GetVehicle 0xa5b9764)
	class AActor* GetVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetTeamColor (Underlying native function: GetTeamColor 0xa5b9664)
	struct FLinearColor GetTeamColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetSquadID (Underlying native function: GetSquadID 0xa5b94f8)
	unsigned char GetSquadID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetShieldPercent (Underlying native function: GetShieldPercent 0xa5b93dc)
	float GetShieldPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetShield (Underlying native function: GetShield 0x1097b80)
	void GetShield(float& Shield, float& ShieldMax); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetSessionRank (Underlying native function: GetSessionRank 0x72706a0)
	int GetSessionRank(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetPlayerUID (Underlying native function: GetPlayerUID 0xa5b91dc)
	struct FUniqueNetIdRepl GetPlayerUID(); // (Final | Native | Public | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetPlayerState (Underlying native function: GetPlayerState 0x22878e8)
	class AFortPlayerStateAthena* GetPlayerState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetPlayerPawn (Underlying native function: GetPlayerPawn 0x1019174)
	class AFortPlayerPawn* GetPlayerPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetPlayerName (Underlying native function: GetPlayerName 0x2416624)
	struct FString GetPlayerName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetPlace (Underlying native function: GetPlace 0xa5b91b8)
	int GetPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetOvershieldPercent (Underlying native function: GetOvershieldPercent 0xa5b9178)
	float GetOvershieldPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetOvershield (Underlying native function: GetOvershield 0xa5b90a0)
	void GetOvershield(float& Overshield, float& OvershieldMax); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetMaterialCount (Underlying native function: GetMaterialCount 0xa5b9088)
	int GetMaterialCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetLocation (Underlying native function: GetLocation 0x7308ee4)
	struct FString GetLocation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetKillScore (Underlying native function: GetKillScore 0xa5b9014)
	int GetKillScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetIsReplayRelevancyPlayer (Underlying native function: GetIsReplayRelevancyPlayer 0xa5b8ffc)
	bool GetIsReplayRelevancyPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetIsInRelevancy (Underlying native function: GetIsInRelevancy 0xa5b8fe4)
	bool GetIsInRelevancy(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetIsFollowedPlayer (Underlying native function: GetIsFollowedPlayer 0xa5b8fcc)
	bool GetIsFollowedPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetIsEliminated (Underlying native function: GetIsEliminated 0x23c7f30)
	bool GetIsEliminated(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetIsDrivingVehicle (Underlying native function: GetIsDrivingVehicle 0xa5b8f70)
	bool GetIsDrivingVehicle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetIsDisconnected (Underlying native function: GetIsDisconnected 0x2359bcc)
	bool GetIsDisconnected(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetIsDead (Underlying native function: GetIsDead 0x2359ba8)
	bool GetIsDead(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetIsDBNO (Underlying native function: GetIsDBNO 0x23263e8)
	bool GetIsDBNO(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetIsBeingRevived (Underlying native function: GetIsBeingRevived 0x1b51154)
	bool GetIsBeingRevived(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetInAircraft (Underlying native function: GetInAircraft 0x1098e24)
	bool GetInAircraft(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetHealthPercent (Underlying native function: GetHealthPercent 0x1099590)
	float GetHealthPercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetHealth (Underlying native function: GetHealth 0x1097c24)
	void GetHealth(float& Health, float& HealthMax); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetDistanceToStorm (Underlying native function: GetDistanceToStorm 0xa5b8c74)
	int GetDistanceToStorm(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.GetCurrentWeapon (Underlying native function: GetCurrentWeapon 0xa5b8c38)
	class AFortWeapon* GetCurrentWeapon(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnWeaponChanged (Underlying native function: ForwardOnWeaponChanged 0x224635c)
	void ForwardOnWeaponChanged(class AFortWeapon*& InNewWeapon, class AFortWeapon*& InPrevWeapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnVehicleStateChanged (Underlying native function: ForwardOnVehicleStateChanged 0xa5b8830)
	void ForwardOnVehicleStateChanged(class AFortPlayerPawn*& PlayerPawn, class AActor*& NewVehicle, class AActor*& OldVehicle); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnVehicleHealthChanged (Underlying native function: ForwardOnVehicleHealthChanged 0x1019024)
	void ForwardOnVehicleHealthChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnSquadIdChanged (Underlying native function: ForwardOnSquadIdChanged 0xa5b87b0)
	void ForwardOnSquadIdChanged(unsigned char& InSquadId); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnPlayerNameChanged (Underlying native function: ForwardOnPlayerNameChanged 0xa5b8614)
	void ForwardOnPlayerNameChanged(class AFortPlayerStateAthena*& InPlayerState, struct FString& InPlayerName); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnPlaceChanged (Underlying native function: ForwardOnPlaceChanged 0x2528134)
	void ForwardOnPlaceChanged(class AFortPlayerStateAthena*& Sender, int& InPlace); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnLocationChanged (Underlying native function: ForwardOnLocationChanged 0xa5b84bc)
	void ForwardOnLocationChanged(struct FString& InLocation); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnKillScoreChanged (Underlying native function: ForwardOnKillScoreChanged 0xa5b83e8)
	void ForwardOnKillScoreChanged(class AFortPlayerStateAthena*& InPlayerState, int& InKillScore); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnHitPointsStateChanged (Underlying native function: ForwardOnHitPointsStateChanged 0xa5b8264)
	void ForwardOnHitPointsStateChanged(class AFortPlayerStateAthena*& InPlayerState, float& InHealth, float& InHealthMax, float& InShield, float& InShieldMax); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnDisconnectedChanged (Underlying native function: ForwardOnDisconnectedChanged 0xa5b819c)
	void ForwardOnDisconnectedChanged(class AFortPlayerStateAthena*& InPlayerState, bool& bInIsDisconnected); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnDeadStateChanged (Underlying native function: ForwardOnDeadStateChanged 0xa5b80cc)
	void ForwardOnDeadStateChanged(class AFortPlayerStateAthena*& InPlayerState, bool& bInIsDead); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnDBNOStateChanged (Underlying native function: ForwardOnDBNOStateChanged 0xa5b7ffc)
	void ForwardOnDBNOStateChanged(class AFortPlayerStateAthena*& InPlayerState, bool& bInIsDBNO); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemotePlayerViewData.ForwardOnBeingRevivedStateChanged (Underlying native function: ForwardOnBeingRevivedStateChanged 0xa5b7f34)
	void ForwardOnBeingRevivedStateChanged(class AFortPlayerStateAthena*& InPlayerState, bool& bInIsBeingRevived); // (Final | Native | Private)

	// DelegateFunction /Script/FortniteUI.AthenaRemotePlayerViewData.BoolDelegate__DelegateSignature (Has no native function)
	void BoolDelegateDelegateSignature(class UAthenaRemotePlayerViewData*& PlayerData, bool& BoolParam); // (MulticastDelegate | Public | Delegate)
};

