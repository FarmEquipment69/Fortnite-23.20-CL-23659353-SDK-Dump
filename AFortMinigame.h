// Class /Script/FortniteGame.FortMinigame
// Size: 0x1200
class AFortMinigame : public AInfo
{
	unsigned char unreflected_288[0x70]; // 0x288 (0x70) 
	struct TSet<struct FUniqueNetIdRepl> PendingPlayers; // 0x2f8 (0x50)
	unsigned char unreflected_348[0x10]; // 0x348 (0x10) 
	struct FMulticastInlineDelegate StateChangedDelegate; // 0x358 (0x10)
	struct FMulticastInlineDelegate MinigameHideHUDDelegate; // 0x368 (0x10)
	struct FMulticastInlineDelegate StatChangedDelegate; // 0x378 (0x10)
	struct FMulticastInlineDelegate OnPostGameResetUI; // 0x388 (0x10)
	struct FMulticastInlineDelegate FullStatChangedDelegate; // 0x398 (0x10)
	struct FMulticastInlineDelegate OnMinigamePlayerSpawned; // 0x3a8 (0x10)
	struct FMulticastInlineDelegate OnMinigamePlayerOrBotSpawned; // 0x3b8 (0x10)
	struct FMulticastInlineDelegate MinigameEndGameDelegate; // 0x3c8 (0x10)
	struct FMulticastInlineDelegate PlayerAddedDelegate; // 0x3d8 (0x10)
	struct FMulticastInlineDelegate OnPrePlayerJoinInProgress; // 0x3e8 (0x10)
	struct FMulticastInlineDelegate PlayerAddedPostResetDelegate; // 0x3f8 (0x10)
	struct FMulticastInlineDelegate PlayerLastChanceToSave; // 0x408 (0x10)
	struct FMulticastInlineDelegate PlayerPreRemovedDelegate; // 0x418 (0x10)
	struct FMulticastInlineDelegate PlayerRemovedDelegate; // 0x428 (0x10)
	struct FMulticastInlineDelegate PlayerChangedTeamDelegate; // 0x438 (0x10)
	struct FMulticastInlineDelegate OnPlayerClassApplied; // 0x448 (0x10)
	struct FMulticastInlineDelegate OnRefreshIndicatorPlayersCache; // 0x458 (0x10)
	struct FMulticastInlineDelegate OnPlayerClassRemoved; // 0x468 (0x10)
	struct FMulticastInlineDelegate OnPlayerJoinInProgress; // 0x478 (0x10)
	struct FMulticastInlineDelegate OnCreativePlayerIndicatorRulesChanged; // 0x488 (0x10)
	struct FMulticastInlineDelegate OnCreativeBossInfoRulesChanged; // 0x498 (0x10)
	struct FMulticastInlineDelegate MinigameStartedDelegate; // 0x4a8 (0x10)
	struct FMulticastInlineDelegate PostMinigameStartedDelegate; // 0x4b8 (0x10)
	struct FMulticastInlineDelegate MinigameEndedDelegate; // 0x4c8 (0x10)
	unsigned char unreflected_4d8[0x60]; // 0x4d8 (0x60) 
	struct FMulticastInlineDelegate MinigameTeamConfigUpdated; // 0x538 (0x10)
	struct FMulticastInlineDelegate MinigameClassConfigUpdated; // 0x548 (0x10)
	struct FMulticastInlineDelegate OnPawnTeleportedForMinigame; // 0x558 (0x10)
	struct FMulticastInlineDelegate OnUIExtensionsChanged; // 0x568 (0x10)
	struct FMulticastInlineDelegate OnPlayModeChangedDelegate; // 0x578 (0x10)
	struct FMulticastInlineDelegate OnCurrentRoundChangedDelegate; // 0x588 (0x10)
	struct TArray<struct FUIExtension> UIExtensions; // 0x598 (0x10)
	struct FGameplayTagContainer UIExtensionTags; // 0x5a8 (0x20)
	unsigned char unreflected_5c8[0x10]; // 0x5c8 (0x10) 
	float TimeLimit; // 0x5d8 (0x4)
	int CurrentRound; // 0x5dc (0x4)
	int TotalRounds; // 0x5e0 (0x4)
	unsigned char unreflected_5e4[0x4]; // 0x5e4 (0x4) 
	struct FMinigamePlayers PlayerArray; // 0x5e8 (0x120)
	struct FMinigamePlayers InactivePlayerArray; // 0x708 (0x120)
	unsigned char unreflected_828[0x58]; // 0x828 (0x58) 
	struct FMinigamePlayers SpectatingPlayerArray; // 0x880 (0x120)
	struct TArray<struct FMinigameEndCondition> EndConditionArray; // 0x9a0 (0x10)
	bool bRemovePawnOnDeath; // 0x9b0 (0x1)
	unsigned char unreflected_9b1[0x7]; // 0x9b1 (0x7) 
	class UClass* PlayerDeathsStatFilter; // 0x9b8 (0x8)
	unsigned char unreflected_9c0[0x78]; // 0x9c0 (0x78) 
	bool bKeepItemsBetweenRounds; // 0xa38 (0x1)
	unsigned char unreflected_a39[0x3]; // 0xa39 (0x3) 
	float PercentageOfResourcesKeptBetweenRounds; // 0xa3c (0x4)
	bool bReloadAndRestockWeaponsEachRound; // 0xa40 (0x1)
	unsigned char unreflected_a41[0x7]; // 0xa41 (0x7) 
	struct TMap<class UFortWorldItemDefinition*, int> RestockAmmoAmounts; // 0xa48 (0x50)
	int DefaultRestockAmmoAmount; // 0xa98 (0x4)
	bool bLastTeamStandingWins; // 0xa9c (0x1)
	bool bAllowStandardEndGameConditions; // 0xa9d (0x1)
	bool bEndGameOnMatchPointWin; // 0xa9e (0x1)
	bool bIncludePlayersWhoLeftGameInScoreboard; // 0xa9f (0x1)
	unsigned char unreflected_aa0[0x8]; // 0xaa0 (0x8) 
	struct FMulticastInlineDelegate OnPlayerSpawnOverrideDevicesUpdated; // 0xaa8 (0x10)
	unsigned char unreflected_ab8[0x54]; // 0xab8 (0x54) 
	bool bKeepPlayersInStasisOnRoundStart; // 0xb0c (0x1)
	unsigned char unreflected_b0d[0x3]; // 0xb0d (0x3) 
	struct TArray<struct FFireVolumesForMinigame> FireVolumeArray; // 0xb10 (0x10)
	struct TArray<class AActor*> BuildingsWithCurieFXToDestroy; // 0xb20 (0x10)
	struct FMulticastInlineDelegate ServerTimeReplicatedDelegate; // 0xb30 (0x10)
	unsigned char unreflected_b40[0x8]; // 0xb40 (0x8) 
	struct TArray<class AActor*> PlayerSpawnOverrideDevices; // 0xb48 (0x10)
	struct FText DisplayName; // 0xb58 (0x18)
	int AutoStartDelay; // 0xb70 (0x4)
	enum EFortMinigamePlayerSpawnLocationSetting SpawnLocationSetting; // 0xb74 (0x1)
	enum EFortMinigamePostGameSpawnLocationSetting PostGameSpawnLocationSetting; // 0xb75 (0x1)
	enum EFortMinigameSpawnPadSelection SpawnPadSelection; // 0xb76 (0x1)
	unsigned char unreflected_b77[0x1]; // 0xb77 (0x1) 
	float WarmupDuration; // 0xb78 (0x4)
	float PostGameResetDelay; // 0xb7c (0x4)
	float GameWinnerDisplayTime; // 0xb80 (0x4)
	float GameScoreDisplayTime; // 0xb84 (0x4)
	float RoundWinnerDisplayTime; // 0xb88 (0x4)
	float RoundScoreDisplayTime; // 0xb8c (0x4)
	float ServerEndgameDelay; // 0xb90 (0x4)
	bool bTimerCountsDown; // 0xb94 (0x1)
	unsigned char unreflected_b95[0x3]; // 0xb95 (0x3) 
	struct TArray<struct FMinigameTeam> TeamArray; // 0xb98 (0x10)
	struct TArray<struct FMinigameClassSlot> ClassSlotArray; // 0xba8 (0x10)
	struct TArray<struct FFortMinigameStatQuery> BaseEndConditionArray; // 0xbb8 (0x10)
	enum EFortMinigameState CurrentState; // 0xbc8 (0x1)
	bool bRequestPostGameResetUI; // 0xbc9 (0x1)
	enum EFortMinigameState PreviousState; // 0xbca (0x1)
	unsigned char unreflected_bcb[0x5]; // 0xbcb (0x5) 
	class UClass* CompletionTimeStatFilter; // 0xbd0 (0x8)
	class UClass* ScoreStatFilter; // 0xbd8 (0x8)
	class UClass* RaceProgressStatFilter; // 0xbe0 (0x8)
	class UClass* LapTimeStatFilter; // 0xbe8 (0x8)
	class UClass* RaceTimeStatFilter; // 0xbf0 (0x8)
	class UClass* TimeAliveStatFilter; // 0xbf8 (0x8)
	class UClass* RoundWinsStatFilter; // 0xc00 (0x8)
	class UClass* PlayerLivesLeftStatFilter; // 0xc08 (0x8)
	unsigned char DefaultClassSlot; // 0xc10 (0x1)
	enum EFortMinigameClassResetType ClassResetType; // 0xc11 (0x1)
	unsigned char unreflected_c12[0x2]; // 0xc12 (0x2) 
	int MaxLivesForPlayer; // 0xc14 (0x4)
	unsigned char TeamToSwapToWhenOutOfSpawns; // 0xc18 (0x1)
	unsigned char unreflected_c19[0x3]; // 0xc19 (0x3) 
	int AutoEndTeamThreshold; // 0xc1c (0x4)
	struct FFortMinigameTimes ServerTime; // 0xc20 (0x14)
	struct FFortMinigameTimes CachedTime; // 0xc34 (0x14)
	bool bStopwatchMode; // 0xc48 (0x1)
	unsigned char unreflected_c49[0x3]; // 0xc49 (0x3) 
	float LastRoundDuration; // 0xc4c (0x4)
	struct TArray<class UFortMinigameLogicComponent*> MinigameComponents; // 0xc50 (0x10)
	struct TArray<class UFortMinigamePlayerStartComponent*> PlayerStartComponents; // 0xc60 (0x10)
	struct TArray<class UFortMinigamePlayerStartComponent*> CheckpointPlayerStartComponent; // 0xc70 (0x10)
	class UFortCreativeCreatureManagerComponent* CreatureManagerComponent; // 0xc80 (0x8)
	class UFortCreativeTeleporterManagerComponent* TeleporterManagerComponent; // 0xc88 (0x8)
	class UFortAIManagerMinigameComponent* AIManagerComponent; // 0xc90 (0x8)
	class UCreativePlayerHealthInfoComponent* CreativePlayerHealthComponent; // 0xc98 (0x8)
	class AActor* Volume; // 0xca0 (0x8)
	unsigned char unreflected_ca8[0x1]; // 0xca8 (0x1) 
	bool bSortScoreboardEntries; // 0xca9 (0x1)
	bool bTeamMinigame; // 0xcaa (0x1)
	bool bTeamsAreStable; // 0xcab (0x1)
	int NumTeams; // 0xcac (0x4)
	bool bAllowJoinInProgress; // 0xcb0 (0x1)
	enum EMinigamePlayerPersistence PlayerPersistence; // 0xcb1 (0x1)
	unsigned char unreflected_cb2[0x6]; // 0xcb2 (0x6) 
	class AFortPlayerState* MinigameStarter; // 0xcb8 (0x8)
	unsigned char unreflected_cc0[0x4]; // 0xcc0 (0x4) 
	int TeamRotationSetting; // 0xcc4 (0x4)
	int TeamRotationCount; // 0xcc8 (0x4)
	bool bStableTeamCosmetics; // 0xccc (0x1)
	enum EMinigameFullscreenMapWidgetType MinigameMapWidget; // 0xccd (0x1)
	bool bShowMapWidget; // 0xcce (0x1)
	bool bShowScoreboardMapWidget; // 0xccf (0x1)
	struct TWeakObjectPtr<class UClass> ScoreboardMapWidgetClass; // 0xcd0 (0x28)
	unsigned char unreflected_cf8[0x1]; // 0xcf8 (0x1) 
	bool bShowCareerScoreboardMapWidget; // 0xcf9 (0x1)
	unsigned char unreflected_cfa[0x6]; // 0xcfa (0x6) 
	struct TWeakObjectPtr<class UClass> CareerMapWidgetClass; // 0xd00 (0x28)
	unsigned char unreflected_d28[0x1]; // 0xd28 (0x1) 
	bool bShowPreGameCountdownBars; // 0xd29 (0x1)
	enum EMinigameWinCondition WinCondition; // 0xd2a (0x1)
	bool bAllTeamsMustMatchEndConditions; // 0xd2b (0x1)
	bool bOnlyAllowRespawningIfPlayerStartPadsFound; // 0xd2c (0x1)
	enum EMinigameGameEndCallout GameEndCallout; // 0xd2d (0x1)
	unsigned char unreflected_d2e[0x2]; // 0xd2e (0x2) 
	int VictoryAudioIndex; // 0xd30 (0x4)
	int DrawAudioIndex; // 0xd34 (0x4)
	int DefeatAudioIndex; // 0xd38 (0x4)
	bool bShowCumulativeScoreboard; // 0xd3c (0x1)
	unsigned char unreflected_d3d[0x3]; // 0xd3d (0x3) 
	struct FMinigamePostGameSettings PostGameSettings; // 0xd40 (0xb8)
	unsigned char unreflected_df8[0x58]; // 0xdf8 (0x58) 
	struct FGameplayTagContainer ActionsAllowedInStasis; // 0xe50 (0x20)
	unsigned char unreflected_e70[0xcc]; // 0xe70 (0xcc) 
	struct FName MinigameStartCameraBehavior; // 0xf3c (0x4)
	struct FText ClientMinigameStartedText; // 0xf40 (0x18)
	struct FName MinigameEndCameraBehavior; // 0xf58 (0x4)
	unsigned char unreflected_f5c[0x4]; // 0xf5c (0x4) 
	struct FText ClientMinigameEndedText; // 0xf60 (0x18)
	struct TMap<struct FGameplayTag, struct FUIExtension> AllowedUIExtensions; // 0xf78 (0x50)
	unsigned char unreflected_fc8[0x8]; // 0xfc8 (0x8) 
	struct TSet<enum EFortMinigameState> MinigameEditModeStates; // 0xfd0 (0x50)
	unsigned char unreflected_1020[0x8]; // 0x1020 (0x8) 
	struct TSet<struct FUIExtension> AdditionalUIExtensions; // 0x1028 (0x50)
	bool bAllowFriendlyFire; // 0x1078 (0x1)
	bool bForceIndividualScoresInTeamGame; // 0x1079 (0x1)
	bool bVehiclesDamageObjectsMinigame; // 0x107a (0x1)
	bool bVehiclesDamageVehiclesMinigame; // 0x107b (0x1)
	unsigned char unreflected_107c[0x4]; // 0x107c (0x4) 
	struct FMulticastInlineDelegate OnAnyLocalPlayerChangedClass; // 0x1080 (0x10)
	int NumMinigameComponentsServer; // 0x1090 (0x4)
	unsigned char unreflected_1094[0x24]; // 0x1094 (0x24) 
	bool bVolumeNavigationHasBuilt; // 0x10b8 (0x1)
	unsigned char unreflected_10b9[0x7]; // 0x10b9 (0x7) 
	struct TArray<int> RoundWinHistory; // 0x10c0 (0x10)
	struct TArray<struct FMinigamePlayerBucket> PlayerBuckets; // 0x10d0 (0x10)
	struct FGameplayTagContainer OldUIExtensionTags; // 0x10e0 (0x20)
	unsigned char unreflected_1100[0xa0]; // 0x1100 (0xa0) 
	bool bPipHudAdEnabled; // 0x11a0 (0x1)
	unsigned char unreflected_11a1[0x1f]; // 0x11a1 (0x1f) 
	struct TArray<struct FMinigamePlayerPersistentStartPoint> PlayerPersistentStartPoints; // 0x11c0 (0x10)
	int PersistenceRequiredDevices; // 0x11d0 (0x4)
	unsigned char padding_11d4[0x2c]; // 0x11d4 (0x2c)

