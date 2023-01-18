// Class /Script/FortniteGame.FortPlayerControllerSpectating
// Size: 0x3b10
class AFortPlayerControllerSpectating : public AFortPlayerControllerGameplay
{
	enum ESpectatorCameraType CurrentCameraType; // 0x32f8 (0x1)
	unsigned char unreflected_32f9[0x7]; // 0x32f9 (0x7) 
	struct TArray<enum ESpectatorCameraType> CameraModeCycle; // 0x3300 (0x10)
	unsigned char unreflected_3310[0x38]; // 0x3310 (0x38) 
	struct FLinearColor MinimapPlayerIconColorBase; // 0x3348 (0x10)
	struct FLinearColor MinimapPlayerIconColorHovered; // 0x3358 (0x10)
	float ZoomThresholdForPlayerNames; // 0x3368 (0x4)
	unsigned char unreflected_336c[0x4]; // 0x336c (0x4) 
	struct FQuickBarData QuickBarDefinitions[0x3]; // 0x3370 (0x10) (ARRAY) 
	struct FMulticastInlineDelegate OnFollowedPlayerChanged; // 0x33a0 (0x10)
	struct FMulticastInlineDelegate OnCameraTypeChanged; // 0x33b0 (0x10)
	struct FMulticastInlineDelegate OnPlayerBecameRelevant; // 0x33c0 (0x10)
	struct FMulticastInlineDelegate OnPlayerBecameIrrelevant; // 0x33d0 (0x10)
	struct FMulticastInlineDelegate OnPlayerStateAdded; // 0x33e0 (0x10)
	struct FMulticastInlineDelegate OnPlayerStateChanged; // 0x33f0 (0x10)
	struct FMulticastInlineDelegate OnPlayerDied; // 0x3400 (0x10)
	struct FMulticastInlineDelegate OnTimelineScrubbed; // 0x3410 (0x10)
	struct FMulticastInlineDelegate OnZoomChanged; // 0x3420 (0x10)
	struct FMulticastInlineDelegate OnShowNotification; // 0x3430 (0x10)
	struct FMulticastInlineDelegate OnShowNotificationsEnabledChanged; // 0x3440 (0x10)
	struct FMulticastInlineDelegate OnFollowedPlayerChangedTeam; // 0x3450 (0x10)
	unsigned char unreflected_3460[0x8]; // 0x3460 (0x8) 
	class UMaterialInterface* SpectatorPostProcessMaterial; // 0x3468 (0x8)
	unsigned char unreflected_3470[0x10]; // 0x3470 (0x10) 
	class UClass* SpectatorPawnBaseClass; // 0x3480 (0x8)
	class UClass* ThirdPersonPawnBaseClass; // 0x3488 (0x8)
	class UClass* HoverDronePawnClass; // 0x3490 (0x8)
	class UClass* BattleMapPawnClass; // 0x3498 (0x8)
	class UClass* ARDronePawnClass; // 0x34a0 (0x8)
	class UClass* MinimapIndicatorClass; // 0x34a8 (0x8)
	struct TArray<struct FSavedPlayerSpectatorCameraData> SavedCameraStates; // 0x34b0 (0x10)
	unsigned char unreflected_34c0[0x1d0]; // 0x34c0 (0x1d0) 
	struct TMap<class APlayerState*, bool> PlayerRelevancyTrackingMap; // 0x3690 (0x50)
	struct TMap<struct FUniqueNetIdRepl, class AFortPlayerStateAthena*> AddedPlayersMap; // 0x36e0 (0x50)
	struct TMap<struct FUniqueNetIdRepl, class UAthenaPlayerMatchReport*> PlayerMatchReports; // 0x3730 (0x50)
	struct FVector ChaseCamOffset; // 0x3780 (0x18)
	class AFortPlayerState* LastDamagerOfViewTarget; // 0x3798 (0x8)
	class AActor* HoveredActor; // 0x37a0 (0x8)
	class UInputComponent* FullScreenMapInputComponent; // 0x37a8 (0x8)
	unsigned char unreflected_37b0[0x30]; // 0x37b0 (0x30) 
	struct FSavedSpectatorCameras HotkeyCameras; // 0x37e0 (0x10)
	unsigned char unreflected_37f0[0x40]; // 0x37f0 (0x40) 
	class AActor* LastKnownViewTarget; // 0x3830 (0x8)
	unsigned char unreflected_3838[0xb8]; // 0x3838 (0xb8) 
	struct FRemoteViewRotSnapshotManager RemoteViewRotSnapshotManager; // 0x38f0 (0x48)
	unsigned char unreflected_3938[0x20]; // 0x3938 (0x20) 
	class AVolume* CameraBoundsVolume; // 0x3958 (0x8)
	bool ClampDroneToCameraBoundsVolume; // 0x3960 (0x1)
	unsigned char unreflected_3961[0x87]; // 0x3961 (0x87) 
	class UClass* RelevancyZoneIndicatorClass; // 0x39e8 (0x8)
	class UClass* SpectatorPlayerHighlighterClass; // 0x39f0 (0x8)
	class AFortRelevancyZoneIndicator* RelevancyZoneIndicator; // 0x39f8 (0x8)
	struct TMap<struct FUniqueNetIdRepl, class AFortSpectatorPlayerHighlighter*> SpectatorPlayerHighlightersMap; // 0x3a00 (0x50)
	class UFortReplayContext* ReplayContext; // 0x3a50 (0x8)
	unsigned char unreflected_3a58[0x78]; // 0x3a58 (0x78) 
	class UAthenaMarkerComponent* MarkerComponent; // 0x3ad0 (0x8)
	struct TArray<class AFortPlayerStateAthena*> SquadMembers; // 0x3ad8 (0x10)
	unsigned char unreflected_3ae8[0x20]; // 0x3ae8 (0x20) 
	class AFortBroadcastRemoteClientInfo* FollowedPlayerRemoteClientInfo; // 0x3b08 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.ZoomIn (Underlying native function: ZoomIn 0x8dc1db8)
	void ZoomIn(float& Val); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.UpdateReplayEvents (Underlying native function: UpdateReplayEvents 0x8dc1d10)
	void UpdateReplayEvents(enum EPlayEventType& Type); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.ToggleSpectatorHUD (Underlying native function: ToggleSpectatorHUD 0x8dc1ce8)
	void ToggleSpectatorHUD(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.SpectatorSpecialAction (Underlying native function: SpectatorSpecialAction 0x8dc1c54)
	void SpectatorSpecialAction(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.SpectatorClearSavedCameraShots (Underlying native function: SpectatorClearSavedCameraShots 0x8dc1c40)
	void SpectatorClearSavedCameraShots(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.SetShowVehiclesOnMap (Underlying native function: SetShowVehiclesOnMap 0x8dc1910)
	void SetShowVehiclesOnMap(bool& bInShowVehiclesOnMap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.SetShowPlayersOnMap (Underlying native function: SetShowPlayersOnMap 0x8dc1890)
	void SetShowPlayersOnMap(bool& bInShowPlayersOnMap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.SetShowBusPathsOnMap (Underlying native function: SetShowBusPathsOnMap 0x8dc1810)
	void SetShowBusPathsOnMap(bool& bInShowBusPathsOnMap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.SetNotificationsEnabled (Underlying native function: SetNotificationsEnabled 0x8dc1790)
	void SetNotificationsEnabled(bool& bNewState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.SetNewCameraType (Underlying native function: SetNewCameraType 0x8dc16c8)
	void SetNewCameraType(enum ESpectatorCameraType& NewCameraType, bool& bReset); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.SetMapWeaponTracersEnabled (Underlying native function: SetMapWeaponTracersEnabled 0x8dc1644)
	void SetMapWeaponTracersEnabled(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.SetFollowedPlayer (Underlying native function: SetFollowedPlayer 0x8dc15c0)
	void SetFollowedPlayer(class AFortPlayerState*& NewPlayerToFollow); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.SetBlendType (Underlying native function: SetBlendType 0x72ab98c)
	void SetBlendType(enum EFortSpectatorBlendType& NewBlendType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.ResetCameraBoundsVolume (Underlying native function: ResetCameraBoundsVolume 0x8dbf8d0)
	void ResetCameraBoundsVolume(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.ResetCamera (Underlying native function: ResetCamera 0x8dbf8b8)
	void ResetCamera(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.ResetAllCameras (Underlying native function: ResetAllCameras 0x8dbf8a4)
	void ResetAllCameras(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.PlayerBecameRelevant (Underlying native function: PlayerBecameRelevant 0x8dbf7c0)
	void PlayerBecameRelevant(class AFortPlayerState*& FPS); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.OnRep_FollowedPlayerRemoteClientInfo (Underlying native function: OnRep_FollowedPlayerRemoteClientInfo 0x8dbf0c8)
	void OnRepFollowedPlayerRemoteClientInfo(class AFortBroadcastRemoteClientInfo*& PreviousFollowedPlayerRemoteClientInfo); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.OnNextCameraMode (Underlying native function: OnNextCameraMode 0x8dbf070)
	void OnNextCameraMode(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.JumpToHoveredActor (Underlying native function: JumpToHoveredActor 0x8dbef44)
	bool JumpToHoveredActor(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.IsValidToFollow (Underlying native function: IsValidToFollow 0x8dbeeb0)
	bool IsValidToFollow(class AFortPlayerState*& FPS); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.IsPlayerInRelevancy (Underlying native function: IsPlayerInRelevancy 0x8dbed44)
	bool IsPlayerInRelevancy(class AFortPlayerState*& FPS); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.IsFollowedPlayerInBus (Underlying native function: IsFollowedPlayerInBus 0x8dbed08)
	bool IsFollowedPlayerInBus(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.IsCameraBlending (Underlying native function: IsCameraBlending 0x8dbeb84)
	bool IsCameraBlending(); // (Final | Exec | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.IsAllowedChangeCamera (Underlying native function: IsAllowedChangeCamera 0x8dbeb38)
	bool IsAllowedChangeCamera(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.HasBroadcasterToken (Underlying native function: HasBroadcasterToken 0x23cda4c)
	bool HasBroadcasterToken(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.HandleTimelineScrubbed (Underlying native function: HandleTimelineScrubbed 0x8dbeaa4)
	void HandleTimelineScrubbed(class UWorld*& InWorld); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.HandleSquadIdModeChanged (Underlying native function: HandleSquadIdModeChanged 0x8dbea24)
	void HandleSquadIdModeChanged(enum ESpectatorSquadIdMode& SquadIdMode); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.HandleNewNotificationRequest (Underlying native function: HandleNewNotificationRequest 0x8dbe860)
	void HandleNewNotificationRequest(struct FText& NotificationText, struct FNotificationUISettings*& NotificationSettings); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.GetShowVehiclesOnMap (Underlying native function: GetShowVehiclesOnMap 0x8dbe730)
	bool GetShowVehiclesOnMap(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.GetShowPlayersOnMap (Underlying native function: GetShowPlayersOnMap 0x8dbe718)
	bool GetShowPlayersOnMap(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.GetShowBusPathsOnMap (Underlying native function: GetShowBusPathsOnMap 0x8dbe700)
	bool GetShowBusPathsOnMap(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.GetMapWeaponTracersEnabled (Underlying native function: GetMapWeaponTracersEnabled 0x8dbe534)
	bool GetMapWeaponTracersEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.GetFollowedPlayer (Underlying native function: GetFollowedPlayer 0x28f20b4)
	class AFortPlayerState* GetFollowedPlayer(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.GetCurrentSpectatorCameraComponent (Underlying native function: GetCurrentSpectatorCameraComponent 0x8dbe4bc)
	class UFortSpectatorCameraComponent* GetCurrentSpectatorCameraComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.GetBlendType (Underlying native function: GetBlendType 0x2486284)
	enum EFortSpectatorBlendType GetBlendType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FullscreenMapZoom (Underlying native function: FullscreenMapZoom 0x8dbe418)
	void FullscreenMapZoom(float& Value); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FullScreenMapCursorStopDrag (Underlying native function: FullScreenMapCursorStopDrag 0x8dbe400)
	void FullScreenMapCursorStopDrag(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FullScreenMapCursorStartDrag (Underlying native function: FullScreenMapCursorStartDrag 0x8dbe3ec)
	void FullScreenMapCursorStartDrag(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FullScreenMapCursorMoved (Underlying native function: FullScreenMapCursorMoved 0x8dbe30c)
	void FullScreenMapCursorMoved(struct FVector2D& CursorWidgetLocation, struct FVector2D& CursorDelta); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FollowPrevTeamMember (Underlying native function: FollowPrevTeamMember 0x8dbe2f4)
	void FollowPrevTeamMember(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FollowPrevSquadMember (Underlying native function: FollowPrevSquadMember 0x8dbe2dc)
	void FollowPrevSquadMember(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FollowPrevPlayer (Underlying native function: FollowPrevPlayer 0x8dbe2c4)
	void FollowPrevPlayer(); // (Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FollowPlayerByName (Underlying native function: FollowPlayerByName 0x8dbe164)
	void FollowPlayerByName(struct FString& PlayerName); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FollowNextTeamMember (Underlying native function: FollowNextTeamMember 0x8dbe14c)
	void FollowNextTeamMember(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FollowNextSquadMember (Underlying native function: FollowNextSquadMember 0x8dbe134)
	void FollowNextSquadMember(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FollowNextPlayer (Underlying native function: FollowNextPlayer 0x8dbe11c)
	void FollowNextPlayer(); // (Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FollowLastDamagerOfViewTarget (Underlying native function: FollowLastDamagerOfViewTarget 0x8dbe108)
	void FollowLastDamagerOfViewTarget(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FollowHoveredPlayer (Underlying native function: FollowHoveredPlayer 0x8dbe0e4)
	bool FollowHoveredPlayer(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.FindPlayerStateByUID (Underlying native function: FindPlayerStateByUID 0x8dbe010)
	class AFortPlayerState* FindPlayerStateByUID(struct FUniqueNetIdRepl& UID); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.CanRespawnAfterDeath (Underlying native function: CanRespawnAfterDeath 0x8dbd01c)
	bool CanRespawnAfterDeath(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.BlendCameraPlacement (Underlying native function: BlendCameraPlacement 0x8dbcd08)
	void BlendCameraPlacement(struct FTransform& InTransform, struct FTransform& InTargetTransform, float& BlendDuration, enum ESpectateBlendEasing& InEasing); // (Final | Exec | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.AreNotificationsEnabled (Underlying native function: AreNotificationsEnabled 0x8dbccc8)
	bool AreNotificationsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerSpectating.AdjustNormalizedDistanceToPlayer (Underlying native function: AdjustNormalizedDistanceToPlayer 0x8dbcc44)
	void AdjustNormalizedDistanceToPlayer(float& Val); // (Final | Native | Public)
};

