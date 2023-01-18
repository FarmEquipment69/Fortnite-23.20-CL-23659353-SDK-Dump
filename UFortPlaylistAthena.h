// Class /Script/FortniteGame.FortPlaylistAthena
// Size: 0xe00
class UFortPlaylistAthena : public UFortPlaylist
{
	bool bRewardsTrackPlacement; // 0x410 (0x1)
	bool bRewardsAllowXPProgression; // 0x411 (0x1)
	bool bRewardForRevivingTeammates; // 0x412 (0x1)
	enum ERewardPlacementBonusType RewardPlacementBonusType; // 0x413 (0x1)
	int RewardsPlacementThreshold; // 0x414 (0x4)
	enum ERewardTimePlayedType RewardTimePlayedType; // 0x418 (0x1)
	unsigned char unreflected_419[0x3]; // 0x419 (0x3) 
	int RewardTimePlayedXPPerMinute; // 0x41c (0x4)
	int RewardTimePlayedXPFlatValue; // 0x420 (0x4)
	unsigned char unreflected_424[0x4]; // 0x424 (0x4) 
	struct FScalableFloat InMatchXPRewardScalar; // 0x428 (0x28)
	struct TWeakObjectPtr<class UDataTable> QuestEventXPTableOverride; // 0x450 (0x28)
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> FirstWinRewards; // 0x478 (0x10)
	struct TArray<struct FString> CalendarEventsForEndOfMatchUpdate; // 0x488 (0x10)
	bool bAllowSinglePartyMatches; // 0x498 (0x1)
	bool bRequeueAfterFailedSessionAssignment; // 0x499 (0x1)
	bool bIsTournament; // 0x49a (0x1)
	bool bUseMultidivisionQueues; // 0x49b (0x1)
	int CompetitivePointClamp; // 0x49c (0x4)
	struct FString Strategy; // 0x4a0 (0x10)
	struct FName BotVersionPlaylistName; // 0x4b0 (0x4)
	int MaxBucketCapacity; // 0x4b4 (0x4)
	int MaxPendingMatches; // 0x4b8 (0x4)
	unsigned char unreflected_4bc[0x4]; // 0x4bc (0x4) 
	struct TArray<struct FRatingExpansion*> PriorityRatingExpansion; // 0x4c0 (0x10)
	struct TArray<struct FBracketDefinition*> BracketDefinitions; // 0x4d0 (0x10)
	bool bUseInputRules; // 0x4e0 (0x1)
	bool bAllowBackfill; // 0x4e1 (0x1)
	unsigned char unreflected_4e2[0x2]; // 0x4e2 (0x2) 
	int MinBackfillMatchPlayers; // 0x4e4 (0x4)
	int MaxTeamScoreAllowedForBackfill; // 0x4e8 (0x4)
	int MinPlayersForPrivateServer; // 0x4ec (0x4)
	float MaxTeamScoreDiscrepancyPercent; // 0x4f0 (0x4)
	bool bUsePlayerRating; // 0x4f4 (0x1)
	bool bEnableRatingUpdate; // 0x4f5 (0x1)
	bool bIsRankedMode; // 0x4f6 (0x1)
	unsigned char unreflected_4f7[0x1]; // 0x4f7 (0x1) 
	float RankLossMax; // 0x4f8 (0x4)
	float RankLossFloorMod; // 0x4fc (0x4)
	float KillerRankShare; // 0x500 (0x4)
	float DamageTakenMax; // 0x504 (0x4)
	float PlacementLossMin; // 0x508 (0x4)
	float PlacementGainMin; // 0x50c (0x4)
	int SeasonNumber; // 0x510 (0x4)
	bool bEnableDynamicBotBackfill; // 0x514 (0x1)
	unsigned char unreflected_515[0x3]; // 0x515 (0x3) 
	struct FString RatingType; // 0x518 (0x10)
	bool bRequireCrossplayEnabled; // 0x528 (0x1)
	bool bLimitedPoolMatchmakingEnabled; // 0x529 (0x1)
	bool bAllowedInLeto; // 0x52a (0x1)
	unsigned char unreflected_52b[0x1]; // 0x52b (0x1) 
	int LastQueuedPlaylistPriority; // 0x52c (0x4)
	bool bAllowInGameMatchMaking; // 0x530 (0x1)
	bool bAllowReturnToMatchmakingOriginOnMatchEnd; // 0x531 (0x1)
	bool bAllowBotsInHumanTeams; // 0x532 (0x1)
	bool bForceNewPlayerStateOnReconnect; // 0x533 (0x1)
	bool bShouldErrorOnAdditionalContentFailure; // 0x534 (0x1)
	bool bRemoveFromSquadOnLogout; // 0x535 (0x1)
	unsigned char unreflected_536[0x2]; // 0x536 (0x2) 
	int DADTestValue; // 0x538 (0x4)
	unsigned char unreflected_53c[0x4]; // 0x53c (0x4) 
	struct FString RequiredEntitlementToken; // 0x540 (0x10)
	float DelayForPreServerTransitionAnimation; // 0x550 (0x4)
	enum EAthenaWinCondition WinConditionType; // 0x554 (0x1)
	unsigned char unreflected_555[0x3]; // 0x555 (0x3) 
	struct FScalableFloat TimedWinConditionTime; // 0x558 (0x28)
	struct FScalableFloat FinalWinConditionTime; // 0x580 (0x28)
	struct FWinConditionScoreData ScoringData; // 0x5a8 (0x60)
	struct FScalableFloat TimedSafeZonePhaseTime; // 0x608 (0x28)
	int WinConditionPlayersRemaining; // 0x630 (0x4)
	unsigned char unreflected_634[0x4]; // 0x634 (0x4) 
	struct FScalableFloat NumWinningTeamsCN; // 0x638 (0x28)
	bool bIsLargeTeamGame; // 0x660 (0x1)
	bool bShouldSpreadTeams; // 0x661 (0x1)
	bool bIgnoreDefaultQuests; // 0x662 (0x1)
	bool bDisallowMultipleWeaponsOfType; // 0x663 (0x1)
	bool bAllowEditingEnemyWalls; // 0x664 (0x1)
	unsigned char unreflected_665[0x3]; // 0x665 (0x3) 
	int LootDropRounds; // 0x668 (0x4)
	float ForceKickAfterDeathTime; // 0x66c (0x4)
	enum EForceKickAfterDeathMode ForceKickAfterDeathMode; // 0x670 (0x1)
	enum EWeaponSelectionPreservationType QuickbarSelectionPreservationMode; // 0x671 (0x1)
	unsigned char unreflected_672[0x6]; // 0x672 (0x6) 
	struct FGameplayTagContainer AlwaysAllowedNativeActions; // 0x678 (0x20)
	struct FScalableFloat PawnForcedCullDistance; // 0x698 (0x28)
	struct FScalableFloat TransientMatchStartBonusCurrency; // 0x6c0 (0x28)
	struct TArray<struct FItemAndCount> InventoryItemsToGrant; // 0x6e8 (0x10)
	bool bIgnoreGameModeStartingInventory; // 0x6f8 (0x1)
	unsigned char unreflected_6f9[0x7]; // 0x6f9 (0x7) 
	struct FGameplayTagContainer MatchingQuestTags; // 0x700 (0x20)
	bool bRequirePickaxeInStartingInventory; // 0x720 (0x1)
	unsigned char unreflected_721[0x3]; // 0x721 (0x3) 
	float DestructedBuildingInGridTimeout; // 0x724 (0x4)
	bool bTeamFilterDestructedBuildingsInGrid; // 0x728 (0x1)
	bool bOwnerFilterDestructedBuildingsInGrid; // 0x729 (0x1)
	bool bEnableBuildingCreatedEvent; // 0x72a (0x1)
	unsigned char unreflected_72b[0x1]; // 0x72b (0x1) 
	float MaximumAspectRatio; // 0x72c (0x4)
	bool bVehiclesDestroyAllBuildingSMActorsOnContact; // 0x730 (0x1)
	unsigned char unreflected_731[0x7]; // 0x731 (0x7) 
	class UClass* VehicleBoundsXYSplineClass; // 0x738 (0x8)
	bool bAutoAcquireSpawnChip; // 0x740 (0x1)
	unsigned char unreflected_741[0x7]; // 0x741 (0x7) 
	class USoundMix* SoundMix; // 0x748 (0x8)
	bool bAllowHardcoreModifiers; // 0x750 (0x1)
	bool bForceCameraFadeOnRespawn; // 0x751 (0x1)
	unsigned char unreflected_752[0x2]; // 0x752 (0x2) 
	float MinTimeBeforeRespawnCameraFade; // 0x754 (0x4)
	enum EAthenaRespawnType RespawnType; // 0x758 (0x1)
	unsigned char unreflected_759[0x7]; // 0x759 (0x7) 
	struct FScalableFloat RespawnHeight; // 0x760 (0x28)
	struct FScalableFloat MaxRespawnHeight; // 0x788 (0x28)
	struct FScalableFloat RespawnTime; // 0x7b0 (0x28)
	bool bRespawnInAir; // 0x7d8 (0x1)
	unsigned char unreflected_7d9[0x7]; // 0x7d9 (0x7) 
	struct FScalableFloat RespawnLevelStreamDistanceToForceScreenFade; // 0x7e0 (0x28)
	bool bForceRespawnLocationInsideOfVolume; // 0x808 (0x1)
	bool bSkipWarmup; // 0x809 (0x1)
	bool bSkipAircraft; // 0x80a (0x1)
	bool bAllowWarmupPlayerStartInSetupPhase; // 0x80b (0x1)
	float WarmupEarlyRequiredPlayerPercent; // 0x80c (0x4)
	enum EAirCraftBehavior AirCraftBehavior; // 0x810 (0x1)
	bool bUseCustomAircraftPathSelection; // 0x811 (0x1)
	bool bUseSameDirectionForOpposingAircraft; // 0x812 (0x1)
	bool bAircraftDropOnlyWithinSafeZone; // 0x813 (0x1)
	unsigned char unreflected_814[0x4]; // 0x814 (0x4) 
	struct FScalableFloat AircraftSafetyMarginPct; // 0x818 (0x28)
	float AircraftPathOffsetFromMapCenterMin; // 0x840 (0x4)
	float AircraftPathOffsetFromMapCenterMax; // 0x844 (0x4)
	float AircraftPathMidpointSelectionRadiusMin; // 0x848 (0x4)
	float AircraftPathMidpointSelectionRadiusMax; // 0x84c (0x4)
	float LastStepPushAircraftCenterLineMagnitude; // 0x850 (0x4)
	float LastStepPushAircraftCenterLineDirection; // 0x854 (0x4)
	bool bDisableAudioShapes; // 0x858 (0x1)
	unsigned char unreflected_859[0x3]; // 0x859 (0x3) 
	float NonRenderedCharacterAnimationScale; // 0x85c (0x4)
	class UClass* PlaylistMissionGen; // 0x860 (0x8)
	bool bForceLTMLoadingScreenBackground; // 0x868 (0x1)
	unsigned char unreflected_869[0x7]; // 0x869 (0x7) 
	struct TWeakObjectPtr<class UClass> LoadingScreenWidget; // 0x870 (0x28)
	struct TArray<struct FUIExtension> UIExtensions; // 0x898 (0x10)
	struct TWeakObjectPtr<class UFortPlaylistUIInfo> PlaylistUIData; // 0x8a8 (0x28)
	struct TWeakObjectPtr<class UFortAthenaHUDInfoDataAsset> HUDInfoDataAsset; // 0x8d0 (0x28)
	class UTexture2D* MissionIcon; // 0x8f8 (0x8)
	struct FText UIDisplaySubName; // 0x900 (0x18)
	bool bLimitedTimeMode; // 0x918 (0x1)
	bool bDisableReportAPlayerReasonTeamingUpWithEnemiesWhileInGame; // 0x919 (0x1)
	bool bDisplayScoreInHUD; // 0x91a (0x1)
	bool bDisplayRespawnWidget; // 0x91b (0x1)
	bool bDisableMatchStatsDisplay; // 0x91c (0x1)
	unsigned char unreflected_91d[0x3]; // 0x91d (0x3) 
	struct FDataTableRowHandle SpecialActorInputActionDataTableRow; // 0x920 (0x10)
	bool bEnforceFullSquadInUI; // 0x930 (0x1)
	bool bShowEliminationIndicatorForSelf; // 0x931 (0x1)
	bool bShowEliminationIndicatorForSquadmates; // 0x932 (0x1)
	bool bShowEliminationIndicatorForTeammates; // 0x933 (0x1)
	bool bShowEliminationIndicatorForEnemies; // 0x934 (0x1)
	unsigned char unreflected_935[0x3]; // 0x935 (0x3) 
	struct FScalableFloat EliminationIndicatorMaxDistance; // 0x938 (0x28)
	bool bLeaderboardDisplaysIndividuals; // 0x960 (0x1)
	bool bUsePointLeaderAsTeamLeaderInLeaderboard; // 0x961 (0x1)
	enum EFortLeaderboardMetric TypeOfLeaderboard; // 0x962 (0x1)
	unsigned char unreflected_963[0x5]; // 0x963 (0x5) 
	struct FScalableFloat OnlyRespectsGlobalSettingForReplayRecording; // 0x968 (0x28)
	struct FScalableFloat DisableReplays; // 0x990 (0x28)
	struct FScalableFloat EnableServerReplays; // 0x9b8 (0x28)
	struct FScalableFloat ShouldUseCustomGameChannel; // 0x9e0 (0x28)
	struct FScalableFloat ShouldRejectDefaultGameChat; // 0xa08 (0x28)
	enum ECustomGameVoiceChannel CustomGameChannel; // 0xa30 (0x1)
	unsigned char unreflected_a31[0x7]; // 0xa31 (0x7) 
	struct FScalableFloat ShouldRecommendCustomGameChannel; // 0xa38 (0x28)
	bool bForceGameChannel; // 0xa60 (0x1)
	unsigned char unreflected_a61[0xf]; // 0xa61 (0xf) 
	struct FSlateBrush MapImageOverride; // 0xa70 (0xc0)
	float MapScaleOverride; // 0xb30 (0x4)
	bool bDrawCreativeDynamicIslands; // 0xb34 (0x1)
	unsigned char unreflected_b35[0x3]; // 0xb35 (0x3) 
	struct TWeakObjectPtr<class UClass> MapManagerClass; // 0xb38 (0x28)
	bool bUseAsyncPhysics; // 0xb60 (0x1)
	enum EFortServerTickRate ServerMaxTickRate; // 0xb61 (0x1)
	bool bOverrideServerPerClientMaxAI; // 0xb62 (0x1)
	unsigned char unreflected_b63[0x1]; // 0xb63 (0x1) 
	int ServerPerClientMaxAI; // 0xb64 (0x4)
	enum ESafeZoneStartUp SafeZoneStartUp; // 0xb68 (0x1)
	bool bWarmUpInStorm; // 0xb69 (0x1)
	unsigned char unreflected_b6a[0x2]; // 0xb6a (0x2) 
	float StormEffectDelay; // 0xb6c (0x4)
	bool bDisplayFinalStormPosition; // 0xb70 (0x1)
	bool bDrawLineToStormCircleIfOutside; // 0xb71 (0x1)
	unsigned char unreflected_b72[0x2]; // 0xb72 (0x2) 
	int LastSafeZoneIndex; // 0xb74 (0x4)
	struct TWeakObjectPtr<class UCurveTable> SafeZoneLocationBlacklist; // 0xb78 (0x28)
	struct TWeakObjectPtr<class UDataTable> CreativeItemListSource; // 0xba0 (0x28)
	struct TWeakObjectPtr<class UDataTable> UpgradeBenchData; // 0xbc8 (0x28)
	struct TWeakObjectPtr<class UDataTable> AILootOnDeathData; // 0xbf0 (0x28)
	struct TWeakObjectPtr<class UDataTable> HeroStats; // 0xc18 (0x28)
	bool bUseDefaultSupplyDrops; // 0xc40 (0x1)
	unsigned char unreflected_c41[0x7]; // 0xc41 (0x7) 
	struct TArray<struct FSupplyDropModifierData> SupplyDropModifierList; // 0xc48 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortSupplyDropInfo>> SupplyDropInfoList; // 0xc58 (0x10)
	struct TArray<struct TWeakObjectPtr<class UDataTable>> QueryNameToLootChanceScaleTables; // 0xc68 (0x10)
	struct TArray<struct TWeakObjectPtr<class UDataTable>> QueryNameToLootCountScaleTables; // 0xc78 (0x10)
	struct TWeakObjectPtr<class UFortAthenaExitCraftInfo> ExitCraftInfo; // 0xc88 (0x28)
	bool bPlaylistUsesCustomCharacterParts; // 0xcb0 (0x1)
	unsigned char unreflected_cb1[0x7]; // 0xcb1 (0x7) 
	struct TArray<struct FCharacterPreloadBlock> CharactersToPreload; // 0xcb8 (0x10)
	struct TArray<struct FCharacterFallbackPreloadBlock*> CharacterFallbackTagsToPreload; // 0xcc8 (0x10)
	struct TArray<struct FGameplayTag> AIPawnCustomizationFallbackTagsToPreload; // 0xcd8 (0x10)
	struct TArray<struct TWeakObjectPtr<class UFortSpawnActorInfo>> SpawnActorInfoList; // 0xce8 (0x10)
	int NetActorDiscoveryBudgetInKBytesPerSec; // 0xcf8 (0x4)
	int NetDormancyNumFramesUntilObsolete; // 0xcfc (0x4)
	unsigned char bEnableCreativeMode; // 0xd00 (0x1)
	unsigned char bEnableSpawningStartup; // 0xd00 (0x1)
	unsigned char bAllowTeamSwitching; // 0xd00 (0x1)
	unsigned char bShowTeamSelectButton; // 0xd00 (0x1)
	unsigned char bAllowLayoutRequirementsFeature; // 0xd00 (0x1)
	unsigned char bUseCreativeStarterIsland; // 0xd00 (0x1)
	unsigned char bForceCustomMinigame; // 0xd00 (0x1)
	unsigned char bPreloadAthenaMapsForMatchmaking; // 0xd00 (0x1)
	bool bUsesAnimationSharing; // 0xd01 (0x1)
	unsigned char unreflected_d02[0x6]; // 0xd02 (0x6) 
	struct TWeakObjectPtr<class UAnimationSharingSetup> AnimationSharingSetup; // 0xd08 (0x28)
	bool bAllowBroadcasting; // 0xd30 (0x1)
	bool bAllowSpectateAPartyMember; // 0xd31 (0x1)
	bool bActivateCurie; // 0xd32 (0x1)
	unsigned char unreflected_d33[0x5]; // 0xd33 (0x5) 
	class UFortCurieSettings* CurieSettings; // 0xd38 (0x8)
	struct TArray<struct FName> CurieManagerConfigOverrides; // 0xd40 (0x10)
	int PlaylistStatId; // 0xd50 (0x4)
	bool bAccumulateToProfileStats; // 0xd54 (0x1)
	bool bSaveToRecentGameList; // 0xd55 (0x1)
	bool bEnableStatsV2Stats; // 0xd56 (0x1)
	unsigned char unreflected_d57[0x1]; // 0xd57 (0x1) 
	struct TWeakObjectPtr<class UAthenaAISettings> AISettings; // 0xd58 (0x28)
	struct TWeakObjectPtr<class UClass> DefaultCreativeTOD; // 0xd80 (0x28)
	struct FScalableFloat MaxVehiclesCanSpawnWithTireMod; // 0xda8 (0x28)
	struct FScalableFloat PercentChanceSpawnWithTireMod; // 0xdd0 (0x28)
	float WaitForServerInitializationTimeoutSecondsOverride; // 0xdf8 (0x4)
	unsigned char padding_dfc[0x4]; // 0xdfc (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortPlaylistAthena.GetMaxTeamSize (Underlying native function: GetMaxTeamSize 0x8415824)
	static int GetMaxTeamSize(class UObject*& InWorldContext, class UFortPlaylistAthena*& InPlaylist); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlaylistAthena.GetMaxPlayerCount (Underlying native function: GetMaxPlayerCount 0x8415760)
	static int GetMaxPlayerCount(class UObject*& InWorldContext, class UFortPlaylistAthena*& InPlaylist); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlaylistAthena.GetMaxNumberOfTeams (Underlying native function: GetMaxNumberOfTeams 0x841569c)
	static int GetMaxNumberOfTeams(class UObject*& InWorldContext, class UFortPlaylistAthena*& InPlaylist); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlaylistAthena.GetLastTeamNumber (Underlying native function: GetLastTeamNumber 0x84155d8)
	static int GetLastTeamNumber(class UObject*& InWorldContext, class UFortPlaylistAthena*& InPlaylist); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlaylistAthena.CreateCalendarPayload_RegionalOverride (Underlying native function: CreateCalendarPayload_RegionalOverride 0x26daa0c)
	void CreateCalendarPayloadRegionalOverride(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlaylistAthena.CreateCalendarPayload_Enabling (Underlying native function: CreateCalendarPayload_Enabling 0x26daa0c)
	void CreateCalendarPayloadEnabling(); // (Final | Exec | Native | Public)
};