	/* Functions */

	// Function /Script/FortniteGame.FortMinigame.WasInProgress (Underlying native function: WasInProgress 0x8adfb94)
	bool WasInProgress(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.WarmupCountdownEndTimeUpdated (Underlying native function: WarmupCountdownEndTimeUpdated 0x8adfb10)
	void WarmupCountdownEndTimeUpdated(float& NewCountdownEndTime); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigame.UseTeamScoring (Underlying native function: UseTeamScoring 0x8adfaf0)
	bool UseTeamScoring(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.UseTeamScore (Underlying native function: UseTeamScore 0x8adfa54)
	bool UseTeamScore(unsigned char& TeamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.UpdateTimeAliveStat (Underlying native function: UpdateTimeAliveStat 0x70dc11c)
	void UpdateTimeAliveStat(class AController*& PlayerController, bool& bAccumulate); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.UpdateTimeAliveForAlivePlayers (Underlying native function: UpdateTimeAliveForAlivePlayers 0x26daa0c)
	void UpdateTimeAliveForAlivePlayers(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMinigame.UpdateAutoStartByMatchmakingPortalIslandOwner (Underlying native function: UpdateAutoStartByMatchmakingPortalIslandOwner 0x8adf830)
	void UpdateAutoStartByMatchmakingPortalIslandOwner(struct FString& IslandOwnerId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.UnregisterVolumeAsNavigationObserver (Underlying native function: UnregisterVolumeAsNavigationObserver 0x8adf7b0)
	void UnregisterVolumeAsNavigationObserver(class USceneComponent*& RegisteredComponent); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigame.ToggleAutoRestartMinigame (Underlying native function: ToggleAutoRestartMinigame 0x8adf788)
	void ToggleAutoRestartMinigame(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.StartMinigame (Underlying native function: StartMinigame 0x8adf6f0)
	void StartMinigame(class AFortPlayerController*& InstigatorPC); // (0x00000002 | BlueprintAuthorityOnly | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.ShouldShowPreGameCountdownBars (Underlying native function: ShouldShowPreGameCountdownBars 0x8adf658)
	bool ShouldShowPreGameCountdownBars(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.ShouldRotateTeams (Underlying native function: ShouldRotateTeams 0x8adf634)
	bool ShouldRotateTeams(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.ShouldDropOrDestroyItem (Underlying native function: ShouldDropOrDestroyItem 0x8adf4c4)
	bool ShouldDropOrDestroyItem(bool& bShouldDrop, bool& bShouldDestroy, class AController*& PC, class UFortWorldItemDefinition*& ItemDef); // (Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMinigame.SetWinningTeamIndex (Underlying native function: SetWinningTeamIndex 0x8adf448)
	void SetWinningTeamIndex(unsigned char& InWinningTeamIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetVehiclesDamageVehiclesMiniGame (Underlying native function: SetVehiclesDamageVehiclesMiniGame 0x71a6cc4)
	void SetVehiclesDamageVehiclesMiniGame(bool& bInVehiclesDamageVehiclesMinigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetVehiclesDamageObjectsMiniGame (Underlying native function: SetVehiclesDamageObjectsMiniGame 0x71a6cc4)
	void SetVehiclesDamageObjectsMiniGame(bool& bInVehiclesDamageObjectsMinigame); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetUseTeamScore (Underlying native function: SetUseTeamScore 0x8adf37c)
	void SetUseTeamScore(unsigned char& TeamIndex, bool& bUseTeamScore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetupTeams (Has no native function)
	void SetupTeams(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.SetTeamForPlayer (Underlying native function: SetTeamForPlayer 0x8adf1f0)
	bool SetTeamForPlayer(class AFortPlayerState*& PlayerState, unsigned char& NewTeam, bool& bTemporary, bool& bChangeTeamWithoutRespawn, bool& bResetVitalsOnSwitch); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetTeamColorIndexForTeam (Underlying native function: SetTeamColorIndexForTeam 0x8adf12c)
	void SetTeamColorIndexForTeam(unsigned char& TeamIndex, int& TeamColorIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetShouldShowPreGameCountdownBars (Underlying native function: SetShouldShowPreGameCountdownBars 0x71a6cc4)
	void SetShouldShowPreGameCountdownBars(bool& bInShowPreGameCountdownBars); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetRaceTimeStat (Underlying native function: SetRaceTimeStat 0x8adee2c)
	void SetRaceTimeStat(class AFortPlayerController*& PlayerController, float& RaceTimeSeconds); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetRaceProgressStat (Underlying native function: SetRaceProgressStat 0x8adee2c)
	void SetRaceProgressStat(class AFortPlayerController*& PlayerController, float& NormalizedRaceProgress); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetPvPTeamForPlayer (Underlying native function: SetPvPTeamForPlayer 0x8adf01c)
	bool SetPvPTeamForPlayer(class AFortPlayerState*& PlayerState, int& Team, bool& bTemporary); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetPlayerHealthStat (Underlying native function: SetPlayerHealthStat 0x81210cc)
	void SetPlayerHealthStat(class AFortPlayerState*& FortPlayerState, int& Health); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetPipHudAdEnabled (Underlying native function: SetPipHudAdEnabled 0x52f55a0)
	void SetPipHudAdEnabled(bool& bInEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetMinigameNumTeams (Underlying native function: SetMinigameNumTeams 0x8adefa0)
	void SetMinigameNumTeams(int& InNumTeams); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetMaxInitTeamSizeForTeam (Underlying native function: SetMaxInitTeamSizeForTeam 0x8adeed4)
	void SetMaxInitTeamSizeForTeam(unsigned char& TeamIndex, int& TeamSize); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetLapTimeStat (Underlying native function: SetLapTimeStat 0x8adee2c)
	void SetLapTimeStat(class AFortPlayerController*& PlayerController, float& LapTimeSeconds); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetInitTeamSizeWeightForTeam (Underlying native function: SetInitTeamSizeWeightForTeam 0x8aded68)
	void SetInitTeamSizeWeightForTeam(unsigned char& TeamIndex, int& TeamSizeWeight); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetClassSlotVisibleInUI (Underlying native function: SetClassSlotVisibleInUI 0x8adeca4)
	void SetClassSlotVisibleInUI(unsigned char& ClassSlotIndex, bool& bVisibleInUI); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetClassSlotName (Underlying native function: SetClassSlotName 0x8adeb0c)
	void SetClassSlotName(unsigned char& ClassSlotIndex, struct FString& ClassName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetClassSlotInventory (Underlying native function: SetClassSlotInventory 0x8adea28)
	void SetClassSlotInventory(unsigned char& ClassSlotIndex, struct TArray<struct FItemAndCount>& InventoryItems); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.SetClassSlotForPlayer (Underlying native function: SetClassSlotForPlayer 0x8ade848)
	bool SetClassSlotForPlayer(class AFortPlayerState*& PlayerState, unsigned char& NewClassSlot, struct FDelegate& OnComplete, bool& bRespawnPlayer, bool& bResetCurrentVitals, bool& bClearAllItems, float& ClassSwitchDelay); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.ServerEventLogScoreChanged (Underlying native function: ServerEventLogScoreChanged 0x8ade5e4)
	void ServerEventLogScoreChanged(enum EFortQuestObjectiveStatEvent& Type, class UObject*& TargetObject, class AFortPlayerController*& PlayerController, struct FGameplayTagContainer& TargetTags, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& ContextTags, int& Count); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortMinigame.ServerEventLogRoundEnded (Underlying native function: ServerEventLogRoundEnded 0x8ade500)
	void ServerEventLogRoundEnded(class AFortPlayerController*& InstigatorPC, enum EFortMinigameEnd& EndMethod, enum EFortMinigameState& NextState); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigame.ServerEventLogMinigameState (Underlying native function: ServerEventLogMinigameState 0x8ade45c)
	void ServerEventLogMinigameState(enum EFortMinigameState& NewState, int& Duration); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigame.RestartMinigame (Underlying native function: RestartMinigame 0x8ade3d8)
	void RestartMinigame(class AFortPlayerController*& InstigatorPC); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.ResetStats (Underlying native function: ResetStats 0x26daa0c)
	void ResetStats(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RemovePlayerSpawnOverrideDevice (Underlying native function: RemovePlayerSpawnOverrideDevice 0x71a663c)
	void RemovePlayerSpawnOverrideDevice(class AActor*& InOverrideDevice); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RemovePersistenceRequirement (Underlying native function: RemovePersistenceRequirement 0x26daa0c)
	void RemovePersistenceRequirement(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RemoveMinigamePlayer (Underlying native function: RemoveMinigamePlayer 0x8ade358)
	void RemoveMinigamePlayer(class AFortPlayerState*& PlayerState); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RemoveMinigameComponent (Underlying native function: RemoveMinigameComponent 0x8ade2d8)
	void RemoveMinigameComponent(class UFortMinigameLogicComponent*& MinigameComponent); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RemoveMinigameActor (Underlying native function: RemoveMinigameActor 0x8ade208)
	void RemoveMinigameActor(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RemoveFromFireVolumesForMinigame (Underlying native function: RemoveFromFireVolumesForMinigame 0x8ade188)
	void RemoveFromFireVolumesForMinigame(class AGameplayVolume*& FireVolume); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RemoveExtensionWidget (Underlying native function: RemoveExtensionWidget 0x8ade0b8)
	void RemoveExtensionWidget(struct FUIExtension& ExtensionToRemove); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RemoveEndConditionForTeam (Underlying native function: RemoveEndConditionForTeam 0x8addfd0)
	void RemoveEndConditionForTeam(unsigned char& TeamIndex, struct FFortMinigameStatQuery& StatQuery); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RemoveEndCondition (Underlying native function: RemoveEndCondition 0x8addf20)
	void RemoveEndCondition(struct FFortMinigameStatQuery& StatQuery); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.ReleasePlayerFromStasis (Underlying native function: ReleasePlayerFromStasis 0x5dbe090)
	void ReleasePlayerFromStasis(class APawn*& PlayerPawn); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RegisterVolumeAsNavigationObserver (Underlying native function: RegisterVolumeAsNavigationObserver 0x8addf0c)
	void RegisterVolumeAsNavigationObserver(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigame.RefreshVoiceForPlayers (Underlying native function: RefreshVoiceForPlayers 0x26daa0c)
	void RefreshVoiceForPlayers(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RefreshVoiceForPlayer (Underlying native function: RefreshVoiceForPlayer 0x71a663c)
	void RefreshVoiceForPlayer(class AFortPlayerState*& PlayerState); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RefreshIndicatorPlayersCache (Underlying native function: RefreshIndicatorPlayersCache 0x8addef0)
	void RefreshIndicatorPlayersCache(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RefreshGameRulesPreview (Underlying native function: RefreshGameRulesPreview 0x26daa0c)
	void RefreshGameRulesPreview(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.RecheckInventory (Underlying native function: RecheckInventory 0x8adde70)
	void RecheckInventory(class APawn*& PlayerPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.QueueAllAIForDespawn (Underlying native function: QueueAllAIForDespawn 0x8adde5c)
	void QueueAllAIForDespawn(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigame.PutPlayerIntoStasis (Underlying native function: PutPlayerIntoStasis 0x8addbb0)
	void PutPlayerIntoStasis(class APawn*& PlayerPawn); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.PutPlayerControllerIntoStasis (Underlying native function: PutPlayerControllerIntoStasis 0x8adda74)
	void PutPlayerControllerIntoStasis(class AFortPlayerController*& PlayerController); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.PostGameResetPlayers (Underlying native function: PostGameResetPlayers 0x26daa0c)
	void PostGameResetPlayers(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.PostGameReset_Guard (Underlying native function: PostGameReset_Guard 0x8add9a0)
	void PostGameResetGuard(struct FEventMessageTag& Channel, struct FSpatialGamePlayActorLoadingStateUpdatedContext& StateContext); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortMinigame.OverridePlayerSpawnLocation (Underlying native function: OverridePlayerSpawnLocation 0x8add7ec)
	bool OverridePlayerSpawnLocation(class APawn*& PlayerPawn, class AFortPlayerStateAthena*& PlayerState, struct FVector& OutLocation, struct FRotator& OutRotation, bool& bOutRespawningOnGround); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.OnVolumeStateChanged (Underlying native function: OnVolumeStateChanged 0x8add718)
	void OnVolumeStateChanged(struct FEventMessageTag& Channel, struct FSpatialGamePlayActorLoadingStateUpdatedContext& StateContext); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortMinigame.OnTimeLimitElapsed (Underlying native function: OnTimeLimitElapsed 0x8add704)
	void OnTimeLimitElapsed(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_Volume (Underlying native function: OnRep_Volume 0x8add520)
	void OnRepVolume(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_UIExtensionTags (Underlying native function: OnRep_UIExtensionTags 0x8add50c)
	void OnRepUIExtensionTags(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_TeamArray (Underlying native function: OnRep_TeamArray 0x8add4ac)
	void OnRepTeamArray(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_StatsChanged (Underlying native function: OnRep_StatsChanged 0x8add4f8)
	void OnRepStatsChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_ServerTime (Underlying native function: OnRep_ServerTime 0x8add4c8)
	void OnRepServerTime(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_PlayerBuckets (Underlying native function: OnRep_PlayerBuckets 0x8add4ac)
	void OnRepPlayerBuckets(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_MinigamePlayer (Underlying native function: OnRep_MinigamePlayer 0x8add470)
	void OnRepMinigamePlayer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_CurrentState (Underlying native function: OnRep_CurrentState 0x8add444)
	void OnRepCurrentState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_CurrentRound (Underlying native function: OnRep_CurrentRound 0x8add40c)
	void OnRepCurrentRound(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_ClassSlotArray (Underlying native function: OnRep_ClassSlotArray 0x8add3f0)
	void OnRepClassSlotArray(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_bRequestPostGameResetUI (Underlying native function: OnRep_bRequestPostGameResetUI 0x8add574)
	void OnRepbRequestPostGameResetUI(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnRep_bPipHudAdEnabled (Underlying native function: OnRep_bPipHudAdEnabled 0x5dbe040)
	void OnRepbPipHudAdEnabled(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigame.OnPlayerStateTeamIndexChanged (Underlying native function: OnPlayerStateTeamIndexChanged 0x8add3dc)
	void OnPlayerStateTeamIndexChanged(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigame.OnPlayerPawnPossessedDuringTransition (Underlying native function: OnPlayerPawnPossessedDuringTransition 0x8add2d4)
	void OnPlayerPawnPossessedDuringTransition(class APawn*& PlayerPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnPlayerPawnPossessedDuringMinigame (Underlying native function: OnPlayerPawnPossessedDuringMinigame 0x8add1d0)
	void OnPlayerPawnPossessedDuringMinigame(class APawn*& PlayerPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnPawnTeleported (Underlying native function: OnPawnTeleported 0x71a663c)
	void OnPawnTeleported(class AFortPawn*& FortPawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMinigame.OnMinigameStatChanged (Underlying native function: OnMinigameStatChanged 0x8add0d8)
	void OnMinigameStatChanged(class AController*& InStatOwner, class UFortMinigameStatFilter*& TrackedStatClass, int& Count); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.OnInGameLoadScreenChanged (Underlying native function: OnInGameLoadScreenChanged 0x8adce50)
	void OnInGameLoadScreenChanged(class AFortPlayerControllerAthena*& PlayerController, bool& bEnableLoadScreen, struct FText& HUDReasonText); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x72ab98c)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMinigame.OnFortPlayerDied (Underlying native function: OnFortPlayerDied 0x8adcdc0)
	void OnFortPlayerDied(class AFortPlayerPawnAthena*& FortPlayerPawnAthena); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnEndGameReturnPlayersFromMatchmaking (Underlying native function: OnEndGameReturnPlayersFromMatchmaking 0x8adcc40)
	void OnEndGameReturnPlayersFromMatchmaking(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigame.OnClientFinishTeleportingForMinigame (Underlying native function: OnClientFinishTeleportingForMinigame 0x8adc92c)
	void OnClientFinishTeleportingForMinigame(class AFortPlayerPawn*& InPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnCheckIfClientIsSafeToRespawn (Underlying native function: OnCheckIfClientIsSafeToRespawn 0x8adc89c)
	bool OnCheckIfClientIsSafeToRespawn(class AFortPlayerControllerAthena*& PlayerController); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.OnBeginSpectating (Underlying native function: OnBeginSpectating 0x8adc81c)
	void OnBeginSpectating(class AFortPlayerStateZone*& FPSZ); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortMinigame.OnAnyLocalPlayerChangedClass__DelegateSignature (Has no native function)
	void OnAnyLocalPlayerChangedClassDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortMinigame.OnAllMinigamePlayerBotsSpawned (Underlying native function: OnAllMinigamePlayerBotsSpawned 0x8adc808)
	void OnAllMinigamePlayerBotsSpawned(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.NativeExitedVolumeEvent (Underlying native function: NativeExitedVolumeEvent 0x8adc788)
	void NativeExitedVolumeEvent(class AFortPlayerState*& LeftPlayerState); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMinigame.NativeEnteredVolumeEvent (Underlying native function: NativeEnteredVolumeEvent 0x8adc708)
	void NativeEnteredVolumeEvent(class AFortPlayerState*& PlayerState); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMinigame.MoveMinigamePlayerToSpectate (Underlying native function: MoveMinigamePlayerToSpectate 0x8adc688)
	void MoveMinigamePlayerToSpectate(class AFortPlayerState*& PlayerState); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.MinigamePlayerNameReplicated (Underlying native function: MinigamePlayerNameReplicated 0x8adc5b8)
	void MinigamePlayerNameReplicated(struct FUniqueNetIdRepl& NetId); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortMinigame.LTMFlowSetMatchmakingBackfillAndJoinInProgress (Underlying native function: LTMFlowSetMatchmakingBackfillAndJoinInProgress 0x8adc4f4)
	void LTMFlowSetMatchmakingBackfillAndJoinInProgress(bool& bEnable, bool& bDisableBeaconRequests); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.K2_RecordPostGameStatsForPlayer (Has no native function)
	void K2RecordPostGameStatsForPlayer(struct FMinigamePlayer& PlayerEntry); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.K2_IsInProgress (Underlying native function: K2_IsInProgress 0x8adc460)
	void K2IsInProgress(enum EFortMinigameExec& OutExec); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.K2_HasStarted (Underlying native function: K2_HasStarted 0x8adc3d8)
	void K2HasStarted(enum EFortMinigameExec& OutExec); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.K2_ExitedVolumeEvent (Underlying native function: K2_ExitedVolumeEvent 0x720c64c)
	void K2ExitedVolumeEvent(class AFortPlayerState*& LeftPlayerState); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.K2_EnteredVolumeEvent (Underlying native function: K2_EnteredVolumeEvent 0x8adc354)
	void K2EnteredVolumeEvent(class AFortPlayerState*& PlayerState); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.IsWinningPlayerState (Underlying native function: IsWinningPlayerState 0x8adc2ac)
	bool IsWinningPlayerState(class APlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsWinningPlayerId (Underlying native function: IsWinningPlayerId 0x8adc1c0)
	bool IsWinningPlayerId(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsWaitingForCameras (Underlying native function: IsWaitingForCameras 0x8adc1a4)
	bool IsWaitingForCameras(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsTransitioning (Underlying native function: IsTransitioning 0x8adc188)
	bool IsTransitioning(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsTeamMinigame (Underlying native function: IsTeamMinigame 0x8adc16c)
	bool IsTeamMinigame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPregame (Underlying native function: IsPregame 0x8adc150)
	bool IsPregame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPostGame (Underlying native function: IsPostGame 0x8adc134)
	bool IsPostGame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerUsingClassSlot (Underlying native function: IsPlayerUsingClassSlot 0x8adc060)
	bool IsPlayerUsingClassSlot(class AFortPlayerState*& PlayerState, unsigned char& ClassSlot); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerTeleportingOrRespawningForGameplay (Underlying native function: IsPlayerTeleportingOrRespawningForGameplay 0x8adbfd0)
	bool IsPlayerTeleportingOrRespawningForGameplay(class AFortPlayerStateAthena*& PlayerToCheck); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerStartCompatibleWithPlayer (Underlying native function: IsPlayerStartCompatibleWithPlayer 0x8adbf00)
	struct FPlayerStartCompatibilityInfo IsPlayerStartCompatibleWithPlayer(class AController*& Player, class AFortPlayerStartCreative*& PlayerStart); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerSpectatingMinigame (Underlying native function: IsPlayerSpectatingMinigame 0x8adbdf0)
	bool IsPlayerSpectatingMinigame(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerOutOfLives (Underlying native function: IsPlayerOutOfLives 0x8adbd2c)
	bool IsPlayerOutOfLives(class AFortPlayerState*& InPlayerState, bool& bOnlyMinigamePlayers); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerOnRoundWinningTeam (Underlying native function: IsPlayerOnRoundWinningTeam 0x8adbc60)
	bool IsPlayerOnRoundWinningTeam(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerOnGameWinningTeam (Underlying native function: IsPlayerOnGameWinningTeam 0x8adbb54)
	bool IsPlayerOnGameWinningTeam(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerLocationBlockedForTeleport (Underlying native function: IsPlayerLocationBlockedForTeleport 0x8adb95c)
	bool IsPlayerLocationBlockedForTeleport(class AFortPlayerPawnAthena*& PlayerPawn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerInOurVolume (Underlying native function: IsPlayerInOurVolume 0x8adb8cc)
	bool IsPlayerInOurVolume(class AFortPlayerState*& PlayerState); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerInMinigameByNetId (Underlying native function: IsPlayerInMinigameByNetId 0x8adb7b4)
	bool IsPlayerInMinigameByNetId(struct FUniqueNetIdRepl& UniqueNetId, bool& bCheckSpectatingPlayers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsPlayerInMinigame (Underlying native function: IsPlayerInMinigame 0x8adb6f0)
	bool IsPlayerInMinigame(class AFortPlayerState*& PlayerState, bool& bCheckSpectatingPlayers); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsMinigameStarting (Underlying native function: IsMinigameStarting 0x8adb6d4)
	bool IsMinigameStarting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsMinigameStarter (Underlying native function: IsMinigameStarter 0x8adb644)
	bool IsMinigameStarter(class AFortPlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsMinigameComponent (Underlying native function: IsMinigameComponent 0x8adb58c)
	bool IsMinigameComponent(class UFortMinigameLogicComponent*& MinigameComponent); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsMinigameActor (Underlying native function: IsMinigameActor 0x8adb4c8)
	bool IsMinigameActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsLocationInsideTerrain (Underlying native function: IsLocationInsideTerrain 0x8adb3d8)
	bool IsLocationInsideTerrain(struct FVector& Location, struct FHitResult& OutHit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.IsLocationBlockedForTeleport (Underlying native function: IsLocationBlockedForTeleport 0x8adb1ac)
	bool IsLocationBlockedForTeleport(class AFortPlayerState*& PlayerState, struct FVector& LocationToCheck, struct FRotator& RotationToCheck); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.IsLastRound (Underlying native function: IsLastRound 0x8adb188)
	bool IsLastRound(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsInWarmup (Underlying native function: IsInWarmup 0x8adb16c)
	bool IsInWarmup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsInSetup (Underlying native function: IsInSetup 0x8adb150)
	bool IsInSetup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsInProgress (Underlying native function: IsInProgress 0x8adb130)
	bool IsInProgress(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsInPlayMode (Underlying native function: IsInPlayMode 0x8adb10c)
	bool IsInPlayMode(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsGameWinnerShown (Underlying native function: IsGameWinnerShown 0x8adb0e0)
	bool IsGameWinnerShown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsGameSessionInBackfillMode (Underlying native function: IsGameSessionInBackfillMode 0x8adb048)
	bool IsGameSessionInBackfillMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsCuratedHub (Underlying native function: IsCuratedHub 0x8adb024)
	bool IsCuratedHub(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsAnyPlayerSpawnLimited (Underlying native function: IsAnyPlayerSpawnLimited 0x8adaf88)
	bool IsAnyPlayerSpawnLimited(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.IsActorPositionInsideTerrain (Underlying native function: IsActorPositionInsideTerrain 0x8adae44)
	bool IsActorPositionInsideTerrain(class AActor*& Actor, struct FHitResult& OutHit); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.HighlightTopStats (Underlying native function: HighlightTopStats 0x8adadbc)
	static void HighlightTopStats(struct TArray<struct FMinigameScoreboardBucketRow>& InOutScoreboardRows); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.HasTimeLimit (Underlying native function: HasTimeLimit 0x8adad7c)
	bool HasTimeLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.HasStarted (Underlying native function: HasStarted 0x8adad60)
	bool HasStarted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.HasPlayerStartPads (Underlying native function: HasPlayerStartPads 0x8adaccc)
	bool HasPlayerStartPads(class AFortPlayerState*& InPlayerState); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMinigame.HasMinigameStarter (Underlying native function: HasMinigameStarter 0x8adac9c)
	bool HasMinigameStarter(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.HandleVolumeEditModeChange (Underlying native function: HandleVolumeEditModeChange 0x7a9ea30)
	void HandleVolumeEditModeChange(bool& bInEditMode); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.HandleReplicationComplete (Underlying native function: HandleReplicationComplete 0x8adac1c)
	void HandleReplicationComplete(class AFortPlayerControllerAthena*& PlayerController); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.HandlePostMinigameStarted (Underlying native function: HandlePostMinigameStarted 0x10c4d00)
	void HandlePostMinigameStarted(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.HandleMinigameWarmup (Underlying native function: HandleMinigameWarmup 0x6b13cb8)
	void HandleMinigameWarmup(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.HandleMinigameStarted (Underlying native function: HandleMinigameStarted 0x6e72510)
	void HandleMinigameStarted(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.HandleMinigameEnded (Underlying native function: HandleMinigameEnded 0x10c4ce8)
	void HandleMinigameEnded(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.HandleMinigameComponentRemoved (Underlying native function: HandleMinigameComponentRemoved 0x72ed728)
	void HandleMinigameComponentRemoved(class UFortMinigameLogicComponent*& MinigameComponent); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.HandleMinigameComponentInPlayChanged (Underlying native function: HandleMinigameComponentInPlayChanged 0x8adab98)
	void HandleMinigameComponentInPlayChanged(class UFortMinigameLogicComponent*& MinigameComponent); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.HandleMinigameComponentAdded (Underlying native function: HandleMinigameComponentAdded 0x854642c)
	void HandleMinigameComponentAdded(class UFortMinigameLogicComponent*& MinigameComponent); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.GetWinningTeamIndexFromTeamIndex (Underlying native function: GetWinningTeamIndexFromTeamIndex 0x8adaaec)
	unsigned char GetWinningTeamIndexFromTeamIndex(unsigned char& InTeamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetWarmupTimeRemaining (Underlying native function: GetWarmupTimeRemaining 0x8adaa74)
	float GetWarmupTimeRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetVehiclesDamageVehiclesMiniGame (Underlying native function: GetVehiclesDamageVehiclesMiniGame 0x8adaa5c)
	bool GetVehiclesDamageVehiclesMiniGame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetVehiclesDamageObjectsMiniGame (Underlying native function: GetVehiclesDamageObjectsMiniGame 0x8adaa44)
	bool GetVehiclesDamageObjectsMiniGame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetTimeRemainingUntilAutoStart (Underlying native function: GetTimeRemainingUntilAutoStart 0x8ada9cc)
	float GetTimeRemainingUntilAutoStart(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetTimeRemaining (Underlying native function: GetTimeRemaining 0x8ada950)
	float GetTimeRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetTeleporterManagerComponent (Underlying native function: GetTeleporterManagerComponent 0x8ada938)
	class UFortCreativeTeleporterManagerComponent* GetTeleporterManagerComponent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.GetTeamToSwapToWhenOutOfSpawns (Underlying native function: GetTeamToSwapToWhenOutOfSpawns 0x8ada8a8)
	unsigned char GetTeamToSwapToWhenOutOfSpawns(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetTeamName (Underlying native function: GetTeamName 0x8ada7cc)
	struct FText GetTeamName(unsigned char& TeamIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetTeamMembers (Underlying native function: GetTeamMembers 0x8ada6e8)
	void GetTeamMembers(unsigned char& TeamIndex, struct TArray<class AFortPlayerState*>& OutTeamMembers); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetTeamIndexForCosmeticDetails (Underlying native function: GetTeamIndexForCosmeticDetails 0x8ada65c)
	unsigned char GetTeamIndexForCosmeticDetails(unsigned char& TeamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetTeamColorIndex (Underlying native function: GetTeamColorIndex 0x8ada5d0)
	int GetTeamColorIndex(unsigned char& TeamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetStartQueryForPlayer (Underlying native function: GetStartQueryForPlayer 0x8ada51c)
	struct FGameplayTagQuery GetStartQueryForPlayer(class APlayerState*& Player); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMinigame.GetStandingsForPlayer (Underlying native function: GetStandingsForPlayer 0x8ada3bc)
	int GetStandingsForPlayer(class AFortPlayerState*& InPlayerState, class UFortMinigameStatFilter*& InFilter, struct TArray<struct FMinigameStatRow>& OutStatRows, int& RowsReturned); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.GetSpawnLocationSetting (Underlying native function: GetSpawnLocationSetting 0x8ada32c)
	enum EFortMinigamePlayerSpawnLocationSetting GetSpawnLocationSetting(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetSpawnLocationByTag (Underlying native function: GetSpawnLocationByTag 0x8ada16c)
	bool GetSpawnLocationByTag(struct FVector& OutLocation, struct FRotator& OutRotation, class AFortPlayerStateAthena*& PlayerState, struct FGameplayTag& SpawnTag, bool& bUseVolumeOnFail); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetScoreboardStateTimes (Underlying native function: GetScoreboardStateTimes 0x8ada0d0)
	void GetScoreboardStateTimes(struct TArray<float>& outStateTimes); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.GetScoreboardRowForPlayer (Underlying native function: GetScoreboardRowForPlayer 0x8ad9c94)
	bool GetScoreboardRowForPlayer(class AFortPlayerState*& PlayerState, struct FMinigameScoreboardPlayerRow& OutScoreboardRow, struct TArray<class UFortMinigameStatFilter*>& SortOrder, bool& bGameTotal, bool& bHighlighting, bool& bCountWins, enum EMinigameScoreboardStates& ScoreboardState, bool& bIncludeInactivePlayers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetRuntime (Underlying native function: GetRuntime 0x8ad9c28)
	float GetRuntime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetRoundWinner (Underlying native function: GetRoundWinner 0x8ad9b9c)
	int GetRoundWinner(int& round); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetRoundBasedGameWinnerNameOrTeam (Underlying native function: GetRoundBasedGameWinnerNameOrTeam 0x8ad9ad0)
	int GetRoundBasedGameWinnerNameOrTeam(struct FText& OutName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetRoundBasedGameWinnerName (Underlying native function: GetRoundBasedGameWinnerName 0x8ad9a28)
	int GetRoundBasedGameWinnerName(struct FText& OutName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetPostGameTimeRemaining (Underlying native function: GetPostGameTimeRemaining 0x8ad99b0)
	float GetPostGameTimeRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetPostGameResetDelay (Underlying native function: GetPostGameResetDelay 0x8ad9920)
	float GetPostGameResetDelay(enum EFortMinigameEnd& EndMethod); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetPlayersWithClassSlot (Underlying native function: GetPlayersWithClassSlot 0x8ad983c)
	void GetPlayersWithClassSlot(unsigned char& ClassSlot, struct TArray<class AFortPlayerState*>& OutPlayers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetPlayerStartComponentsByTagQuery (Underlying native function: GetPlayerStartComponentsByTagQuery 0x8ad9594)
	void GetPlayerStartComponentsByTagQuery(struct TArray<class UFortMinigamePlayerStartComponent*>& OutPlayerStartComponents, struct FGameplayTagQuery& TagQuery); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMinigame.GetPlayerSpawnOverrideDevices (Underlying native function: GetPlayerSpawnOverrideDevices 0x8ad9578)
	struct TArray<class AActor*> GetPlayerSpawnOverrideDevices(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetPlayersOrdered (Underlying native function: GetPlayersOrdered 0x8ad97b4)
	struct TArray<class AFortPlayerState*> GetPlayersOrdered(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetPlayerPlacement (Underlying native function: GetPlayerPlacement 0x8ad922c)
	int GetPlayerPlacement(class APlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetPlayerCount (Underlying native function: GetPlayerCount 0x8ad9194)
	int GetPlayerCount(bool& bIncludeSpectators); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetParticipatingPlayersForMinigame (Underlying native function: GetParticipatingPlayersForMinigame 0x8ad90f8)
	void GetParticipatingPlayersForMinigame(struct TArray<class AFortPlayerState*>& OutPlayers); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortMinigame.GetParticipatingPlayers (Underlying native function: GetParticipatingPlayers 0x8ad90f8)
	void GetParticipatingPlayers(struct TArray<class AFortPlayerState*>& OutPlayers); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetOrderedMinigameStatsRows (Underlying native function: GetOrderedMinigameStatsRows 0x8ad9050)
	bool GetOrderedMinigameStatsRows(struct TArray<struct FMinigameStatRow>& OutStats); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.GetMinigameNumTeams (Underlying native function: GetMinigameNumTeams 0x8ad9038)
	int GetMinigameNumTeams(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetMinigameMapPanelDisplayType (Underlying native function: GetMinigameMapPanelDisplayType 0x8ad9014)
	enum EMinigameFullscreenMapWidgetType GetMinigameMapPanelDisplayType(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetMinigameComponentsByTagQuery (Underlying native function: GetMinigameComponentsByTagQuery 0x8ad8eb4)
	void GetMinigameComponentsByTagQuery(struct TArray<class UFortMinigameLogicComponent*>& OutComponents, struct FGameplayTagQuery& TagQuery); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetMaxLivesForPlayer (Underlying native function: GetMaxLivesForPlayer 0x8ad8e24)
	int GetMaxLivesForPlayer(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetMaxInitTeamSize (Underlying native function: GetMaxInitTeamSize 0x8ad8d98)
	int GetMaxInitTeamSize(unsigned char& TeamIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetInitTeamSizeWeight (Underlying native function: GetInitTeamSizeWeight 0x8ad8d0c)
	int GetInitTeamSizeWeight(unsigned char& TeamIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetEndConditionValueForStatIfAny (Underlying native function: GetEndConditionValueForStatIfAny 0x8ad8c08)
	bool GetEndConditionValueForStatIfAny(unsigned char& TeamNumber, class UFortMinigameStatFilter*& InStat, int& OutValue); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.GetEndConditionForStatIfAny (Underlying native function: GetEndConditionForStatIfAny 0x8ad8ac0)
	bool GetEndConditionForStatIfAny(unsigned char& TeamNumber, class UFortMinigameStatFilter*& InStat, struct FMinigameEndCondition& OutEndCondition); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.GetDefaultClassSlot (Underlying native function: GetDefaultClassSlot 0x8ad8a30)
	unsigned char GetDefaultClassSlot(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetCustomScoreboardSettings (Underlying native function: GetCustomScoreboardSettings 0x8ad893c)
	void GetCustomScoreboardSettings(bool& bOutCustomScoreboardEnabled, float& OutCustomScoreboardDisplayTime); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetCurrentRoundWinnerName (Underlying native function: GetCurrentRoundWinnerName 0x8ad8870)
	bool GetCurrentRoundWinnerName(struct FText& OutName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetCurrentRoundWinner (Underlying native function: GetCurrentRoundWinner 0x8ad884c)
	int GetCurrentRoundWinner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetColumnSortedScoreboardRows (Underlying native function: GetColumnSortedScoreboardRows 0x8ad83f4)
	void GetColumnSortedScoreboardRows(struct TArray<struct FMinigameScoreboardBucketRow>& OutScoreboardRows, struct TArray<class UFortMinigameStatFilter*>& RowSortOrder, struct TArray<class UFortMinigameStatFilter*>& ColumnSortOrder, bool& bGameTotal, bool& bHighlighting, bool& bCountWins, bool& bIsCareerScoreboard, enum EMinigameScoreboardStates& ScoreboardState); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetClassSlotVisibleInUI (Underlying native function: GetClassSlotVisibleInUI 0x8ad8338)
	bool GetClassSlotVisibleInUI(unsigned char& ClassSlotIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetClassSlotName (Underlying native function: GetClassSlotName 0x8ad825c)
	struct FText GetClassSlotName(unsigned char& ClassSlotIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetClassSlotInventory (Underlying native function: GetClassSlotInventory 0x8ad8134)
	bool GetClassSlotInventory(unsigned char& ClassSlotIndex, struct TArray<struct FItemAndCount>& InventoryItems); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetClassSlotForPlayer (Underlying native function: GetClassSlotForPlayer 0x8ad8070)
	unsigned char GetClassSlotForPlayer(class AFortPlayerState*& PlayerState, bool& bUseDeathInfo); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetClassSlotForActor (Underlying native function: GetClassSlotForActor 0x8ad7f1c)
	unsigned char GetClassSlotForActor(class AActor*& Actor, bool& bUseDeathInfo); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetClassScopeForPlayer (Underlying native function: GetClassScopeForPlayer 0x8ad7e94)
	struct FName GetClassScopeForPlayer(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetBucketWinCount (Underlying native function: GetBucketWinCount 0x8ad7d8c)
	bool GetBucketWinCount(int& WinCount, int& BucketIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetBucketForTeamIndex (Underlying native function: GetBucketForTeamIndex 0x8ad7cb8)
	int GetBucketForTeamIndex(int& TeamIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetBucketForPlayerState (Underlying native function: GetBucketForPlayerState 0x8ad7bf4)
	int GetBucketForPlayerState(class APlayerState*& PlayerState, bool& bMatchCurrentTeam); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetBucketForPlayerId (Underlying native function: GetBucketForPlayerId 0x8ad7adc)
	int GetBucketForPlayerId(struct FUniqueNetIdRepl& PlayerId, bool& bMatchCurrentTeam); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.GetAirSpawnLocation (Underlying native function: GetAirSpawnLocation 0x8ad79a8)
	bool GetAirSpawnLocation(struct FVector& OutLocation, struct FRotator& OutRotation, class AFortPlayerStateAthena*& PlayerState); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMinigame.FormatStat (Underlying native function: FormatStat 0x8ad7898)
	static struct FText FormatStat(class UFortMinigameStatFilter*& InStat, int& InValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMinigame.ForceRespawn (Underlying native function: ForceRespawn 0x8ad73d4)
	bool ForceRespawn(class AFortPlayerState*& PlayerState, struct FGameplayTagContainer& RespawnReasons); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.EvaluateStatQuery (Underlying native function: EvaluateStatQuery 0x8ad72bc)
	bool EvaluateStatQuery(struct FMinigameEndCondition& InEndCondition, int& PlayerBucketIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.EndGame (Underlying native function: EndGame 0x8ad71f8)
	void EndGame(class AFortPlayerController*& InstigatorPC, enum EFortMinigameEnd& EndMethod); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.EnableCustomScoreboard (Underlying native function: EnableCustomScoreboard 0x8ad7174)
	void EnableCustomScoreboard(float& InDisplayTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.DoesTimerCountDown (Underlying native function: DoesTimerCountDown 0x8ad715c)
	bool DoesTimerCountDown(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.DoAllPlayersHaveSpawnLocation (Underlying native function: DoAllPlayersHaveSpawnLocation 0x8ad7080)
	bool DoAllPlayersHaveSpawnLocation(enum EFortMinigamePlayerSpawnLocationSetting& SpawnLocation); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.DisableCustomScoreboard (Underlying native function: DisableCustomScoreboard 0x8ad7068)
	void DisableCustomScoreboard(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.DetermineSpawnLocation (Underlying native function: DetermineSpawnLocation 0x8ad6eec)
	bool DetermineSpawnLocation(class AFortPlayerStateAthena*& PlayerState, struct FVector& OutLocation, struct FRotator& OutRotation, bool& bOutRespawningOnGround); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMinigame.DeclareWinnerImmediately (Underlying native function: DeclareWinnerImmediately 0x8ad6e5c)
	void DeclareWinnerImmediately(int& WinningBucket); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.ClearTeleportForMinigame (Underlying native function: ClearTeleportForMinigame 0x8ad6d5c)
	void ClearTeleportForMinigame(class AFortPlayerPawn*& InPawn); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.ClearPlayerInventory (Underlying native function: ClearPlayerInventory 0x70dc11c)
	void ClearPlayerInventory(class AFortPlayerControllerAthena*& PlayerController, bool& bPreventDrop); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.ClearFireVolumesForMinigame (Underlying native function: ClearFireVolumesForMinigame 0x8ad6d48)
	void ClearFireVolumesForMinigame(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.ChoosePlayerStart (Underlying native function: ChoosePlayerStart 0x8ad6c38)
	class AActor* ChoosePlayerStart(class AController*& Player, bool& bCheckEnemy, bool& bNearTeammates); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.CheckRemainingLivingPlayersForEndCondition (Underlying native function: CheckRemainingLivingPlayersForEndCondition 0x8ad6c14)
	bool CheckRemainingLivingPlayersForEndCondition(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.CheckEndConditionsInternal (Underlying native function: CheckEndConditionsInternal 0x8ad6c00)
	void CheckEndConditionsInternal(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.CheckEndConditions (Underlying native function: CheckEndConditions 0x8ad6bec)
	void CheckEndConditions(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMinigame.CanStartMinigame (Underlying native function: CanStartMinigame 0x8ad6bc8)
	bool CanStartMinigame(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.CanPlayerRespawn (Underlying native function: CanPlayerRespawn 0x8ad6b38)
	bool CanPlayerRespawn(class AFortPlayerState*& InPlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.CancelPendingClassSlotChange (Underlying native function: CancelPendingClassSlotChange 0x82886e8)
	void CancelPendingClassSlotChange(class AFortPlayerState*& PlayerState, unsigned char& PendingClassSlot); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.BroadcastStatsChangedDelegate (Underlying native function: BroadcastStatsChangedDelegate 0x8ad6b24)
	void BroadcastStatsChangedDelegate(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMinigame.AreTeamsAsymmetrical (Underlying native function: AreTeamsAsymmetrical 0x8ad6aec)
	bool AreTeamsAsymmetrical(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMinigame.AreEnoughPlayersLeftToContinueMatch (Underlying native function: AreEnoughPlayersLeftToContinueMatch 0x27c9608)
	bool AreEnoughPlayersLeftToContinueMatch(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMinigame.ApplyMutatorsToPlayer (Underlying native function: ApplyMutatorsToPlayer 0x70dc11c)
	void ApplyMutatorsToPlayer(class AFortPlayerState*& PlayerState, bool& bResetCurrentVitals); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.AdvanceState (Underlying native function: AdvanceState 0x8ad6ad8)
	void AdvanceState(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMinigame.AddToFireVolumesForMinigame (Underlying native function: AddToFireVolumesForMinigame 0x8ad6a14)
	void AddToFireVolumesForMinigame(class AGameplayVolume*& FireVolume, enum EDeviceFireVolumeFireOption& FireOption); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.AddPlayerSpawnOverrideDevice (Underlying native function: AddPlayerSpawnOverrideDevice 0x71a663c)
	void AddPlayerSpawnOverrideDevice(class AActor*& InOverrideDevice); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.AddPersistenceRequirement (Underlying native function: AddPersistenceRequirement 0x26daa0c)
	void AddPersistenceRequirement(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.AddOrOverrideEndConditionForTeam (Underlying native function: AddOrOverrideEndConditionForTeam 0x8ad692c)
	void AddOrOverrideEndConditionForTeam(unsigned char& TeamIndex, struct FFortMinigameStatQuery& StatQuery); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.AddOrOverrideEndCondition (Underlying native function: AddOrOverrideEndCondition 0x8ad6890)
	void AddOrOverrideEndCondition(struct FFortMinigameStatQuery& StatQuery); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.AddMinigamePlayer (Underlying native function: AddMinigamePlayer 0x8ad67c8)
	void AddMinigamePlayer(class AFortPlayerState*& PlayerState, bool& bForceSpawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.AddMinigameComponent (Underlying native function: AddMinigameComponent 0x8ad6748)
	void AddMinigameComponent(class UFortMinigameLogicComponent*& MinigameComponent); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.AddMinigameActor (Underlying native function: AddMinigameActor 0x8ad6644)
	void AddMinigameActor(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.AddExtensionWidget (Underlying native function: AddExtensionWidget 0x8ad6570)
	void AddExtensionWidget(struct FUIExtension& NewExtension); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMinigame.AccumulateTimeAliveForAlivePlayer (Underlying native function: AccumulateTimeAliveForAlivePlayer 0x8ad6464)
	void AccumulateTimeAliveForAlivePlayer(struct FMinigamePlayer& PlayerEntry); // (Final | Native | Public | HasOutParms)
};

