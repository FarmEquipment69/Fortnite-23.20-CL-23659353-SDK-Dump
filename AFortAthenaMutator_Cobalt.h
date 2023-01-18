// Class /Script/FortniteGame.FortAthenaMutator_Cobalt
// Size: 0xe00
class AFortAthenaMutator_Cobalt : public AFortAthenaMutator_GameModeBase
{
	unsigned char unreflected_450[0x18]; // 0x450 (0x18) 
	struct FMulticastInlineDelegate OnTeleportComplete; // 0x468 (0x10)
	struct FMulticastInlineDelegate OnRoundComplete; // 0x478 (0x10)
	struct FMulticastInlineDelegate OnRoundCompleteUIFinished; // 0x488 (0x10)
	struct FMulticastInlineDelegate OnRoundAdvanced; // 0x498 (0x10)
	unsigned char unreflected_4a8[0x20]; // 0x4a8 (0x20) 
	struct FMulticastInlineDelegate OnShowVsDisplay; // 0x4c8 (0x10)
	struct FMulticastInlineDelegate OnHideVsDisplay; // 0x4d8 (0x10)
	struct FMulticastInlineDelegate OnStormShieldArrayUpdated; // 0x4e8 (0x10)
	struct FMulticastInlineDelegate OnPlaylistTimerValueUpdated; // 0x4f8 (0x10)
	struct FMulticastInlineDelegate OnUpdatePreRoundDisplayVisibility; // 0x508 (0x10)
	unsigned char unreflected_518[0x20]; // 0x518 (0x20) 
	class UClass* StormShieldClass; // 0x538 (0x8)
	struct TArray<struct FTaggedPOI> POIList; // 0x540 (0x10)
	struct FScalableFloat MinimumDistanceBetweenPOIs; // 0x550 (0x28)
	struct FScalableFloat StormShieldRadiusMultiplierPerPlayer; // 0x578 (0x28)
	struct FScalableFloat StormShieldMinRadiusMultiplier; // 0x5a0 (0x28)
	struct FScalableFloat DelayBeforeStormShrink; // 0x5c8 (0x28)
	struct FScalableFloat StormShieldShrinkLocationMinOffset; // 0x5f0 (0x28)
	struct FScalableFloat StormShieldShrinkLocationMaxOffset; // 0x618 (0x28)
	struct FScalableFloat StormShieldShrinkRate; // 0x640 (0x28)
	struct FScalableFloat StormShieldGrowthRate; // 0x668 (0x28)
	struct FScalableFloat DelayBeforeNextRound; // 0x690 (0x28)
	struct FScalableFloat DelayBeforePushToSpectateMode; // 0x6b8 (0x28)
	float DelayBeforeRoundEndDeathAndStinger; // 0x6e0 (0x4)
	float DelayBeforeShowingRoundEndUI; // 0x6e4 (0x4)
	struct FScalableFloat RadiusRatioForRespawn; // 0x6e8 (0x28)
	struct FScalableFloat HeightOfSpawnIntoNewStormShield; // 0x710 (0x28)
	struct FScalableFloat DistanceBetweenPlayersOfSameTeamDuringRespawn; // 0x738 (0x28)
	struct FText TeleportingPlayersText; // 0x760 (0x18)
	struct FText TeleportingSpectatorsText; // 0x778 (0x18)
	struct FScalableFloat bResetPlayerAbilitiesOnRoundEnd; // 0x790 (0x28)
	struct FGameplayTag RiftTeleportEventTag; // 0x7b8 (0x4)
	unsigned char unreflected_7bc[0x4]; // 0x7bc (0x4) 
	struct FScalableFloat AvailablePerkRerolls; // 0x7c0 (0x28)
	struct FScalableFloat ResetPlayerInventoryBetweenRounds; // 0x7e8 (0x28)
	struct FScalableFloat bKeepWarmupLoadoutsInFirstRound; // 0x810 (0x28)
	struct TArray<enum EFortItemType> ItemTypesToRemove; // 0x838 (0x10)
	bool bRespawnEnabled; // 0x848 (0x1)
	unsigned char unreflected_849[0x7]; // 0x849 (0x7) 
	struct FScalableFloat RoundDuration; // 0x850 (0x28)
	struct FScalableFloat RespawnDelay; // 0x878 (0x28)
	struct FFortRespawnLogicData RespawnLogicData; // 0x8a0 (0x140)
	float RespawnFallbackHeight; // 0x9e0 (0x4)
	float RespawnTraceEnd; // 0x9e4 (0x4)
	class UMaterialParameterCollection* MinimapMPC; // 0x9e8 (0x8)
	struct FScalableFloat MinimumVersusScreenDuration; // 0x9f0 (0x28)
	float POICameraViewPhaseDuration; // 0xa18 (0x4)
	unsigned char unreflected_a1c[0x4]; // 0xa1c (0x4) 
	struct FScalableFloat HideStormShieldDuringPOICameraViewPhase; // 0xa20 (0x28)
	float PreRoundDisplayDelay; // 0xa48 (0x4)
	float PreRoundDisplayDuration; // 0xa4c (0x4)
	float RoundStartWidgetSequenceAdditionalDelay; // 0xa50 (0x4)
	float UILastManStandingDisplayTime; // 0xa54 (0x4)
	struct TArray<struct FAthenaGameMessageData> RoundGameMessageData; // 0xa58 (0x10)
	class USoundBase* StormShieldShrinkBeginSound; // 0xa68 (0x8)
	class USoundBase* VictoryStingerSound; // 0xa70 (0x8)
	class USoundBase* LoserStingerSound; // 0xa78 (0x8)
	float RoundEndStingerFadeDuration; // 0xa80 (0x4)
	unsigned char unreflected_a84[0x4]; // 0xa84 (0x4) 
	class UClass* DeathEffectsComponentClass; // 0xa88 (0x8)
	struct FText RoundResultsTextWin; // 0xa90 (0x18)
	struct FText RoundResultsTextLost; // 0xaa8 (0x18)
	bool bShouldSkipWinLossScreen; // 0xac0 (0x1)
	unsigned char unreflected_ac1[0x7]; // 0xac1 (0x7) 
	struct FScalableFloat ShowTeammatesInMap; // 0xac8 (0x28)
	struct FScalableFloat ShowEnemiesInMap; // 0xaf0 (0x28)
	struct FScalableFloat TeammateMapIconScale; // 0xb18 (0x28)
	struct FScalableFloat EnemyMapIconScale; // 0xb40 (0x28)
	class AFortAthenaMutator_InventoryOverride* InventoryOverrideMutator; // 0xb68 (0x8)
	struct FGameplayTag RoundCompleteAccoladeTag; // 0xb70 (0x4)
	struct FGameplayTag RoundWinAccoladeTag; // 0xb74 (0x4)
	struct FGameplayTag FirstEliminationAccoladeTag; // 0xb78 (0x4)
	unsigned char unreflected_b7c[0x4]; // 0xb7c (0x4) 
	class UMaterialParameterCollection* SafeZoneMaterialCollection; // 0xb80 (0x8)
	struct FName SafeZoneLocMaterialParamName; // 0xb88 (0x4)
	struct FName SafeZoneScaleMaterialParamName; // 0xb8c (0x4)
	unsigned char unreflected_b90[0x4]; // 0xb90 (0x4) 
	float SafeZoneRadiusAtMaxSafeZoneScale; // 0xb94 (0x4)
	class UClass* StormEyeActorClass; // 0xb98 (0x8)
	struct FScalableFloat MaxSupplyDropSpawnTime; // 0xba0 (0x28)
	struct FScalableFloat MinSupplyDropSpawnTime; // 0xbc8 (0x28)
	unsigned char unreflected_bf0[0x3]; // 0xbf0 (0x3) 
	bool bTeleportComplete; // 0xbf3 (0x1)
	bool bRoundStartWidgetSequenceRunning; // 0xbf4 (0x1)
	unsigned char unreflected_bf5[0x3]; // 0xbf5 (0x3) 
	class AFortAthenaMutator_SynchronizedTeleport* TeleportMutator; // 0xbf8 (0x8)
	struct FCobaltCombatStormShieldArray CombatStormShieldArray; // 0xc00 (0x118)
	int8_t ActiveRound; // 0xd18 (0x1)
	bool bIsCobaltFinished; // 0xd19 (0x1)
	unsigned char unreflected_d1a[0x1]; // 0xd1a (0x1) 
	int8_t FirstRound; // 0xd1b (0x1)
	unsigned char unreflected_d1c[0x4]; // 0xd1c (0x4) 
	struct TArray<unsigned char> TeamWinners; // 0xd20 (0x10)
	struct TArray<unsigned char> TeamLosers; // 0xd30 (0x10)
	unsigned char unreflected_d40[0x8]; // 0xd40 (0x8) 
	struct TArray<class AFortPlayerStateAthena*> PendingTeleportingPlayers; // 0xd48 (0x10)
	struct TArray<struct FTimerHandle*> MoveToSpectateTimerHandles; // 0xd58 (0x10)
	unsigned char unreflected_d68[0x20]; // 0xd68 (0x20) 
	bool bClientPlaylistTimerStarted; // 0xd88 (0x1)
	unsigned char unreflected_d89[0x7]; // 0xd89 (0x7) 
	class UAudioComponent* RoundEndStingerInstance; // 0xd90 (0x8)
	struct FScalableFloat bUseStrictBracketStructure; // 0xd98 (0x28)
	unsigned char unreflected_dc0[0x8]; // 0xdc0 (0x8) 
	struct FCobaltWidgetRoundData WidgetRoundData; // 0xdc8 (0x28)
	unsigned char unreflected_df0[0x1]; // 0xdf0 (0x1) 
	bool bIsFinishedDisplayingRoundEndUI; // 0xdf1 (0x1)
	unsigned char unreflected_df2[0x6]; // 0xdf2 (0x6) 
	class AActor* StormEyeActor; // 0xdf8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.UpdateStormEyeVisuals (Underlying native function: UpdateStormEyeVisuals 0x848a664)
	void UpdateStormEyeVisuals(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.TeleportPlayerLoadComplete (Underlying native function: TeleportPlayerLoadComplete 0x71a663c)
	void TeleportPlayerLoadComplete(class AFortPlayerPawn*& FortPlayerPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.OnRep_WidgetRoundData (Underlying native function: OnRep_WidgetRoundData 0x848a2b4)
	void OnRepWidgetRoundData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.OnRep_TeleportComplete (Underlying native function: OnRep_TeleportComplete 0x848a214)
	void OnRepTeleportComplete(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.OnRep_TeamWinners (Underlying native function: OnRep_TeamWinners 0x848a200)
	void OnRepTeamWinners(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.OnRep_RoundStartWidgetSequenceRunning (Underlying native function: OnRep_RoundStartWidgetSequenceRunning 0x848a130)
	void OnRepRoundStartWidgetSequenceRunning(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.OnRep_CombatStormShieldArray (Underlying native function: OnRep_CombatStormShieldArray 0x8489fb4)
	void OnRepCombatStormShieldArray(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.OnRep_bIsFinishedDisplayingRoundEndUI (Underlying native function: OnRep_bIsFinishedDisplayingRoundEndUI 0x848a2dc)
	void OnRepbIsFinishedDisplayingRoundEndUI(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.OnRep_bClientPlaylistTimerStarted (Underlying native function: OnRep_bClientPlaylistTimerStarted 0x848a2c8)
	void OnRepbClientPlaylistTimerStarted(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.OnRep_ActiveRound (Underlying native function: OnRep_ActiveRound 0x8489f80)
	void OnRepActiveRound(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.HandleTeleportComplete (Underlying native function: HandleTeleportComplete 0x26daa0c)
	void HandleTeleportComplete(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.HandlePlayerStateTeleportComplete (Underlying native function: HandlePlayerStateTeleportComplete 0x71a663c)
	void HandlePlayerStateTeleportComplete(class AFortPlayerStateAthena*& FortPlayerState); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.GetFinalRoundIndex (Underlying native function: GetFinalRoundIndex 0x8487edc)
	int GetFinalRoundIndex(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.ClientCobaltRoundTimerComplete (Underlying native function: ClientCobaltRoundTimerComplete 0x26daa0c)
	void ClientCobaltRoundTimerComplete(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Cobalt.AudioFadeChangeEvent (Underlying native function: AudioFadeChangeEvent 0x8487d10)
	void AudioFadeChangeEvent(bool& bFadeOut, float& FadeTime); // (Final | Native | Private)
};
