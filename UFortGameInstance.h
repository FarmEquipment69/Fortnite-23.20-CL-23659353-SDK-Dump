// Class /Script/FortniteGame.FortGameInstance
// Size: 0xe78
class UFortGameInstance : public UGameInstance
{
	unsigned char unreflected_1c0[0x58]; // 0x1c0 (0x58) 
	struct FMulticastInlineDelegate OnKairosLoadElectraPlayer; // 0x218 (0x10)
	struct TSet<struct FName> EventFlagsForcedOnByHotfix; // 0x228 (0x50)
	struct TSet<struct FName> EventFlagsForcedOffByHotfix; // 0x278 (0x50)
	struct TSet<struct FString> CosmeticsBlacklistedByHotfix; // 0x2c8 (0x50)
	struct TSet<struct FString> CosmeticsBlacklistedByHotfixInCompetitive; // 0x318 (0x50)
	struct TSet<struct FString> CosmeticsProhibitedByHotfixInCampaign; // 0x368 (0x50)
	struct TSet<struct FString> CosmeticsProhibitedByHotfixInAthena; // 0x3b8 (0x50)
	struct TSet<struct FString> NiagaraAssetsBlacklistedByHotfix; // 0x408 (0x50)
	struct TSet<struct FString> CascadeAssetsBlockedByHotfix; // 0x458 (0x50)
	bool bBattleRoyaleMatchmakingEnabled; // 0x4a8 (0x1)
	bool bCreativeModeProfileEnabled; // 0x4a9 (0x1)
	unsigned char unreflected_4aa[0x6]; // 0x4aa (0x6) 
	struct TArray<struct FPlaylistOverrideData> PlaylistOverrides; // 0x4b0 (0x10)
	struct TArray<struct FAudioDynamicSoundData> DynamicSoundData; // 0x4c0 (0x10)
	struct TArray<struct FPlaylistFrontEndSettings> FrontEndPlaylistData; // 0x4d0 (0x10)
	bool bDeprecatePlaylistAccessData; // 0x4e0 (0x1)
	unsigned char unreflected_4e1[0x7]; // 0x4e1 (0x7) 
	struct FAthenaDataTableSet AthenaDataTables; // 0x4e8 (0x38)
	struct TMap<struct TWeakObjectPtr<class UDataTable>, class UDataTable*> CachedBaseDataTables; // 0x520 (0x50)
	struct TMap<struct TWeakObjectPtr<class UCurveTable>, class UCurveTable*> CachedBaseCurveTables; // 0x570 (0x50)
	bool bOverridingCurrentEmoteMusicFFT; // 0x5c0 (0x1)
	unsigned char unreflected_5c1[0x3]; // 0x5c1 (0x3) 
	float CurrentEmoteMusicFFT100hz; // 0x5c4 (0x4)
	float CurrentEmoteMusicFFT2000hz; // 0x5c8 (0x4)
	float EmoteMusicEnvelopeBeatCount; // 0x5cc (0x4)
	unsigned char unreflected_5d0[0x18]; // 0x5d0 (0x18) 
	class UMcpProfileManager* ProfileManager; // 0x5e8 (0x8)
	class UFortInventoryManager* InventoryManager; // 0x5f0 (0x8)
	unsigned char unreflected_5f8[0x10]; // 0x5f8 (0x10) 
	class UFortMatchmaking* Matchmaking; // 0x608 (0x8)
	class UFortMatchmakingV2* MatchmakingV2; // 0x610 (0x8)
	class UFortRejoinCheck* RejoinCheck; // 0x618 (0x8)
	class UFortSocialManager* SocialManager; // 0x620 (0x8)
	class UFortGameModeManager* GameModeManager; // 0x628 (0x8)
	class UFortMatchAnalytics* MatchAnalytics; // 0x630 (0x8)
	class UFortPartySpectateAnalytics* PartySpectateAnalytics; // 0x638 (0x8)
	class USidecarSys* SidecarSys; // 0x640 (0x8)
	unsigned char unreflected_648[0x210]; // 0x648 (0x210) 
	struct FGuid GlobalUnregistrationSaveGUID; // 0x858 (0x10)
	unsigned char unreflected_868[0x30]; // 0x868 (0x30) 
	class UFortTooltipManager* TooltipManager; // 0x898 (0x8)
	unsigned char unreflected_8a0[0x50]; // 0x8a0 (0x50) 
	struct TArray<class UFortRegisteredPlayerInfo*> RegisteredPlayers; // 0x8f0 (0x10)
	unsigned char unreflected_900[0x18]; // 0x900 (0x18) 
	class UFortUpdateManager* UpdateManager; // 0x918 (0x8)
	class UDataAssetDirectoryManager* DataAssetDirectoryManager; // 0x920 (0x8)
	class UFortInteractabilityTracker* InteractabilityTracker; // 0x928 (0x8)
	unsigned char unreflected_930[0x10]; // 0x930 (0x10) 
	class UFortChat* Chatroom; // 0x940 (0x8)
	struct TArray<struct TWeakObjectPtr<class UFortRegisteredPlayerInfo>> RegisteredPlayerInfosAwaitingRefresh; // 0x948 (0x10)
	struct FString LastGameHighlightGroupId; // 0x958 (0x10)
	unsigned char unreflected_968[0x20]; // 0x968 (0x20) 
	class UFortSeasonalEventManager* SeasonalEventManager; // 0x988 (0x8)
	class UFortTournamentManager* TournamentManager; // 0x990 (0x8)
	class UFortPushNotificationManager* MobilePushNotificationManager; // 0x998 (0x8)
	unsigned char unreflected_9a0[0x18]; // 0x9a0 (0x18) 
	float BroadcastFeatureStatusRate; // 0x9b8 (0x4)
	unsigned char unreflected_9bc[0x1c]; // 0x9bc (0x1c) 
	class UFortMissionGenerator* CurrentMissionGenerator; // 0x9d8 (0x8)
	unsigned char unreflected_9e0[0x68]; // 0x9e0 (0x68) 
	struct FMulticastInlineDelegate OnSubGameChangedBP; // 0xa48 (0x10)
	unsigned char unreflected_a58[0x38]; // 0xa58 (0x38) 
	class UFortAppActivationSoundMixManager* AppActivationSoundMixManager; // 0xa90 (0x8)
	unsigned char unreflected_a98[0x40]; // 0xa98 (0x40) 
	int KairosUIResX; // 0xad8 (0x4)
	int KairosUIResY; // 0xadc (0x4)
	unsigned char unreflected_ae0[0x40]; // 0xae0 (0x40) 
	struct TArray<struct FWebEnvUrl> KairosWebUrls; // 0xb20 (0x10)
	unsigned char unreflected_b30[0x10]; // 0xb30 (0x10) 
	int KairosMinSupportedAppVersion; // 0xb40 (0x4)
	float KairosHotfixCheckTimer; // 0xb44 (0x4)
	float KairosHotfixCheckVariance; // 0xb48 (0x4)
	unsigned char unreflected_b4c[0x1c]; // 0xb4c (0x1c) 
	class UFortPlaylistManager* PlaylistManager; // 0xb68 (0x8)
	unsigned char unreflected_b70[0x10]; // 0xb70 (0x10) 
	struct TArray<class UFortLocalPlayer*> LoggedInPlayers; // 0xb80 (0x10)
	struct TArray<enum EAppStore> StoreSupport; // 0xb90 (0x10)
	struct TArray<enum EAppStore> StoreSupportAndroidSamsung; // 0xba0 (0x10)
	struct TArray<enum EAppStore> StoreSupportAndroidSideloadSamsung; // 0xbb0 (0x10)
	struct TArray<enum EAppStore> StoreSupportAndroidSideloadOther; // 0xbc0 (0x10)
	struct TArray<enum EAppStore> StoreSupportPartner; // 0xbd0 (0x10)
	unsigned char unreflected_be0[0x58]; // 0xbe0 (0x58) 
	class UFortMaterialCacheManager* MaterialCacheManager; // 0xc38 (0x8)
	unsigned char unreflected_c40[0x48]; // 0xc40 (0x48) 
	class UReplayVideoManager* ReplayVideoManager; // 0xc88 (0x8)
	class UVideoExtractionBootstrapper* ExtractionBootstrapper; // 0xc90 (0x8)
	unsigned char unreflected_c98[0x8]; // 0xc98 (0x8) 
	class UPegasusDriver* PegasusDriver; // 0xca0 (0x8)
	struct FSoftClassPath ContentBeaconClientV2ClassPath; // 0xca8 (0x18)
	struct TWeakObjectPtr<class AContentBeaconClientV2> ContentBeaconClientV2; // 0xcc0 (0x8)
	struct TWeakObjectPtr<class AContentBeaconClientV2> MatchmakingContentBeacon; // 0xcc8 (0x8)
	unsigned char unreflected_cd0[0xc8]; // 0xcd0 (0xc8) 
	class UDAD_IslandQuerier* DADIslandQuerier; // 0xd98 (0x8)
	class UDAD_CreativeUserOptionsCollection* DADCreativeUserOptionsCollection; // 0xda0 (0x8)
	class UFortCreativeDiscoverySurfaceManager* CreativeDiscoverySurfaceManager; // 0xda8 (0x8)
	struct TArray<struct TWeakObjectPtr<class UClass>> DisabledPhysicsAssets; // 0xdb0 (0x10)
	unsigned char padding_dc0[0xb8]; // 0xdc0 (0xb8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameInstance.UninstallFortniteBROnNextBoot (Underlying native function: UninstallFortniteBROnNextBoot 0x8088c18)
	bool UninstallFortniteBROnNextBoot(bool& bRestartApp, bool& bPromptForRestart); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.UninstallAllOptionalContentOnNextBoot (Underlying native function: UninstallAllOptionalContentOnNextBoot 0x8088c18)
	bool UninstallAllOptionalContentOnNextBoot(bool& bRestartApp, bool& bPromptForRestart); // (0x00000002 | Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.SetUserSetting (Underlying native function: SetUserSetting 0x88e0300)
	void SetUserSetting(struct FString& Key, struct FString& Value, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.SetOverrideCurrentMusicFFT (Underlying native function: SetOverrideCurrentMusicFFT 0x88e022c)
	void SetOverrideCurrentMusicFFT(float& FFT100hz, float& FFT2000hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameInstance.SetMultipleUserSettings (Underlying native function: SetMultipleUserSettings 0x88e00c4)
	void SetMultipleUserSettings(struct TMap<struct FString, struct FString>& Settings, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.SetHotfixCompleteCallback (Underlying native function: SetHotfixCompleteCallback 0x88dffe8)
	void SetHotfixCompleteCallback(struct FWebJSFunction& Callback); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.SetFeatureStatusCallback (Underlying native function: SetFeatureStatusCallback 0x88dff0c)
	void SetFeatureStatusCallback(struct FWebJSFunction& Callback); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.SetErrorSimulationCommands (Underlying native function: SetErrorSimulationCommands 0x88dfd4c)
	void SetErrorSimulationCommands(struct FString& CommandLine); // (0x00000002 | Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.ResumeOptionalContentInstall (Underlying native function: ResumeOptionalContentInstall 0x88dfd38)
	void ResumeOptionalContentInstall(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortGameInstance.RequestBroadcast (Underlying native function: RequestBroadcast 0x88dfcd0)
	void RequestBroadcast(); // (0x00000002 | Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.PauseOptionalContentInstall (Underlying native function: PauseOptionalContentInstall 0x88dfcbc)
	void PauseOptionalContentInstall(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortGameInstance.PauseContentInstall (Underlying native function: PauseContentInstall 0x88dfc88)
	void PauseContentInstall(); // (0x00000002 | Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.OpenUpdateApp (Underlying native function: OpenUpdateApp 0x88dfc70)
	void OpenUpdateApp(); // (0x00000002 | Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.OnTournamentDataRefreshed (Underlying native function: OnTournamentDataRefreshed 0x88dfc5c)
	void OnTournamentDataRefreshed(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameInstance.OnScriptScreenLogMessage (Underlying native function: OnScriptScreenLogMessage 0x5d67510)
	void OnScriptScreenLogMessage(struct FScriptScreenLogMessage& message); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortGameInstance.OnScriptDiagnosticMessage (Underlying native function: OnScriptDiagnosticMessage 0x5d67460)
	void OnScriptDiagnosticMessage(struct FScriptDiagnosticMessage& message); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortGameInstance.OnContentReadinessChanged (Underlying native function: OnContentReadinessChanged 0x5d673c0)
	void OnContentReadinessChanged(enum EClientContentReadinessV2& ContentReadiness); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameInstance.OnContentMessageAdded (Underlying native function: OnContentMessageAdded 0x5d672e0)
	void OnContentMessageAdded(struct FString& NewContentMessage); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameInstance.OnContentBeaconGameFeatureDeactive (Underlying native function: OnContentBeaconGameFeatureDeactive 0x5d67210)
	void OnContentBeaconGameFeatureDeactive(struct FString& ContentURL); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameInstance.OnContentBeaconGameFeatureActive (Underlying native function: OnContentBeaconGameFeatureActive 0x5d67140)
	void OnContentBeaconGameFeatureActive(struct FString& ContentURL); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameInstance.KairosSubmitBugReport (Underlying native function: KairosSubmitBugReport 0x88dfad4)
	void KairosSubmitBugReport(struct FString& Subject, struct FString& Body, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.IsContentUpToDate (Underlying native function: IsContentUpToDate 0x88df9c8)
	void IsContentUpToDate(enum EFortGameFeature& Feature, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetUserSetting (Underlying native function: GetUserSetting 0x88df7e0)
	void GetUserSetting(struct FString& Key, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetProjectVersion (Underlying native function: GetProjectVersion 0x88df728)
	void GetProjectVersion(struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetLinkDataManager (Underlying native function: GetLinkDataManager 0x88df6c0)
	class UFortLinkDataManager* GetLinkDataManager(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameInstance.GetHotfixHasApplied (Underlying native function: GetHotfixHasApplied 0x88df594)
	void GetHotfixHasApplied(struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetFeatureRequiredSizesRequiredOnly (Underlying native function: GetFeatureRequiredSizesRequiredOnly 0x88df488)
	void GetFeatureRequiredSizesRequiredOnly(enum EFortGameFeature& Feature, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetFeatureRequiredSizesOptionalOnly (Underlying native function: GetFeatureRequiredSizesOptionalOnly 0x88df37c)
	void GetFeatureRequiredSizesOptionalOnly(enum EFortGameFeature& Feature, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetFeatureRequiredSizes (Underlying native function: GetFeatureRequiredSizes 0x88df274)
	void GetFeatureRequiredSizes(enum EFortGameFeature& Feature, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetEventManager (Underlying native function: GetEventManager 0x88df25c)
	class UFortSeasonalEventManager* GetEventManager(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameInstance.GetDataAssetDirectoryManager (Underlying native function: GetDataAssetDirectoryManager 0x88df244)
	class UDataAssetDirectoryManager* GetDataAssetDirectoryManager(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameInstance.GetDADIslandQuerier (Underlying native function: GetDADIslandQuerier 0x88df22c)
	class UDAD_IslandQuerier* GetDADIslandQuerier(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameInstance.GetDADCreativeUserOptionsCollection (Underlying native function: GetDADCreativeUserOptionsCollection 0x88df214)
	class UDAD_CreativeUserOptionsCollection* GetDADCreativeUserOptionsCollection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameInstance.GetContentState (Underlying native function: GetContentState 0x88df10c)
	void GetContentState(enum EFortGameFeature& Feature, struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.GetAnalyticsSessionDetails (Underlying native function: GetAnalyticsSessionDetails 0x88df030)
	void GetAnalyticsSessionDetails(struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.DebugCreatePlayerWithLoginInfo (Underlying native function: DebugCreatePlayerWithLoginInfo 0x88ded84)
	void DebugCreatePlayerWithLoginInfo(int& ControllerId, struct FString& Email, struct FString& Password); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortGameInstance.DebugCreateBackgroundPlayer (Underlying native function: DebugCreateBackgroundPlayer 0x7239740)
	void DebugCreateBackgroundPlayer(int& ControllerId); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortGameInstance.ContinueDelayedStartup (Underlying native function: ContinueDelayedStartup 0x88ded48)
	void ContinueDelayedStartup(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortGameInstance.ClearOverrideCurrentMusicFFT (Underlying native function: ClearOverrideCurrentMusicFFT 0x88ded30)
	void ClearOverrideCurrentMusicFFT(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameInstance.CheckLatestClient (Underlying native function: CheckLatestClient 0x88dec5c)
	void CheckLatestClient(struct FWebJSResponse& Response); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.ChangeActiveGameFeature (Underlying native function: ChangeActiveGameFeature 0x88deac8)
	void ChangeActiveGameFeature(struct FString& FeatureString); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortGameInstance.CancelUninstallFortniteBROnNextBoot (Underlying native function: CancelUninstallFortniteBROnNextBoot 0x2486284)
	bool CancelUninstallFortniteBROnNextBoot(); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.CancelUninstallAllOptionalContentOnNextBoot (Underlying native function: CancelUninstallAllOptionalContentOnNextBoot 0x2486284)
	bool CancelUninstallAllOptionalContentOnNextBoot(); // (Net | NetReliable | Native | Event | NetResponse | Public)

	// Function /Script/FortniteGame.FortGameInstance.CancelOptionalContentInstall (Underlying native function: CancelOptionalContentInstall 0x88deab4)
	void CancelOptionalContentInstall(); // (Final | 0x00000002 | Native | Public | Const)

	// Function /Script/FortniteGame.FortGameInstance.CancelContentInstall (Underlying native function: CancelContentInstall 0x88dea80)
	void CancelContentInstall(); // (Net | NetReliable | Native | Event | NetResponse | Public)
};

