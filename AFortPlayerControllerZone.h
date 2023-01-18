// Class /Script/FortniteGame.FortPlayerControllerZone
// Size: 0x3950
class AFortPlayerControllerZone : public AFortPlayerControllerGameplay
{
	struct FMulticastInlineDelegate OnBeginSkydiving; // 0x3300 (0x10)
	struct FMulticastInlineDelegate OnEndSkydiving; // 0x3310 (0x10)
	struct FMulticastInlineDelegate OnBeginSkydivingFromBus; // 0x3320 (0x10)
	struct FMulticastInlineDelegate OnEndSkydivingFromBus; // 0x3330 (0x10)
	struct FMulticastInlineDelegate OnVehicleSeatTransitionTargetIndexChange; // 0x3340 (0x10)
	struct FMulticastInlineDelegate OnStartedRespawn; // 0x3350 (0x10)
	bool bDontChangeReticleColorForEnemy; // 0x3360 (0x1)
	unsigned char unreflected_3361[0x3]; // 0x3361 (0x3) 
	float LastVehicleSeatSwitchTime; // 0x3364 (0x4)
	unsigned char unreflected_3368[0x8]; // 0x3368 (0x8) 
	class APawn* PlayerToSpectateOnDeath; // 0x3370 (0x8)
	unsigned char unreflected_3378[0x8]; // 0x3378 (0x8) 
	struct TSet<struct FGuid> GadgetTrackedAttributeItemInstanceIds; // 0x3380 (0x50)
	unsigned char unreflected_33d0[0x78]; // 0x33d0 (0x78) 
	class UFortControllerComponent_TriggerHaptics* TriggerHapticsComponent; // 0x3448 (0x8)
	struct TArray<class UObject*> InstantSlideInputSources; // 0x3450 (0x10)
	class UInputComponent* DeathInputComponent; // 0x3460 (0x8)
	class UInputComponent* RemoteControlledPawnInputComponent; // 0x3468 (0x8)
	unsigned char unreflected_3470[0x10]; // 0x3470 (0x10) 
	bool bUseDeferredFireInputs; // 0x3480 (0x1)
	unsigned char unreflected_3481[0x2f]; // 0x3481 (0x2f) 
	struct FFortPlayerDeathReport PlayerDeathReport; // 0x34b0 (0x98)
	bool bClientNotifiedOfPawnDied; // 0x3548 (0x1)
	bool bEnterCameraModeOnDeath; // 0x3549 (0x1)
	enum ELeecherStatus PlayerLeecherStatus; // 0x354a (0x1)
	unsigned char unreflected_354b[0x1d]; // 0x354b (0x1d) 
	struct FMulticastInlineDelegate OnPossessedPawnDied; // 0x3568 (0x10)
	unsigned char unreflected_3578[0xc0]; // 0x3578 (0xc0) 
	struct TScriptInterface<class IFortHUDTargetUnderReticleInterface> HUDTargetUnderReticle; // 0x3638 (0x10)
	struct TArray<struct FUniqueNetIdRepl> RejoinablePartyMembers; // 0x3648 (0x10)
	unsigned char unreflected_3658[0x10]; // 0x3658 (0x10) 
	float LastScoreEarnedTime; // 0x3668 (0x4)
	unsigned char unreflected_366c[0x1c]; // 0x366c (0x1c) 
	int VehicleSeatTransitionTargetIndex; // 0x3688 (0x4)
	unsigned char unreflected_368c[0x14]; // 0x368c (0x14) 
	struct FString PurchaseNotificationId; // 0x36a0 (0x10)
	unsigned char unreflected_36b0[0x18]; // 0x36b0 (0x18) 
	struct FString VoiceChatChannel; // 0x36c8 (0x10)
	unsigned char unreflected_36d8[0x90]; // 0x36d8 (0x90) 
	float VoiceChatCachedTokenLifetimeSeconds; // 0x3768 (0x4)
	unsigned char unreflected_376c[0x1c]; // 0x376c (0x1c) 
	struct TArray<class AActor*> DesyncNotifyList; // 0x3788 (0x10)
	unsigned char unreflected_3798[0x68]; // 0x3798 (0x68) 
	bool bJetpackExecuteToggle; // 0x3800 (0x1)
	bool bAllowMovementCancellableActionsWithIceFeet; // 0x3801 (0x1)
	bool bAllowMovementCancellableActionsDuringInputWithIceFeet; // 0x3802 (0x1)
	unsigned char unreflected_3803[0x1]; // 0x3803 (0x1) 
	float MoveForwardOnlyEmoteCancelBackwardsThreshold; // 0x3804 (0x4)
	float MoveForwardOnlyEmoteCancelStrafeThreshold; // 0x3808 (0x4)
	unsigned char unreflected_380c[0x4]; // 0x380c (0x4) 
	struct FScalableFloat MovementCancellableActionLeashLength; // 0x3810 (0x28)
	struct FVector MovementCancellableActionLeashLocation; // 0x3838 (0x18)
	struct FVector MovementCancellableActionStartingLeashLocation; // 0x3850 (0x18)
	struct FScalableFloat UpdateSurfaceTypeMinimumLength; // 0x3868 (0x28)
	struct FScalableFloat UpdateSurfaceTypeMinimumDelay; // 0x3890 (0x28)
	unsigned char unreflected_38b8[0x18]; // 0x38b8 (0x18) 
	class UClass* MovementCancellableActionComponentClass; // 0x38d0 (0x8)
	unsigned char padding_38d8[0x78]; // 0x38d8 (0x78)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerZone.TestVehicleVelocity (Underlying native function: TestVehicleVelocity 0x7239f74)
	void TestVehicleVelocity(struct FString& Command); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.SpectateOnDeath (Underlying native function: SpectateOnDeath 0x8dc1c28)
	void SpectateOnDeath(); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.SetVehicleHealth (Underlying native function: SetVehicleHealth 0x71a7128)
	void SetVehicleHealth(float& NewHealth); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerVoiceChatRequestJoinToken (Underlying native function: ServerVoiceChatRequestJoinToken 0x8dc13a4)
	void ServerVoiceChatRequestJoinToken(int& RequestId, struct FString& ChannelName); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSubmitGameplayVote (Underlying native function: ServerSubmitGameplayVote 0x8dc12dc)
	void ServerSubmitGameplayVote(enum EFortVoteType& VoteType, int& VoteDecision); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSpectatePlayerState (Underlying native function: ServerSpectatePlayerState 0x8dc11e4)
	void ServerSpectatePlayerState(class AFortPlayerStateZone*& PlayerToSpectate, bool& bAllowStateChange); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSpectateActor (Underlying native function: ServerSpectateActor 0x8dc10ec)
	void ServerSpectateActor(class AActor*& NewViewTarget, bool& bAllowStateChange); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSetVehicleHealth (Underlying native function: ServerSetVehicleHealth 0x8dc1064)
	void ServerSetVehicleHealth(float& NewHealth); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSetShouldDisablePlayerTeleportingDuringMissionResults (Underlying native function: ServerSetShouldDisablePlayerTeleportingDuringMissionResults 0x8dc104c)
	void ServerSetShouldDisablePlayerTeleportingDuringMissionResults(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSendPartyJoinInfoToPlayer (Underlying native function: ServerSendPartyJoinInfoToPlayer 0x8dc0dcc)
	void ServerSendPartyJoinInfoToPlayer(struct FUniqueNetIdRepl& RecipientId, struct FString& JoinInfoStr); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerSendLoadoutConfig (Underlying native function: ServerSendLoadoutConfig 0x8dc0cf4)
	void ServerSendLoadoutConfig(int& LoadoutSeed, struct TArray<unsigned char>& Loadout); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerRequestSeatChange (Underlying native function: ServerRequestSeatChange 0x8dc0c70)
	void ServerRequestSeatChange(int& TargetSeatIndex); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerRequestLoadoutRefresh (Underlying native function: ServerRequestLoadoutRefresh 0x8dc0bec)
	void ServerRequestLoadoutRefresh(bool& bForceResfresh); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerPurchaseCatalogEntry (Underlying native function: ServerPurchaseCatalogEntry 0x8dc03c0)
	void ServerPurchaseCatalogEntry(struct FString& GameNamespace, struct FString& OfferId, struct FString& DevName, struct FCatalogItemPrice& Price, struct FString& AppStoreOfferId, struct FString& EpicOfferId, int& Quantity, int& ExpectedPrice, struct FString& NotificationId); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerEndGameplayVote (Underlying native function: ServerEndGameplayVote 0x8dc033c)
	void ServerEndGameplayVote(enum EFortVoteType& VoteType); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerDetachFromRemoteControlledPawn (Underlying native function: ServerDetachFromRemoteControlledPawn 0x8dc0324)
	void ServerDetachFromRemoteControlledPawn(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerDestroyFromRemoteControlledPawn (Underlying native function: ServerDestroyFromRemoteControlledPawn 0x8dc030c)
	void ServerDestroyFromRemoteControlledPawn(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerDebugSendTagDiscrepancyRequest (Underlying native function: ServerDebugSendTagDiscrepancyRequest 0x8dc02c0)
	void ServerDebugSendTagDiscrepancyRequest(); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerBeginGameplayVote (Underlying native function: ServerBeginGameplayVote 0x8dbfcb4)
	void ServerBeginGameplayVote(enum EFortVoteType& VoteType, struct FFortVoteConfig& VoteConfig); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerAttemptExitVehicle (Underlying native function: ServerAttemptExitVehicle 0x8dbfa70)
	void ServerAttemptExitVehicle(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ServerActivateMission (Underlying native function: ServerActivateMission 0x8dbf8b8)
	void ServerActivateMission(); // (Net | NetReliable | Native | Event | Protected | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.RewindVehicle (Underlying native function: RewindVehicle 0x7239f74)
	void RewindVehicle(struct FString& Command); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ResurrectPlayer (Underlying native function: ResurrectPlayer 0x8dbfa5c)
	void ResurrectPlayer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.RespawnPlayer (Underlying native function: RespawnPlayer 0x8dbfa44)
	void RespawnPlayer(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ResetExecuteJetpackToggle (Underlying native function: ResetExecuteJetpackToggle 0x8dbf8f0)
	void ResetExecuteJetpackToggle(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.PushDeathInputComponent (Underlying native function: PushDeathInputComponent 0x8dbf88c)
	void PushDeathInputComponent(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.PopDeathInputComponent (Underlying native function: PopDeathInputComponent 0x8dbf858)
	void PopDeathInputComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.OnRep_VoiceChatChannel (Underlying native function: OnRep_VoiceChatChannel 0x8dbf2cc)
	void OnRepVoiceChatChannel(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.KillAllVehicles (Underlying native function: KillAllVehicles 0x6b13f58)
	void KillAllVehicles(struct FString& Command); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.IsUsingAnonymousMode (Underlying native function: IsUsingAnonymousMode 0x8dbee50)
	bool IsUsingAnonymousMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.IsUsingAnonymousCharacterMode (Underlying native function: IsUsingAnonymousCharacterMode 0x8dbee14)
	bool IsUsingAnonymousCharacterMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.IsShowingSeasonLevel (Underlying native function: IsShowingSeasonLevel 0x8dbedd8)
	bool IsShowingSeasonLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.IsClientNotifiedOfPawnDied (Underlying native function: IsClientNotifiedOfPawnDied 0x8dbeba8)
	bool IsClientNotifiedOfPawnDied(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.GetVehicleSeatTransitionTargetIndex (Underlying native function: GetVehicleSeatTransitionTargetIndex 0x8dbe7c8)
	int GetVehicleSeatTransitionTargetIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.DumpPhysicsVehicleBuffer (Underlying native function: DumpPhysicsVehicleBuffer 0x7239f74)
	void DumpPhysicsVehicleBuffer(struct FString& Command); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerZone.DisableRangedWeaponScopeFX (Underlying native function: DisableRangedWeaponScopeFX 0x8dbdf28)
	void DisableRangedWeaponScopeFX(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientVoiceChatSendJoinToken (Underlying native function: ClientVoiceChatSendJoinToken 0x8dbdab0)
	void ClientVoiceChatSendJoinToken(int& RequestId, bool& bSuccess, struct FString& Error, struct FString& Token, struct FString& ChannelName); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientUpdatePlaylistFlags (Underlying native function: ClientUpdatePlaylistFlags 0x8dbda1c)
	void ClientUpdatePlaylistFlags(struct TArray<unsigned char>& Buffer); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientSendPartyJoinInfoToPlayer (Underlying native function: ClientSendPartyJoinInfoToPlayer 0x8dbd8c4)
	void ClientSendPartyJoinInfoToPlayer(struct FString& JoinInfoStr); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientPresentGameplayVote (Underlying native function: ClientPresentGameplayVote 0x8dbd764)
	void ClientPresentGameplayVote(uint32_t& Payload); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientOnZoneEndScoreReports (Underlying native function: ClientOnZoneEndScoreReports 0x8dbd6d4)
	void ClientOnZoneEndScoreReports(struct TArray<struct FFortPlayerScoreReport>& ScoreReports); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientOnPawnSpawned (Underlying native function: ClientOnPawnSpawned 0x8dbd6bc)
	void ClientOnPawnSpawned(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientOnPawnRevived (Underlying native function: ClientOnPawnRevived 0x8dbd638)
	void ClientOnPawnRevived(class AController*& EventInstigator); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientOnPawnDied (Underlying native function: ClientOnPawnDied 0x8dbd580)
	void ClientOnPawnDied(struct FFortPlayerDeathReport& DeathReport); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientHandlePurchaseCatalogEntryFailure (Underlying native function: ClientHandlePurchaseCatalogEntryFailure 0x8dbd568)
	void ClientHandlePurchaseCatalogEntryFailure(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientHandleCatalogOutOfDate (Underlying native function: ClientHandleCatalogOutOfDate 0x8dbd550)
	void ClientHandleCatalogOutOfDate(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientDebugRecieveTagDiscrepancyResponse (Underlying native function: ClientDebugRecieveTagDiscrepancyResponse 0x8dbd37c)
	void ClientDebugRecieveTagDiscrepancyResponse(struct TArray<unsigned char>& CompressedTags1, struct TArray<unsigned char>& CompressedTags2, struct TArray<unsigned char>& CompressedTags3, struct TArray<unsigned char>& CompressedTags4); // (Final | Net | NetReliable | Native | Event | Private | NetClient | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientClearDeathNotification (Underlying native function: ClientClearDeathNotification 0x8dbd2b0)
	void ClientClearDeathNotification(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.ClientAckLoadoutConfig (Underlying native function: ClientAckLoadoutConfig 0x8dbd150)
	void ClientAckLoadoutConfig(int& LoadoutSeed); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerZone.AreResurrectionAndRespawnTimeRemainingValid (Underlying native function: AreResurrectionAndRespawnTimeRemainingValid 0x8dbcce4)
	bool AreResurrectionAndRespawnTimeRemainingValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerZone.AllowLoadoutRefresh (Underlying native function: AllowLoadoutRefresh 0x26daa0c)
	void AllowLoadoutRefresh(); // (Final | Native | Public | BlueprintCallable)
};

