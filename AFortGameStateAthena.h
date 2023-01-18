// Class /Script/FortniteGame.FortGameStateAthena
// Size: 0x3120
class AFortGameStateAthena : public AFortGameStateZone
{
	unsigned char unreflected_1000[0x98]; // 0x1000 (0x98) 
	bool bCanBuildOnWaterGlobal; // 0x1098 (0x1)
	bool bBlockBuildOnWaterGlobal; // 0x1099 (0x1)
	unsigned char unreflected_109a[0x36]; // 0x109a (0x36) 
	struct FMulticastInlineDelegate OnNewContentUpdateMessageRecieved; // 0x10d0 (0x10)
	struct FMulticastInlineDelegate OnNewScreenLogMessageReceived; // 0x10e0 (0x10)
	bool bIsGrassFireBoundsUpdateEnabled; // 0x10f0 (0x1)
	bool bCanSpawnLoot; // 0x10f1 (0x1)
	unsigned char unreflected_10f2[0x1e]; // 0x10f2 (0x1e) 
	class UCurveTable* AthenaGameDataTable; // 0x1110 (0x8)
	struct TArray<struct FName> AthenaGameDataResetRows; // 0x1118 (0x10)
	class UCurveTable* ResetAthenaGameDataTable; // 0x1128 (0x8)
	bool bIsUsingDownloadOnDemand; // 0x1130 (0x1)
	bool bWantsHoldoverPluginOnClient; // 0x1131 (0x1)
	unsigned char unreflected_1132[0x2e]; // 0x1132 (0x2e) 
	struct FMulticastInlineDelegate OnCurrentPlaylistLoaded; // 0x1160 (0x10)
	unsigned char unreflected_1170[0x48]; // 0x1170 (0x48) 
	bool bPlaylistDataIsLoaded; // 0x11b8 (0x1)
	unsigned char unreflected_11b9[0x1]; // 0x11b9 (0x1) 
	bool bPlaylistDataIsActivelyLoading; // 0x11ba (0x1)
	unsigned char unreflected_11bb[0x5]; // 0x11bb (0x5) 
	struct FMulticastInlineDelegate AllWinnersAnnounced; // 0x11c0 (0x10)
	struct FMulticastInlineDelegate WinnerInfoDisplayReadyCN; // 0x11d0 (0x10)
	struct FMulticastInlineDelegate CountdownTick; // 0x11e0 (0x10)
	struct FMulticastInlineDelegate CountdownStarted; // 0x11f0 (0x10)
	struct FMulticastInlineDelegate CountdownFinished; // 0x1200 (0x10)
	struct FMulticastInlineDelegate CountdownStopped; // 0x1210 (0x10)
	struct FMulticastInlineDelegate FinalCountdownTick; // 0x1220 (0x10)
	struct FMulticastInlineDelegate FinalCountdownStarted; // 0x1230 (0x10)
	struct FMulticastInlineDelegate FinalCountdownFinished; // 0x1240 (0x10)
	struct FMulticastInlineDelegate CurrentHighScoreUpdated; // 0x1250 (0x10)
	struct FMulticastInlineDelegate OnGoalScoreChanged; // 0x1260 (0x10)
	struct FMulticastInlineDelegate OnPickupSpawnedAndReady; // 0x1270 (0x10)
	struct FMulticastInlineDelegate OnPickupDestroy; // 0x1280 (0x10)
	struct FMulticastInlineDelegate GameModeMessageRequest; // 0x1290 (0x10)
	struct FMulticastInlineDelegate ContextTutorialGameModeMessageRequest; // 0x12a0 (0x10)
	struct FMulticastInlineDelegate HideGameModeMessageRequest; // 0x12b0 (0x10)
	struct FMulticastInlineDelegate GameModeMessageSuccess; // 0x12c0 (0x10)
	struct FMulticastInlineDelegate ShowGameModeMessage; // 0x12d0 (0x10)
	struct FMulticastInlineDelegate HideGameModeMessage; // 0x12e0 (0x10)
	struct FMulticastInlineDelegate ShowMarkerGameMode; // 0x12f0 (0x10)
	struct FMulticastInlineDelegate HideMarkerGameMode; // 0x1300 (0x10)
	struct FMulticastInlineDelegate RepositionGameModeMessage; // 0x1310 (0x10)
	struct FMulticastInlineDelegate SetDefaultPositionGameModeMessage; // 0x1320 (0x10)
	struct FMulticastInlineDelegate OnPlayerLeftCreativeIsland; // 0x1330 (0x10)
	struct FMulticastInlineDelegate OnPlayerJoinedCreativeIsland; // 0x1340 (0x10)
	struct FMulticastInlineDelegate MutatorGenericIntegerUpdated; // 0x1350 (0x10)
	struct FMulticastInlineDelegate MutatorGameplayEvent; // 0x1360 (0x10)
	struct FMulticastInlineDelegate OnSafeZoneIndicatorChanged; // 0x1370 (0x10)
	unsigned char unreflected_1380[0x48]; // 0x1380 (0x48) 
	float PlaylistEndTime; // 0x13c8 (0x4)
	unsigned char unreflected_13cc[0x4]; // 0x13cc (0x4) 
	float SafeZonePauseTime; // 0x13d0 (0x4)
	unsigned char unreflected_13d4[0x4]; // 0x13d4 (0x4) 
	int TotalFinalCountdownTime; // 0x13d8 (0x4)
	bool bForceTeamScorePlacementOnDeath; // 0x13dc (0x1)
	bool bPlaylistStoppedSafeZonePhases; // 0x13dd (0x1)
	bool bSkyTubesShuttingDown; // 0x13de (0x1)
	bool bSkyTubesDisabled; // 0x13df (0x1)
	unsigned char unreflected_13e0[0x8]; // 0x13e0 (0x8) 
	int ServerChangelistNumber; // 0x13e8 (0x4)
	unsigned char unreflected_13ec[0x4]; // 0x13ec (0x4) 
	class AFortSpecialActorReplicationInfo* SpecialActorData; // 0x13f0 (0x8)
	class AFortPropertyOverrideReplShared* ReplOverrideData; // 0x13f8 (0x8)
	struct TArray<class UClass*> BuildingActorClasses; // 0x1400 (0x10)
	struct FMulticastInlineDelegate WinnerAnnounced; // 0x1410 (0x10)
	struct FMulticastInlineDelegate WinningTeamAnnounced; // 0x1420 (0x10)
	struct FMulticastInlineDelegate GamePhaseChanged; // 0x1430 (0x10)
	struct FMulticastInlineDelegate WinningScoreDetermined; // 0x1440 (0x10)
	struct FMulticastInlineDelegate GamePhaseStepChanged; // 0x1450 (0x10)
	struct FMulticastInlineDelegate StormCapStateChanged; // 0x1460 (0x10)
	struct FMulticastInlineDelegate StormProgressStopped; // 0x1470 (0x10)
	struct FMulticastInlineDelegate ActiveTeamArrayBuiltEvent; // 0x1480 (0x10)
	struct FMulticastInlineDelegate OnPlayersLeftChanged; // 0x1490 (0x10)
	struct FMulticastInlineDelegate OnTeamsLeftChanged; // 0x14a0 (0x10)
	struct FMulticastInlineDelegate OnWinConditionMetCN; // 0x14b0 (0x10)
	struct FMulticastInlineDelegate UpdateNamedPoiColorDelegate; // 0x14c0 (0x10)
	struct FMulticastInlineDelegate OnWarmupCountdownEndTimeUpdated; // 0x14d0 (0x10)
	bool bSkipWinnerAnnounced; // 0x14e0 (0x1)
	bool bStopBuildingHealingOnDamage; // 0x14e1 (0x1)
	bool bIsInCountdown; // 0x14e2 (0x1)
	bool bIsInFinalCountdown; // 0x14e3 (0x1)
	float WarmupCountdownStartTime; // 0x14e4 (0x4)
	float WarmupCountdownEndTime; // 0x14e8 (0x4)
	float AircraftStartTime; // 0x14ec (0x4)
	float SafeZonesStartTime; // 0x14f0 (0x4)
	float EndGameStartTime; // 0x14f4 (0x4)
	float EndGameKickPlayerTime; // 0x14f8 (0x4)
	int TotalPlayers; // 0x14fc (0x4)
	int PlayersLeft; // 0x1500 (0x4)
	unsigned char unreflected_1504[0x4]; // 0x1504 (0x4) 
	struct TArray<> ClientVehicleClassesToLoad; // 0x1508 (0x10)
	struct TArray<class UFortItemDefinition*> ClientItemDefsToLoad; // 0x1518 (0x10)
	struct TArray<class AFortProjectileBase*> PredictedProjectiles; // 0x1528 (0x10)
	float RemainingFocalPointActorDuration; // 0x1538 (0x4)
	unsigned char unreflected_153c[0x4]; // 0x153c (0x4) 
	class AActor* FocalPointActor; // 0x1540 (0x8)
	float FocalPointRotationInterpSpeed; // 0x1548 (0x4)
	unsigned char unreflected_154c[0x4]; // 0x154c (0x4) 
	struct FVector_NetQuantize FocalPointOffset; // 0x1550 (0x18)
	float FocalPointFOV; // 0x1568 (0x4)
	unsigned char unreflected_156c[0xc0]; // 0x156c (0xc0) 
	bool bCheatRespawnEnabled; // 0x162c (0x1)
	enum EAthenaStormCapState StormCapState; // 0x162d (0x1)
	unsigned char unreflected_162e[0x2]; // 0x162e (0x2) 
	int CurrentPlayerCap; // 0x1630 (0x4)
	struct FStormCapDamageThresholdInfo* DamageForStormCapMarking; // 0x1634 (0x8)
	unsigned char unreflected_163c[0x4]; // 0x163c (0x4) 
	struct TArray<int> TeamXPlayersLeft; // 0x1640 (0x10)
	struct TArray<struct FFortWinnerPlayerData> WinningPlayerList; // 0x1650 (0x10)
	int TeamsLeft; // 0x1660 (0x4)
	unsigned char unreflected_1664[0x4]; // 0x1664 (0x4) 
	struct TArray<unsigned char> WinningTeamsCN; // 0x1668 (0x10)
	struct TArray<class UObject*> ServerToClientPreloadList; // 0x1678 (0x10)
	class UAthenaBattleBusItemDefinition* DefaultBattleBus; // 0x1688 (0x8)
	bool bAllowUserPickedCosmeticBattleBus; // 0x1690 (0x1)
	unsigned char unreflected_1691[0x7]; // 0x1691 (0x7) 
	struct TArray<struct FAircraftFlightInfo> TeamFlightPaths; // 0x1698 (0x10)
	struct FAircraftFlightInfo FlightPathMidLine; // 0x16a8 (0x48)
	struct FVector2D DropZoneCenter; // 0x16f0 (0x10)
	struct FVector2D FlightPathSelectionCenter; // 0x1700 (0x10)
	struct FDateTime* UtcTimeStartedMatch; // 0x1710 (0x8)
	bool bIsLargeTeamGame; // 0x1718 (0x1)
	unsigned char unreflected_1719[0x7]; // 0x1719 (0x7) 
	class APlayerState* WinningPlayerState; // 0x1720 (0x8)
	unsigned char unreflected_1728[0x10]; // 0x1728 (0x10) 
	int WinningTeam; // 0x1738 (0x4)
	int WinningScore; // 0x173c (0x4)
	int CurrentHighScore; // 0x1740 (0x4)
	int CurrentHighScoreTeam; // 0x1744 (0x4)
	class USoundCue* SupplyDropWaveStartedSoundCue; // 0x1748 (0x8)
	unsigned char unreflected_1750[0x20]; // 0x1750 (0x20) 
	struct TArray<struct FText> KillFeedEntry; // 0x1770 (0x10)
	unsigned char unreflected_1780[0x10]; // 0x1780 (0x10) 
	struct FMulticastInlineDelegate KillFeedUpdated; // 0x1790 (0x10)
	struct TArray<class AFortPlayerState*> SpectatorArray; // 0x17a0 (0x10)
	struct TArray<class AFortPlayerState*> PartyMemberSpectatorArray; // 0x17b0 (0x10)
	enum EAirCraftBehavior AirCraftBehavior; // 0x17c0 (0x1)
	unsigned char unreflected_17c1[0x1]; // 0x17c1 (0x1) 
	bool bStormReachedFinalPosition; // 0x17c2 (0x1)
	enum EFriendlyFireType FriendlyFireType; // 0x17c3 (0x1)
	unsigned char unreflected_17c4[0x1c]; // 0x17c4 (0x1c) 
	bool SpectateAPartyMemberAvailable; // 0x17e0 (0x1)
	unsigned char unreflected_17e1[0x117]; // 0x17e1 (0x117) 
	struct FGameMemberInfoArray GameMemberInfoArray; // 0x18f8 (0x120)
	unsigned char unreflected_1a18[0x78]; // 0x1a18 (0x78) 
	struct TArray<unsigned char> ActiveTeamNums; // 0x1a90 (0x10)
	int CurrentPlaylistId; // 0x1aa0 (0x4)
	unsigned char unreflected_1aa4[0x4]; // 0x1aa4 (0x4) 
	class AFortSafeZoneIndicator* SafeZoneIndicator; // 0x1aa8 (0x8)
	class UMaterialInstanceDynamic* MinimapBackgroundMID; // 0x1ab0 (0x8)
	class UMaterialInstanceDynamic* MinimapCircleMID; // 0x1ab8 (0x8)
	class UMaterialInstanceDynamic* MinimapNextCircleMID; // 0x1ac0 (0x8)
	class UMaterialInstanceDynamic* FullmapCircleMID; // 0x1ac8 (0x8)
	class UMaterialInstanceDynamic* FullmapNextCircleMID; // 0x1ad0 (0x8)
	unsigned char unreflected_1ad8[0x8]; // 0x1ad8 (0x8) 
	struct FSlateBrush MinimapSafeZoneBrush; // 0x1ae0 (0xc0)
	struct FSlateBrush MinimapCircleBrush; // 0x1ba0 (0xc0)
	struct FSlateBrush MinimapNextCircleBrush; // 0x1c60 (0xc0)
	struct FSlateBrush FullMapCircleBrush; // 0x1d20 (0xc0)
	struct FSlateBrush FullMapNextCircleBrush; // 0x1de0 (0xc0)
	struct FSlateBrush MinimapSafeZoneFinalPosBrush; // 0x1ea0 (0xc0)
	struct FSlateBrush AircraftPathBrush; // 0x1f60 (0xc0)
	struct FSlateBrush AircraftMidlinePathBrush; // 0x2020 (0xc0)
	struct FSlateBrush AircraftPathTeamIndicatorBrush; // 0x20e0 (0xc0)
	class UMaterialInterface* MiniMapBackgroundDrawingMaterial; // 0x21a0 (0x8)
	class UMaterialInterface* MiniMapCircleDrawingMaterial; // 0x21a8 (0x8)
	class UMaterialInterface* MiniMapNextCircleDrawingMaterial; // 0x21b0 (0x8)
	class UMaterialInterface* MiniMapRadiusTrackerCircleDrawingMaterial; // 0x21b8 (0x8)
	struct FName RadiusTrackerCircleCenterAndRadiusParameterName; // 0x21c0 (0x4)
	struct FName RadiusTrackerCircleColorParameterName; // 0x21c4 (0x4)
	struct TArray<struct FDynamicLandData> DynamicShadows; // 0x21c8 (0x10)
	struct TArray<struct FDynamicLandData> DynamicLands; // 0x21d8 (0x10)
	class AFortAthenaMapInfo* MapInfo; // 0x21e8 (0x8)
	class UMaterialParameterCollection* MinimapMPC; // 0x21f0 (0x8)
	class AFortBroadcastSpectatorInfo* BroadcastSpectatorInfo; // 0x21f8 (0x8)
	class USplatterGridSystem* SplatterGridSystem; // 0x2200 (0x8)
	class UFortCustomizationsPreloader* CustomizationsPreloader; // 0x2208 (0x8)
	struct TArray<struct FAICharacterPartsPreloadData> AICharacterPartsPreloadData; // 0x2210 (0x10)
	struct TArray<struct FAIPawnCustomizationPreloadData> AIPawnCustomizationPreloadData; // 0x2220 (0x10)
	unsigned char unreflected_2230[0x20]; // 0x2230 (0x20) 
	enum EAthenaGamePhase GamePhase; // 0x2250 (0x1)
	unsigned char unreflected_2251[0x7]; // 0x2251 (0x7) 
	struct FString ReasonWereInSetupPhase; // 0x2258 (0x10)
	enum EEventTournamentRound EventTournamentRound; // 0x2268 (0x1)
	bool bIsCustomMatch; // 0x2269 (0x1)
	unsigned char unreflected_226a[0x6]; // 0x226a (0x6) 
	struct FPlaylistPropertyArray CurrentPlaylistInfo; // 0x2270 (0x1e8)
	unsigned char unreflected_2458[0x28]; // 0x2458 (0x28) 
	bool bGameModeWillSkipAircraft; // 0x2480 (0x1)
	enum EAthenaGamePhaseStep GamePhaseStep; // 0x2481 (0x1)
	unsigned char unreflected_2482[0x2]; // 0x2482 (0x2) 
	float GamePhaseStepTimeRemaining; // 0x2484 (0x4)
	class USoundMix* LobbySoundMix; // 0x2488 (0x8)
	int TotalPlayersBots; // 0x2490 (0x4)
	int PlayerBotsLeft; // 0x2494 (0x4)
	unsigned char unreflected_2498[0x10]; // 0x2498 (0x10) 
	struct TArray<class AFortAthenaAircraft*> Aircrafts; // 0x24a8 (0x10)
	unsigned char bAircraftIsLocked; // 0x24b8 (0x1)
	unsigned char unreflected_24b9[0x3]; // 0x24b9 (0x3) 
	enum ESafeZoneStartUp CachedSafeZoneStartUp; // 0x24bc (0x1)
	unsigned char unreflected_24bd[0x3]; // 0x24bd (0x3) 
	int LobbyAction; // 0x24c0 (0x4)
	unsigned char unreflected_24c4[0x4]; // 0x24c4 (0x4) 
	struct FGameplayMutatorEventData MutatorEventData; // 0x24c8 (0x10)
	struct FGameplayMutatorObjectDataArray MutatorObjectDataArray; // 0x24d8 (0x118)
	int MutatorGenericInt0; // 0x25f0 (0x4)
	int MutatorGenericInt1; // 0x25f4 (0x4)
	int MutatorGenericInt2; // 0x25f8 (0x4)
	unsigned char unreflected_25fc[0x4]; // 0x25fc (0x4) 
	class AFortAthenaMutator_AI* GameplayMutatorAI; // 0x2600 (0x8)
	class UFortMutatorListComponent* MutatorListComponent; // 0x2608 (0x8)
	float DefaultGliderRedeployCanRedeploy; // 0x2610 (0x4)
	float DefaultRedeployGliderLateralVelocityMult; // 0x2614 (0x4)
	float DefaultRedeployGliderHeightLimit; // 0x2618 (0x4)
	float DefaultParachuteDeployTraceForGroundDistance; // 0x261c (0x4)
	float DefaultAllowNeutralWallEditing; // 0x2620 (0x4)
	float SignalInStormRegenSpeed; // 0x2624 (0x4)
	float SignalInStormLostSpeed; // 0x2628 (0x4)
	float StormCNDamageVulnerabilityLevel0; // 0x262c (0x4)
	float StormCNDamageVulnerabilityLevel1; // 0x2630 (0x4)
	float StormCNDamageVulnerabilityLevel2; // 0x2634 (0x4)
	float StormCNDamageVulnerabilityLevel3; // 0x2638 (0x4)
	struct FMeshNetworkStatus MeshNetworkStatus; // 0x263c (0x3)
	unsigned char unreflected_263f[0x1]; // 0x263f (0x1) 
	struct FMulticastInlineDelegate OnClientVolumeManagerReplicated; // 0x2640 (0x10)
	class UClass* VolumeManagerToUse; // 0x2650 (0x8)
	class UClass* PartyRiftPortalManagerToUse; // 0x2658 (0x8)
	unsigned char unreflected_2660[0x10]; // 0x2660 (0x10) 
	class AFortVolumeManager* VolumeManager; // 0x2670 (0x8)
	class AFortPartyRiftPortalManager* PartyRiftPortalManager; // 0x2678 (0x8)
	class AFortLocalizationService* LocalizationService; // 0x2680 (0x8)
	class UFortSanitizationService* SanitizationService; // 0x2688 (0x8)
	class UFortHermesLoadContext* HermesLoadContext; // 0x2690 (0x8)
	struct FScalableFloat ResurrectionEnabledRow; // 0x2698 (0x28)
	struct FSlateBrush SpawnMachineIconBrush; // 0x26c0 (0xc0)
	struct FSlateBrush SpawnCardIconBrush; // 0x2780 (0xc0)
	unsigned char unreflected_2840[0x10]; // 0x2840 (0x10) 
	struct FScalableFloat SafeZoneDamageAttribute; // 0x2850 (0x28)
	unsigned char unreflected_2878[0x8]; // 0x2878 (0x8) 
	struct FSlateBrush EliminationSelfIconBrush; // 0x2880 (0xc0)
	struct FSlateBrush EliminationSelfClampedIconBrush; // 0x2940 (0xc0)
	struct FSlateBrush EliminationSquadmateIconBrush; // 0x2a00 (0xc0)
	struct FSlateBrush EliminationSquadmateClampedIconBrush; // 0x2ac0 (0xc0)
	struct FSlateBrush EliminationTeammateIconBrush; // 0x2b80 (0xc0)
	struct FSlateBrush EliminationTeammateClampedIconBrush; // 0x2c40 (0xc0)
	struct FSlateBrush EliminationEnemyIconBrush; // 0x2d00 (0xc0)
	struct FSlateBrush EliminationEnemyClampedIconBrush; // 0x2dc0 (0xc0)
	struct TWeakObjectPtr<class UCurveFloat> EliminationFadeInCurve; // 0x2e80 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> EliminationFadeOutCurve; // 0x2ea8 (0x28)
	struct TWeakObjectPtr<class UCurveVector> EliminationScaleInCurve; // 0x2ed0 (0x28)
	struct TWeakObjectPtr<class UCurveVector> EliminationScaleOutCurve; // 0x2ef8 (0x28)
	float EliminationMarkerHUDMaxDistance; // 0x2f20 (0x4)
	float EliminationMarkerHUDZOffset; // 0x2f24 (0x4)
	unsigned char unreflected_2f28[0x20]; // 0x2f28 (0x20) 
	struct FGameplayTagContainer GoldenPoiLocationTags; // 0x2f48 (0x20)
	unsigned char unreflected_2f68[0x90]; // 0x2f68 (0x90) 
	class AUnicornDriver* UnicornDriver; // 0x2ff8 (0x8)
	struct TArray<struct FString> ActiveEventNamesAtPlaylistLoad; // 0x3000 (0x10)
	struct FScalableFloat NewItemDuringWarmupWeightAddMod; // 0x3010 (0x28)
	float SmoothedWorldTimeSeconds; // 0x3038 (0x4)
	float SmoothedWorldTimeSecondsDrift; // 0x303c (0x4)
	struct FGameplayTagContainer RolledLootGroupTags; // 0x3040 (0x20)
	bool bEnvironmentDamageBlocked; // 0x3060 (0x1)
	unsigned char unreflected_3061[0x7]; // 0x3061 (0x7) 
	struct TArray<struct FString> ReticulatedSplineDefinitions; // 0x3068 (0x10)
	struct TArray<struct FAthenaStreamIdOverride> ReticulatedSplineIds; // 0x3078 (0x10)
	struct TArray<class AFortMissionStormShield*> StormShields; // 0x3088 (0x10)
	unsigned char unreflected_3098[0x10]; // 0x3098 (0x10) 
	bool bDamageComboHUDEnabled; // 0x30a8 (0x1)
	unsigned char unreflected_30a9[0x3]; // 0x30a9 (0x3) 
	int DamageComboHUDMinHits; // 0x30ac (0x4)
	bool bEnableMatchesProxy; // 0x30b0 (0x1)
	unsigned char unreflected_30b1[0x7]; // 0x30b1 (0x7) 
	struct FString MatchesProxyMatchId; // 0x30b8 (0x10)
	struct FMulticastInlineDelegate EndGameTimeDilationCompleteDelegate; // 0x30c8 (0x10)
	struct FScalableFloat DelayMovementInput; // 0x30d8 (0x28)
	float DelayMovementInputReplicated; // 0x3100 (0x4)
	bool bCraftingEnabled; // 0x3104 (0x1)
	unsigned char padding_3105[0x1b]; // 0x3105 (0x1b)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateAthena.UpdateAllGoldenPoiColor (Underlying native function: UpdateAllGoldenPoiColor 0x837534c)
	void UpdateAllGoldenPoiColor(struct FLinearColor& Color, struct FSlateFontInfo& Font); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldReturnToMatchmakingOriginOnMatchEnd (Underlying native function: ShouldReturnToMatchmakingOriginOnMatchEnd 0x8375310)
	bool ShouldReturnToMatchmakingOriginOnMatchEnd(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldPlayDeathSoundEffects (Underlying native function: ShouldPlayDeathSoundEffects 0x26fbf18)
	bool ShouldPlayDeathSoundEffects(class AActor*& Victim); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldHaveInfiniteResources (Underlying native function: ShouldHaveInfiniteResources 0x8375280)
	bool ShouldHaveInfiniteResources(class APawn*& Pawn); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldEnterSpawningStartup (Underlying native function: ShouldEnterSpawningStartup 0x837524c)
	bool ShouldEnterSpawningStartup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldDBNOTeamInfoFlash (Underlying native function: ShouldDBNOTeamInfoFlash 0x8375228)
	bool ShouldDBNOTeamInfoFlash(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldBlockTrapPlacement (Underlying native function: ShouldBlockTrapPlacement 0x8375194)
	bool ShouldBlockTrapPlacement(class APawn*& Pawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldBlockQuestProgressReport (Underlying native function: ShouldBlockQuestProgressReport 0x5c99670)
	bool ShouldBlockQuestProgressReport(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldAllowSquadSizeTracking (Underlying native function: ShouldAllowSquadSizeTracking 0x8375170)
	bool ShouldAllowSquadSizeTracking(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldAllowPartyRift (Underlying native function: ShouldAllowPartyRift 0x837514c)
	bool ShouldAllowPartyRift(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.ShouldAllowKeepPlayingTogether (Underlying native function: ShouldAllowKeepPlayingTogether 0x8375128)
	bool ShouldAllowKeepPlayingTogether(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationTextWorldPosition (Underlying native function: SetLocationTextWorldPosition 0x8374f18)
	void SetLocationTextWorldPosition(struct FGameplayTag& LocationTag, struct FVector& Location); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationText (Underlying native function: SetLocationText 0x8374dec)
	void SetLocationText(struct FGameplayTag& LocationTag, struct FText& Text, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationFontInState (Underlying native function: SetLocationFontInState 0x8374c54)
	void SetLocationFontInState(struct FGameplayTag& LocationTag, struct FSlateFontInfo& Font, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationFontInAllStates (Underlying native function: SetLocationFontInAllStates 0x8374af8)
	void SetLocationFontInAllStates(struct FGameplayTag& LocationTag, struct FSlateFontInfo& Font); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationFont (Underlying native function: SetLocationFont 0x8374af8)
	void SetLocationFont(struct FGameplayTag& LocationTag, struct FSlateFontInfo& Font); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationColorInState (Underlying native function: SetLocationColorInState 0x83749e0)
	void SetLocationColorInState(struct FGameplayTag& LocationTag, struct FLinearColor& Color, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocationColor (Underlying native function: SetLocationColor 0x83748fc)
	void SetLocationColor(struct FGameplayTag& LocationTag, struct FLinearColor& Color); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetLocation_StateColor (Underlying native function: SetLocation_StateColor 0x8375004)
	void SetLocationStateColor(struct FGameplayTag& LocationTag, struct FLinearColor& Color, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetKillFeedFilter (Underlying native function: SetKillFeedFilter 0x5c99590)
	void SetKillFeedFilter(struct FGameplayTagContainer& NewFilter); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetFocalPointActor (Underlying native function: SetFocalPointActor 0x8374760)
	void SetFocalPointActor(class AActor*& InFocalPointActor, struct FVector& InFocalPointOffset, float& InFocalPointFOV, float& InDuration, float& InInterpSpeed); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetFloatingIslandInformation (Underlying native function: SetFloatingIslandInformation 0x83746c0)
	void SetFloatingIslandInformation(struct FVector& WorldPosition, bool& bActivated); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetDefaultParachuteDeployTraceForGroundDistance (Underlying native function: SetDefaultParachuteDeployTraceForGroundDistance 0x71a7128)
	void SetDefaultParachuteDeployTraceForGroundDistance(float& InDefaultParachuteDeployTraceForGroundDistance); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetCanSpawnLoot (Underlying native function: SetCanSpawnLoot 0x8374640)
	void SetCanSpawnLoot(bool& bInCanSpawnLoot); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetAllLocations_StateColor (Underlying native function: SetAllLocations_StateColor 0x8374568)
	void SetAllLocationsStateColor(struct FLinearColor& Color, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.SetAircrafts (Underlying native function: SetAircrafts 0x83742cc)
	void SetAircrafts(struct TArray<class AFortAthenaAircraft*>& InAircrafts); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.RunPerfMemCheatScript_Client_Replicated (Underlying native function: RunPerfMemCheatScript_Client_Replicated 0x8374248)
	void RunPerfMemCheatScriptClientReplicated(bool& bStartStatFiles); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortGameStateAthena.PauseFPSChartTimer (Underlying native function: PauseFPSChartTimer 0x8374234)
	void PauseFPSChartTimer(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OverrideSpawnPercentage (Underlying native function: OverrideSpawnPercentage 0x837416c)
	bool OverrideSpawnPercentage(class UClass*& BuildingContainerClass, float& SpawnPercentage); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.OverrideLocation_StateFontMaterial (Underlying native function: OverrideLocation_StateFontMaterial 0x8374058)
	void OverrideLocationStateFontMaterial(struct FGameplayTag& LocationTag, class UMaterialInterface*& Mat, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.OverrideAllLocations_StateFontMaterial (Underlying native function: OverrideAllLocations_StateFontMaterial 0x8373f94)
	void OverrideAllLocationsStateFontMaterial(class UMaterialInterface*& Mat, enum EMapLocationStateType& State); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.OnWinnerAnnounced (Has no native function)
	void OnWinnerAnnounced(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameStateAthena.OnSafeZonePhaseChanged (Underlying native function: OnSafeZonePhaseChanged 0x1a0a48c)
	void OnSafeZonePhaseChanged(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WinningTeamsCN (Underlying native function: OnRep_WinningTeamsCN 0x8373f30)
	void OnRepWinningTeamsCN(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WinningTeam (Underlying native function: OnRep_WinningTeam 0x29958a8)
	void OnRepWinningTeam(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WinningScore (Underlying native function: OnRep_WinningScore 0x8373efc)
	void OnRepWinningScore(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WinningPlayerState (Underlying native function: OnRep_WinningPlayerState 0x299569c)
	void OnRepWinningPlayerState(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WinningPlayerList (Underlying native function: OnRep_WinningPlayerList 0x47aa718)
	void OnRepWinningPlayerList(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_WantsHoldoverPluginOnClient (Underlying native function: OnRep_WantsHoldoverPluginOnClient 0x8373ee8)
	void OnRepWantsHoldoverPluginOnClient(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_VolumeManager (Underlying native function: OnRep_VolumeManager 0x8373ecc)
	void OnRepVolumeManager(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_UtcTimeStartedMatch (Underlying native function: OnRep_UtcTimeStartedMatch 0x2d7e0b8)
	void OnRepUtcTimeStartedMatch(struct FDateTime*& OldUtcTimeStartedMatch); // (Final | Native | Protected | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_TeamsLeft (Underlying native function: OnRep_TeamsLeft 0x1b9c52c)
	void OnRepTeamsLeft(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SupplyDropWaveStartedSoundCue (Underlying native function: OnRep_SupplyDropWaveStartedSoundCue 0x2a823f0)
	void OnRepSupplyDropWaveStartedSoundCue(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_StormCapState (Underlying native function: OnRep_StormCapState 0x2f571ec)
	void OnRepStormCapState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SpectateAPartyMemberAvailable (Underlying native function: OnRep_SpectateAPartyMemberAvailable 0x2ded794)
	void OnRepSpectateAPartyMemberAvailable(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SpecialActorData (Underlying native function: OnRep_SpecialActorData 0x2f4ffb0)
	void OnRepSpecialActorData(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SkyTubesShuttingDown (Underlying native function: OnRep_SkyTubesShuttingDown 0x211f4f8)
	void OnRepSkyTubesShuttingDown(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SkyTubesDisabled (Underlying native function: OnRep_SkyTubesDisabled 0x211f50c)
	void OnRepSkyTubesDisabled(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_ServerChangelistNumber (Underlying native function: OnRep_ServerChangelistNumber 0x2b3c618)
	void OnRepServerChangelistNumber(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_SafeZoneIndicator (Underlying native function: OnRep_SafeZoneIndicator 0x2b3d258)
	void OnRepSafeZoneIndicator(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_ReticulatedSplineDefinitions (Underlying native function: OnRep_ReticulatedSplineDefinitions 0x8373eb8)
	void OnRepReticulatedSplineDefinitions(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_PlaylistEndTime (Underlying native function: OnRep_PlaylistEndTime 0x8373ea4)
	void OnRepPlaylistEndTime(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_PlayersLeft (Underlying native function: OnRep_PlayersLeft 0x1df4dc4)
	void OnRepPlayersLeft(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_PlayerBotsLeft (Underlying native function: OnRep_PlayerBotsLeft 0x8373e90)
	void OnRepPlayerBotsLeft(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MutatorGenericInt_2 (Underlying native function: OnRep_MutatorGenericInt_2 0x8373e54)
	void OnRepMutatorGenericInt2(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MutatorGenericInt_1 (Underlying native function: OnRep_MutatorGenericInt_1 0x8373e18)
	void OnRepMutatorGenericInt1(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MutatorGenericInt_0 (Underlying native function: OnRep_MutatorGenericInt_0 0x8373de0)
	void OnRepMutatorGenericInt0(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MutatorEventData (Underlying native function: OnRep_MutatorEventData 0x8373d74)
	void OnRepMutatorEventData(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MeshNetworkStatus (Underlying native function: OnRep_MeshNetworkStatus 0x22ab03c)
	void OnRepMeshNetworkStatus(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_MapInfo (Underlying native function: OnRep_MapInfo 0x2710294)
	void OnRepMapInfo(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_IsUsingDownloadOnDemand (Underlying native function: OnRep_IsUsingDownloadOnDemand 0x8373d38)
	void OnRepIsUsingDownloadOnDemand(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_GoldenPoiLocationTags (Underlying native function: OnRep_GoldenPoiLocationTags 0x8373d24)
	void OnRepGoldenPoiLocationTags(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_GamePhase (Underlying native function: OnRep_GamePhase 0x1df424c)
	void OnRepGamePhase(enum EAthenaGamePhase& OldGamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_FocalPointActor (Underlying native function: OnRep_FocalPointActor 0x8373d10)
	void OnRepFocalPointActor(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_EventTournamentRound (Underlying native function: OnRep_EventTournamentRound 0x8373c7c)
	void OnRepEventTournamentRound(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_EndGameKickPlayerTime (Underlying native function: OnRep_EndGameKickPlayerTime 0x47a93d4)
	void OnRepEndGameKickPlayerTime(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_DamageForStormCapMarking (Underlying native function: OnRep_DamageForStormCapMarking 0x26daa0c)
	void OnRepDamageForStormCapMarking(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_CurrentPlaylistInfo (Underlying native function: OnRep_CurrentPlaylistInfo 0x211f5b8)
	void OnRepCurrentPlaylistInfo(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_CurrentPlaylistId (Underlying native function: OnRep_CurrentPlaylistId 0x26daa0c)
	void OnRepCurrentPlaylistId(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_CurrentHighScore (Underlying native function: OnRep_CurrentHighScore 0x8373c60)
	void OnRepCurrentHighScore(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_ClientItemDefsToLoad (Underlying native function: OnRep_ClientItemDefsToLoad 0x1662df0)
	void OnRepClientItemDefsToLoad(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_BroadcastSpectatorInfo (Underlying native function: OnRep_BroadcastSpectatorInfo 0x8373c3c)
	void OnRepBroadcastSpectatorInfo(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_bPlaylistStoppedSafeZonePhases (Underlying native function: OnRep_bPlaylistStoppedSafeZonePhases 0x8373f44)
	void OnRepbPlaylistStoppedSafeZonePhases(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_Aircraft (Underlying native function: OnRep_Aircraft 0x2f5e9c0)
	void OnRepAircraft(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_AIPawnCustomizationPreloadData (Underlying native function: OnRep_AIPawnCustomizationPreloadData 0x2d7828c)
	void OnRepAIPawnCustomizationPreloadData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnRep_AICharacterPartsPreloadData (Underlying native function: OnRep_AICharacterPartsPreloadData 0x2915e30)
	void OnRepAICharacterPartsPreloadData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnLoadedAllAdditionalContent (Underlying native function: OnLoadedAllAdditionalContent 0x8373bbc)
	void OnLoadedAllAdditionalContent(bool& bSuccess); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateAthena.OnDownloadedAnyAdditionalContent (Underlying native function: OnDownloadedAnyAdditionalContent 0x8373b3c)
	void OnDownloadedAnyAdditionalContent(bool& bSuccess); // (Final | Native | Protected)

	// DelegateFunction /Script/FortniteGame.FortGameStateAthena.OnCurrentPlaylistLoaded__DelegateSignature (Has no native function)
	void OnCurrentPlaylistLoadedDelegateSignature(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortGameStateAthena.IsWorldResourceWidgetVisible (Underlying native function: IsWorldResourceWidgetVisible 0x8373a78)
	bool IsWorldResourceWidgetVisible(class AFortPlayerController*& Controller, struct TEnumAsByte<EFortResourceType>& ResourceType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsWeaponReticleWidgetVisible (Underlying native function: IsWeaponReticleWidgetVisible 0x83739b4)
	bool IsWeaponReticleWidgetVisible(class AFortPlayerController*& Controller, class AFortWeapon*& Weapon); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsVKPlayPlaylist (Underlying native function: IsVKPlayPlaylist 0x8373978)
	bool IsVKPlayPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsVKEditPlaylist (Underlying native function: IsVKEditPlaylist 0x837393c)
	bool IsVKEditPlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsTherePersistenceDevices (Underlying native function: IsTherePersistenceDevices 0x83737e8)
	bool IsTherePersistenceDevices(class APawn*& SwitchingPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsTeleportToCreativeHubAllowed (Underlying native function: IsTeleportToCreativeHubAllowed 0x837371c)
	bool IsTeleportToCreativeHubAllowed(class AFortPlayerState*& PlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsTeamSwitchAllowed (Underlying native function: IsTeamSwitchAllowed 0x837368c)
	bool IsTeamSwitchAllowed(class APawn*& SwitchingPawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsStormCN (Underlying native function: IsStormCN 0x83734ac)
	bool IsStormCN(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsSpatialGameplayExperience (Underlying native function: IsSpatialGameplayExperience 0x5c99560)
	bool IsSpatialGameplayExperience(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsPlaygroundModePlaylist (Underlying native function: IsPlaygroundModePlaylist 0x8373650)
	bool IsPlaygroundModePlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsPlayerTriggeredRespawnAllowed (Underlying native function: IsPlayerTriggeredRespawnAllowed 0x83735c0)
	bool IsPlayerTriggeredRespawnAllowed(class AFortPlayerState*& PlayerState); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsPlayerClearPersistanceIslandDataAllowed (Underlying native function: IsPlayerClearPersistanceIslandDataAllowed 0x8373530)
	bool IsPlayerClearPersistanceIslandDataAllowed(class APawn*& SwitchingPawn); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsPapayaPlaylist (Underlying native function: IsPapayaPlaylist 0x837350c)
	bool IsPapayaPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsNoBuildBRPlaylist (Underlying native function: IsNoBuildBRPlaylist 0x83734d0)
	bool IsNoBuildBRPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsLastManStandingCN (Underlying native function: IsLastManStandingCN 0x83734ac)
	bool IsLastManStandingCN(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsLargePreviewDisabledOnMobile (Underlying native function: IsLargePreviewDisabledOnMobile 0x8373470)
	bool IsLargePreviewDisabledOnMobile(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsGuidedTutorialPlaylist (Underlying native function: IsGuidedTutorialPlaylist 0x8373434)
	bool IsGuidedTutorialPlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsGamePhaseStepNotificationWidgetVisible (Underlying native function: IsGamePhaseStepNotificationWidgetVisible 0x159058c)
	bool IsGamePhaseStepNotificationWidgetVisible(class AController*& Controller, enum EAthenaGamePhaseStep& PhaseStepType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsGamePhaseNotificationSkipped (Underlying native function: IsGamePhaseNotificationSkipped 0x83733a0)
	bool IsGamePhaseNotificationSkipped(enum EAthenaGamePhaseStep& GamePhaseToSkip); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsExperiencePlayOnly (Underlying native function: IsExperiencePlayOnly 0x8373364)
	bool IsExperiencePlayOnly(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeUtilitySpawningAllowedPlaylist (Underlying native function: IsCreativeUtilitySpawningAllowedPlaylist 0x8373328)
	bool IsCreativeUtilitySpawningAllowedPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeRoyalePlaylist (Underlying native function: IsCreativeRoyalePlaylist 0x83732ec)
	bool IsCreativeRoyalePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeOrPlaygroundModePlaylist (Underlying native function: IsCreativeOrPlaygroundModePlaylist 0x2c122f0)
	bool IsCreativeOrPlaygroundModePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeOrBattleLabModePlaylist (Underlying native function: IsCreativeOrBattleLabModePlaylist 0x83732c8)
	bool IsCreativeOrBattleLabModePlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeModePlaylist (Underlying native function: IsCreativeModePlaylist 0x83713b4)
	bool IsCreativeModePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeMMPlaylist (Underlying native function: IsCreativeMMPlaylist 0x837328c)
	bool IsCreativeMMPlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCreativeLTMPlaylist (Underlying native function: IsCreativeLTMPlaylist 0x298f6d8)
	bool IsCreativeLTMPlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsCompetitivePlaylist (Underlying native function: IsCompetitivePlaylist 0x837326c)
	bool IsCompetitivePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsBattleRoyalePlaylist (Underlying native function: IsBattleRoyalePlaylist 0x83731dc)
	bool IsBattleRoyalePlaylist(bool& bExplicitCheck); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsBattleLabModePlaylist (Underlying native function: IsBattleLabModePlaylist 0x83731a0)
	bool IsBattleLabModePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsAsyncPhysicsPlaylist (Underlying native function: IsAsyncPhysicsPlaylist 0x8373174)
	bool IsAsyncPhysicsPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.IsAnyCreativePlaylist (Underlying native function: IsAnyCreativePlaylist 0x8373138)
	bool IsAnyCreativePlaylist(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.InitializeAnimationSharing (Underlying native function: InitializeAnimationSharing 0x83730b8)
	void InitializeAnimationSharing(class UFortPlaylistAthena*& FortAthenaPlaylist); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HasValidFocalPointActor (Underlying native function: HasValidFocalPointActor 0x837309c)
	bool HasValidFocalPointActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleHideGameModeMessageRequest (Underlying native function: HandleHideGameModeMessageRequest 0x8372f50)
	void HandleHideGameModeMessageRequest(enum EAthenaGameMsgType& MsgType, bool& bInstantHide, bool& bClearQueue, int& MessageChannel); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeShowMarker (Underlying native function: HandleGameModeShowMarker 0x8372e8c)
	void HandleGameModeShowMarker(int& PlayerId, int& InstanceID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeMessageSuccess (Underlying native function: HandleGameModeMessageSuccess 0x8372dfc)
	void HandleGameModeMessageSuccess(class AFortPlayerController*& OwnerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeMessageRequest (Underlying native function: HandleGameModeMessageRequest 0x8372d58)
	void HandleGameModeMessageRequest(struct FAthenaGameMessageData& MessageData); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeMessageReposition (Underlying native function: HandleGameModeMessageReposition 0x8372c58)
	void HandleGameModeMessageReposition(struct FVector2D& Position, struct TEnumAsByte<EHorizontalAlignment>& HorizontalAlignment, struct TEnumAsByte<EVerticalAlignment>& VerticalAlignment); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeMessageDefaultPosition (Underlying native function: HandleGameModeMessageDefaultPosition 0x8372c3c)
	void HandleGameModeMessageDefaultPosition(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleGameModeHideMarker (Underlying native function: HandleGameModeHideMarker 0x8372b78)
	void HandleGameModeHideMarker(int& PlayerId, int& InstanceID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.HandleContextTutorialGameModeMessageRequest (Underlying native function: HandleContextTutorialGameModeMessageRequest 0x8372a84)
	void HandleContextTutorialGameModeMessageRequest(struct FAthenaGameMessageData& MessageData, class UFortContextualTutorialController*& OwnedController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.GetTotalPlayers (Underlying native function: GetTotalPlayers 0x8372a5c)
	struct FTotalPlayers GetTotalPlayers(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetTimedWinConditionTime (Underlying native function: GetTimedWinConditionTime 0x8372a34)
	float GetTimedWinConditionTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetTeamPOIName (Underlying native function: GetTeamPOIName 0x8372958)
	struct FText GetTeamPOIName(unsigned char& Team); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetSquadMemberPlayerStates (Underlying native function: GetSquadMemberPlayerStates 0x837274c)
	struct TArray<class AFortPlayerStateAthena*> GetSquadMemberPlayerStates(class AFortPlayerStateAthena*& InstigatingPlayerState, bool& bIncludeSelf); // (Final | 0x00000002 | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetShouldPlayRespawnTimerSFX (Underlying native function: GetShouldPlayRespawnTimerSFX 0x8372728)
	bool GetShouldPlayRespawnTimerSFX(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetShouldDisplayCountdownTimerText (Underlying native function: GetShouldDisplayCountdownTimerText 0x8372704)
	bool GetShouldDisplayCountdownTimerText(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetScoringModeWinningGoal (Underlying native function: GetScoringModeWinningGoal 0x83726dc)
	float GetScoringModeWinningGoal(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.GetSafeZonePhase (Underlying native function: GetSafeZonePhase 0x83726b8)
	int GetSafeZonePhase(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetSafeZoneIndicator (Underlying native function: GetSafeZoneIndicator 0x83726a0)
	class AFortSafeZoneIndicator* GetSafeZoneIndicator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPoiGridTagsForLocation (Underlying native function: GetPoiGridTagsForLocation 0x83725e0)
	struct FGameplayTagContainer GetPoiGridTagsForLocation(struct FVector& Location); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPlaylistType (Underlying native function: GetPlaylistType 0x83725a4)
	enum EFortPlaylistType GetPlaylistType(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPlaylistTeams (Underlying native function: GetPlaylistTeams 0x83724f8)
	bool GetPlaylistTeams(struct TArray<unsigned char>& OutTeams); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPlayersLeftForUI (Underlying native function: GetPlayersLeftForUI 0x83724c4)
	struct FPlayersLeft GetPlayersLeftForUI(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPlayersLeft (Underlying native function: GetPlayersLeft 0x837249c)
	struct FPlayersLeft GetPlayersLeft(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetPartyRiftPortalManager (Underlying native function: GetPartyRiftPortalManager 0x8372484)
	class AFortPartyRiftPortalManager* GetPartyRiftPortalManager(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenSiphonWoodValue (Underlying native function: GetOverridenSiphonWoodValue 0x83723f4)
	float GetOverridenSiphonWoodValue(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenSiphonStoneValue (Underlying native function: GetOverridenSiphonStoneValue 0x8372364)
	float GetOverridenSiphonStoneValue(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenSiphonMetalValue (Underlying native function: GetOverridenSiphonMetalValue 0x83722d4)
	float GetOverridenSiphonMetalValue(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenSiphonHealthValue (Underlying native function: GetOverridenSiphonHealthValue 0x8372244)
	float GetOverridenSiphonHealthValue(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenSiphonGoldValue (Underlying native function: GetOverridenSiphonGoldValue 0x83721b4)
	float GetOverridenSiphonGoldValue(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenDamageSelfWeaponQuery (Underlying native function: GetOverridenDamageSelfWeaponQuery 0x8372104)
	struct FGameplayTagQuery GetOverridenDamageSelfWeaponQuery(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenDamageSelfTargetQuery (Underlying native function: GetOverridenDamageSelfTargetQuery 0x8372054)
	struct FGameplayTagQuery GetOverridenDamageSelfTargetQuery(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenDamageSelfRequiresNonZeroDamage (Underlying native function: GetOverridenDamageSelfRequiresNonZeroDamage 0x8371fc4)
	bool GetOverridenDamageSelfRequiresNonZeroDamage(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverridenDamageSelfDamageToDeal (Underlying native function: GetOverridenDamageSelfDamageToDeal 0x8371f34)
	float GetOverridenDamageSelfDamageToDeal(class APawn*& Pawn); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetOverriddenVehicleTrickScore (Underlying native function: GetOverriddenVehicleTrickScore 0x8371e68)
	float GetOverriddenVehicleTrickScore(class AFortPlayerController*& Controller, float& InTrickScore); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.GetMutatorByInterface (Underlying native function: GetMutatorByInterface 0x8371d9c)
	class AFortGameplayMutator* GetMutatorByInterface(class AActor*& ContextActor, class UClass*& MutatorInterface); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameStateAthena.GetMutatorByClass (Underlying native function: GetMutatorByClass 0x8371cd0)
	class AFortGameplayMutator* GetMutatorByClass(class AActor*& ContextActor, class UClass*& MutatorClass); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameStateAthena.GetMaxPlaylistPlayers (Underlying native function: GetMaxPlaylistPlayers 0x8371c84)
	int GetMaxPlaylistPlayers(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetEndGameReturnToMatchmakingOriginDelay (Underlying native function: GetEndGameReturnToMatchmakingOriginDelay 0x8371c48)
	float GetEndGameReturnToMatchmakingOriginDelay(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetDamageComboHUDMinHits (Underlying native function: GetDamageComboHUDMinHits 0x8371c30)
	int GetDamageComboHUDMinHits(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetCurrentPlaylistName (Underlying native function: GetCurrentPlaylistName 0x8371c08)
	struct FName GetCurrentPlaylistName(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetBattleBusForPlayer (Underlying native function: GetBattleBusForPlayer 0x8371b78)
	class UAthenaBattleBusItemDefinition* GetBattleBusForPlayer(class AFortPlayerControllerAthena*& PC); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetAvgPlayerMMR (Underlying native function: GetAvgPlayerMMR 0x8371b54)
	int GetAvgPlayerMMR(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetAthenaPlaylistContextTags (Underlying native function: GetAthenaPlaylistContextTags 0x8371b04)
	struct FGameplayTagContainer GetAthenaPlaylistContextTags(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GetAircraft (Underlying native function: GetAircraft 0x8371a78)
	class AFortAthenaAircraft* GetAircraft(int& AircraftIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.GatherCustomCharacterPartOverridesFromMutator (Underlying native function: GatherCustomCharacterPartOverridesFromMutator 0x8371990)
	void GatherCustomCharacterPartOverridesFromMutator(class AFortPlayerController*& FortPC, struct TArray<class UCustomCharacterPart*>& OutOverrides); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.EvaluateDBNOMutator (Underlying native function: EvaluateDBNOMutator 0x83718ac)
	bool EvaluateDBNOMutator(class AFortPlayerState*& PS, struct FDBNOCustomSettings& OutDBNOSetting); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.DoesPlayerHaveLimitedLives (Underlying native function: DoesPlayerHaveLimitedLives 0x837178c)
	void DoesPlayerHaveLimitedLives(class AFortPlayerState*& PlayerState, bool& bPlayerLivesAreLimited, int& RespawnsRemaining); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.CanUseSlowMotionOnVictory (Underlying native function: CanUseSlowMotionOnVictory 0x1b9c490)
	bool CanUseSlowMotionOnVictory(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.CanSpawnActorOfClass (Underlying native function: CanSpawnActorOfClass 0x83715d4)
	struct FEvaluationResult CanSpawnActorOfClass(class AActor*& InstigatorActor, class UClass*& ActorClassToSpawn, struct FVector& Location, struct FRotator& Rotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.CanSpawnActor (Underlying native function: CanSpawnActor 0x8371414)
	struct FEvaluationResult CanSpawnActor(class AActor*& InstigatorActor, class AActor*& ActorToSpawn, struct FVector& Location, struct FRotator& Rotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.CanRespawnOnStarterIsland (Underlying native function: CanRespawnOnStarterIsland 0x83713f0)
	bool CanRespawnOnStarterIsland(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateAthena.CanChangeGameplayOptions (Underlying native function: CanChangeGameplayOptions 0x83713b4)
	bool CanChangeGameplayOptions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateAthena.AreSkyTubesEnabled (Underlying native function: AreSkyTubesEnabled 0x8371388)
	bool AreSkyTubesEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

