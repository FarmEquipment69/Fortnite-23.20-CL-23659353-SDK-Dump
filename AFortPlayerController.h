// Class /Script/FortniteGame.FortPlayerController
// Size: 0x2c50
class AFortPlayerController : public AFGF_PlayerController
{
	unsigned char unreflected_8a0[0x30]; // 0x8a0 (0x30) 
	struct FMulticastInlineDelegate OnPlayerPawnPossessed; // 0x8d0 (0x10)
	struct FMulticastInlineDelegate OnEnteredEditMode; // 0x8e0 (0x10)
	struct FMulticastInlineDelegate OnPickupCreated; // 0x8f0 (0x10)
	struct FMulticastInlineDelegate OnLoadoutChanged; // 0x900 (0x10)
	unsigned char unreflected_910[0x30]; // 0x910 (0x30) 
	struct FMulticastInlineDelegate OnViewTargetChanged; // 0x940 (0x10)
	struct FMulticastInlineDelegate OnInputFiltered; // 0x950 (0x10)
	unsigned char unreflected_960[0x18]; // 0x960 (0x18) 
	struct FMulticastInlineDelegate OnFortPawnChangedEvent; // 0x978 (0x10)
	struct FMulticastInlineDelegate OnControllerComponentAttachedEvent; // 0x988 (0x10)
	unsigned char unreflected_998[0x99]; // 0x998 (0x99) 
	bool bInPossession; // 0xa31 (0x1)
	unsigned char unreflected_a32[0xa6]; // 0xa32 (0xa6) 
	class UInputComponent* AircraftInputComponent; // 0xad8 (0x8)
	class UFortMiniMapInputComponent* MiniMapInputComponent; // 0xae0 (0x8)
	class UActorComponent* SprintOverrideComponent; // 0xae8 (0x8)
	class UAudioComponent* SkydiveMusicAudioComp; // 0xaf0 (0x8)
	unsigned char bFailedToRespawn; // 0xaf8 (0x1)
	unsigned char bIsDisconnecting; // 0xaf8 (0x1)
	unsigned char bIsBeingKicked; // 0xaf8 (0x1)
	unsigned char bHasInitiallySpawned; // 0xaf8 (0x1)
	unsigned char bAssignedStartSpawn; // 0xaf8 (0x1)
	unsigned char bReadyToStartMatch; // 0xaf8 (0x1)
	unsigned char bClientPawnIsLoaded; // 0xaf8 (0x1)
	unsigned char bWantsWeaponAutoPickup; // 0xaf8 (0x1)
	unsigned char unreflected_af9[0x7]; // 0xaf9 (0x7) 
	struct FVector SpawnLoc; // 0xb00 (0x18)
	int NumPreviousSpawns; // 0xb18 (0x4)
	bool bCanSpectateBot; // 0xb1c (0x1)
	unsigned char unreflected_b1d[0x3]; // 0xb1d (0x3) 
	struct FMulticastInlineDelegate OnBlueprintReadyCheckCompleted; // 0xb20 (0x10)
	unsigned char unreflected_b30[0x10]; // 0xb30 (0x10) 
	struct FMulticastInlineDelegate OnDelayForPreServerTransitionAnimationEvent; // 0xb40 (0x10)
	unsigned char unreflected_b50[0x18]; // 0xb50 (0x18) 
	class USoundMix* SimpleLoadingScreenSoundMix; // 0xb68 (0x8)
	unsigned char unreflected_b70[0xc]; // 0xb70 (0xc) 
	struct FGameplayTag SprintOverrideAbilityGameplayTag; // 0xb7c (0x4)
	struct TArray<class AFortAIPawn*> ManagedAIs; // 0xb80 (0x10)
	class AFortPlayerPawn* MyFortPawn; // 0xb90 (0x8)
	class AFortPlayerPawn* MyFortPawnBeforeTakeoverOfScriptedPawn; // 0xb98 (0x8)
	class AController* ScriptedPawnControllerBeforeTakeover; // 0xba0 (0x8)
	bool bHasClientFinishedLoading; // 0xba8 (0x1)
	bool bHasServerFinishedLoading; // 0xba9 (0x1)
	unsigned char unreflected_baa[0x2]; // 0xbaa (0x2) 
	float TimeStartedWaiting; // 0xbac (0x4)
	float TimeFinishedNavigationBuild; // 0xbb0 (0x4)
	unsigned char unreflected_bb4[0x4]; // 0xbb4 (0x4) 
	class UMaterialParameterCollection* MaterialParameterCollection; // 0xbb8 (0x8)
	unsigned char unreflected_bc0[0x9]; // 0xbc0 (0x9) 
	bool bLoadingScreenDropped; // 0xbc9 (0x1)
	unsigned char unreflected_bca[0x6]; // 0xbca (0x6) 
	struct FVector PendingSpectatorLocation; // 0xbd0 (0x18)
	struct TWeakObjectPtr<class AActor> ActorUnderReticle; // 0xbe8 (0x8)
	struct TWeakObjectPtr<class AActor> AutoFireReticleTarget; // 0xbf0 (0x8)
	struct FTimerHandle* AutofireTimerHandle; // 0xbf8 (0x8)
	unsigned char unreflected_c00[0x8]; // 0xc00 (0x8) 
	struct TWeakObjectPtr<class ABuildingWeakSpot> WeakspotUnderReticle; // 0xc08 (0x8)
	struct TArray<struct FBuildingWeakSpotData> ActiveWeakSpots; // 0xc10 (0x10)
	float IdleKickLastTimeActive; // 0xc20 (0x4)
	float LastTimeActive; // 0xc24 (0x4)
	unsigned char unreflected_c28[0x20]; // 0xc28 (0x20) 
	bool bRevertPlayerListenerChange; // 0xc48 (0x1)
	unsigned char unreflected_c49[0x1f]; // 0xc49 (0x1f) 
	class UInputComponent* VehicleInputComponent; // 0xc68 (0x8)
	bool bHoldingPrimaryFireFromTouch; // 0xc70 (0x1)
	bool bSupportNextPieceAssist; // 0xc71 (0x1)
	bool bAutoBuildForTrapPlacement; // 0xc72 (0x1)
	bool bAutoBuildForFloorTrapPlacement; // 0xc73 (0x1)
	bool bAutoBuildForWallTrapPlacement; // 0xc74 (0x1)
	bool bAutoBuildForCeilingTrapPlacement; // 0xc75 (0x1)
	bool bNoControllerLighting; // 0xc76 (0x1)
	unsigned char unreflected_c77[0x1]; // 0xc77 (0x1) 
	float ReturnToMainMenuTimeoutDelay; // 0xc78 (0x4)
	unsigned char unreflected_c7c[0x4]; // 0xc7c (0x4) 
	struct FMulticastInlineDelegate OnQuestObjectiveStateChanged; // 0xc80 (0x10)
	unsigned char unreflected_c90[0x18]; // 0xc90 (0x18) 
	class AFortPlayerController* LastDamager; // 0xca8 (0x8)
	unsigned char unreflected_cb0[0x8]; // 0xcb0 (0x8) 
	class AFortPlayerController* LastFallInstigator; // 0xcb8 (0x8)
	unsigned char unreflected_cc0[0x4]; // 0xcc0 (0x4) 
	float LastDamagerCreditThresholdDropElim; // 0xcc4 (0x4)
	float LastDamagerCreditThresholdSelfElim; // 0xcc8 (0x4)
	float LastDamagerCreditThresholdStormElim; // 0xccc (0x4)
	bool bGiveLastDamagerElimCreditOnDrop; // 0xcd0 (0x1)
	bool bGiveLastDamagerElimCreditOnSelfDamage; // 0xcd1 (0x1)
	bool bGiveLastDamagerElimCreditOnStormDamage; // 0xcd2 (0x1)
	unsigned char unreflected_cd3[0x4d]; // 0xcd3 (0x4d) 
	struct FMulticastInlineDelegate OnMcpProfilesInitializedEvent; // 0xd20 (0x10)
	unsigned char unreflected_d30[0x190]; // 0xd30 (0x190) 
	struct FMulticastInlineDelegate OnEnterVehicleDriver; // 0xec0 (0x10)
	struct FMulticastInlineDelegate OnEnterVehiclePassenger; // 0xed0 (0x10)
	struct FMulticastInlineDelegate OnExitVehicle; // 0xee0 (0x10)
	struct FMulticastInlineDelegate OnFullyExitVehicle; // 0xef0 (0x10)
	struct FMulticastInlineDelegate OnVehicleSeatChanged; // 0xf00 (0x10)
	struct FMulticastInlineDelegate OnVehicleAbilitiesRemoved; // 0xf10 (0x10)
	struct FMulticastInlineDelegate OnTetherChanged; // 0xf20 (0x10)
	struct FMulticastInlineDelegate OnClientRefreshHUDForRespawn; // 0xf30 (0x10)
	unsigned char unreflected_f40[0x28]; // 0xf40 (0x28) 
	unsigned char bHoldingObject; // 0xf68 (0x1)
	unsigned char unreflected_f69[0x7]; // 0xf69 (0x7) 
	class UInputComponent* DBNOCarryInputComponent; // 0xf70 (0x8)
	class UInputComponent* HeldObjectsInputComponent; // 0xf78 (0x8)
	unsigned char unreflected_f80[0x48]; // 0xf80 (0x48) 
	unsigned char bWantsToSprint; // 0xfc8 (0x1)
	unsigned char bHoldingSprint; // 0xfc8 (0x1)
	unsigned char bSprintToggleable; // 0xfc8 (0x1)
	unsigned char bForcingJogFromToggle; // 0xfc8 (0x1)
	unsigned char bForceJogHeld; // 0xfc8 (0x1)
	unsigned char bForceBinaryForward; // 0xfc8 (0x1)
	unsigned char bSprintWasCanceledByReload; // 0xfc8 (0x1)
	unsigned char bShouldAttemptReloadOnEquip; // 0xfc8 (0x1)
	unsigned char bSprintBehaviorIsOverridden; // 0xfc9 (0x1)
	unsigned char bSprintByDefaultWhenSprintIsOverridden; // 0xfc9 (0x1)
	unsigned char bSprintByDefault; // 0xfc9 (0x1)
	unsigned char bAutoRunOn; // 0xfc9 (0x1)
	unsigned char bUseHoldToSwapPickup; // 0xfc9 (0x1)
	unsigned char bTargetingToggleable; // 0xfc9 (0x1)
	unsigned char bTargetingToggleableWithTouch; // 0xfc9 (0x1)
	unsigned char bMovementDisabledDueToCancellableAction; // 0xfc9 (0x1)
	unsigned char bIsPlayerActivelyMoving; // 0xfca (0x1)
	unsigned char bPlaceHeldObjectPressed; // 0xfca (0x1)
	unsigned char bJumpInputPressed; // 0xfca (0x1)
	unsigned char unreflected_fcb[0x1]; // 0xfcb (0x1) 
	int InMovementCancellableAction; // 0xfcc (0x4)
	bool bAllowHoldForAmmoCrafting; // 0xfd0 (0x1)
	bool bIsClientTimingOut; // 0xfd1 (0x1)
	unsigned char unreflected_fd2[0x2]; // 0xfd2 (0x2) 
	float ClientTimeoutBlockInputTime; // 0xfd4 (0x4)
	unsigned char unreflected_fd8[0x8]; // 0xfd8 (0x8) 
	uint64_t LastMoveInputFrame; // 0xfe0 (0x8)
	float LastPressGamepadSprintTime; // 0xfe8 (0x4)
	bool bAutoRunWasHoldingForward; // 0xfec (0x1)
	bool bAtNameBaseScreen; // 0xfed (0x1)
	unsigned char unreflected_fee[0x2]; // 0xfee (0x2) 
	struct FMulticastInlineDelegate OnSetFirstPersonCamera; // 0xff0 (0x10)
	unsigned char unreflected_1000[0x70]; // 0x1000 (0x70) 
	class UClass* CinematicCameraClassOverride; // 0x1070 (0x8)
	bool bOnPressExecuteJetpack; // 0x1078 (0x1)
	unsigned char unreflected_1079[0x1f]; // 0x1079 (0x1f) 
	bool bShowHitMarkersForFriendlyFire; // 0x1098 (0x1)
	bool bServerSideHitMarkers; // 0x1099 (0x1)
	unsigned char unreflected_109a[0x16]; // 0x109a (0x16) 
	struct FMulticastInlineDelegate OnUiChoiceCompleted; // 0x10b0 (0x10)
	struct FMulticastInlineDelegate OnRegainedFocus; // 0x10c0 (0x10)
	struct FMulticastInlineDelegate OnReloadCancelingSprint; // 0x10d0 (0x10)
	unsigned char unreflected_10e0[0x18]; // 0x10e0 (0x18) 
	struct FMulticastInlineDelegate OnOpenVoteDialog; // 0x10f8 (0x10)
	unsigned char unreflected_1108[0x28c]; // 0x1108 (0x28c) 
	bool bGamepadAbilityPending; // 0x1394 (0x1)
	bool bForceAllowCursorMode; // 0x1395 (0x1)
	bool bForceAllowCameraMode; // 0x1396 (0x1)
	unsigned char unreflected_1397[0x1]; // 0x1397 (0x1) 
	bool bSuppressEventNotifications; // 0x1398 (0x1)
	unsigned char unreflected_1399[0x6f]; // 0x1399 (0x6f) 
	float LastSpotTime; // 0x1408 (0x4)
	unsigned char unreflected_140c[0x14]; // 0x140c (0x14) 
	struct TArray<struct TWeakObjectPtr<class AFortMarkActor>> CurrentMarks; // 0x1420 (0x10)
	struct TMap<struct FName, class UAudioComponent*> LoopingUIFeedbackComponents; // 0x1430 (0x50)
	class UFortGameplayAbility* PreviewAbility; // 0x1480 (0x8)
	bool bDisableNativeHitMarker; // 0x1488 (0x1)
	bool bDisableNativeDamageNumbers; // 0x1489 (0x1)
	unsigned char unreflected_148a[0x1e]; // 0x148a (0x1e) 
	struct FAIDirectorDebugInfo IntensityGraphInfo; // 0x14a8 (0x28)
	struct FAIDirectorDebugInfo PIDValuesGraphInfo; // 0x14d0 (0x28)
	struct FAIDirectorDebugInfo PIDContributionsGraphInfo; // 0x14f8 (0x28)
	class AFortAIDirectorDataManager* AIDirectorDataManager; // 0x1520 (0x8)
	class AFortMusicManager* MusicManager; // 0x1528 (0x8)
	struct FMulticastInlineDelegate OnBuildPreviewMarkerVisibilityChanged; // 0x1530 (0x10)
	struct FMulticastInlineDelegate OnWeakSpotReset; // 0x1540 (0x10)
	unsigned char unreflected_1550[0x10]; // 0x1550 (0x10) 
	bool bUsePredictedBuildingActors; // 0x1560 (0x1)
	bool bRegisterPredictedBuildingActorsWithGrid; // 0x1561 (0x1)
	bool bPredictedBuildingWallsHaveNoCollision; // 0x1562 (0x1)
	unsigned char unreflected_1563[0x1]; // 0x1563 (0x1) 
	float PredictedActorLifespan; // 0x1564 (0x4)
	struct TArray<struct TWeakObjectPtr<class ABuildingSMActor>> PredictedBuildingSMActors; // 0x1568 (0x10)
	unsigned char unreflected_1578[0x1b0]; // 0x1578 (0x1b0) 
	class UInputComponent* BuildPreviewModeInputComponent; // 0x1728 (0x8)
	class ABuildingPlayerPrimitivePreview* BuildPreviewMarker; // 0x1730 (0x8)
	class ABuildingPlayerPrimitivePreview* BuildPreviewMarkerExtraPiece; // 0x1738 (0x8)
	unsigned char unreflected_1740[0x60]; // 0x1740 (0x60) 
	bool bAllowBuildingPreviewAutoRotation; // 0x17a0 (0x1)
	bool bRequireTraceToExistingBuildingToSetContext; // 0x17a1 (0x1)
	bool bAllowTraceToExistingBuildingToSetContextToRedirectToBlockingBuilding; // 0x17a2 (0x1)
	bool bRequireTraceToExistingBuildingToSetContextExcludeCurrentContext; // 0x17a3 (0x1)
	unsigned char unreflected_17a4[0xcc]; // 0x17a4 (0xcc) 
	class ABuildingActor* TargetedBuilding; // 0x1870 (0x8)
	class AActor* TargetedVehicle; // 0x1878 (0x8)
	class AFortPawn* TargetedFortPawn; // 0x1880 (0x8)
	class UClass* ContextualConversionClass; // 0x1888 (0x8)
	struct TWeakObjectPtr<class USoundBase> StartUpgradeSound; // 0x1890 (0x28)
	struct TArray<class ABuildingActor*> HighlightedPrimaryBuildings; // 0x18b8 (0x10)
	struct TArray<class ABuildingActor*> HighlightedInteractionBuildings; // 0x18c8 (0x10)
	struct TWeakObjectPtr<class ABuildingActor> HighlightedPrimaryBuilding; // 0x18d8 (0x8)
	struct TWeakObjectPtr<class UMaterialInterface> BuildPreviewMarkerParentMaterial; // 0x18e0 (0x28)
	struct TArray<class UMaterialInstanceDynamic*> BuildPreviewMarkerMIDs; // 0x1908 (0x10)
	unsigned char BuildPreviewRotationIterations; // 0x1918 (0x1)
	unsigned char unreflected_1919[0x3]; // 0x1919 (0x3) 
	unsigned char bBuildPreviewMirrored; // 0x191c (0x1)
	unsigned char unreflected_191d[0x3]; // 0x191d (0x3) 
	enum EFortBuildPreviewMarkerOptionalAdjustment BuildPreviewMarkerOptionalAdjustment; // 0x1920 (0x1)
	unsigned char unreflected_1921[0x3]; // 0x1921 (0x3) 
	unsigned char bBuildFree; // 0x1924 (0x1)
	unsigned char unreflected_1925[0x37]; // 0x1925 (0x37) 
	unsigned char bCraftFree; // 0x195c (0x1)
	unsigned char unreflected_195d[0x3]; // 0x195d (0x3) 
	struct TEnumAsByte<EFortCostInfoTypes> CurrentCostInfoType; // 0x1960 (0x1)
	unsigned char unreflected_1961[0x7]; // 0x1961 (0x7) 
	class UClass* CurrentBuildableClass; // 0x1968 (0x8)
	class UClass* PreviousBuildableClass; // 0x1970 (0x8)
	struct TEnumAsByte<EFortResourceLevel> CurrentResourceLevel; // 0x1978 (0x1)
	struct TEnumAsByte<EFortResourceType> CurrentResourceType; // 0x1979 (0x1)
	unsigned char unreflected_197a[0x6]; // 0x197a (0x6) 
	struct FLastBuildableState LastBuildableStateData[0xc]; // 0x1980 (0x10) (ARRAY) 
	unsigned char unreflected_1a40[0x10]; // 0x1a40 (0x10) 
	struct TArray<struct FFortDamageNumberInfo> QueuedDamageNumbers; // 0x1a50 (0x10)
	class AFortDamageNumbersActor* DamageNumbersActor; // 0x1a60 (0x8)
	class UInputComponent* EditModeInputComponent; // 0x1a68 (0x8)
	class ABuildingSMActor* EditBuildingActor; // 0x1a70 (0x8)
	float EditModeDistance; // 0x1a78 (0x4)
	unsigned char unreflected_1a7c[0x4]; // 0x1a7c (0x4) 
	struct FVector LastBuildPreviewGridSnapLoc; // 0x1a80 (0x18)
	struct FRotator LastBuildPreviewGridSnapRot; // 0x1a98 (0x18)
	struct FVector LastBuildPreviewGridSnapCentroid; // 0x1ab0 (0x18)
	class UInputComponent* PickerInputComponent; // 0x1ac8 (0x8)
	class AFortDecoHelper* TrapPickerDecoHelper; // 0x1ad0 (0x8)
	struct TArray<struct FHitResult> TouchEditResults; // 0x1ad8 (0x10)
	unsigned char unreflected_1ae8[0x1]; // 0x1ae8 (0x1) 
	bool bBuildingPlacementTraceSkipInitialPenetrationOfBuildingSMActor; // 0x1ae9 (0x1)
	bool bBuildingPlacementTraceSkipInitialPenetrationOfStaticMesh; // 0x1aea (0x1)
	unsigned char unreflected_1aeb[0x45]; // 0x1aeb (0x45) 
	class AFortQuickBars* ClientQuickBars; // 0x1b30 (0x8)
	unsigned char unreflected_1b38[0x8]; // 0x1b38 (0x8) 
	struct TArray<struct FRecentlyRemovedQuickbarInfo> RecentlyRemovedQuickbarInfo; // 0x1b40 (0x10)
	unsigned char unreflected_1b50[0x50]; // 0x1b50 (0x50) 
	struct FDelayedQuickBarActionContainer DelayedQuickBarActions; // 0x1ba0 (0x120)
	struct TSet<uint32_t> ClientProcessedQuickBarActions; // 0x1cc0 (0x50)
	bool bShouldForceDeleteDroppedItems; // 0x1d10 (0x1)
	unsigned char unreflected_1d11[0x3f]; // 0x1d11 (0x3f) 
	struct FQueuedItemsToDropViaPickup QueuedItemsToDrop; // 0x1d50 (0x20)
	unsigned char unreflected_1d70[0xb0]; // 0x1d70 (0xb0) 
	unsigned char bAutoEquipBetterItems; // 0x1e20 (0x1)
	unsigned char unreflected_1e21[0x7]; // 0x1e21 (0x7) 
	class UClass* WorldInventoryClass; // 0x1e28 (0x8)
	class AFortInventory* WorldInventory; // 0x1e30 (0x8)
	class AFortInventory* OutpostInventory; // 0x1e38 (0x8)
	class AFortInventory* ViewTargetInventory; // 0x1e40 (0x8)
	unsigned char unreflected_1e48[0x4c]; // 0x1e48 (0x4c) 
	unsigned char bHasInitializedWorldInventory; // 0x1e94 (0x1)
	unsigned char bHasInitializedHeroInventory; // 0x1e94 (0x1)
	unsigned char bAccountInventoryWasUpdated; // 0x1e94 (0x1)
	unsigned char bForceWorldInventoryUpdate; // 0x1e94 (0x1)
	unsigned char bIsSavingGadgetLoadout; // 0x1e94 (0x1)
	unsigned char unreflected_1e95[0xcb]; // 0x1e95 (0xcb) 
	class UFortClientPilot_Base* BotPilot; // 0x1f60 (0x8)
	unsigned char unreflected_1f68[0x18]; // 0x1f68 (0x18) 
	class UFortClientBotManager* BotManager; // 0x1f80 (0x8)
	unsigned char unreflected_1f88[0x8]; // 0x1f88 (0x8) 
	class UClass* ClientBotManagerClass; // 0x1f90 (0x8)
	unsigned char unreflected_1f98[0x18]; // 0x1f98 (0x18) 
	struct FFortAthenaLoadout CosmeticLoadoutPC; // 0x1fb0 (0x178)
	class UFortCustomizationAssetLoader* LocalPawnCustomizationAssetLoader; // 0x2128 (0x8)
	unsigned char unreflected_2130[0x18]; // 0x2130 (0x18) 
	bool bDropWeaponsDuringAllMissionStates; // 0x2148 (0x1)
	unsigned char unreflected_2149[0x1f]; // 0x2149 (0x1f) 
	struct FFortRewardReport LatestRewardReport; // 0x2168 (0x70)
	class UFortRegisteredPlayerInfo* MyPlayerInfo; // 0x21d8 (0x8)
	struct TArray<struct FFortUpdatedObjectiveStat> UpdatedObjectiveStats; // 0x21e0 (0x10)
	bool bHasUnsavedPrimaryMissionProgress; // 0x21f0 (0x1)
	unsigned char unreflected_21f1[0x3f]; // 0x21f1 (0x3f) 
	class UStatManager* StatManager; // 0x2230 (0x8)
	class UHeartbeatManager* HeartbeatManager; // 0x2238 (0x8)
	class UFortStatEventManager* StatEventManager; // 0x2240 (0x8)
	struct FFortPersistentGameplayStatContainer CachedPersistentGameplayStats; // 0x2248 (0x10)
	unsigned char unreflected_2258[0x10]; // 0x2258 (0x10) 
	class UFortMontageItemDefinitionBase* LastEmotePlayed; // 0x2268 (0x8)
	struct TMap<class UFortMontageItemDefinitionBase*, int> EmoteUsageCounts; // 0x2270 (0x50)
	struct TArray<struct FVector> AnalyticsBuildingWallTooLowLocations; // 0x22c0 (0x10)
	struct TSet<class AFortPlayerPawn*> NearbyEmotingPawns; // 0x22d0 (0x50)
	struct TMap<struct FName, int> NearbyEmotingPawnCount; // 0x2320 (0x50)
	class UMcpProfileGroup* McpProfileGroup; // 0x2370 (0x8)
	class UFortMcpProfileCommonPublic* CommonPublicMcpProfile; // 0x2378 (0x8)
	class UFortMcpProfileCommonCore* CommonCoreMcpProfile; // 0x2380 (0x8)
	class UFortMcpProfileCampaign* MainMcpProfile; // 0x2388 (0x8)
	class UFortMcpProfileAthena* AthenaProfile; // 0x2390 (0x8)
	class UFortMcpProfileMetadata* MetadataProfile; // 0x2398 (0x8)
	class UFortMcpProfileCreative* CreativeModeProfile; // 0x23a0 (0x8)
	enum EFortPCTutorialCompletedState TutorialCompletedState; // 0x23a8 (0x1)
	unsigned char unreflected_23a9[0x37]; // 0x23a9 (0x37) 
	bool bShouldReceiveCriticalMatchBonus; // 0x23e0 (0x1)
	bool bIgnoreExperienceOwnership; // 0x23e1 (0x1)
	unsigned char unreflected_23e2[0x6]; // 0x23e2 (0x6) 
	struct FMulticastInlineDelegate OnPlayerChangedBuildMode; // 0x23e8 (0x10)
	struct FMulticastInlineDelegate OnAutoRunEnabled; // 0x23f8 (0x10)
	unsigned char unreflected_2408[0x160]; // 0x2408 (0x160) 
	class USoundEffectSourcePresetChain* VoiceInputSourceEffectPresetChain; // 0x2568 (0x8)
	unsigned char unreflected_2570[0xa0]; // 0x2570 (0xa0) 
	struct FVector LocationUnderReticle; // 0x2610 (0x18)
	unsigned char bEnableVoiceChatPTT; // 0x2628 (0x1)
	unsigned char bVoiceChatPTTTransmit; // 0x2628 (0x1)
	unsigned char bInfiniteAmmo; // 0x2628 (0x1)
	unsigned char bInfiniteConsumables; // 0x2628 (0x1)
	unsigned char bInfiniteMagazine; // 0x2628 (0x1)
	unsigned char bNoCoolDown; // 0x2628 (0x1)
	unsigned char bInfiniteDurability; // 0x2628 (0x1)
	unsigned char bUsePickers; // 0x2628 (0x1)
	unsigned char bPickerOpen; // 0x2629 (0x1)
	unsigned char bPickerEnabled; // 0x2629 (0x1)
	unsigned char bCheatGhost; // 0x2629 (0x1)
	unsigned char bCheatFly; // 0x2629 (0x1)
	unsigned char bEnableShotLogging; // 0x2629 (0x1)
	unsigned char bIsNearActiveEncounters; // 0x2629 (0x1)
	unsigned char unreflected_262a[0x2]; // 0x262a (0x2) 
	int OverriddenBackpackSize; // 0x262c (0x4)
	class AFortReplayMovableSpotLight* CurrentReplaySpotLight; // 0x2630 (0x8)
	uint32_t AimHelpMode; // 0x2638 (0x4)
	struct TEnumAsByte<EFortJumpStaminaCost> JumpStaminaCost; // 0x263c (0x1)
	unsigned char unreflected_263d[0x3]; // 0x263d (0x3) 
	struct FName CameraPrototypeName; // 0x2640 (0x4)
	unsigned char unreflected_2644[0x3c]; // 0x2644 (0x3c) 
	bool bHideHudEnglishText; // 0x2680 (0x1)
	bool bAutoChangeMaterial; // 0x2681 (0x1)
	bool bServerAutoChangeMaterial; // 0x2682 (0x1)
	bool bPeripheralLightingEnabled; // 0x2683 (0x1)
	bool bRudderControlEnabled; // 0x2684 (0x1)
	unsigned char unreflected_2685[0x3]; // 0x2685 (0x3) 
	float RudderDeadZone; // 0x2688 (0x4)
	float RudderMaxThrottle; // 0x268c (0x4)
	struct TArray<class AFortSprayDecalInstance*> ActiveSprayInstances; // 0x2690 (0x10)
	struct TArray<class AActor*> ActiveToyInstances; // 0x26a0 (0x10)
	unsigned char ToySummonCounts_26b0[0x50]; // 0x26b0 (0x50) (UNHANDLED PROPERTY TYPE: MapProperty UID: 0)
	bool bSyncPeripheralLightingWithEmoteMusic; // 0x2700 (0x1)
	bool bPushEmoteAudioDataToCosmeticMaterials; // 0x2701 (0x1)
	unsigned char unreflected_2702[0x2]; // 0x2702 (0x2) 
	float LastEmoteMusicFFT100hz; // 0x2704 (0x4)
	float LastEmoteMusicFFT2000hz; // 0x2708 (0x4)
	float EmoteMusicBeatThreshold; // 0x270c (0x4)
	float EmoteMusicEnvelopeBeatCount; // 0x2710 (0x4)
	unsigned char unreflected_2714[0x4]; // 0x2714 (0x4) 
	struct TArray<struct FString> UsedCosmetics; // 0x2718 (0x10)
	unsigned char unreflected_2728[0x168]; // 0x2728 (0x168) 
	bool bZeroingCameraRoll; // 0x2890 (0x1)
	bool bTryPickupSwap; // 0x2891 (0x1)
	bool bClientSideEditPrediction; // 0x2892 (0x1)
	unsigned char unreflected_2893[0x1]; // 0x2893 (0x1) 
	float ClientSideEditPredictionTimeout; // 0x2894 (0x4)
	unsigned char unreflected_2898[0x8]; // 0x2898 (0x8) 
	class ABuildingSMActor* PendingEnterEditModeActor; // 0x28a0 (0x8)
	int RandomCharacterIndex; // 0x28a8 (0x4)
	float AntiAddictionPlayTimeMultiplier; // 0x28ac (0x4)
	bool bUsesWidgetForFPSDisplay; // 0x28b0 (0x1)
	bool bShowFPS; // 0x28b1 (0x1)
	unsigned char unreflected_28b2[0x6]; // 0x28b2 (0x6) 
	struct FMulticastInlineDelegate OnShowFPSChange; // 0x28b8 (0x10)
	bool bShowTemperature; // 0x28c8 (0x1)
	unsigned char unreflected_28c9[0x7]; // 0x28c9 (0x7) 
	struct FMulticastInlineDelegate OnShowTemperatureChange; // 0x28d0 (0x10)
	unsigned char unreflected_28e0[0x58]; // 0x28e0 (0x58) 
	struct FLockOnInfo LockOnInfo; // 0x2938 (0x50)
	bool bLockPrimaryInputMethodToMouse; // 0x2988 (0x1)
	unsigned char unreflected_2989[0x17]; // 0x2989 (0x17) 
	class UFortIndicatorManager* IndicatorManager; // 0x29a0 (0x8)
	unsigned char unreflected_29a8[0x10]; // 0x29a8 (0x10) 
	bool bFinalXPUpdateFailed; // 0x29b8 (0x1)
	unsigned char unreflected_29b9[0x7]; // 0x29b9 (0x7) 
	class UUserWidget* TestUserWidget; // 0x29c0 (0x8)
	enum EFortPawnStasisMode PreviousStasisMode; // 0x29c8 (0x1)
	unsigned char unreflected_29c9[0x7]; // 0x29c9 (0x7) 
	class UClass* BattleMapSpectatorClass; // 0x29d0 (0x8)
	unsigned char unreflected_29d8[0x1d]; // 0x29d8 (0x1d) 
	bool bReleaseBuildingContextOnPlace; // 0x29f5 (0x1)
	unsigned char unreflected_29f6[0x2]; // 0x29f6 (0x2) 
	float TurboPlaceFirstInterval; // 0x29f8 (0x4)
	float TurboPlaceInterval; // 0x29fc (0x4)
	bool bCreativeTurboDelete; // 0x2a00 (0x1)
	unsigned char unreflected_2a01[0x3]; // 0x2a01 (0x3) 
	float TurboDeleteFirstInterval; // 0x2a04 (0x4)
	float TurboDeleteInterval; // 0x2a08 (0x4)
	unsigned char unreflected_2a0c[0x1]; // 0x2a0c (0x1) 
	bool bTurboBuild; // 0x2a0d (0x1)
	unsigned char unreflected_2a0e[0x2]; // 0x2a0e (0x2) 
	float TurboBuildFirstInterval; // 0x2a10 (0x4)
	float TurboBuildRequestFailedInterval; // 0x2a14 (0x4)
	float TurboBuildInterval; // 0x2a18 (0x4)
	unsigned char unreflected_2a1c[0xc]; // 0x2a1c (0xc) 
	class UFortControllerComponent_Telemetry* FortControllerComponentTelemetry; // 0x2a28 (0x8)
	class UFortControllerComponent_InventoryNetworkManagement* InventoryNetworkManagementComponent; // 0x2a30 (0x8)
	class UFortControllerComponent_Interaction* InteractionComponent; // 0x2a38 (0x8)
	class UFortControllerComponent_QuickEdit* QuickEditComponent; // 0x2a40 (0x8)
	class UFortControllerComponent_SmartBuild* SmartBuildComponent; // 0x2a48 (0x8)
	class UFortControllerComponent_Collections* CollectionsComponent; // 0x2a50 (0x8)
	struct FItemVariantHandle PendingExecuteInventoryItemHandle; // 0x2a58 (0x18)
	unsigned char unreflected_2a70[0x18]; // 0x2a70 (0x18) 
	class UClass* QuickHealItemPickerClass; // 0x2a88 (0x8)
	struct FMulticastInlineDelegate OnPlayerSpawnedBuildingActor; // 0x2a90 (0x10)
	struct TArray<struct FString> MeshParentIds; // 0x2aa0 (0x10)
	struct FMulticastInlineDelegate OnToggleFullscreenMap; // 0x2ab0 (0x10)
	unsigned char unreflected_2ac0[0x78]; // 0x2ac0 (0x78) 
	struct FMulticastInlineDelegate OnBoundActionFreed; // 0x2b38 (0x10)
	unsigned char unreflected_2b48[0xb8]; // 0x2b48 (0xb8) 
	float ForcedInputRotationSpeed; // 0x2c00 (0x4)
	unsigned char unreflected_2c04[0x4]; // 0x2c04 (0x4) 
	class APawn* PendingClientRestartPawn; // 0x2c08 (0x8)
	unsigned char unreflected_2c10[0x20]; // 0x2c10 (0x20) 
	struct TArray<struct FFortWorldPartitionGridRangeOverrides> TargetGrids; // 0x2c30 (0x10)
	unsigned char padding_2c40[0x10]; // 0x2c40 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerController.WantsToSecondaryInteract (Underlying native function: WantsToSecondaryInteract 0x8d9a844)
	bool WantsToSecondaryInteract(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.WantsToDBNOCarry (Underlying native function: WantsToDBNOCarry 0x8d9a820)
	bool WantsToDBNOCarry(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.UpdateClientCollection (Underlying native function: UpdateClientCollection 0x8d9a524)
	void UpdateClientCollection(struct FString& CollectionType, struct FString& category, struct FFortMcpCollectedItemProperties& Properties, enum EFortCollectedVariantClientUpdate& UpdateKind); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.UnMutePlayer (Underlying native function: UnMutePlayer 0x8d9a454)
	void UnMutePlayer(struct FUniqueNetIdRepl& UniqueNetId); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.TryActivatePrimaryQuickbarFocusedWeapon (Underlying native function: TryActivatePrimaryQuickbarFocusedWeapon 0x8d9a3ec)
	void TryActivatePrimaryQuickbarFocusedWeapon(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.TossSpecificItem (Underlying native function: TossSpecificItem 0x8d9a318)
	void TossSpecificItem(class UFortItemDefinition*& DropItemDef, struct FFortPickupTossOverrideData& TossOverrideData); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.TogglePersonalVehicle (Underlying native function: TogglePersonalVehicle 0x8d9a294)
	void TogglePersonalVehicle(bool& bOn); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ToggleInventory (Underlying native function: ToggleInventory 0x8d9a280)
	void ToggleInventory(); // (Final | 0x00000002 | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.ToggleFullScreenMap (Underlying native function: ToggleFullScreenMap 0x8d9a268)
	void ToggleFullScreenMap(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ToggleCursorMode (Underlying native function: ToggleCursorMode 0x8d9a1e8)
	void ToggleCursorMode(struct FName& ActionName); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ToggleClientBot (Underlying native function: ToggleClientBot 0x26daa0c)
	void ToggleClientBot(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.ToggleBattleMapSpectator (Underlying native function: ToggleBattleMapSpectator 0x8d9a1d4)
	void ToggleBattleMapSpectator(); // (Final | 0x00000002 | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.TestStreamedVideo (Underlying native function: TestStreamedVideo 0x7291288)
	void TestStreamedVideo(struct FString& URLInQuotes); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.SuppressEventNotifications (Underlying native function: SuppressEventNotifications 0x8d9a154)
	void SuppressEventNotifications(bool& bSuppress); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.Suicide (Underlying native function: Suicide 0x8d9a13c)
	void Suicide(); // (Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.StopBattleMapSpectator (Underlying native function: StopBattleMapSpectator 0x8d9a118)
	bool StopBattleMapSpectator(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.StartZeroingCameraRoll (Underlying native function: StartZeroingCameraRoll 0x8d9a100)
	void StartZeroingCameraRoll(); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.StartReadyCheck (Underlying native function: StartReadyCheck 0x8d99f54)
	bool StartReadyCheck(struct FText& QueryText, struct FText& YesText, struct FText& NoText, float& PercentageToPass); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SpawnToyInstance (Underlying native function: SpawnToyInstance 0x8d99e30)
	class AActor* SpawnToyInstance(class UClass*& ToyClass, struct FTransform& SpawnPosition); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SpawnBattleMapSpectator (Underlying native function: SpawnBattleMapSpectator 0x8d99e0c)
	class ABattleMapPawnLive* SpawnBattleMapSpectator(); // (Final | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ShouldShowInfoIndicator (Underlying native function: ShouldShowInfoIndicator 0x8d99d78)
	bool ShouldShowInfoIndicator(class AActor*& TestActor); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.SetVoiceInputEffectChain (Underlying native function: SetVoiceInputEffectChain 0x8d99cf8)
	void SetVoiceInputEffectChain(class USoundEffectSourcePresetChain*& InSourceEffectPresetChain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetVoiceChatDistanceAttenuationSettings (Underlying native function: SetVoiceChatDistanceAttenuationSettings 0x8d99bf0)
	void SetVoiceChatDistanceAttenuationSettings(struct FVoiceChatDistanceAttenuationSettings& InSettings); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetVoiceChatDistanceAttenuationEnabled (Underlying native function: SetVoiceChatDistanceAttenuationEnabled 0x8d99b70)
	void SetVoiceChatDistanceAttenuationEnabled(bool& bInEnabled); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetVoiceChatDistance (Underlying native function: SetVoiceChatDistance 0x8d99a58)
	void SetVoiceChatDistance(struct FUniqueNetIdRepl& UniqueNetId, float& Distance); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetSprintBehaviorIsOverridden (Underlying native function: SetSprintBehaviorIsOverridden 0x8d99794)
	void SetSprintBehaviorIsOverridden(bool& bNewSprintBehaviorIsOverridden, bool& bNewSprintByDefaultWhenSprintIsOverridden); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetRotatePawnToCamera (Underlying native function: SetRotatePawnToCamera 0x8d99710)
	void SetRotatePawnToCamera(bool& bNewRotatePawnToCamera); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetPickerEnabled (Underlying native function: SetPickerEnabled 0x8d99680)
	void SetPickerEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetLockOnTargetStickCoords (Underlying native function: SetLockOnTargetStickCoords 0x8d9961c)
	void SetLockOnTargetStickCoords(struct FVector2D& Coords); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetInputYawScale (Underlying native function: SetInputYawScale 0x8d99564)
	void SetInputYawScale(float& InInputYawScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetInputPitchScale (Underlying native function: SetInputPitchScale 0x8d994ac)
	void SetInputPitchScale(float& InInputPitchScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetHUDElementVisibility (Underlying native function: SetHUDElementVisibility 0x8d990d8)
	void SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool& bHideElements, struct FName& ReasonName, struct FString& LogContext); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetFullscreenMapVisible (Underlying native function: SetFullscreenMapVisible 0x8d99054)
	void SetFullscreenMapVisible(bool& Visible); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetForcedInputRotationSpeed (Underlying native function: SetForcedInputRotationSpeed 0x8d98fc8)
	void SetForcedInputRotationSpeed(float& InForcedInputRotationSpeed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetFirstPersonCamera (Underlying native function: SetFirstPersonCamera 0x8d98f44)
	void SetFirstPersonCamera(bool& bNewUseFirstPersonCamera); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetDisableNativeHitMarker (Underlying native function: SetDisableNativeHitMarker 0x8d98e94)
	void SetDisableNativeHitMarker(bool& bNewDisableNativeHitMarker); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetDisableNativeDamageNumbers (Underlying native function: SetDisableNativeDamageNumbers 0x8d98de4)
	void SetDisableNativeDamageNumbers(bool& bNewDisableNativeDamageNumbers); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetCompHiddenOtherLocalControllersOnly (Underlying native function: SetCompHiddenOtherLocalControllersOnly 0x8d98cd4)
	bool SetCompHiddenOtherLocalControllersOnly(class USceneComponent*& SceneComp, bool& bNewHiddenGame, bool& bPropagateToChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetCompHiddenControllerOnly (Underlying native function: SetCompHiddenControllerOnly 0x8d98bc4)
	bool SetCompHiddenControllerOnly(class USceneComponent*& SceneComp, bool& bNewHiddenGame, bool& bPropagateToChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetClientPawnNewRotation (Underlying native function: SetClientPawnNewRotation 0x8d98b60)
	void SetClientPawnNewRotation(struct FRotator& NewRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetCinematicOverrideClass (Underlying native function: SetCinematicOverrideClass 0x8d98ae0)
	void SetCinematicOverrideClass(class UClass*& OverrideCameraClass); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetCinematicModeWithWeapon (Underlying native function: SetCinematicModeWithWeapon 0x8d988e8)
	void SetCinematicModeWithWeapon(bool& bInCinematicMode, bool& bHidePlayer, bool& bHideWeapon, bool& bAffectsHUD, bool& bAffectsMovement, bool& bAffectsTurning); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetBuildingHighlight (Underlying native function: SetBuildingHighlight 0x8d987b8)
	void SetBuildingHighlight(struct TArray<class ABuildingActor*>& TargetedBuildings, struct TEnumAsByte<EBuildingHighlightType>& HighlightType, bool& bValidHighlight); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetBoundEntryToActions (Underlying native function: SetBoundEntryToActions 0x8d986c8)
	void SetBoundEntryToActions(struct TArray<struct FName>& InBoundActions, class UWidget*& EntryToBind); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetAttemptReloadOnEquip (Underlying native function: SetAttemptReloadOnEquip 0x8d9863c)
	void SetAttemptReloadOnEquip(bool& bAttemptReloadOnEquip); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetAtNameHomeBaseScreen (Underlying native function: SetAtNameHomeBaseScreen 0x8d985bc)
	void SetAtNameHomeBaseScreen(bool& AtScreen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.SetActorHiddenControllerOnly (Underlying native function: SetActorHiddenControllerOnly 0x8d984a4)
	bool SetActorHiddenControllerOnly(class AActor*& TargetActor, bool& bNewHidden); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ServerUpgradeBuildingActor (Underlying native function: ServerUpgradeBuildingActor 0x8d983b8)
	void ServerUpgradeBuildingActor(class ABuildingActor*& BuildingActorToUpgrade, int& NewUpgradeLevel); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerUpdateSprintToggleable (Underlying native function: ServerUpdateSprintToggleable 0x2a5cb10)
	void ServerUpdateSprintToggleable(bool& bShouldBeToggleable); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerUpdateMessageComponents (Underlying native function: ServerUpdateMessageComponents 0x8d981e4)
	void ServerUpdateMessageComponents(struct TArray<class UFortGameplayMessageComponentBase*>& ModifiedComponents, struct TArray<struct FGameplayTagContainer>& NewChannelIds); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerUpdateItemListOptions (Underlying native function: ServerUpdateItemListOptions 0x8d98050)
	void ServerUpdateItemListOptions(class UFortMinigameItemContainerComponent*& ItemContainerComponent, int& ItemIndex, struct TArray<struct FString>& OptionsKeys, struct TArray<struct FString>& OptionsValues); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerUpdateGameplayOptions (Underlying native function: ServerUpdateGameplayOptions 0x8d97f40)
	void ServerUpdateGameplayOptions(struct TArray<struct FString>& UserOptionsKeys, struct TArray<struct FString>& UserOptionsValues); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerUpdateGameDescriptionData (Underlying native function: ServerUpdateGameDescriptionData 0x8d97dec)
	void ServerUpdateGameDescriptionData(class AActor*& DataTarget, struct FText& GameName, struct TArray<struct FText>& GameDescriptionText); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerUpdateActorOptions (Underlying native function: ServerUpdateActorOptions 0x8d97be0)
	void ServerUpdateActorOptions(class AActor*& OptionsTarget, struct TArray<struct FString>& OptionsKeys, struct TArray<struct FString>& OptionsValues, struct TArray<struct FFortGameplayEventContainer_Named>& AddedSubscriptions, struct TArray<struct FFortGameplayEventContainer_Named>& RemovedSubscriptions); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerUIChoiceCompleted (Underlying native function: ServerUIChoiceCompleted 0x8d97b1c)
	void ServerUIChoiceCompleted(int& ChosenItem, int& MenuIdentifier); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerTriggerGenericObjectiveEvent (Underlying native function: ServerTriggerGenericObjectiveEvent 0x8d97a7c)
	void ServerTriggerGenericObjectiveEvent(class AFortObjectiveBase*& Objective); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerTouchActiveTime (Underlying native function: ServerTouchActiveTime 0x2486c74)
	void ServerTouchActiveTime(); // (Net | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerTeleportToReticle (Underlying native function: ServerTeleportToReticle 0x8d979e8)
	void ServerTeleportToReticle(struct FVector& TeleportLocation); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerTeamChatRoomReady (Underlying native function: ServerTeamChatRoomReady 0x8d97890)
	void ServerTeamChatRoomReady(struct FString& ChatRoomId); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSuicide (Underlying native function: ServerSuicide 0x8d97878)
	void ServerSuicide(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerStartPIDValueGraphing (Underlying native function: ServerStartPIDValueGraphing 0x8d97860)
	void ServerStartPIDValueGraphing(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerStartPIDContributionsGraphing (Underlying native function: ServerStartPIDContributionsGraphing 0x8d97848)
	void ServerStartPIDContributionsGraphing(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerStartIntensityGraphing (Underlying native function: ServerStartIntensityGraphing 0x8d97830)
	void ServerStartIntensityGraphing(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSpotActor (Underlying native function: ServerSpotActor 0x8d97790)
	void ServerSpotActor(class AActor*& NewlySpottedActor); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerSpawnMark (Underlying native function: ServerSpawnMark 0x8d9762c)
	void ServerSpawnMark(class AActor*& ActorToAttachTo, struct FVector& AttachOffset, struct FText& PreapprovedText); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetWeaponAutoPickups (Underlying native function: ServerSetWeaponAutoPickups 0x2a0b8b0)
	void ServerSetWeaponAutoPickups(bool& bEnablePickups); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetShouldUsePilotComponent (Underlying native function: ServerSetShouldUsePilotComponent 0x8d975a8)
	void ServerSetShouldUsePilotComponent(bool& InValue); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetShouldUseBotManager (Underlying native function: ServerSetShouldUseBotManager 0x8cf3028)
	void ServerSetShouldUseBotManager(bool& InValue); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetReplaySpotLightGroupMoveLocked (Underlying native function: ServerSetReplaySpotLightGroupMoveLocked 0x8d974e0)
	void ServerSetReplaySpotLightGroupMoveLocked(uint32_t& Number, bool& bLocked); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetRebootEligiblePartyFriendsList (Underlying native function: ServerSetRebootEligiblePartyFriendsList 0x1cfb080)
	void ServerSetRebootEligiblePartyFriendsList(struct TArray<struct FFortRebootEligiblePartyFriendInfo>& NewRebootEligiblePartyFriends); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetReadyToContinue (Underlying native function: ServerSetReadyToContinue 0x8d973dc)
	void ServerSetReadyToContinue(bool& bReady, struct TEnumAsByte<EFortGameplayState>& RequestedState, bool& bTryStartTimer); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetPartyOwner (Underlying native function: ServerSetPartyOwner 0x8d97314)
	void ServerSetPartyOwner(struct FUniqueNetIdRepl& PartyOwnerUniqueId); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetMarkText (Underlying native function: ServerSetMarkText 0x8d97174)
	void ServerSetMarkText(class AFortMarkActor*& MarkActor, struct FString& MarkText); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetInventoryStateValue (Underlying native function: ServerSetInventoryStateValue 0x8d97088)
	void ServerSetInventoryStateValue(struct FGuid& ItemGuid, struct FFortItemEntryStateValue& StateValue); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetHero (Underlying native function: ServerSetHero 0x8d96f30)
	void ServerSetHero(struct FString& NewHeroID); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetCurrentReplaySpotLightDebugDraw (Underlying native function: ServerSetCurrentReplaySpotLightDebugDraw 0x8d96d7c)
	void ServerSetCurrentReplaySpotLightDebugDraw(bool& bEnabled); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetCurrentReplaySpotLightColor (Underlying native function: ServerSetCurrentReplaySpotLightColor 0x8d96c84)
	void ServerSetCurrentReplaySpotLightColor(int& R, int& G, int& B); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetCurrentReplaySpotLight (Underlying native function: ServerSetCurrentReplaySpotLight 0x8d96c00)
	void ServerSetCurrentReplaySpotLight(class AFortReplayMovableSpotLight*& NewReplaySpotLight); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetClientHasFinishedLoading (Underlying native function: ServerSetClientHasFinishedLoading 0x8d96b7c)
	void ServerSetClientHasFinishedLoading(bool& bInHasFinishedLoading); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetAutoEquipBetterItems (Underlying native function: ServerSetAutoEquipBetterItems 0x8d96af8)
	void ServerSetAutoEquipBetterItems(bool& bAutoEquip); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSetAntiAddictionPlayTimeMultiplier (Underlying native function: ServerSetAntiAddictionPlayTimeMultiplier 0x8d96a70)
	void ServerSetAntiAddictionPlayTimeMultiplier(float& NewPlayTimeRewardRate); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSendCustomStatEventWithTags (Underlying native function: ServerSendCustomStatEventWithTags 0x8d968ac)
	void ServerSendCustomStatEventWithTags(enum EFortQuestObjectiveStatEvent& Type, struct FGameplayTagContainer& AdditionalSourceTags, struct FGameplayTagContainer& TargetTags, int& Count); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerSendClientProgressUpdate (Underlying native function: ServerSendClientProgressUpdate 0x8d96818)
	void ServerSendClientProgressUpdate(struct TArray<unsigned char>& ClientProgressUpdate); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerReturnToMainMenu (Underlying native function: ServerReturnToMainMenu 0x8d96800)
	void ServerReturnToMainMenu(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerRetryLocalPlaceBuildableClass (Underlying native function: ServerRetryLocalPlaceBuildableClass 0x8d967e8)
	void ServerRetryLocalPlaceBuildableClass(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerRequestPresetCosmeticSwap (Underlying native function: ServerRequestPresetCosmeticSwap 0x5e5b250)
	void ServerRequestPresetCosmeticSwap(class UAthenaCosmeticItemDefinition*& ItemDef, int& SwapIndex); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerRequestGameplayAction (Underlying native function: ServerRequestGameplayAction 0x8d96764)
	void ServerRequestGameplayAction(struct TEnumAsByte<EFortRequestedGameplayAction>& RequestedAction); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerRequestAttributeSources (Underlying native function: ServerRequestAttributeSources 0x8d965fc)
	void ServerRequestAttributeSources(struct FGameplayAttribute& Attribute, class UFortAbilitySystemComponent*& AbilitySystemComponent); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerRequestAIDebug (Underlying native function: ServerRequestAIDebug 0x8d965e4)
	void ServerRequestAIDebug(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerReplyToReadyCheck (Underlying native function: ServerReplyToReadyCheck 0x8d96560)
	void ServerReplyToReadyCheck(bool& bReady); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerRepairBuildingActor (Underlying native function: ServerRepairBuildingActor 0x8d964c0)
	void ServerRepairBuildingActor(class ABuildingSMActor*& BuildingActorToRepair); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerRemoveInventoryStateValue (Underlying native function: ServerRemoveInventoryStateValue 0x8d963e4)
	void ServerRemoveInventoryStateValue(struct FGuid& ItemGuid, struct TEnumAsByte<EFortItemEntryState>& StateValueType); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerRemoveInventoryItem (Underlying native function: ServerRemoveInventoryItem 0x8d96294)
	void ServerRemoveInventoryItem(struct FGuid& ItemGuid, int& Count, bool& bForceRemoval, bool& bForcePersistWhenEmpty); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerRemoveDefender (Underlying native function: ServerRemoveDefender 0x8d961f4)
	void ServerRemoveDefender(class ABuildingTrapDefender*& DefenderTrap); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerReleaseInventoryItemKey (Underlying native function: ServerReleaseInventoryItemKey 0x8d96160)
	void ServerReleaseInventoryItemKey(struct FGuid& ItemGuid); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerReAimCurrentReplaySpotLight (Underlying native function: ServerReAimCurrentReplaySpotLight 0x8d96058)
	void ServerReAimCurrentReplaySpotLight(struct FVector& NewLocation, struct FRotator& NewRotation); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerReAimAllReplaySpotLights (Underlying native function: ServerReAimAllReplaySpotLights 0x8d95f68)
	void ServerReAimAllReplaySpotLights(struct FVector& NewLocation, struct FRotator& NewRotation); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerReadyToStartMatch (Underlying native function: ServerReadyToStartMatch 0x8d96148)
	void ServerReadyToStartMatch(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerPlayerRequestClearIslandData (Underlying native function: ServerPlayerRequestClearIslandData 0x8d95f50)
	void ServerPlayerRequestClearIslandData(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerPlayEmoteItem (Underlying native function: ServerPlayEmoteItem 0x8d95e60)
	void ServerPlayEmoteItem(class UFortMontageItemDefinitionBase*& EmoteAsset, float& EmoteRandomNumber); // (Net | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerPingMinimap (Underlying native function: ServerPingMinimap 0x8d95d38)
	void ServerPingMinimap(struct FVector& WorldLocation, struct FLinearColor& PingColor, unsigned char& RequiredTeam); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerOnMaterialSelection (Underlying native function: ServerOnMaterialSelection 0x8d95b44)
	void ServerOnMaterialSelection(struct TEnumAsByte<EFortResourceType>& NewResourceType, struct TEnumAsByte<EFortResourceLevel>& NewResourceLevel); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerNotifyMeshNetPlayer (Underlying native function: ServerNotifyMeshNetPlayer 0x8d95ac0)
	void ServerNotifyMeshNetPlayer(struct FName& tag); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ServerModifyStat (Underlying native function: ServerModifyStat 0x8d95980)
	void ServerModifyStat(struct FName& StatName, int& Amount, enum EStatMod& ModType, bool& bForceStatSave); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerLoadingScreenDropped (Underlying native function: ServerLoadingScreenDropped 0x190bd90)
	void ServerLoadingScreenDropped(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerKillAllAIPawnsAroundPlayer (Underlying native function: ServerKillAllAIPawnsAroundPlayer 0x8d95968)
	void ServerKillAllAIPawnsAroundPlayer(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerKickPlayer (Underlying native function: ServerKickPlayer 0x8d9585c)
	void ServerKickPlayer(struct FUniqueNetIdRepl& PlayerToKick, struct FText& Reason); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerItemWillBeDestroyed (Underlying native function: ServerItemWillBeDestroyed 0x8d95784)
	void ServerItemWillBeDestroyed(struct FGuid& DestroyedItemGuid, int& Count); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerHandleMissionEvent_ToggledEditMode (Underlying native function: ServerHandleMissionEvent_ToggledEditMode 0x8d9568c)
	void ServerHandleMissionEventToggledEditMode(class ABuildingSMActor*& EditableActor, bool& bOpened); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerHandleMissionEvent_ToggledCursorMode (Underlying native function: ServerHandleMissionEvent_ToggledCursorMode 0x8d95608)
	void ServerHandleMissionEventToggledCursorMode(bool& bOpened); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ServerHandleMissionEvent_StartLeavingZone (Underlying native function: ServerHandleMissionEvent_StartLeavingZone 0x197c8dc)
	void ServerHandleMissionEventStartLeavingZone(); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ServerFinishedLevelStreaming (Underlying native function: ServerFinishedLevelStreaming 0x8d95568)
	void ServerFinishedLevelStreaming(class UFortLevelStreamComponent*& ComponentStreamingFinishedFor); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerExecutePresetTeamChat (Underlying native function: ServerExecutePresetTeamChat 0x8d95400)
	void ServerExecutePresetTeamChat(struct FText& ChatText, struct FUniqueNetIdRepl& SenderID); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerExecuteInventoryItem (Underlying native function: ServerExecuteInventoryItem 0x8d9536c)
	void ServerExecuteInventoryItem(struct FGuid& ItemGuid); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerEndEditingBuildingActor (Underlying native function: ServerEndEditingBuildingActor 0x8d952cc)
	void ServerEndEditingBuildingActor(class ABuildingSMActor*& BuildingActorToStopEditing); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerEmote (Underlying native function: ServerEmote 0x8d95248)
	void ServerEmote(struct FName& AssetName); // (Net | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerEditBuildingActor (Underlying native function: ServerEditBuildingActor 0x8d950cc)
	void ServerEditBuildingActor(class ABuildingSMActor*& BuildingActorToEdit, class UClass*& NewBuildingClass, unsigned char& RotationIterations, bool& bMirrored); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerDropCarriedObject (Underlying native function: ServerDropCarriedObject 0x8d950b4)
	void ServerDropCarriedObject(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerDropAllItems (Underlying native function: ServerDropAllItems 0x8d95014)
	void ServerDropAllItems(class UFortItemDefinition*& IgnoreItemDef); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerDisassembleInventoryItems (Underlying native function: ServerDisassembleInventoryItems 0x8d94ef8)
	void ServerDisassembleInventoryItems(struct TArray<struct FGuid>& ItemGuids, struct TArray<int>& ItemCounts); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerDeveloper_GetConsoleVariable (Underlying native function: ServerDeveloper_GetConsoleVariable 0x8d94da0)
	void ServerDeveloperGetConsoleVariable(struct FString& ConsoleVariable); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerDeployDefender (Underlying native function: ServerDeployDefender 0x8d94af0)
	void ServerDeployDefender(class ABuildingTrapDefender*& DefenderTrap, struct FString& SelectedItemInstanceId, struct FName& DefenderSquadId, struct FGuid& WeaponToGiveGuid, int& AmmoQuantity); // (Net | NetReliable | Native | Event | Protected | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerCreateBuildingActor (Underlying native function: ServerCreateBuildingActor 0x8d949a0)
	void ServerCreateBuildingActor(struct FCreateBuildingActorData& CreateBuildingData); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerCraftSchematic (Underlying native function: ServerCraftSchematic 0x8d94748)
	void ServerCraftSchematic(struct FString& ItemId, int& PostCraftSlot, int& CraftAmount, enum EFortItemTier& RequestedTier, bool& bIsQuickCrafted); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerConvertToDirectBinding (Underlying native function: ServerConvertToDirectBinding 0x8d946a8)
	void ServerConvertToDirectBinding(class AFortMinigameSettingsBuilding*& Target); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerCombineInventoryItems (Underlying native function: ServerCombineInventoryItems 0x8d945c0)
	void ServerCombineInventoryItems(struct FGuid& TargetItemGuid, struct FGuid& SourceItemGuid); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerClientPawnLoaded (Underlying native function: ServerClientPawnLoaded 0x8d9453c)
	void ServerClientPawnLoaded(bool& bIsPawnLoaded); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerClearItemList (Underlying native function: ServerClearItemList 0x8d9449c)
	void ServerClearItemList(class UFortMinigameItemContainerComponent*& ItemContainerComponent); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerCheatAll (Underlying native function: ServerCheatAll 0x8d94344)
	void ServerCheatAll(struct FString& Msg); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerCheat (Underlying native function: ServerCheat 0x8d941ec)
	void ServerCheat(struct FString& Msg); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerBroadcastUIFeedbackEvent (Underlying native function: ServerBroadcastUIFeedbackEvent 0x8d94168)
	void ServerBroadcastUIFeedbackEvent(struct FName& EventName); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerBroadcastPlayerChangedBuildMode (Underlying native function: ServerBroadcastPlayerChangedBuildMode 0x8d940e4)
	void ServerBroadcastPlayerChangedBuildMode(bool& bIsInBuildMode); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.ServerBeginEditingBuildingActor (Underlying native function: ServerBeginEditingBuildingActor 0x8d94044)
	void ServerBeginEditingBuildingActor(class ABuildingSMActor*& BuildingActorToEdit); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerAttemptInventoryDrop (Underlying native function: ServerAttemptInventoryDrop 0x8d93eec)
	void ServerAttemptInventoryDrop(struct FGuid& ItemGuid, int& Count, bool& bTrash); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerAnnouncementStoppedOnClient (Underlying native function: ServerAnnouncementStoppedOnClient 0x8d93e58)
	void ServerAnnouncementStoppedOnClient(struct FGuid& AnnouncementID); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortPlayerController.ServerAddPawnMovementInput (Underlying native function: ServerAddPawnMovementInput 0x8d93cb4)
	void ServerAddPawnMovementInput(class AFortPawn*& InChar, struct FVector& WorldDirection, float& ScaleValue, bool& bForce); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ServerAcknowledgeDelayedQuickBarAction (Underlying native function: ServerAcknowledgeDelayedQuickBarAction 0x8d93c20)
	void ServerAcknowledgeDelayedQuickBarAction(struct TArray<uint32_t>& ProcessedActionIds); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.SendStreamingAnalytics (Underlying native function: SendStreamingAnalytics 0x8d93ba0)
	void SendStreamingAnalytics(class UMediaPlayer*& MediaPlayer); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerController.SendMessage (Underlying native function: SendMessage 0x8d93ae0)
	void SendMessage(struct FText& message); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ReturnToMainMenu (Underlying native function: ReturnToMainMenu 0x8d93ac8)
	void ReturnToMainMenu(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ReturnToAthenaItemShop (Underlying native function: ReturnToAthenaItemShop 0x8d93ab0)
	void ReturnToAthenaItemShop(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ResetInputRotationScale (Underlying native function: ResetInputRotationScale 0x8d93a6c)
	void ResetInputRotationScale(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ResetHUDElementVisibilityToSettings (Underlying native function: ResetHUDElementVisibilityToSettings 0x8d939b4)
	void ResetHUDElementVisibilityToSettings(struct FGameplayTagContainer& HUDElementTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ResetForcedInputRotationSpeed (Underlying native function: ResetForcedInputRotationSpeed 0x8d9399c)
	void ResetForcedInputRotationSpeed(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ReportVideoStreamingError (Underlying native function: ReportVideoStreamingError 0x8d937dc)
	void ReportVideoStreamingError(class UMediaPlayer*& MediaPlayer, bool& bLocalContentFallback, struct FString& LastError); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerController.RemoveItemsByCreativeTags (Underlying native function: RemoveItemsByCreativeTags 0x8546cb4)
	void RemoveItemsByCreativeTags(struct TArray<struct FName>& RemoveCreativeTags, struct TArray<struct FName>& IgnoreCreativeTags); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.RemoveItemFromQuickBars (Underlying native function: RemoveItemFromQuickBars 0x8d936b0)
	void RemoveItemFromQuickBars(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.RefreshHUDElementVisibilitiesToSettings (Underlying native function: RefreshHUDElementVisibilitiesToSettings 0x8d93698)
	void RefreshHUDElementVisibilitiesToSettings(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ProcessMcpProfileUpdate (Underlying native function: ProcessMcpProfileUpdate 0x8d935b8)
	void ProcessMcpProfileUpdate(struct FProfileUpdate& Update); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.PrintEventInfo (Underlying native function: PrintEventInfo 0x26daa0c)
	void PrintEventInfo(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.PrintDebugInfo (Underlying native function: PrintDebugInfo 0x8d935a0)
	void PrintDebugInfo(); // (Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.PostHeroStatSkillPointsEarned (Underlying native function: PostHeroStatSkillPointsEarned 0x8d93520)
	void PostHeroStatSkillPointsEarned(int& NumSkillPoints); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.PostHeroStatMissionCompleted (Underlying native function: PostHeroStatMissionCompleted 0x8d934a0)
	void PostHeroStatMissionCompleted(int& DifficultyRating); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.PostHeroStatCollectionBookProgressMade (Underlying native function: PostHeroStatCollectionBookProgressMade 0x8d93420)
	void PostHeroStatCollectionBookProgressMade(int& LevelReached); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.PlaySpatialSound (Underlying native function: PlaySpatialSound 0x8d93330)
	void PlaySpatialSound(class USoundBase*& sound, struct FVector& Location); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.PlayerRequestClearIslandData (Underlying native function: PlayerRequestClearIslandData 0x8d93408)
	void PlayerRequestClearIslandData(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.PlayEmoteItem (Underlying native function: PlayEmoteItem 0x8d93268)
	void PlayEmoteItem(class UFortMontageItemDefinitionBase*& EmoteAsset, enum EFortEmotePlayMode& PlayMode); // (0x00000002 | Exec | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.OwnsIslandVolume (Underlying native function: OwnsIslandVolume 0x8d93164)
	bool OwnsIslandVolume(class AFortVolume*& Volume); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.OwnsCurrentIslandVolume (Underlying native function: OwnsCurrentIslandVolume 0x8d93140)
	bool OwnsCurrentIslandVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.OpenVoteDialog (Underlying native function: OpenVoteDialog 0x8d93124)
	void OpenVoteDialog(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.OpenInventory (Underlying native function: OpenInventory 0x8d930a4)
	void OpenInventory(struct FName& InventoryTabId); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.OpenChoiceUI (Underlying native function: OpenChoiceUI 0x8d92fd8)
	void OpenChoiceUI(struct FChoiceData& ChoiceData); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_UpdatedUnsavedPrimaryMissionProgress (Underlying native function: OnRep_UpdatedUnsavedPrimaryMissionProgress 0x8d92f54)
	void OnRepUpdatedUnsavedPrimaryMissionProgress(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_UpdatedObjectiveStats (Underlying native function: OnRep_UpdatedObjectiveStats 0x8d92f40)
	void OnRepUpdatedObjectiveStats(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_PIDValuesGraphInfo (Underlying native function: OnRep_PIDValuesGraphInfo 0x8d92f2c)
	void OnRepPIDValuesGraphInfo(); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_PIDContributionsGraphInfo (Underlying native function: OnRep_PIDContributionsGraphInfo 0x8d92f18)
	void OnRepPIDContributionsGraphInfo(); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_MeshParentIds (Underlying native function: OnRep_MeshParentIds 0x8d92eb0)
	void OnRepMeshParentIds(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_LatestRewardReport (Underlying native function: OnRep_LatestRewardReport 0x8d92e38)
	void OnRepLatestRewardReport(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_IntensityGraphInfo (Underlying native function: OnRep_IntensityGraphInfo 0x8d92e24)
	void OnRepIntensityGraphInfo(); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_HoldingObject (Underlying native function: OnRep_HoldingObject 0x8d92de0)
	void OnRepHoldingObject(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_DelayedQuickBarActions (Underlying native function: OnRep_DelayedQuickBarActions 0x8d92dcc)
	void OnRepDelayedQuickBarActions(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_CheatMovement (Underlying native function: OnRep_CheatMovement 0x8d92d74)
	void OnRepCheatMovement(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.OnRep_bHasServerFinishedLoading (Underlying native function: OnRep_bHasServerFinishedLoading 0x8d92f7c)
	void OnRepbHasServerFinishedLoading(); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortPlayerController.OnPlayerControllerComponentAttached__DelegateSignature (Has no native function)
	void OnPlayerControllerComponentAttachedDelegateSignature(class AFortPlayerController*& OwnerController, class UFortControllerComponent*& AttachedComponent); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPlayerController.OnMinigameSpatialLoadingStateChanged (Underlying native function: OnMinigameSpatialLoadingStateChanged 0x8d92cac)
	void OnMinigameSpatialLoadingStateChanged(enum ESpatialLoadingState& NewState, class AFortVolume*& Volume); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.OnLocalInteraction (Has no native function)
	void OnLocalInteraction(class AActor*& ReceivingActor); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/FortniteGame.FortPlayerController.OnFortPawnChanged__DelegateSignature (Has no native function)
	void OnFortPawnChangedDelegateSignature(class AFortPawn*& NewPawn); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortPlayerController.OnDisplayHitMarker (Has no native function)
	void OnDisplayHitMarker(struct FGameplayTagContainer& HitTags, struct TEnumAsByte<EFortDamageZone>& Zone); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerController.NotifyMeshNetPlayer (Underlying native function: NotifyMeshNetPlayer 0x8d92c0c)
	void NotifyMeshNetPlayer(struct FName& tag); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.MutePlayer (Underlying native function: MutePlayer 0x8d92b3c)
	void MutePlayer(struct FUniqueNetIdRepl& UniqueNetId); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.MulticastClearWeakSpotData (Underlying native function: MulticastClearWeakSpotData 0x8d92ab8)
	void MulticastClearWeakSpotData(class UObject*& ParentBuilding); // (Net | NetReliable | Native | Event | NetMulticast | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ModifyStat (Underlying native function: ModifyStat 0x8d92958)
	void ModifyStat(struct FName& StatName, int& Amount, enum EStatMod& ModType, bool& bForceStatSave); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.MarkCollectionItemSeen (Underlying native function: MarkCollectionItemSeen 0x8d925e4)
	void MarkCollectionItemSeen(struct FString& CollectionType, struct FString& category, struct FString& Variant); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPlayerController.LocalStopForceFeedback (Underlying native function: LocalStopForceFeedback 0x8d92500)
	void LocalStopForceFeedback(class UForceFeedbackEffect*& ForceFeedbackEffect, struct FName& tag); // (Final | 0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.LocalPlayForceFeedback (Underlying native function: LocalPlayForceFeedback 0x8d923f8)
	void LocalPlayForceFeedback(class UForceFeedbackEffect*& ForceFeedbackEffect, bool& bLooping, struct FName& tag); // (Final | 0x00000002 | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.LocalOverrideBuildMode (Underlying native function: LocalOverrideBuildMode 0x8d921ec)
	void LocalOverrideBuildMode(bool& bVisible, class UClass*& InBuildingClass, struct FVector& BuildingOverrideDistance, class UMaterialInterface*& PreviewMaterial, struct FVector& NewScale, struct FRotator& NewRotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.LocalOnUiChoiceCompleted (Underlying native function: LocalOnUiChoiceCompleted 0x8d92128)
	void LocalOnUiChoiceCompleted(int& ChosenItem, int& MenuIdentifier); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.LocalOnBlueprintEdit (Underlying native function: LocalOnBlueprintEdit 0x8d920a8)
	void LocalOnBlueprintEdit(class ABuildingSMActor*& EditedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.K2_OnLeaveVolume (Has no native function)
	void K2OnLeaveVolume(class AFortVolume*& Volume); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerController.K2_OnEnterVolume (Has no native function)
	void K2OnEnterVolume(class AFortVolume*& Volume); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPlayerController.IsUsingTouch (Underlying native function: IsUsingTouch 0x8d92084)
	bool IsUsingTouch(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsUsingHarvestingTool (Underlying native function: IsUsingHarvestingTool 0x8d92060)
	bool IsUsingHarvestingTool(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsUsingGamepad (Underlying native function: IsUsingGamepad 0x8d9203c)
	bool IsUsingGamepad(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsUsingFirstPersonCamera (Underlying native function: IsUsingFirstPersonCamera 0x8d92018)
	bool IsUsingFirstPersonCamera(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsUsingCosmeticsOwnedByStWHero (Underlying native function: IsUsingCosmeticsOwnedByStWHero 0x8d91f38)
	void IsUsingCosmeticsOwnedByStWHero(bool& bIsUsingOutfitOwnedByHero, bool& bIsUsingBackblingOwnedByHero); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsRequirementsMet (Underlying native function: IsRequirementsMet 0x8d91dfc)
	bool IsRequirementsMet(struct FFortRequirementsInfo& InRequirements, bool& bUsePhoenixStats); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsPlayingEmote (Underlying native function: IsPlayingEmote 0x8d91dd4)
	bool IsPlayingEmote(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsPlayerInAnExperienceTheyOwn (Underlying native function: IsPlayerInAnExperienceTheyOwn 0x8d91db0)
	bool IsPlayerInAnExperienceTheyOwn(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsPersonalVehicleAvailable (Underlying native function: IsPersonalVehicleAvailable 0x8d91d88)
	bool IsPersonalVehicleAvailable(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsPersonalVehicleActive (Underlying native function: IsPersonalVehicleActive 0x8d91d60)
	bool IsPersonalVehicleActive(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsPartyLeader (Underlying native function: IsPartyLeader 0x8d91d38)
	bool IsPartyLeader(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsNearActiveEncounters (Underlying native function: IsNearActiveEncounters 0x8d91d1c)
	bool IsNearActiveEncounters(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsInSplitscreen (Underlying native function: IsInSplitscreen 0x8d91cf4)
	bool IsInSplitscreen(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsInRespawnCountdown (Underlying native function: IsInRespawnCountdown 0x8d91cd0)
	bool IsInRespawnCountdown(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsInBuildMode (Underlying native function: IsInBuildMode 0x8d91cac)
	bool IsInBuildMode(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsInAircraft (Underlying native function: IsInAircraft 0x8d91c84)
	bool IsInAircraft(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsHiddenControllerOnly (Underlying native function: IsHiddenControllerOnly 0x8d91be8)
	bool IsHiddenControllerOnly(class AActor*& TargetActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsFullscreenMapVisible (Underlying native function: IsFullscreenMapVisible 0x8d91bc0)
	bool IsFullscreenMapVisible(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsClientTimingOut (Underlying native function: IsClientTimingOut 0x8d91ba8)
	bool IsClientTimingOut(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsClientBot (Underlying native function: IsClientBot 0x8d91b88)
	bool IsClientBot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsBuildToolOverridden (Underlying native function: IsBuildToolOverridden 0x8d91b70)
	bool IsBuildToolOverridden(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.IsAutoChangeMaterialOn (Underlying native function: IsAutoChangeMaterialOn 0x8d91b4c)
	bool IsAutoChangeMaterialOn(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.IsAnyPlayerOwnerOfCurrentExperience (Underlying native function: IsAnyPlayerOwnerOfCurrentExperience 0x8d91acc)
	static bool IsAnyPlayerOwnerOfCurrentExperience(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.IsActionInputIgnored (Underlying native function: IsActionInputIgnored 0x8d91ab0)
	bool IsActionInputIgnored(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.InitializeZeroingCameraRoll (Underlying native function: InitializeZeroingCameraRoll 0x8d91a9c)
	void InitializeZeroingCameraRoll(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.HideFullScreenMap (Underlying native function: HideFullScreenMap 0x8d91a80)
	void HideFullScreenMap(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.HasPermissionToEditWorld (Underlying native function: HasPermissionToEditWorld 0x8d91954)
	bool HasPermissionToEditWorld(class ABuildingActor*& Building, struct FVector& Location, struct FRotator& Rotation); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.HasLockOnTarget (Underlying native function: HasLockOnTarget 0x2486284)
	bool HasLockOnTarget(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.HandleWorldInventoryLocalUpdate (Underlying native function: HandleWorldInventoryLocalUpdate 0x8d9193c)
	void HandleWorldInventoryLocalUpdate(); // (Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.HandleWinnerAnnounced (Underlying native function: HandleWinnerAnnounced 0x8d91704)
	void HandleWinnerAnnounced(struct FString& WinnerPlayerName); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerController.HandleViewTargetInventoryLocalUpdate (Underlying native function: HandleViewTargetInventoryLocalUpdate 0x8d916f0)
	void HandleViewTargetInventoryLocalUpdate(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.HandleOutpostInventoryLocalUpdate (Underlying native function: HandleOutpostInventoryLocalUpdate 0x8d915f4)
	void HandleOutpostInventoryLocalUpdate(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.HandleNonZeroRollSetOnCamera (Underlying native function: HandleNonZeroRollSetOnCamera 0x8d915e0)
	void HandleNonZeroRollSetOnCamera(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.HandleDifferentHeroLoadoutActivated (Underlying native function: HandleDifferentHeroLoadoutActivated 0x8d9155c)
	void HandleDifferentHeroLoadoutActivated(class UFortMcpProfileCampaign*& Profile); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.HandleBattleMapSpectatorEndPlay (Underlying native function: HandleBattleMapSpectatorEndPlay 0x8d91498)
	void HandleBattleMapSpectatorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerController.GivePlayerAmmo (Underlying native function: GivePlayerAmmo 0x7239740)
	void GivePlayerAmmo(int& AmmoCount); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.GetVoiceInputEffectChain (Underlying native function: GetVoiceInputEffectChain 0x8d91480)
	class USoundEffectSourcePresetChain* GetVoiceInputEffectChain(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetVoiceChatDistanceAttenuationSettings (Underlying native function: GetVoiceChatDistanceAttenuationSettings 0x8d9142c)
	struct FVoiceChatDistanceAttenuationSettings GetVoiceChatDistanceAttenuationSettings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetUseHoldToSwapPickupSetting (Underlying native function: GetUseHoldToSwapPickupSetting 0x8d91410)
	bool GetUseHoldToSwapPickupSetting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetTimeRemainingForRespawnBP (Underlying native function: GetTimeRemainingForRespawnBP 0x8d913e4)
	float GetTimeRemainingForRespawnBP(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetTeamPerkProgressiveActivationLevel (Underlying native function: GetTeamPerkProgressiveActivationLevel 0x8d913c0)
	int GetTeamPerkProgressiveActivationLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetTargetedBuilding (Underlying native function: GetTargetedBuilding 0x8d913a8)
	class ABuildingActor* GetTargetedBuilding(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetStatValue (Underlying native function: GetStatValue 0x8d912c4)
	int GetStatValue(struct FName& StatName, enum EStatRecordingPeriod& Period); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetRotatePawnToCamera (Underlying native function: GetRotatePawnToCamera 0x8d9129c)
	bool GetRotatePawnToCamera(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetRevertPlayerListenerChangeFlag (Underlying native function: GetRevertPlayerListenerChangeFlag 0x8d91284)
	bool GetRevertPlayerListenerChangeFlag(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetRegisteredPlayerInfo (Underlying native function: GetRegisteredPlayerInfo 0x8d9126c)
	class UFortRegisteredPlayerInfo* GetRegisteredPlayerInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetRandomDefaultAthenaCharacterDefinition (Underlying native function: GetRandomDefaultAthenaCharacterDefinition 0x8d91198)
	class UAthenaCharacterItemDefinition* GetRandomDefaultAthenaCharacterDefinition(class UFortMcpProfileAthena*& McpAthenaProfile); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.GetQuickEditComponent (Underlying native function: GetQuickEditComponent 0x2fc7560)
	class UFortControllerComponent_QuickEdit* GetQuickEditComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetQuestManager (Underlying native function: GetQuestManager 0x8d91104)
	class UFortQuestManager* GetQuestManager(enum ESubGame& SubGame); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetPlayerPawnOrVehicleDriver (Underlying native function: GetPlayerPawnOrVehicleDriver 0x8d910e0)
	class AFortPlayerPawn* GetPlayerPawnOrVehicleDriver(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetPlayerPawn (Underlying native function: GetPlayerPawn 0x8d910b8)
	class AFortPlayerPawn* GetPlayerPawn(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetNumQuickbarSlots (Underlying native function: GetNumQuickbarSlots 0x8d9102c)
	int GetNumQuickbarSlots(enum EFortQuickBars& QuickBarType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.GetMinigameManager (Underlying native function: GetMinigameManager 0x8d90f98)
	class UFortMinigameManager* GetMinigameManager(enum ESubGame& SubGame); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetMcpCampaignProfile (Underlying native function: GetMcpCampaignProfile 0x8d90f80)
	class UFortMcpProfileCampaign* GetMcpCampaignProfile(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetMarkerComponent (Underlying native function: GetMarkerComponent 0x2080fb4)
	class UAthenaMarkerComponent* GetMarkerComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetLockOnState (Underlying native function: GetLockOnState 0x2486284)
	enum ELockOnState GetLockOnState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetLocationUnderReticle (Underlying native function: GetLocationUnderReticle 0x8d90f58)
	struct FVector GetLocationUnderReticle(); // (Final | BlueprintCosmetic | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetLastEmotePlayed (Underlying native function: GetLastEmotePlayed 0x8d90f40)
	class UFortMontageItemDefinitionBase* GetLastEmotePlayed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetItemNumInStackByGuid (Underlying native function: GetItemNumInStackByGuid 0x8d90e7c)
	int GetItemNumInStackByGuid(struct FGuid& ItemGuid); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.GetItemInQuickbarSlot (Underlying native function: GetItemInQuickbarSlot 0x8d90db8)
	class UFortItem* GetItemInQuickbarSlot(enum EFortQuickBars& QuickBarType, int& SlotIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.GetItemDefinitionOwnershipState (Underlying native function: GetItemDefinitionOwnershipState 0x8d90ce0)
	bool GetItemDefinitionOwnershipState(class UFortItemDefinition*& ItemDefinition, bool& bIsOwned); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetGliderDisplayName (Underlying native function: GetGliderDisplayName 0x8d90c64)
	struct FText GetGliderDisplayName(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetGameAccountId (Underlying native function: GetGameAccountId 0x8d90c0c)
	struct FUniqueNetIdRepl GetGameAccountId(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetFPSForHUD (Underlying native function: GetFPSForHUD 0x8d90bc4)
	int GetFPSForHUD(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.GetForceAllowCameraMode (Underlying native function: GetForceAllowCameraMode 0x8d90bf4)
	bool GetForceAllowCameraMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetCurrentVolume (Underlying native function: GetCurrentVolume 0x83db358)
	class AFortVolume* GetCurrentVolume(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetCurrentlyBoundEntryFromActions (Underlying native function: GetCurrentlyBoundEntryFromActions 0x8d90b18)
	class UWidget* GetCurrentlyBoundEntryFromActions(struct TArray<struct FName>& InBoundActionsToCheck); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.GetContextTrackerComponent (Underlying native function: GetContextTrackerComponent 0x8d90acc)
	class UFortControllerComponent_InputContextTracker* GetContextTrackerComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetCollectionBookManager (Underlying native function: GetCollectionBookManager 0x8d90a70)
	class UFortCollectionBookManager* GetCollectionBookManager(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetBuildPreviewMarker (Underlying native function: GetBuildPreviewMarker 0x8d90a58)
	class ABuildingPlayerPrimitivePreview* GetBuildPreviewMarker(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetAtNameHomeBaseScreen (Underlying native function: GetAtNameHomeBaseScreen 0x8d90a40)
	bool GetAtNameHomeBaseScreen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.GetAircraftComponent (Underlying native function: GetAircraftComponent 0x8d90a1c)
	class UFortControllerComponent_Aircraft* GetAircraftComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetAIDirectorDataManager (Underlying native function: GetAIDirectorDataManager 0x8862004)
	class AFortAIDirectorDataManager* GetAIDirectorDataManager(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerController.GetActorUnderReticle (Underlying native function: GetActorUnderReticle 0x8d909f8)
	class AActor* GetActorUnderReticle(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetAccountLevel (Underlying native function: GetAccountLevel 0x8d909c0)
	int GetAccountLevel(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.GetAccountItem (Underlying native function: GetAccountItem 0x8d90840)
	class UFortAccountItem* GetAccountItem(struct FString& ID); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.ForwardActiveVariantChangeRequest (Underlying native function: ForwardActiveVariantChangeRequest 0x8d906cc)
	void ForwardActiveVariantChangeRequest(struct FName& ItemTemplateToChange, struct FGameplayTag& VariantChannelToChange, struct FGameplayTag& DesiredActiveVariant, class AFortPlayerPawn*& PreviewPawn); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.FortClientPlaySoundAtLocation (Underlying native function: FortClientPlaySoundAtLocation 0x8d90578)
	void FortClientPlaySoundAtLocation(class USoundBase*& sound, struct FVector& Location, float& VolumeMultiplier, float& PitchMultiplier); // (Net | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.FortClientPlaySound (Underlying native function: FortClientPlaySound 0x8d9047c)
	void FortClientPlaySound(class USoundBase*& sound, float& VolumeMultiplier, float& PitchMultiplier); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ForceCancelBuildingTool (Underlying native function: ForceCancelBuildingTool 0x8d90458)
	void ForceCancelBuildingTool(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.FixupInteractionWidgetsOnUnzoom (Underlying native function: FixupInteractionWidgetsOnUnzoom 0x8d90430)
	void FixupInteractionWidgetsOnUnzoom(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.FindItem (Underlying native function: FindItem 0x8d9030c)
	bool FindItem(class UFortItem*& Item, enum EFortQuickBars& OutQuickBar, int& OutSlot); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.ExecuteInventoryItemDefinition (Underlying native function: ExecuteInventoryItemDefinition 0x8d90170)
	void ExecuteInventoryItemDefinition(class UFortItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, float& Delay, bool& bForceExecute, bool& bActivateSlotAfterSettingFocused); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.Emote (Underlying native function: Emote 0x8d900e0)
	void Emote(struct FName& AssetName); // (Exec | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortPlayerController.DumpHomebaseRatingInfo (Underlying native function: DumpHomebaseRatingInfo 0x26daa0c)
	void DumpHomebaseRatingInfo(); // (Final | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortPlayerController.DropSpecificItem (Underlying native function: DropSpecificItem 0x70dc11c)
	void DropSpecificItem(class UFortItemDefinition*& DropItemDef, bool& bSpawnPickups); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.DropItemsByCreativeTags (Underlying native function: DropItemsByCreativeTags 0x8546cb4)
	void DropItemsByCreativeTags(struct TArray<struct FName>& DropCreativeTags, struct TArray<struct FName>& IgnoreCreativeTags); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.DropAllItems (Underlying native function: DropAllItems 0x8d8ffbc)
	void DropAllItems(class UFortItemDefinition*& IgnoreItemDef, class UFortItemDefinition*& AdditionalIgnoreItemDef, bool& bIgnoreBuildingMaterials, bool& bSpawnPickups); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.DisplayHUDElementVisibility (Underlying native function: DisplayHUDElementVisibility 0x8d8ffa8)
	void DisplayHUDElementVisibility(); // (Final | Exec | Native | Public | Const)

	// Function /Script/FortniteGame.FortPlayerController.DeployDefender (Underlying native function: DeployDefender 0x8d8fc94)
	void DeployDefender(class ABuildingTrapDefender*& DefenderTrap, class UFortDefenderItem*& DefenderItem, struct FName& DefenderSquadId, class UFortItem*& WeaponItem, int& AmmoQuantity); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.DBNOTryStartCarry (Underlying native function: DBNOTryStartCarry 0x8d8fc70)
	bool DBNOTryStartCarry(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.DBNOCarryThrow (Underlying native function: DBNOCarryThrow 0x8d8fc5c)
	void DBNOCarryThrow(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.DBNOCarryHoist (Underlying native function: DBNOCarryHoist 0x8d8fc48)
	void DBNOCarryHoist(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.DBNOCarryDrop (Underlying native function: DBNOCarryDrop 0x8d8fc34)
	void DBNOCarryDrop(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.CountInventoryOverflowFromAddingItem (Underlying native function: CountInventoryOverflowFromAddingItem 0x8d8facc)
	int CountInventoryOverflowFromAddingItem(struct FFortItemEntry& ItemDescription, bool& bIsClassItem, bool& bFromPickup); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.ClientUpdateServerOnPlayerChangedBuildMode (Underlying native function: ClientUpdateServerOnPlayerChangedBuildMode 0x862bf00)
	void ClientUpdateServerOnPlayerChangedBuildMode(); // (Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ClientUpdateRichPresence (Underlying native function: ClientUpdateRichPresence 0x8d8fa04)
	void ClientUpdateRichPresence(enum ERichPresenceStateChange& RichPresenceChange, bool& bImportant); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientUpdatePlayerList (Underlying native function: ClientUpdatePlayerList 0x1c65b98)
	void ClientUpdatePlayerList(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientTriggerUIFeedbackEvent (Underlying native function: ClientTriggerUIFeedbackEvent 0x8d8f980)
	void ClientTriggerUIFeedbackEvent(struct FName& EventName); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientSwapQuickBarFocus (Underlying native function: ClientSwapQuickBarFocus 0x8d8f884)
	void ClientSwapQuickBarFocus(enum EFortQuickBars& InQuickBar, int& SlotOverride, bool& bForceExecution); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ClientStopUIFeedbackEvent (Underlying native function: ClientStopUIFeedbackEvent 0x8d8f800)
	void ClientStopUIFeedbackEvent(struct FName& EventName); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientStopAutoRun (Underlying native function: ClientStopAutoRun 0x8d8f7e8)
	void ClientStopAutoRun(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientSpawnWeakSpotOnBuildingActor (Underlying native function: ClientSpawnWeakSpotOnBuildingActor 0x8d8f730)
	void ClientSpawnWeakSpotOnBuildingActor(struct FBuildingWeakSpotData& ReplicatedWeakSpotData); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientSideEditPredictionTimedOut (Underlying native function: ClientSideEditPredictionTimedOut 0x8d8f71c)
	void ClientSideEditPredictionTimedOut(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.ClientSetSpectatorCamera (Underlying native function: ClientSetSpectatorCamera 0x8d8f62c)
	void ClientSetSpectatorCamera(struct FVector& CameraLocation, struct FRotator& CameraRotation); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientSetInviteFlags (Underlying native function: ClientSetInviteFlags 0x8d8f5a4)
	void ClientSetInviteFlags(struct FJoinabilitySettings& Settings); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientSetActionMappingEnabled (Underlying native function: ClientSetActionMappingEnabled 0x8d8f4dc)
	void ClientSetActionMappingEnabled(struct FName& ActionName, bool& bEnabled); // (Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ClientSendMessage (Underlying native function: ClientSendMessage 0x8d8f3e4)
	void ClientSendMessage(struct FText& message, class USoundBase*& StartSound); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientSendConfirmationMessage (Underlying native function: ClientSendConfirmationMessage 0x8d8f2ec)
	void ClientSendConfirmationMessage(struct FText& ConfirmationMessage, bool& bClientQuitAfterMessage); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientRetryLocalPlaceBuildableClass (Underlying native function: ClientRetryLocalPlaceBuildableClass 0x8d219a0)
	void ClientRetryLocalPlaceBuildableClass(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientRequestReadyCheck (Underlying native function: ClientRequestReadyCheck 0x8d8f1b4)
	void ClientRequestReadyCheck(struct FText& QueryText, struct FText& YesText, struct FText& NoText); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientReportGotResourceFromVehicle (Underlying native function: ClientReportGotResourceFromVehicle 0x8d8f0ec)
	void ClientReportGotResourceFromVehicle(class AActor*& Vehicle, int& ResourceCount); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientReportDamagedResourceBuilding (Underlying native function: ClientReportDamagedResourceBuilding 0x8d8ef64)
	void ClientReportDamagedResourceBuilding(class ABuildingSMActor*& BuildingSMActor, struct TEnumAsByte<EFortResourceType>& PotentialResourceType, int& PotentialResourceCount, bool& bDestroyed, bool& bJustHitWeakspot); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientRegisterWithParty (Underlying native function: ClientRegisterWithParty 0x2a888a8)
	void ClientRegisterWithParty(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientRefreshPlayerList (Underlying native function: ClientRefreshPlayerList 0x862f070)
	void ClientRefreshPlayerList(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientReceivePresetTeamChat (Underlying native function: ClientReceivePresetTeamChat 0x8d8ecc4)
	void ClientReceivePresetTeamChat(struct FText& ChatText, struct FUniqueNetIdRepl& SenderID); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientReceivedAttributeSources (Underlying native function: ClientReceivedAttributeSources 0x8d8ede8)
	void ClientReceivedAttributeSources(struct FGameplayAttribute& Attribute, class UFortAbilitySystemComponent*& AbilitySystemComponent, struct TArray<struct FAttributeModifierInfo>& Sources); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientReadyCheckComplete (Underlying native function: ClientReadyCheckComplete 0x8d22fe0)
	void ClientReadyCheckComplete(bool& bPassed); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientPrecacheMediaSource (Underlying native function: ClientPrecacheMediaSource 0x8d8ebfc)
	void ClientPrecacheMediaSource(class UMediaPlayer*& InMediaPlayer, class UMediaSource*& InMediaSource); // (Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ClientPingMinimap (Underlying native function: ClientPingMinimap 0x8d8eb14)
	void ClientPingMinimap(struct FVector& WorldLocation, struct FLinearColor& PingColor); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientOpenChoiceUI (Underlying native function: ClientOpenChoiceUI 0x8d8ea68)
	void ClientOpenChoiceUI(struct FChoiceData& ChoiceItems); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientOnGenericPlayerInitialization (Underlying native function: ClientOnGenericPlayerInitialization 0x8d8ea50)
	void ClientOnGenericPlayerInitialization(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientLogDebugString (Underlying native function: ClientLogDebugString 0x8d8e8f8)
	void ClientLogDebugString(struct FString& Msg); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientJoinConsoleSession (Underlying native function: ClientJoinConsoleSession 0x8d8e77c)
	void ClientJoinConsoleSession(struct FString& ConsoleSession); // (Net | NetReliable | Native | Event | Public | NetClient | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.ClientHandleHitNotifyAudio (Underlying native function: ClientHandleHitNotifyAudio 0x8d8e570)
	void ClientHandleHitNotifyAudio(struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AFortPawn*& PawnInstigator, class AActor*& DamageCauser, class AActor*& DamagedActor); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientGivePlayerLocalAccountItem (Underlying native function: ClientGivePlayerLocalAccountItem 0x8d8e4a8)
	void ClientGivePlayerLocalAccountItem(class UFortAccountItemDefinition*& ItemDefinition, int& Count); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientForceWorldInventoryUpdate (Underlying native function: ClientForceWorldInventoryUpdate 0x8d8e490)
	void ClientForceWorldInventoryUpdate(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientForceUpdateQuickbar (Underlying native function: ClientForceUpdateQuickbar 0x8d8e40c)
	void ClientForceUpdateQuickbar(enum EFortQuickBars& QuickbarToRefresh); // (Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.ClientForceProfileQuery (Underlying native function: ClientForceProfileQuery 0x8d8e3f4)
	void ClientForceProfileQuery(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientForceCancelBuildingTool (Underlying native function: ClientForceCancelBuildingTool 0x8d8e3dc)
	void ClientForceCancelBuildingTool(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientFinishedInteractionInZone (Underlying native function: ClientFinishedInteractionInZone 0x860a58c)
	void ClientFinishedInteractionInZone(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientFailedToBeginEditingBuildingActor (Underlying native function: ClientFailedToBeginEditingBuildingActor 0x8d8e358)
	void ClientFailedToBeginEditingBuildingActor(class ABuildingSMActor*& BuildingActorToStopEditing); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientExecuteInventoryItem (Underlying native function: ClientExecuteInventoryItem 0x8d8e200)
	void ClientExecuteInventoryItem(struct FGuid& ItemGuid, float& Delay, bool& bForceExecute, bool& bActivateSlotAfterSettingFocused); // (Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientEquipItem (Underlying native function: ClientEquipItem 0x8d8e134)
	void ClientEquipItem(struct FGuid& ItemGuid, bool& bForceExecution); // (0x00000002 | Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientEndGameKick (Underlying native function: ClientEndGameKick 0x8d8e11c)
	void ClientEndGameKick(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientDeveloper_GetConsoleVariable (Underlying native function: ClientDeveloper_GetConsoleVariable 0x8d8deac)
	void ClientDeveloperGetConsoleVariable(struct FString& ConsoleVariable, struct FString& Value); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientCreateOrJoinChatRoom (Underlying native function: ClientCreateOrJoinChatRoom 0x8d8dd54)
	void ClientCreateOrJoinChatRoom(struct FString& ChatRoomId); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientConfirmTargetData (Underlying native function: ClientConfirmTargetData 0x8d8dc2c)
	void ClientConfirmTargetData(uint16_t& UniqueId, bool& bSuccess, struct TArray<unsigned char>& HitReplaces); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientCancelCrafting (Underlying native function: ClientCancelCrafting 0x8d8dc14)
	void ClientCancelCrafting(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientBotSetModuleToUse (Underlying native function: ClientBotSetModuleToUse 0x8d8d970)
	void ClientBotSetModuleToUse(struct FString& PilotCategory, struct FString& NewModule, bool& bResetNow); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientBotEnqueueCommand (Underlying native function: ClientBotEnqueueCommand 0x8d8d818)
	void ClientBotEnqueueCommand(struct FString& CommandToEnqueue); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientAddScoreNumber (Underlying native function: ClientAddScoreNumber 0x8d8d6d8)
	void ClientAddScoreNumber(int& Score, enum EStatCategory& ScoreCategory, struct FVector_NetQuantize& ScoreLocation, bool& bDisplayScoreOnPlayer); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientAddDamageNumber (Underlying native function: ClientAddDamageNumber 0x8d8d400)
	void ClientAddDamageNumber(float& Damage, class AActor*& DamagedActor, class APawn*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTagContainer& DamageTags, bool& bIsCriticalDamage, struct FVector& OverridePosition, struct FVector& HitNormal); // (Net | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerController.ClientActivateSlot (Underlying native function: ClientActivateSlot 0x8d8d278)
	void ClientActivateSlot(enum EFortQuickBars& InQuickBar, int& Slot, float& ActivateDelay, bool& bUpdatePreviousFocusedSlot, bool& bForceExecution); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetClient | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.CheckPossessionOfAmountOfItems (Underlying native function: CheckPossessionOfAmountOfItems 0x8d8d158)
	bool CheckPossessionOfAmountOfItems(enum EFortItemType& Type, int& AmountToCheck); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.CheatAll (Underlying native function: CheatAll 0x8d8cbfc)
	void CheatAll(struct FString& Msg); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.Cheat_StopObjectiveServer (Underlying native function: Cheat_StopObjectiveServer 0x8d8d06c)
	void CheatStopObjectiveServer(class AFortObjectiveBase*& Objective, enum EFortObjectiveStatus& Status); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.Cheat_ForcePlayEmoteItem (Underlying native function: Cheat_ForcePlayEmoteItem 0x8d8cfcc)
	void CheatForcePlayEmoteItem(class UFortMontageItemDefinitionBase*& EmoteAsset); // (Net | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.Cheat_ForceCosmeticVariantChannels (Underlying native function: Cheat_ForceCosmeticVariantChannels 0x8d8cf18)
	void CheatForceCosmeticVariantChannels(struct TArray<struct FMcpVariantChannelInfo>& CosmeticVariantChannels); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.Cheat_ForceAthenaCosmeticItemInSlot (Underlying native function: Cheat_ForceAthenaCosmeticItemInSlot 0x8d8cdf4)
	void CheatForceAthenaCosmeticItemInSlot(class UAthenaCosmeticItemDefinition*& CosmeticItem, enum EAthenaCustomizationCategory& Slot, int& Index); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.Cheat_ClearForcedCosmeticVariantChannels (Underlying native function: Cheat_ClearForcedCosmeticVariantChannels 0x8d8cda8)
	void CheatClearForcedCosmeticVariantChannels(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.Cheat_ClearForcedCosmeticItems (Underlying native function: Cheat_ClearForcedCosmeticItems 0x8d8cd5c)
	void CheatClearForcedCosmeticItems(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerController.Cheat (Underlying native function: Cheat 0x8d8caa8)
	void Cheat(struct FString& Msg); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerController.ChangeActiveVariantForCosmeticItem (Underlying native function: ChangeActiveVariantForCosmeticItem 0x8d8c968)
	void ChangeActiveVariantForCosmeticItem(struct FName& ItemTemplateToChange, struct FGameplayTag& VariantChannelToChange, struct FGameplayTag& DesiredActiveVariant, class AFortPlayerPawn*& PreviewPawn); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.CanPerformNativeAction (Underlying native function: CanPerformNativeAction 0x8d8c8a4)
	bool CanPerformNativeAction(struct FGameplayTag& ActionTag); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.CanEnableBattleMapSpectator (Underlying native function: CanEnableBattleMapSpectator 0x8d8c880)
	bool CanEnableBattleMapSpectator(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.CanAlterHostileWalls (Underlying native function: CanAlterHostileWalls 0x8d8c858)
	bool CanAlterHostileWalls(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.BroadcastOnPickupCreated (Underlying native function: BroadcastOnPickupCreated 0x8d8c7c4)
	void BroadcastOnPickupCreated(class AFortPickup*& PickUp); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.BP_GetInventoryItemWithGuid (Underlying native function: BP_GetInventoryItemWithGuid 0x8d8c720)
	class UFortItem* BPGetInventoryItemWithGuid(struct FGuid& ItemGuid); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.BP_FindItemInstancesFromDefinition (Underlying native function: BP_FindItemInstancesFromDefinition 0x8d8c5e8)
	void BPFindItemInstancesFromDefinition(class UFortItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, struct TArray<class UFortItem*>& ItemArray); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.BP_FindExistingItemForDefinition (Underlying native function: BP_FindExistingItemForDefinition 0x8d8c4bc)
	class UFortItem* BPFindExistingItemForDefinition(class UFortItemDefinition*& ItemDefinition, struct FGuid& ItemVariantGuid, bool& bInStorageVault); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.AreHUDElementsVisible (Underlying native function: AreHUDElementsVisible 0x8d8c3f4)
	bool AreHUDElementsVisible(struct FGameplayTagContainer& HUDElementTags); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerController.AreActionsBoundToSameKey (Underlying native function: AreActionsBoundToSameKey 0x8d8c2fc)
	bool AreActionsBoundToSameKey(struct FName& FirstActionName, struct FName& SecondActionName, struct TEnumAsByte<EInputEvent>& InputEvent); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.AlternateInteractCarryHoldStopped (Underlying native function: AlternateInteractCarryHoldStopped 0x8d8c238)
	void AlternateInteractCarryHoldStopped(struct FName& InputActionName, bool& bCompletedSuccessfully); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerController.AddItemToQuickBars (Underlying native function: AddItemToQuickBars 0x8d8c0c0)
	void AddItemToQuickBars(class UFortItemDefinition*& ItemDefinition, enum EFortQuickBars& QuickBarType, int& SlotIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.AddInventoryItemWithAnimation (Underlying native function: AddInventoryItemWithAnimation 0x8d8bf7c)
	void AddInventoryItemWithAnimation(struct FFortItemEntry& ItemDescription, struct FVector& OverrideSpawnLocation); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.AddInventoryItemWithAlterationBasedOnLootLevel (Underlying native function: AddInventoryItemWithAlterationBasedOnLootLevel 0x8d8bea0)
	void AddInventoryItemWithAlterationBasedOnLootLevel(struct FFortItemEntry& ItemDescription); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerController.AddDamageNumber (Underlying native function: AddDamageNumber 0x8d8bb88)
	void AddDamageNumber(float& Damage, class AActor*& DamagedActor, class APawn*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayTagContainer& DamageTags, bool& bIsCriticalDamage, struct FVector& OverridePosition, struct FVector& HitNormal); // (BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

