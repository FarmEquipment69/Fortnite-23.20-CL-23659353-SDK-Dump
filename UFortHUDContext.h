// Class /Script/FortniteUI.FortHUDContext
// Size: 0x6f8
class UFortHUDContext : public UBlueprintContextBase
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FMulticastInlineDelegate OnCursorModeChanging; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnCursorModeChanged; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnRequestPromptDisplay; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnGameViewportActivationChanged; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnMgmtMenuTabChangeRequested; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnGetHUDElementWidgetsForTags; // 0x88 (0x10)
	struct FMulticastInlineDelegate OnIndicatorModeChanged; // 0x98 (0x10)
	struct FMulticastInlineDelegate OnContextualReticleChanged; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnVehicleFocused; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnPawnFocused; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnBuildingFocused; // 0xd8 (0x10)
	struct FMulticastInlineDelegate OnActorFocusedForCreative; // 0xe8 (0x10)
	struct FMulticastInlineDelegate OnFocusedBuildingStateChanged; // 0xf8 (0x10)
	struct FMulticastInlineDelegate OnFocusedBuildingHealthChanged; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnFocusedBuildingBigHealthChanged; // 0x118 (0x10)
	struct FMulticastInlineDelegate OnFocusedBuildingRepairCostChanged; // 0x128 (0x10)
	struct FMulticastInlineDelegate OnFocusedBuildingAttachedTrapDurabilityChanged; // 0x138 (0x10)
	struct FMulticastInlineDelegate OnFocusedBuildingAttachedTrapChanged; // 0x148 (0x10)
	struct FMulticastInlineDelegate OnFocusedBuildingDynamicDataReceived; // 0x158 (0x10)
	struct FMulticastInlineDelegate OnDamagedResourceBuilding; // 0x168 (0x10)
	struct FMulticastInlineDelegate OnDamagedResourceVehicle; // 0x178 (0x10)
	struct FMulticastInlineDelegate OnPlayerCanInteract; // 0x188 (0x10)
	struct FMulticastInlineDelegate OnInteractUpdated; // 0x198 (0x10)
	struct FMulticastInlineDelegate OnPlayerTargetingChanged; // 0x1a8 (0x10)
	struct FMulticastInlineDelegate OnScoreChanged; // 0x1b8 (0x10)
	struct FMulticastInlineDelegate OnScoreStatChanged; // 0x1c8 (0x10)
	struct FMulticastInlineDelegate OnZoneCompleted; // 0x1d8 (0x10)
	struct FMulticastInlineDelegate OnPawnSet; // 0x1e8 (0x10)
	struct FMulticastInlineDelegate OnDamageReceived; // 0x1f8 (0x10)
	struct FMulticastInlineDelegate OnUnableToPerformAction; // 0x208 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerMaxHealthChanged; // 0x218 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerHealthChanged; // 0x228 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerDied; // 0x238 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerSpawned; // 0x248 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerRevived; // 0x258 (0x10)
	struct FMulticastInlineDelegate OnHUDScaleChanged; // 0x268 (0x10)
	struct FMulticastInlineDelegate OnReticleSettingsChanged; // 0x278 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerKillsChanged; // 0x288 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerPlaceChanged; // 0x298 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerViewTargetChanged; // 0x2a8 (0x10)
	struct FMulticastInlineDelegate OnToggledBattleMapLive; // 0x2b8 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerMaxShieldChanged; // 0x2c8 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerShieldChanged; // 0x2d8 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerMaxStaminaChanged; // 0x2e8 (0x10)
	struct FMulticastInlineDelegate OnLocalPlayerStaminaChanged; // 0x2f8 (0x10)
	struct FMulticastInlineDelegate OnToggleScoreboard; // 0x308 (0x10)
	struct FMulticastInlineDelegate OnEndOfDayRecap; // 0x318 (0x10)
	struct FMulticastInlineDelegate OnWaveCombatStart; // 0x328 (0x10)
	struct FMulticastInlineDelegate OnWaveBasedModifiersApplied; // 0x338 (0x10)
	struct FMulticastInlineDelegate OnActiveGameplayModifiersChanged; // 0x348 (0x10)
	struct FMulticastInlineDelegate OnHordeTierInitialized; // 0x358 (0x10)
	struct FMulticastInlineDelegate OnHordeTierComplete; // 0x368 (0x10)
	struct FMulticastInlineDelegate OnHordeWaveComplete; // 0x378 (0x10)
	struct FMulticastInlineDelegate OnBuildingMaterialCycled; // 0x388 (0x10)
	struct FMulticastInlineDelegate OnHighlightsCountChanged; // 0x398 (0x10)
	struct FMulticastInlineDelegate OnHUDStateRefreshed; // 0x3a8 (0x10)
	struct FMulticastInlineDelegate OnShouldTriggerCooldownUpdate; // 0x3b8 (0x10)
	struct FMulticastInlineDelegate OnRequestSetInZoneTitleBarVisibility; // 0x3c8 (0x10)
	unsigned char unreflected_3d8[0x18]; // 0x3d8 (0x18) 
	struct FMulticastInlineDelegate OnUIGameplayCue; // 0x3f0 (0x10)
	struct FMulticastInlineDelegate OnWeaponEquippedDelegate; // 0x400 (0x10)
	struct FMulticastInlineDelegate OnWeaponUnEquippedDelegate; // 0x410 (0x10)
	struct FMulticastInlineDelegate OnWeaponHudKeyActionUpdated; // 0x420 (0x10)
	struct FMulticastInlineDelegate OnAbilityDecisionWindowStackUpdated; // 0x430 (0x10)
	struct FMulticastInlineDelegate OnWorldDaysElapsedChanged; // 0x440 (0x10)
	struct FMulticastInlineDelegate OnNumSurvivorsRescuedChanged; // 0x450 (0x10)
	struct FMulticastInlineDelegate OnEarnedBadgesChanged; // 0x460 (0x10)
	struct FMulticastInlineDelegate OnPotentialBadgesChanged; // 0x470 (0x10)
	struct FMulticastInlineDelegate OnMissionManagerCreated; // 0x480 (0x10)
	struct FMulticastInlineDelegate OnMissionsUpdated; // 0x490 (0x10)
	struct FMulticastInlineDelegate OnFocusedMissionChanged; // 0x4a0 (0x10)
	struct FMulticastInlineDelegate OnTheaterUniqueIDChanged; // 0x4b0 (0x10)
	struct FMulticastInlineDelegate OnZoneDifficultyInfoRowChanged; // 0x4c0 (0x10)
	struct FMulticastInlineDelegate OnDifficultyIncreaseRewardTierChanged; // 0x4d0 (0x10)
	struct FMulticastInlineDelegate OnDifficultyIncreaseRewardsChanged; // 0x4e0 (0x10)
	struct FMulticastInlineDelegate OnMissionGeneratorChanged; // 0x4f0 (0x10)
	struct FMulticastInlineDelegate OnMissionRewardsChanged; // 0x500 (0x10)
	struct FMulticastInlineDelegate OnPointOfInterestAdded; // 0x510 (0x10)
	struct FMulticastInlineDelegate OnPointOfInterestRemoved; // 0x520 (0x10)
	unsigned char unreflected_530[0x18]; // 0x530 (0x18) 
	struct FMulticastInlineDelegate OnHUDElementVisibilityChanged; // 0x548 (0x10)
	struct FMulticastInlineDelegate OnLocalChallengesVisibilityChanged; // 0x558 (0x10)
	unsigned char unreflected_568[0x10]; // 0x568 (0x10) 
	struct FMulticastInlineDelegate OnDebugHUDObjectiveHeightChangedDelegate; // 0x578 (0x10)
	struct FMulticastInlineDelegate OnBuildModeChanged; // 0x588 (0x10)
	struct FMulticastInlineDelegate OnPersonalVehicleModeChanged; // 0x598 (0x10)
	struct FMulticastInlineDelegate OnPlayerVehicleStateChanged; // 0x5a8 (0x10)
	unsigned char unreflected_5b8[0x18]; // 0x5b8 (0x18) 
	struct TArray<struct FString> HotfixElementsToHide; // 0x5d0 (0x10)
	bool bDebugHudObjectiveHeight; // 0x5e0 (0x1)
	bool bPendingAttachToHUD; // 0x5e1 (0x1)
	unsigned char unreflected_5e2[0x2]; // 0x5e2 (0x2) 
	struct TWeakObjectPtr<class AFortPlayerState> OwningPlayerState; // 0x5e4 (0x8)
	struct TWeakObjectPtr<class ABuildingActor> CurFocusedBuilding; // 0x5ec (0x8)
	struct TWeakObjectPtr<class ABuildingTrap> CurFocusedTrap; // 0x5f4 (0x8)
	unsigned char unreflected_5fc[0xc]; // 0x5fc (0xc) 
	struct TWeakObjectPtr<class ABuildingActor> BuildingFocusCandidates[0x3]; // 0x608 (0x8) (ARRAY) 
	struct TWeakObjectPtr<class AFortPlayerPawn> BoundPlayerPawn; // 0x620 (0x8)
	unsigned char unreflected_628[0xb4]; // 0x628 (0xb4) 
	struct TWeakObjectPtr<class AFortWeapon> CachedCurrentWeapon; // 0x6dc (0x8)
	struct TWeakObjectPtr<class AFortWeapon> CachedPreviousWeapon; // 0x6e4 (0x8)
	struct TWeakObjectPtr<class UFortTouchControlRegion> TouchControlRegion; // 0x6ec (0x8)
	unsigned char padding_6f4[0x4]; // 0x6f4 (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortHUDContext.UpdateTrapAttachedToBuilding (Underlying native function: UpdateTrapAttachedToBuilding 0xa6435ac)
	void UpdateTrapAttachedToBuilding(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.TriggerCooldownUpdate (Underlying native function: TriggerCooldownUpdate 0xa6431f0)
	void TriggerCooldownUpdate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.ToggleFullScreenMap (Underlying native function: ToggleFullScreenMap 0xa6431c4)
	void ToggleFullScreenMap(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortHUDContext.ShowAerialFeedback (Underlying native function: ShowAerialFeedback 0xa642b3c)
	void ShowAerialFeedback(struct FName& BoundActionName, struct FText& FeedbackText); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.ShouldOnlyShowNextPrevBuildingSlotKeybinds (Underlying native function: ShouldOnlyShowNextPrevBuildingSlotKeybinds 0xa642aac)
	bool ShouldOnlyShowNextPrevBuildingSlotKeybinds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.SetPreparingMgmtMenu (Underlying native function: SetPreparingMgmtMenu 0xa6428f4)
	void SetPreparingMgmtMenu(bool& bPreparing); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.SetIsLocalChallengesVisible (Underlying native function: SetIsLocalChallengesVisible 0xa642860)
	void SetIsLocalChallengesVisible(bool& bIsVisible); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.SetIndicatorsState (Underlying native function: SetIndicatorsState 0xa6427e0)
	void SetIndicatorsState(enum EFortIndicatorState& NewState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.SetIndicatorsAllowed (Underlying native function: SetIndicatorsAllowed 0xa642764)
	void SetIndicatorsAllowed(bool& bIndicatorsAllowed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.SetHUDElementVisibility (Underlying native function: SetHUDElementVisibility 0x256d990)
	void SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool& bHideElements, struct FName& ReasonName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.SetCursorModeLocked (Underlying native function: SetCursorModeLocked 0xa642558)
	void SetCursorModeLocked(bool& bLocked); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.SendFocusedBuildingDynamicData (Underlying native function: SendFocusedBuildingDynamicData 0xa6420d8)
	void SendFocusedBuildingDynamicData(class UFocusedBuildingDynamicData*& DynamicData); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteUI.FortHUDContext.RequestPromptDisplay (Underlying native function: RequestPromptDisplay 0xa64184c)
	void RequestPromptDisplay(struct FFortHUDTagPromptData& PromptData, struct FGameplayTag& tag); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.RequestMgmtMenuTab (Underlying native function: RequestMgmtMenuTab 0xa6417cc)
	void RequestMgmtMenuTab(struct FName& TabName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.RemovePointOfInterest (Underlying native function: RemovePointOfInterest 0xa64173c)
	void RemovePointOfInterest(class AActor*& PointOfInterest); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.PreviewItemPickUp (Underlying native function: PreviewItemPickUp 0xa641190)
	bool PreviewItemPickUp(class UFortItem*& InItem, enum EFortQuickBars& InQuickBarType, int& OutSlotIndex, struct TMap<int, int>& OutItemsToPush, struct TArray<int>& OutItemsToDrop); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.IsPreparingMgmtMenu (Underlying native function: IsPreparingMgmtMenu 0xa640b84)
	bool IsPreparingMgmtMenu(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.IsLocalChallengesVisible (Underlying native function: IsLocalChallengesVisible 0xa640b24)
	bool IsLocalChallengesVisible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.IsInEditMode (Underlying native function: IsInEditMode 0xa640a6c)
	bool IsInEditMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.IsInCursorMode (Underlying native function: IsInCursorMode 0x2bc67e4)
	bool IsInCursorMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.IsContextTutorialActive (Underlying native function: IsContextTutorialActive 0xa64090c)
	bool IsContextTutorialActive(struct FGameplayTag& TutorialType); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.HideAerialFeedback (Underlying native function: HideAerialFeedback 0xa640628)
	void HideAerialFeedback(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.HandleVehicleStateChanged (Underlying native function: HandleVehicleStateChanged 0xa6401e8)
	void HandleVehicleStateChanged(class AFortPlayerPawn*& PlayerPawn, class AActor*& NewVehicle, class AActor*& OldVehicle); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleUIGameplayCue (Underlying native function: HandleUIGameplayCue 0xa640038)
	void HandleUIGameplayCue(struct FName& CueName, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortHUDContext.HandleToggledBattleMapLive (Underlying native function: HandleToggledBattleMapLive 0xa63ffa8)
	void HandleToggledBattleMapLive(class ABattleMapPawnLive*& NewSpectatorPawn); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleSpectatorViewTargetChanged (Underlying native function: HandleSpectatorViewTargetChanged 0xa63ff94)
	void HandleSpectatorViewTargetChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandlePersonalVehicleModeChanged (Underlying native function: HandlePersonalVehicleModeChanged 0xa63ff04)
	void HandlePersonalVehicleModeChanged(bool& bEnteredVehicle); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleLocalPlayerViewTargetChanged (Underlying native function: HandleLocalPlayerViewTargetChanged 0xa63fef0)
	void HandleLocalPlayerViewTargetChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleLocalPlayerPlaceChanged (Underlying native function: HandleLocalPlayerPlaceChanged 0xa63fed4)
	void HandleLocalPlayerPlaceChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleLocalPlayerKillsChanged (Underlying native function: HandleLocalPlayerKillsChanged 0xa63feb8)
	void HandleLocalPlayerKillsChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleLocalPlayerBuildCostChanged (Underlying native function: HandleLocalPlayerBuildCostChanged 0xa63fea0)
	void HandleLocalPlayerBuildCostChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleLocalPawnSpawned (Underlying native function: HandleLocalPawnSpawned 0xa63fe84)
	void HandleLocalPawnSpawned(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleLocalPawnRevived (Underlying native function: HandleLocalPawnRevived 0xa63fe04)
	void HandleLocalPawnRevived(class AController*& EventInstigator); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleLocalPawnDied (Underlying native function: HandleLocalPawnDied 0xa63fd54)
	void HandleLocalPawnDied(struct FFortPlayerDeathReport& DeathReport); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortHUDContext.HandleFocusedBuildingAbilitySystemComponentInitialized (Underlying native function: HandleFocusedBuildingAbilitySystemComponentInitialized 0x61b94f0)
	void HandleFocusedBuildingAbilitySystemComponentInitialized(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleBuildingModeChanged (Underlying native function: HandleBuildingModeChanged 0xa63fcc4)
	void HandleBuildingModeChanged(bool& bEntering); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.HandleActorFocusedForCreative (Underlying native function: HandleActorFocusedForCreative 0xa63fc34)
	void HandleActorFocusedForCreative(class AActor*& NewActor); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.GetTimeToDelayEndOfDayZoneWidgetDisplay (Underlying native function: GetTimeToDelayEndOfDayZoneWidgetDisplay 0xa63ec84)
	float GetTimeToDelayEndOfDayZoneWidgetDisplay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetScoreDisplayFactor (Underlying native function: GetScoreDisplayFactor 0xa63e744)
	float GetScoreDisplayFactor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetPotentialBadges (Underlying native function: GetPotentialBadges 0xa63de9c)
	struct TArray<struct FFortBadgeCount> GetPotentialBadges(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetPlayerStateZone (Underlying native function: GetPlayerStateZone 0xa63de78)
	class AFortPlayerStateZone* GetPlayerStateZone(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetNumAllowedDifficultyIncreases (Underlying native function: GetNumAllowedDifficultyIncreases 0xa63d968)
	int GetNumAllowedDifficultyIncreases(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetMissionRewards (Underlying native function: GetMissionRewards 0xa63d854)
	void GetMissionRewards(struct TArray<class UFortItem*>& MissionRewards, struct TArray<class UFortItem*>& MissionAlertRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetMissionOverviewObjectives (Underlying native function: GetMissionOverviewObjectives 0xa63d818)
	struct TArray<struct FZoneLoadingScreenHeadingConfig> GetMissionOverviewObjectives(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetMissionManager (Underlying native function: GetMissionManager 0xa63d7f4)
	class AFortMissionManager* GetMissionManager(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetLocalPlayerPlacement (Underlying native function: GetLocalPlayerPlacement 0xa63d710)
	int GetLocalPlayerPlacement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetLocalPlayerHasWinningPlacement (Underlying native function: GetLocalPlayerHasWinningPlacement 0xa63d6e4)
	bool GetLocalPlayerHasWinningPlacement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetLocalPlayerHasPlacement (Underlying native function: GetLocalPlayerHasPlacement 0xa63d6c0)
	bool GetLocalPlayerHasPlacement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetLocalPlayerHasLosingPlacement (Underlying native function: GetLocalPlayerHasLosingPlacement 0xa63d694)
	bool GetLocalPlayerHasLosingPlacement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetIndicatorsState (Underlying native function: GetIndicatorsState 0xa63cce4)
	enum EFortIndicatorState GetIndicatorsState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetHUDElementWidgetsForTags (Underlying native function: GetHUDElementWidgetsForTags 0x61b9350)
	void GetHUDElementWidgetsForTags(struct FGameplayTagContainer& HUDElementTags, struct TArray<class UFortHUDElementWidget*>& OutWidgets); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.GetGameStateZone (Underlying native function: GetGameStateZone 0xa63cb40)
	class AFortGameStateZone* GetGameStateZone(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetFocusedMission (Underlying native function: GetFocusedMission 0xa63caf8)
	class AFortMission* GetFocusedMission(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetFocusedBuildingInfo (Underlying native function: GetFocusedBuildingInfo 0xa63ca1c)
	bool GetFocusedBuildingInfo(struct FFortFocusedBuildingInfo& OutBuildingInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetEarnedBadges (Underlying native function: GetEarnedBadges 0xa63c8e4)
	struct TArray<struct FEarnedBadgeEntry> GetEarnedBadges(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetDifficultyIncreaseRewardsTier (Underlying native function: GetDifficultyIncreaseRewardsTier 0xa63c8c0)
	int GetDifficultyIncreaseRewardsTier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetDifficultyIncreaseRewardsDifference (Underlying native function: GetDifficultyIncreaseRewardsDifference 0xa63c6ec)
	void GetDifficultyIncreaseRewardsDifference(int& BaseDifficultyIncreaseTier, int& ComparedDifficultyIncreaseTier, struct TArray<struct FFortItemDelta>& RewardDeltaInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetDifficultyIncreaseRewards (Underlying native function: GetDifficultyIncreaseRewards 0xa63c548)
	void GetDifficultyIncreaseRewards(int& DifficultyIncreaseTier, struct TArray<struct FFortItemDelta>& DifficultyIncreaseRewards); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetCurrentPrimaryMissionTags (Underlying native function: GetCurrentPrimaryMissionTags 0xa63c0bc)
	struct FGameplayTagContainer GetCurrentPrimaryMissionTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetCurrentHUDState (Underlying native function: GetCurrentHUDState 0x8c95568)
	struct FFortHUDState GetCurrentHUDState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetCurrentHero (Underlying native function: GetCurrentHero 0xa63bf60)
	class UFortHero* GetCurrentHero(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetCurrentFocusedBuilding (Underlying native function: GetCurrentFocusedBuilding 0xa63bef4)
	class ABuildingActor* GetCurrentFocusedBuilding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetCurrentBasicMissionInfo (Underlying native function: GetCurrentBasicMissionInfo 0xa63be44)
	bool GetCurrentBasicMissionInfo(struct FFortBasicMissionInfo& BasicMissionInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetBuildingActorInfo (Underlying native function: GetBuildingActorInfo 0xa63b3d8)
	bool GetBuildingActorInfo(class ABuildingActor*& BuildingActor, struct FFortFocusedBuildingInfo& OutBuildingInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetBluGloManager (Underlying native function: GetBluGloManager 0xa63b114)
	class AFortBluGloManager* GetBluGloManager(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.GetAccountLevelUpRewards (Underlying native function: GetAccountLevelUpRewards 0xa61ce58)
	void GetAccountLevelUpRewards(struct TArray<struct FFortItemQuantityPair>& Rewards, int& AccountLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.ForwardOnWeaponUnEquipped (Underlying native function: ForwardOnWeaponUnEquipped 0xa63a674)
	void ForwardOnWeaponUnEquipped(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.ForwardOnWeaponHudKeyActionUpdated (Underlying native function: ForwardOnWeaponHudKeyActionUpdated 0xa63a5e4)
	void ForwardOnWeaponHudKeyActionUpdated(class AFortWeapon*& Weapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.ForwardOnWeaponEquipped (Underlying native function: ForwardOnWeaponEquipped 0x19c30f0)
	void ForwardOnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.ForwardOnNumSurvivorsRescuedChanged (Underlying native function: ForwardOnNumSurvivorsRescuedChanged 0xa63a558)
	void ForwardOnNumSurvivorsRescuedChanged(int& NumSurvivorsRescued); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.ForwardOnMissionsUpdated (Underlying native function: ForwardOnMissionsUpdated 0xa63a53c)
	void ForwardOnMissionsUpdated(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.ForwardOnAbilityDecisionWindowStackUpdated (Underlying native function: ForwardOnAbilityDecisionWindowStackUpdated 0xa63a520)
	void ForwardOnAbilityDecisionWindowStackUpdated(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHUDContext.EnterCursorMode (Underlying native function: EnterCursorMode 0xa639e38)
	void EnterCursorMode(struct FName& ActionName, class UUserWidget*& CursorModeWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.EnterCameraMode (Underlying native function: EnterCameraMode 0xa639e24)
	void EnterCameraMode(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDContext.AreIndicatorsEnabled (Underlying native function: AreIndicatorsEnabled 0xa638398)
	bool AreIndicatorsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.AreHUDElementsVisible (Underlying native function: AreHUDElementsVisible 0xa6382d0)
	bool AreHUDElementsVisible(struct FGameplayTagContainer& HUDElementTags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDContext.AddPointOfInterest (Underlying native function: AddPointOfInterest 0xa637e94)
	void AddPointOfInterest(class AActor*& PointOfInterest, struct FText& DisplayText, class UTexture2D*& DisplayImage, bool& bSpecifyColor, struct FLinearColor& ImageColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

