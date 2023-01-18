// Class /Script/FortniteGame.FortGlobals
// Size: 0x3c0
class UFortGlobals : public UObject
{
	struct FString LobbyMap; // 0x28 (0x10)
	struct FString BRMapFullName; // 0x38 (0x10)
	int MinTheaterListRefreshDelay; // 0x48 (0x4)
	int MaxTheaterListRefreshDelay; // 0x4c (0x4)
	float MinCullObjectSize; // 0x50 (0x4)
	float MinCullDistance; // 0x54 (0x4)
	float MaxCullObjectSize; // 0x58 (0x4)
	float MaxCullDistance; // 0x5c (0x4)
	float MinRespawnHeightForEnvironmentDeath; // 0x60 (0x4)
	float MaxRespawnInAirHeight; // 0x64 (0x4)
	bool bEnablePlayerTriggeredRespawn; // 0x68 (0x1)
	bool bEnableNewCustomizationPanel; // 0x69 (0x1)
	bool bEnableInfluenceMap; // 0x6a (0x1)
	bool bEnableAIDespawning; // 0x6b (0x1)
	bool bEnableDBNO; // 0x6c (0x1)
	bool bEnableIronCity; // 0x6d (0x1)
	bool bEnableForceBuildingActorRecordUpdates; // 0x6e (0x1)
	unsigned char unreflected_6f[0x1]; // 0x6f (0x1) 
	struct TArray<struct FName> IronCityWargameTagList; // 0x70 (0x10)
	bool bEnableIronCityCoast; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct TArray<struct FChallengeObjectiveHotfix> ChallengeObjectiveHotfixes; // 0x88 (0x10)
	struct TArray<struct FChallengeSuppressedHotfix> ChallengeSuppressedHotfixes; // 0x98 (0x10)
	struct TArray<struct FChallengeObjectiveCountHotifx*> ChallengeObjectiveCountHotfixes; // 0xa8 (0x10)
	struct TArray<struct FString> NonBusrideChallengeVOHotfixes; // 0xb8 (0x10)
	struct TArray<struct FString> BusrideChallengeVOHotfixes; // 0xc8 (0x10)
	struct TArray<struct FXPEventEntryHotfix> XPEventEntryHotfixes; // 0xd8 (0x10)
	bool bEnableMaydayStrangeLands; // 0xe8 (0x1)
	bool bForceMaydayStrangeLands; // 0xe9 (0x1)
	bool bEnableHestia; // 0xea (0x1)
	bool bEnableIronCityAutoAmplifierPlacement; // 0xeb (0x1)
	bool bEnableWargameDebug; // 0xec (0x1)
	bool bEnableEnduranceDebug; // 0xed (0x1)
	bool bEnableTrapScoringCrafting; // 0xee (0x1)
	bool bEnableTrapScoringPlacement; // 0xef (0x1)
	bool bEnableTrapScoringActivation; // 0xf0 (0x1)
	bool bEnableInWorldScoreNumbers; // 0xf1 (0x1)
	bool bMustUseToggleJetpackExecute; // 0xf2 (0x1)
	bool bEnableNewRewardFlow; // 0xf3 (0x1)
	bool bEnableWIFE; // 0xf4 (0x1)
	bool bEnableFrontendCrafting; // 0xf5 (0x1)
	bool bEnableFrontendStorage; // 0xf6 (0x1)
	bool bEnableLazyASC; // 0xf7 (0x1)
	bool bEnableFriendCodes; // 0xf8 (0x1)
	bool bEnableCreativeMode; // 0xf9 (0x1)
	bool bEnableCreativeModeLimitedAccess; // 0xfa (0x1)
	bool bEnableCreativeModeLimitedAccessForFounders; // 0xfb (0x1)
	float FlyVerificationInterval; // 0xfc (0x4)
	float InvulnerableVerificationInterval; // 0x100 (0x4)
	float ModeratorModeVerificationInterval; // 0x104 (0x4)
	struct FString CreativeModeLimitedAccessEndTime; // 0x108 (0x10)
	bool bEnableCreativeModeTutorials; // 0x118 (0x1)
	unsigned char unreflected_119[0x3]; // 0x119 (0x3) 
	float CreativeTutorialSkydivingDelay; // 0x11c (0x4)
	float CreativeReturnToHubTutorialDelay; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct FLoginFailureLogSubmitOptions LoginFailureOptions; // 0x128 (0x20)
	struct FLogoutLogSubmitOptions LogoutFailureOptions; // 0x148 (0x20)
	struct FPurchaseFailureLogSubmitOptions RealMoneyPurchaseFailureOptions; // 0x168 (0x20)
	bool bSubmitReturnToMenuErrorLogs; // 0x188 (0x1)
	bool bSubmitSecondaryReturnToMenuErrorLogs; // 0x189 (0x1)
	unsigned char unreflected_18a[0x2]; // 0x18a (0x2) 
	int ReturnToMenuErrorLogTailKb; // 0x18c (0x4)
	float ReturnToMenuErrorLogSubmitChance; // 0x190 (0x4)
	unsigned char unreflected_194[0x4]; // 0x194 (0x4) 
	struct FPartyFailureLogSubmit PartyJoinFailureLogSubmit; // 0x198 (0x18)
	struct TArray<struct FKairosSubmitLogOptions> KairosSubmitOptions; // 0x1b0 (0x10)
	struct FVoiceChatLogSubmitOptions VoiceChatSubmitOptions; // 0x1c0 (0x28)
	bool bShowMissionResultsMovies; // 0x1e8 (0x1)
	bool bDisablePlayerTeleportDuringMissionResults; // 0x1e9 (0x1)
	bool bDisableParticleEffectsDuringMissionResults; // 0x1ea (0x1)
	bool bFlushGPUWhenPlayerIsTeleportedAtEndOfZone; // 0x1eb (0x1)
	bool bStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone; // 0x1ec (0x1)
	bool bTwitchEnabled; // 0x1ed (0x1)
	bool bAllowContainersInCreativeItemLists; // 0x1ee (0x1)
	bool bAccountLinkingEnabled; // 0x1ef (0x1)
	enum EFortAccountLinkingUIConfig AccountLinkingUIConfig; // 0x1f0 (0x1)
	unsigned char unreflected_1f1[0x7]; // 0x1f1 (0x7) 
	struct FString AccountLinkingUIURL; // 0x1f8 (0x10)
	bool bEnableAccountLinkingUIURLButton; // 0x208 (0x1)
	bool bAllowStreamerSafetyCharacterReplication; // 0x209 (0x1)
	bool bAnonymousCharacterModeSafetyCharacterReplication; // 0x20a (0x1)
	bool bTournamentSafetyCharacterReplication; // 0x20b (0x1)
	bool bAllowSafetyCharacterReplicationToUseVariantItems; // 0x20c (0x1)
	bool bEnableQuestContentCheckOnSave; // 0x20d (0x1)
	bool bEnableSeasonalQuestline; // 0x20e (0x1)
	bool bTwitchHeartbeatEnabled; // 0x20f (0x1)
	bool bTwitchAllowDisplayViewernames; // 0x210 (0x1)
	unsigned char unreflected_211[0x3]; // 0x211 (0x3) 
	int MaxTwitchViewerNamesToCache; // 0x214 (0x4)
	int TwitchViewerNameExpirationMinutes; // 0x218 (0x4)
	float MinTwitchHeartbeatInterval; // 0x21c (0x4)
	float TwitchAccountInformationRefreshInterval; // 0x220 (0x4)
	bool bAllowLogout; // 0x224 (0x1)
	bool bAllowQuit; // 0x225 (0x1)
	bool bHasWorldMap; // 0x226 (0x1)
	unsigned char unreflected_227[0x1]; // 0x227 (0x1) 
	float PlayerJoinServerTimeoutSeconds; // 0x228 (0x4)
	float PlayerUnregistrationFailsafeTimer; // 0x22c (0x4)
	float PollForDedicatedServerReadyToShutdownInterval; // 0x230 (0x4)
	bool bUploadAthenaStatsV2; // 0x234 (0x1)
	bool bAthenaStatsFrontendEnabled; // 0x235 (0x1)
	bool bAthenaLeaderboardFrontEndEnabled; // 0x236 (0x1)
	bool bAthenaSquadQuickChatEnabled; // 0x237 (0x1)
	bool bAthenaNPCCommandEnabled; // 0x238 (0x1)
	bool bAthenaCreativeNPCCommandEnabled; // 0x239 (0x1)
	bool bSendPingCommandToLastHired; // 0x23a (0x1)
	unsigned char unreflected_23b[0x1]; // 0x23b (0x1) 
	float AthenaQuickChatRangeForNonSquadTeamMembers; // 0x23c (0x4)
	bool bGlobalLeaderboardsFrontEndEnabled; // 0x240 (0x1)
	unsigned char unreflected_241[0x3]; // 0x241 (0x3) 
	int TimeBetweenLeaderboardRequestsMinutes; // 0x244 (0x4)
	bool bFirstShotAccuracyDisabled; // 0x248 (0x1)
	bool bAllowProjectileRethrow; // 0x249 (0x1)
	bool bPapayaSpeakersEnabled; // 0x24a (0x1)
	bool bAthenaSpatialUIDeferMarkingItemsSeen; // 0x24b (0x1)
	bool bAthenaUsesSimCollision; // 0x24c (0x1)
	bool bAthenaSimVehicles; // 0x24d (0x1)
	bool bAthenaSubstepping; // 0x24e (0x1)
	bool bCampaignSubstepping; // 0x24f (0x1)
	bool bCampaignUsesSimCollision; // 0x250 (0x1)
	bool bCampaignSimVehicles; // 0x251 (0x1)
	unsigned char unreflected_252[0x2]; // 0x252 (0x2) 
	float MaximumCharacterVelocity; // 0x254 (0x4)
	unsigned char unreflected_258[0x10]; // 0x258 (0x10) 
	struct TArray<class UObject*> AthenaReferencedObjects; // 0x268 (0x10)
	int NumOutstandingAthenaAsyncRequests; // 0x278 (0x4)
	int TotalAthenaAsyncRequests; // 0x27c (0x4)
	struct TWeakObjectPtr<class UClass> AthenaAlwaysLoadedContentHack; // 0x280 (0x28)
	bool bAllowXboxStwToken; // 0x2a8 (0x1)
	bool bUsePlatformProfanityFilterForChat; // 0x2a9 (0x1)
	bool bShouldSendSettingsSnapshotOnLogin; // 0x2aa (0x1)
	bool bShouldForceAllowBroadcasting; // 0x2ab (0x1)
	bool bUseLegacyMediaSource; // 0x2ac (0x1)
	bool bUseLegacyMediaSourceForCreative; // 0x2ad (0x1)
	bool bDisableMediaStreamingOnWindows7; // 0x2ae (0x1)
	bool bAllowElectraForCellStreaming; // 0x2af (0x1)
	int MaxElectraVerticalResolutionOf60fpsVideos; // 0x2b0 (0x4)
	float MaxElectraFpsVideos; // 0x2b4 (0x4)
	int MaxElectraVerticalResolutionOfWindowsSWD; // 0x2b8 (0x4)
	float ElectraLivePresentationOffset; // 0x2bc (0x4)
	float ElectraLiveAudioPresentationOffset; // 0x2c0 (0x4)
	bool bElectraLiveUseConservativePresentationOffset; // 0x2c4 (0x1)
	bool bElectraUseDedicatedMediaSegmentDownloadThreads; // 0x2c5 (0x1)
	bool bAllowElectraForReplayCinematic; // 0x2c6 (0x1)
	bool bDisableElectraForReplayCinematicOnWin7; // 0x2c7 (0x1)
	bool bDisableElectraForReplayCinematicOnWin7AndWin8; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x3]; // 0x2c9 (0x3) 
	float ProbabilityOfUsingElectraForReplayCinematic; // 0x2cc (0x4)
	float OpenTimeLimitForReplayCinematic; // 0x2d0 (0x4)
	float DurationTimeLimitForReplayCinematic; // 0x2d4 (0x4)
	float DurationExtraTimeForReplayCinematic; // 0x2d8 (0x4)
	bool bAllowElectraForWatchBattlePassMovie; // 0x2dc (0x1)
	bool bShowExtendedBattlePassMovie; // 0x2dd (0x1)
	unsigned char unreflected_2de[0x2]; // 0x2de (0x2) 
	float ProbabilityOfUsingElectraForWatchBattlePassMovie; // 0x2e0 (0x4)
	float OpenTimeLimitForWatchBattlePassMovie; // 0x2e4 (0x4)
	bool bAllowForceDefaultAudioTrack; // 0x2e8 (0x1)
	unsigned char unreflected_2e9[0x7]; // 0x2e9 (0x7) 
	int64_t MemoryRequirementForMediaStreamingMB; // 0x2f0 (0x8)
	struct TArray<struct FString> LiveStreamingCDNs; // 0x2f8 (0x10)
	struct TArray<struct FString> VODStreamingCDNs; // 0x308 (0x10)
	struct TArray<struct FString> LiveStreamingCDNsCN; // 0x318 (0x10)
	struct TArray<struct FString> VODStreamingCDNsCN; // 0x328 (0x10)
	int MaxResolutionForMediaStreaming; // 0x338 (0x4)
	int MaxResolutionForStandalonePlayer; // 0x33c (0x4)
	struct TArray<struct FString> RiskyReelsPlaylistDenylistFilter; // 0x340 (0x10)
	struct TArray<struct FString> RadioPlaylistDenylistFilter; // 0x350 (0x10)
	bool bRegionCN; // 0x360 (0x1)
	unsigned char unreflected_361[0x3]; // 0x361 (0x3) 
	float GlobalSnowAltitude; // 0x364 (0x4)
	float GlobalSnowRadius; // 0x368 (0x4)
	unsigned char unreflected_36c[0x4]; // 0x36c (0x4) 
	struct FVector GlobalSnowOrigin; // 0x370 (0x18)
	unsigned char unreflected_388[0x18]; // 0x388 (0x18) 
	struct TArray<struct FSubGameAccess> SubGameAccess; // 0x3a0 (0x10)
	unsigned char padding_3b0[0x10]; // 0x3b0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGlobals.UseElectraForWatchBattlePassMovie (Underlying native function: UseElectraForWatchBattlePassMovie 0x891000c)
	static bool UseElectraForWatchBattlePassMovie(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.UseElectraForReplayCinematic (Underlying native function: UseElectraForReplayCinematic 0x890ffe8)
	static bool UseElectraForReplayCinematic(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.UpdateAllGameFeaturesOnPauseChanged (Underlying native function: UpdateAllGameFeaturesOnPauseChanged 0x890ffd4)
	static void UpdateAllGameFeaturesOnPauseChanged(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.StWTutorialContentInstallationProgress (Underlying native function: StWTutorialContentInstallationProgress 0x890fe64)
	static float StWTutorialContentInstallationProgress(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.ShowExtendedBattlePassMovie (Underlying native function: ShowExtendedBattlePassMovie 0x890fe38)
	static bool ShowExtendedBattlePassMovie(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.ShouldStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone (Underlying native function: ShouldStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone 0x890fe0c)
	static bool ShouldStreamOutTextureDataWhenPlayerIsTeleportedAtEndOfZone(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.ShouldShowMissionResultsMovies (Underlying native function: ShouldShowMissionResultsMovies 0x890fde0)
	static bool ShouldShowMissionResultsMovies(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.ShouldFlushGPUWhenPlayerIsTeleportedAtEndOfZone (Underlying native function: ShouldFlushGPUWhenPlayerIsTeleportedAtEndOfZone 0x890fdb4)
	static bool ShouldFlushGPUWhenPlayerIsTeleportedAtEndOfZone(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.ShouldDisablePlayerTeleportDuringMissionResults (Underlying native function: ShouldDisablePlayerTeleportDuringMissionResults 0x890fd88)
	static bool ShouldDisablePlayerTeleportDuringMissionResults(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.ShouldDisableParticleEffectsDuringMissionResults (Underlying native function: ShouldDisableParticleEffectsDuringMissionResults 0x890fd5c)
	static bool ShouldDisableParticleEffectsDuringMissionResults(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.ShouldDelayStartupLoading (Underlying native function: ShouldDelayStartupLoading 0x890fd30)
	static bool ShouldDelayStartupLoading(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.SetGlobalSnowRadius (Underlying native function: SetGlobalSnowRadius 0x890f0bc)
	static void SetGlobalSnowRadius(float& Radius); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.SetGlobalSnowOrigin (Underlying native function: SetGlobalSnowOrigin 0x890f024)
	static void SetGlobalSnowOrigin(struct FVector& Origin); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.SetGlobalSnowAltitude (Underlying native function: SetGlobalSnowAltitude 0x890ef9c)
	static void SetGlobalSnowAltitude(float& Altitude); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.SetCurrentSubGame (Underlying native function: SetCurrentSubGame 0x890ed40)
	static void SetCurrentSubGame(class UObject*& WorldContextObject, enum ESubGame& SubGame); // (Final | 0x00000002 | Native | Static | Public)

	// Function /Script/FortniteGame.FortGlobals.IsWIFEEnabled (Underlying native function: IsWIFEEnabled 0x890e778)
	static bool IsWIFEEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsWargameDebugEnabled (Underlying native function: IsWargameDebugEnabled 0x2486284)
	static bool IsWargameDebugEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsUsingTouch (Underlying native function: IsUsingTouch 0x249bc24)
	static bool IsUsingTouch(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsTwitchEnabled (Underlying native function: IsTwitchEnabled 0x890e72c)
	static bool IsTwitchEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsTouchInputPlatform (Underlying native function: IsTouchInputPlatform 0x890e704)
	static bool IsTouchInputPlatform(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsTencentBuild (Underlying native function: IsTencentBuild 0x890e6e0)
	static bool IsTencentBuild(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsStWTutorialContentInstalled (Underlying native function: IsStWTutorialContentInstalled 0x890e6b8)
	static bool IsStWTutorialContentInstalled(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.IsRunningInGFN (Underlying native function: IsRunningInGFN 0x890e688)
	static bool IsRunningInGFN(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsRunningInCloud (Underlying native function: IsRunningInCloud 0x5d6f260)
	static bool IsRunningInCloud(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsNonBusrideChallengeVOHotfixedOff (Underlying native function: IsNonBusrideChallengeVOHotfixedOff 0x890e5d0)
	static bool IsNonBusrideChallengeVOHotfixedOff(struct FGameplayTagContainer& ChallengeAssetTags); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsNewRewardFlowEnabled (Underlying native function: IsNewRewardFlowEnabled 0x890e5a4)
	static bool IsNewRewardFlowEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsMobileGame (Underlying native function: IsMobileGame 0x2265374)
	static bool IsMobileGame(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsIronCityAutoAmplifierPlacementEnabled (Underlying native function: IsIronCityAutoAmplifierPlacementEnabled 0x2486284)
	static bool IsIronCityAutoAmplifierPlacementEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsInSubGame (Underlying native function: IsInSubGame 0x2c10e60)
	static bool IsInSubGame(class UObject*& WorldContextObject, enum ESubGame& SubGame); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsInPhoenixZone (Underlying native function: IsInPhoenixZone 0x890e500)
	static bool IsInPhoenixZone(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsInAthena (Underlying native function: IsInAthena 0x23a3834)
	static bool IsInAthena(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsHestiaEnabled (Underlying native function: IsHestiaEnabled 0x890e4d4)
	static bool IsHestiaEnabled(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsHeroLoadoutSystemEnabled (Underlying native function: IsHeroLoadoutSystemEnabled 0x27c9608)
	static bool IsHeroLoadoutSystemEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsGameFeatureContentInstalled (Underlying native function: IsGameFeatureContentInstalled 0x890e43c)
	static bool IsGameFeatureContentInstalled(enum EFortGameFeature& GameFeature); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.IsFrontendStorageEnabled (Underlying native function: IsFrontendStorageEnabled 0x890e410)
	static bool IsFrontendStorageEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsFrontendCraftingEnabled (Underlying native function: IsFrontendCraftingEnabled 0x890e3e4)
	static bool IsFrontendCraftingEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsFirstShotAccuracyDisabled (Underlying native function: IsFirstShotAccuracyDisabled 0x890e3b8)
	static bool IsFirstShotAccuracyDisabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsErebus (Underlying native function: IsErebus 0x2486284)
	static bool IsErebus(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsEnduranceDebugEnabled (Underlying native function: IsEnduranceDebugEnabled 0x2486284)
	static bool IsEnduranceDebugEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsDisplayingTwitchViewerNamesAllowed (Underlying native function: IsDisplayingTwitchViewerNamesAllowed 0x890e368)
	static bool IsDisplayingTwitchViewerNamesAllowed(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsBROnly (Underlying native function: IsBROnly 0x2f5fd1c)
	static bool IsBROnly(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsAllContentInstalled (Underlying native function: IsAllContentInstalled 0x890e2e8)
	static bool IsAllContentInstalled(enum ESubGame& SubGame); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.IsAccountLinkingUIURLButtonEnabled (Underlying native function: IsAccountLinkingUIURLButtonEnabled 0x890e2bc)
	static bool IsAccountLinkingUIURLButtonEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.IsAccountLinkingEnabled (Underlying native function: IsAccountLinkingEnabled 0x890e290)
	static bool IsAccountLinkingEnabled(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.InstallStWTutorialContent (Underlying native function: InstallStWTutorialContent 0x890e268)
	static bool InstallStWTutorialContent(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.InstallGameFeatureContent (Underlying native function: InstallGameFeatureContent 0x890e1e8)
	static bool InstallGameFeatureContent(enum EFortGameFeature& GameFeature); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.InstallAllOnDemandContent (Underlying native function: InstallAllOnDemandContent 0x890e168)
	static bool InstallAllOnDemandContent(enum ESubGame& SubGame); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.HandleClientUpdateRequired (Underlying native function: HandleClientUpdateRequired 0x890dfe0)
	static void HandleClientUpdateRequired(enum EFortClientUpdateType& Type, bool& RequestExit); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.GetUseLegacyMediaSourceForCreative (Underlying native function: GetUseLegacyMediaSourceForCreative 0x890dfa8)
	static bool GetUseLegacyMediaSourceForCreative(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetUseLegacyMediaSource (Underlying native function: GetUseLegacyMediaSource 0x890df84)
	static bool GetUseLegacyMediaSource(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetTimeLimitForWatchBattlePassMovie (Underlying native function: GetTimeLimitForWatchBattlePassMovie 0x890dee4)
	static float GetTimeLimitForWatchBattlePassMovie(enum ETimeLimitForReplayCinematic& TimeLimitForWatchBattlePassMovie); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetTimeLimitForReplayCinematic (Underlying native function: GetTimeLimitForReplayCinematic 0x890de64)
	static float GetTimeLimitForReplayCinematic(enum ETimeLimitForReplayCinematic& TimeLimitForReplayCinematic); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetSurfaceType (Underlying native function: GetSurfaceType 0x890dd6c)
	static struct TEnumAsByte<EPhysicalSurface> GetSurfaceType(struct FHitResult& Hit, class UObject*& WorldContextObject); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetStWTutorialContentInstallState (Underlying native function: GetStWTutorialContentInstallState 0x890dd20)
	static enum EContentInstallState GetStWTutorialContentInstallState(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.GetStartupPhase (Underlying native function: GetStartupPhase 0x890dd48)
	static enum EFortStartupPhase GetStartupPhase(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetRiskyReelsPlaylistDenylistFilter (Underlying native function: GetRiskyReelsPlaylistDenylistFilter 0x890dc88)
	static struct FGameplayTagContainer GetRiskyReelsPlaylistDenylistFilter(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetPapayaSpeakersEnabled (Underlying native function: GetPapayaSpeakersEnabled 0x890dc44)
	static bool GetPapayaSpeakersEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetOnDemandContentInstallState (Underlying native function: GetOnDemandContentInstallState 0x890dbc4)
	static enum EContentInstallState GetOnDemandContentInstallState(enum ESubGame& SubGame); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.GetMinTheaterListRefreshDelay (Underlying native function: GetMinTheaterListRefreshDelay 0x890db9c)
	static int GetMinTheaterListRefreshDelay(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetMemoryRequirementForMediaStreamingMB (Underlying native function: GetMemoryRequirementForMediaStreamingMB 0x890db54)
	static int64_t GetMemoryRequirementForMediaStreamingMB(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetMaxTheaterListRefreshDelay (Underlying native function: GetMaxTheaterListRefreshDelay 0x890db2c)
	static int GetMaxTheaterListRefreshDelay(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetLastOnDemandContentInstallError (Underlying native function: GetLastOnDemandContentInstallError 0x890da64)
	static struct FContentInstallError GetLastOnDemandContentInstallError(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.GetIronCityWargameTagList (Underlying native function: GetIronCityWargameTagList 0x890da38)
	static struct TArray<struct FName> GetIronCityWargameTagList(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetIronCityEndlessEnabled (Underlying native function: GetIronCityEndlessEnabled 0x890da0c)
	static bool GetIronCityEndlessEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetIronCityEnabled (Underlying native function: GetIronCityEnabled 0x890d9e4)
	static bool GetIronCityEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetGlobalSnowRadius (Underlying native function: GetGlobalSnowRadius 0x890d96c)
	static float GetGlobalSnowRadius(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetGlobalSnowOrigin (Underlying native function: GetGlobalSnowOrigin 0x890d934)
	static struct FVector GetGlobalSnowOrigin(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetGlobalSnowAltitude (Underlying native function: GetGlobalSnowAltitude 0x890d908)
	static float GetGlobalSnowAltitude(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetGameFeatureContentInstallState (Underlying native function: GetGameFeatureContentInstallState 0x890d888)
	static enum EContentInstallState GetGameFeatureContentInstallState(enum EFortGameFeature& GameFeature); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.GetForceBuildingActorRecordUpdatesEnabled (Underlying native function: GetForceBuildingActorRecordUpdatesEnabled 0x890d860)
	static bool GetForceBuildingActorRecordUpdatesEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetDoubleClickTime (Underlying native function: GetDoubleClickTime 0x890d7a8)
	static float GetDoubleClickTime(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetCurrentSubGame (Underlying native function: GetCurrentSubGame 0x2ab3304)
	static enum ESubGame GetCurrentSubGame(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetAccountLinkingUIURL (Underlying native function: GetAccountLinkingUIURL 0x890d438)
	static struct FString GetAccountLinkingUIURL(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GetAccountLinkingUIConfig (Underlying native function: GetAccountLinkingUIConfig 0x890d40c)
	static enum EFortAccountLinkingUIConfig GetAccountLinkingUIConfig(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.GameFeatureContentInstallationProgress (Underlying native function: GameFeatureContentInstallationProgress 0x890d38c)
	static float GameFeatureContentInstallationProgress(enum EFortGameFeature& GameFeature); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.ContentInstallationProgress (Underlying native function: ContentInstallationProgress 0x890d30c)
	static float ContentInstallationProgress(enum ESubGame& SubGame); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGlobals.AreFriendCodesEnabled (Underlying native function: AreFriendCodesEnabled 0x890d2e0)
	static bool AreFriendCodesEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortGlobals.AllowContainersInCreativeItemLists (Underlying native function: AllowContainersInCreativeItemLists 0x890d2b4)
	static bool AllowContainersInCreativeItemLists(); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

