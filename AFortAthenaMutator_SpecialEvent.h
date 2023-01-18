// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
// Size: 0x768
class AFortAthenaMutator_SpecialEvent : public AFortAthenaMutator
{
	struct FMulticastInlineDelegate TeleportAllPlayersFinished; // 0x330 (0x10)
	struct FMulticastInlineDelegate OnPawnLoaded; // 0x340 (0x10)
	struct FMulticastInlineDelegate OnInitController; // 0x350 (0x10)
	struct FMulticastInlineDelegate OnResumeGame; // 0x360 (0x10)
	struct FMulticastInlineDelegate OnSpecialClientEvent; // 0x370 (0x10)
	struct FMulticastInlineDelegate OnHandleLogout; // 0x380 (0x10)
	struct FMulticastInlineDelegate OnClientInitialLoadingFinished; // 0x390 (0x10)
	unsigned char unreflected_3a0[0x68]; // 0x3a0 (0x68) 
	bool bPlayersAreInvincible; // 0x408 (0x1)
	unsigned char unreflected_409[0x27]; // 0x409 (0x27) 
	int MinimumScoreBumpForAutomadeGoal; // 0x430 (0x4)
	unsigned char unreflected_434[0x4]; // 0x434 (0x4) 
	struct TArray<float> ScoreBrackets; // 0x438 (0x10)
	bool bEnforceInfiniteSafeZonePhase; // 0x448 (0x1)
	unsigned char unreflected_449[0x3]; // 0x449 (0x3) 
	struct FName WarmupIslandPlayerStartTag; // 0x44c (0x4)
	bool bAllowInventoryOpen; // 0x450 (0x1)
	unsigned char unreflected_451[0x7]; // 0x451 (0x7) 
	struct FScalableFloat bAllowFullScreenMap; // 0x458 (0x28)
	bool bShouldClearFrontEndMapMarkers; // 0x480 (0x1)
	bool bBlockTeamIndicators; // 0x481 (0x1)
	unsigned char unreflected_482[0x2]; // 0x482 (0x2) 
	int ForceDisplaySquadInfoDuringGamePhases; // 0x484 (0x4)
	bool bAllowSquadListLocalPlayerInSplitscreen; // 0x488 (0x1)
	unsigned char unreflected_489[0x7]; // 0x489 (0x7) 
	struct FGameplayTagContainer UIToHideDuringSpecialEvent; // 0x490 (0x20)
	struct FGameplayTagContainer UIToHideWhenInInfiniteWarmup; // 0x4b0 (0x20)
	struct FGameplayTagContainer ClientEventsThatUnhideHiddenWhileLoadingHUDElements; // 0x4d0 (0x20)
	bool bForceGarbageCollectionAfterUnloadOnServer; // 0x4f0 (0x1)
	bool bForceGarbageCollectionAfterUnloadOnClient; // 0x4f1 (0x1)
	bool bFullPurgeGC; // 0x4f2 (0x1)
	unsigned char unreflected_4f3[0x5]; // 0x4f3 (0x5) 
	class AFortAthenaAircraft* EventAircraft; // 0x4f8 (0x8)
	struct FAircraftFlightInfo EventAircraftInfo; // 0x500 (0x48)
	class UClass* EventAircraftClass; // 0x548 (0x8)
	class ASpecialEventScript* ScriptActor; // 0x550 (0x8)
	bool bDisableHUD; // 0x558 (0x1)
	unsigned char GameResumed; // 0x559 (0x1)
	unsigned char unreflected_55a[0x6]; // 0x55a (0x6) 
	struct FVector AdditionalViewpoint; // 0x560 (0x18)
	bool bParachutesDisabled; // 0x578 (0x1)
	unsigned char unreflected_579[0x7]; // 0x579 (0x7) 
	struct FString LastCSVEventName; // 0x580 (0x10)
	bool bCanStreamBuildingFoundationsIn; // 0x590 (0x1)
	unsigned char unreflected_591[0x3]; // 0x591 (0x3) 
	int AllPlayerTeleportedCount; // 0x594 (0x4)
	struct FFortDelayRTMMData DelayPlayersFromReturningToLobbyData; // 0x598 (0x10)
	struct FName NamedWeightForContainerLootRoll; // 0x5a8 (0x4)
	float WeightForContainerLootRoll; // 0x5ac (0x4)
	unsigned char unreflected_5b0[0x30]; // 0x5b0 (0x30) 
	struct TArray<struct FFortSpecialEventEmoteData> SpecialEventEmoteData; // 0x5e0 (0x10)
	struct FGameplayTagContainer BlockedNativeActions; // 0x5f0 (0x20)
	enum EFortItemType DesiredQuickbarItemTypeAfterRemove; // 0x610 (0x1)
	unsigned char unreflected_611[0x7]; // 0x611 (0x7) 
	class UInputComponent* SpecialEventsInputComponent; // 0x618 (0x8)
	bool bLockingOnFocalPoint; // 0x620 (0x1)
	unsigned char unreflected_621[0x7]; // 0x621 (0x7) 
	struct TArray<struct FFortSpecialEventOverrideParts> SpecialEventOverrideParts; // 0x628 (0x10)
	struct FFortSpecialEventGEData GameplayEffectToApplyOnSwapToDefault; // 0x638 (0x10)
	struct TMap<struct FUniqueNetIdRepl, int> OverridePartsArrayIndexMap; // 0x648 (0x50)
	struct TArray<struct FFortSpecialEventGEData> GameplayEffectsToApplyOnLogin; // 0x698 (0x10)
	struct TArray<struct FSpecialEventMapData> TerrainMapsToUnload; // 0x6a8 (0x10)
	unsigned char unreflected_6b8[0x10]; // 0x6b8 (0x10) 
	struct TArray<class AFortPlayerControllerAthena*> UnhandledPlayerControllers; // 0x6c8 (0x10)
	struct TArray<struct FName> HLODActorsToHideNames; // 0x6d8 (0x10)
	bool bForceAllowCloth; // 0x6e8 (0x1)
	unsigned char unreflected_6e9[0x1]; // 0x6e9 (0x1) 
	bool bManageBackfill; // 0x6ea (0x1)
	unsigned char unreflected_6eb[0x1]; // 0x6eb (0x1) 
	int PlayerCountToTriggerBackfill; // 0x6ec (0x4)
	bool bWaitForPlayerCountToTriggerBackfill; // 0x6f0 (0x1)
	unsigned char unreflected_6f1[0x3]; // 0x6f1 (0x3) 
	float UpdateBackfillStatusTime; // 0x6f4 (0x4)
	unsigned char unreflected_6f8[0x10]; // 0x6f8 (0x10) 
	bool bServerHasBackfillActive; // 0x708 (0x1)
	bool bCanToggleCursorModeInStasis; // 0x709 (0x1)
	unsigned char unreflected_70a[0x6]; // 0x70a (0x6) 
	struct FScalableFloat MannequinRecentlyRenderedCheckToleranceValue; // 0x710 (0x28)
	struct TArray<class ASpecialEventPlayerMannequin*> SpecialEventMannequins; // 0x738 (0x10)
	struct TArray<class UClass*> ActorSpawnDelegateClasses; // 0x748 (0x10)
	unsigned char padding_758[0x10]; // 0x758 (0x10)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.WarmUpIslandUpdated (Underlying native function: WarmUpIslandUpdated 0x76c8b98)
	void WarmUpIslandUpdated(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UpdateBackfillStatus (Underlying native function: UpdateBackfillStatus 0x26daa0c)
	void UpdateBackfillStatus(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UnloadTerrainMaps (Underlying native function: UnloadTerrainMaps 0x76c88ec)
	void UnloadTerrainMaps(struct FGameplayTag& MapTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleHUDs (Underlying native function: ToggleHUDs 0x76c87a8)
	void ToggleHUDs(bool& bHide); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableWeapons (Underlying native function: ToggleDisableWeapons 0x76c86c4)
	void ToggleDisableWeapons(bool& bDisableWeapons); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableParachutes (Underlying native function: ToggleDisableParachutes 0x76c8644)
	void ToggleDisableParachutes(bool& bDisable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleAllPlayersInvincibility (Underlying native function: ToggleAllPlayersInvincibility 0x76c85c4)
	void ToggleAllPlayersInvincibility(bool& bInvincible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.TeleportAllPlayers (Underlying native function: TeleportAllPlayers 0x76c8438)
	void TeleportAllPlayers(struct FGameplayTagContainer& EventTags, int& TeleportsPerFrame, int& SafeZoneIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SwapBodyParts (Underlying native function: SwapBodyParts 0x76c80d0)
	void SwapBodyParts(int& ArrayIndex, class AFortPlayerController*& FortPC); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.StartSafeZoneOverrideForEvent (Underlying native function: StartSafeZoneOverrideForEvent 0x76c7fcc)
	void StartSafeZoneOverrideForEvent(int& SafeZoneIndexForEvent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ShrinkSafeZone (Underlying native function: ShrinkSafeZone 0x76c7c30)
	void ShrinkSafeZone(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetWeightForContainerLootRoll (Underlying native function: SetWeightForContainerLootRoll 0x76c7ab0)
	void SetWeightForContainerLootRoll(float& Weight); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetReturnToMainMenuDelay (Underlying native function: SetReturnToMainMenuDelay 0x76c77a0)
	void SetReturnToMainMenuDelay(float& MinDelayReturnToMainMenu, float& MaxDelayReturnToMainMenu); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetNamedWeightForContainerLootRoll (Underlying native function: SetNamedWeightForContainerLootRoll 0x76c75a4)
	void SetNamedWeightForContainerLootRoll(struct FName& WeightName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetMatchTime (Underlying native function: SetMatchTime 0x76c74dc)
	void SetMatchTime(int& NewMatchTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetLockingOnFocalPoint (Underlying native function: SetLockingOnFocalPoint 0x76c7418)
	void SetLockingOnFocalPoint(bool& bInLockingOnFocalPoint); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetIsSimulatingDamage (Underlying native function: SetIsSimulatingDamage 0x76c7238)
	void SetIsSimulatingDamage(bool& bIsSimulating); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetDestroyVehiclesInStorm (Underlying native function: SetDestroyVehiclesInStorm 0x76c70a0)
	void SetDestroyVehiclesInStorm(bool& bDestroyVehiclesInStorm); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetCanStreamBuildingFoundationsIn (Underlying native function: SetCanStreamBuildingFoundationsIn 0x76c6df8)
	void SetCanStreamBuildingFoundationsIn(bool& bEnable); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetAdditionalViewpoint (Underlying native function: SetAdditionalViewpoint 0x76c68f8)
	void SetAdditionalViewpoint(struct FVector& WorldLocation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SendToNightNight (Underlying native function: SendToNightNight 0x26daa0c)
	void SendToNightNight(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResumeWinCondition (Underlying native function: ResumeWinCondition 0x76c6658)
	void ResumeWinCondition(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinConditionProgressToZero (Underlying native function: ResetWinConditionProgressToZero 0x76c6644)
	void ResetWinConditionProgressToZero(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinCondition (Underlying native function: ResetWinCondition 0x76c65dc)
	void ResetWinCondition(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSpecialEventAircraft (Underlying native function: ResetSpecialEventAircraft 0x76c65a0)
	void ResetSpecialEventAircraft(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSafeZoneOverrideAfterEvent (Underlying native function: ResetSafeZoneOverrideAfterEvent 0x76c64a8)
	void ResetSafeZoneOverrideAfterEvent(int& MinResetSafeZoneIndex, float& MinDelayReturnToMainMenu, float& MaxDelayReturnToMainMenu); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetMatchTimeToPrevious (Underlying native function: ResetMatchTimeToPrevious 0x76c6454)
	void ResetMatchTimeToPrevious(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.RemoveFromBlockedNativeActions (Underlying native function: RemoveFromBlockedNativeActions 0x76c607c)
	void RemoveFromBlockedNativeActions(struct FGameplayTagContainer& Actions); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PushSpecialEventEmoteInputComponent (Underlying native function: PushSpecialEventEmoteInputComponent 0x76c642c)
	void PushSpecialEventEmoteInputComponent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PopSpecialEventEmoteInputComponent (Underlying native function: PopSpecialEventEmoteInputComponent 0x76c6304)
	void PopSpecialEventEmoteInputComponent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PlacePlayersInAircraft (Underlying native function: PlacePlayersInAircraft 0x76c6114)
	void PlacePlayersInAircraft(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseWinCondition (Underlying native function: PauseWinCondition 0x76c5fa4)
	void PauseWinCondition(bool& bLockScores); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseSupplyDrops (Underlying native function: PauseSupplyDrops 0x76c5ed0)
	void PauseSupplyDrops(bool& bPause); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormProgression (Underlying native function: PauseStormProgression 0x76c5e50)
	void PauseStormProgression(bool& bPause); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormDamage (Underlying native function: PauseStormDamage 0x76c5d74)
	void PauseStormDamage(bool& bPause); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnWarmUpTeleportComplete (Underlying native function: OnWarmUpTeleportComplete 0x76c5b40)
	void OnWarmUpTeleportComplete(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_TerrainMapsToUnload (Underlying native function: OnRep_TerrainMapsToUnload 0x76c58f0)
	void OnRepTerrainMapsToUnload(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_LastCSVEventName (Underlying native function: OnRep_LastCSVEventName 0x76c5694)
	void OnRepLastCSVEventName(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_GameResumed (Underlying native function: OnRep_GameResumed 0x76c5678)
	void OnRepGameResumed(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_DelayPlayersFromReturningToLobbyData (Underlying native function: OnRep_DelayPlayersFromReturningToLobbyData 0x76c5664)
	void OnRepDelayPlayersFromReturningToLobbyData(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bPlayersAreInvincible (Underlying native function: OnRep_bPlayersAreInvincible 0x76c59e8)
	void OnRepbPlayersAreInvincible(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bLockingOnFocalPoint (Underlying native function: OnRep_bLockingOnFocalPoint 0x76c59d4)
	void OnRepbLockingOnFocalPoint(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bDisableHUD (Underlying native function: OnRep_bDisableHUD 0x76c5980)
	void OnRepbDisableHUD(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bCanStreamBuildingFoundationsIn (Underlying native function: OnRep_bCanStreamBuildingFoundationsIn 0x76c596c)
	void OnRepbCanStreamBuildingFoundationsIn(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AllPlayerTeleportedCount (Underlying native function: OnRep_AllPlayerTeleportedCount 0x76c5490)
	void OnRepAllPlayerTeleportedCount(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_Aircraft (Underlying native function: OnRep_Aircraft 0x76c5448)
	void OnRepAircraft(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AdditionalViewpoint (Underlying native function: OnRep_AdditionalViewpoint 0x76c5434)
	void OnRepAdditionalViewpoint(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGameViewportActivationChanged (Underlying native function: OnGameViewportActivationChanged 0x76c4310)
	void OnGameViewportActivationChanged(bool& bHasFocus); // (Final | Native | Public)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0x76c4230)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x76c41ac)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftFlightEnded (Underlying native function: OnAircraftFlightEnded 0x76c3f88)
	void OnAircraftFlightEnded(class AFortAthenaAircraft*& FortAthenaAircraft); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftExitedDropZone (Underlying native function: OnAircraftExitedDropZone 0x76c3f08)
	void OnAircraftExitedDropZone(class AFortAthenaAircraft*& FortAthenaAircraft); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftEnteredDropZone (Underlying native function: OnAircraftEnteredDropZone 0x76c3e88)
	void OnAircraftEnteredDropZone(class AFortAthenaAircraft*& FortAthenaAircraft); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorSpawned (Has no native function)
	void OnActorSpawned(class AActor*& Actor); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorPreSpawnInitialization (Has no native function)
	void OnActorPreSpawnInitialization(class AActor*& Actor); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NotifyClientsGameResumed (Underlying native function: NotifyClientsGameResumed 0x76c3da8)
	void NotifyClientsGameResumed(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NetMulticast_CheatClearSpecialEventGameUserSettings (Underlying native function: NetMulticast_CheatClearSpecialEventGameUserSettings 0x76c3d90)
	void NetMulticastCheatClearSpecialEventGameUserSettings(); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.JumpToSafeZonePhase (Underlying native function: JumpToSafeZonePhase 0x76c3aa0)
	void JumpToSafeZonePhase(struct FVector& PawnSpawnCenterLocation, float& PawnSpawnMinDistance, float& PawnSpawnMaxDistance); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.HandleSpecialEventMannequinDestroyed (Underlying native function: HandleSpecialEventMannequinDestroyed 0x76c3814)
	void HandleSpecialEventMannequinDestroyed(class AActor*& MannequinActor); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetScript (Underlying native function: GetScript 0x76c2d24)
	class ASpecialEventScript* GetScript(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetHasInfiniteSafeZonePhase (Underlying native function: GetHasInfiniteSafeZonePhase 0x76c2960)
	bool GetHasInfiniteSafeZonePhase(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ForceSafeZoneFinalLocation (Underlying native function: ForceSafeZoneFinalLocation 0x76c1d28)
	void ForceSafeZoneFinalLocation(struct FVector& NewFinalLocation, float& DefaultAircraftOffsetFromMidLine, float& MinDefaultMidlineAngle, float& MaxDefaultMidlineAngle); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.FlushUnhandledPlayerControllers (Underlying native function: FlushUnhandledPlayerControllers 0x76c1a58)
	void FlushUnhandledPlayerControllers(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.CloseParachutes (Underlying native function: CloseParachutes 0x76c0758)
	void CloseParachutes(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearBlockedNativeActions (Underlying native function: ClearBlockedNativeActions 0x26daa0c)
	void ClearBlockedNativeActions(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearAdditionalViewpoint (Underlying native function: ClearAdditionalViewpoint 0x76c06cc)
	void ClearAdditionalViewpoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ChangeWinCondition (Underlying native function: ChangeWinCondition 0x76c0648)
	void ChangeWinCondition(float& NewGoalScore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AutobalanceTargetScore (Underlying native function: AutobalanceTargetScore 0x76c0610)
	void AutobalanceTargetScore(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddToBlockedNativeActions (Underlying native function: AddToBlockedNativeActions 0x76c0020)
	void AddToBlockedNativeActions(struct FGameplayTagContainer& Actions, bool& bCancelAbilities); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddCSVEvent (Underlying native function: AddCSVEvent 0x76bf938)
	void AddCSVEvent(struct FString& CSVEventName, bool& bShouldRepToClient); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddClientCSVEvent (Underlying native function: AddClientCSVEvent 0x76bfb2c)
	void AddClientCSVEvent(struct FString& CSVEventName); // (Final | Native | Public | BlueprintCallable)
};

