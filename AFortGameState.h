// Class /Script/FortniteGame.FortGameState
// Size: 0x788
class AFortGameState : public AFortGameStateBase
{
	struct FString CurrentWUID; // 0x378 (0x10)
	int ParTime; // 0x388 (0x4)
	int WorldLevel; // 0x38c (0x4)
	int CraftingBonus; // 0x390 (0x4)
	float CurrentReadyToContinueTimer; // 0x394 (0x4)
	int TeamCount; // 0x398 (0x4)
	uint32_t GameFlagData; // 0x39c (0x4)
	class AFortPoiManager* PoiManager; // 0x3a0 (0x8)
	unsigned char unreflected_3a8[0x14]; // 0x3a8 (0x14) 
	unsigned char bDBNOEnabledForGameMode; // 0x3bc (0x1)
	unsigned char bSkipWorldSave; // 0x3bc (0x1)
	unsigned char bShowLoadingScreenUntilAllLevelAreLoaded; // 0x3bc (0x1)
	unsigned char unreflected_3bd[0x1b]; // 0x3bd (0x1b) 
	bool bFishingCollectionEnabled; // 0x3d8 (0x1)
	bool bCharacterCollectionEnabled; // 0x3d9 (0x1)
	unsigned char unreflected_3da[0x2]; // 0x3da (0x2) 
	float MatchStartTime; // 0x3dc (0x4)
	bool bPlayerRespawningBlockedTemporarily; // 0x3e0 (0x1)
	unsigned char unreflected_3e1[0x17]; // 0x3e1 (0x17) 
	struct TArray<struct FAdditionalLevelStreamed*> AdditionalPlaylistLevelsStreamed; // 0x3f8 (0x10)
	unsigned char unreflected_408[0x18]; // 0x408 (0x18) 
	int WorldDaysElapsed; // 0x420 (0x4)
	unsigned char unreflected_424[0x1c]; // 0x424 (0x1c) 
	class AFortFeedbackManager* FeedbackManager; // 0x440 (0x8)
	class AFortMissionManager* MissionManager; // 0x448 (0x8)
	class AFortClientAnnouncementManager* AnnouncementManager; // 0x450 (0x8)
	class AFortScriptedActionManager* ScriptedActionManager; // 0x458 (0x8)
	class AFortLobbyBeaconState* LobbyGameState; // 0x460 (0x8)
	class AFortWorldManager* WorldManager; // 0x468 (0x8)
	struct TEnumAsByte<EFortGameplayState> GameplayState; // 0x470 (0x1)
	unsigned char unreflected_471[0x7]; // 0x471 (0x7) 
	class UClass* MusicManagerSubclass; // 0x478 (0x8)
	class UFortMusicManagerBank* MusicManagerBank; // 0x480 (0x8)
	class UClass* FortAmbientAudioControllerClass; // 0x488 (0x8)
	struct FString GameSessionId; // 0x490 (0x10)
	struct TArray<class UFortMovementComp_Character*> ManagedCharMovementComponents; // 0x4a0 (0x10)
	struct TArray<class AFortAIPawn*> ManagedAnimPawns; // 0x4b0 (0x10)
	class AFortPawn* PawnForReplayRelevancy; // 0x4c0 (0x8)
	class AFortPlayerState* RecorderPlayerState; // 0x4c8 (0x8)
	unsigned char unreflected_4d0[0x18]; // 0x4d0 (0x18) 
	struct TArray<class UFortMovementComp_Character*> ManagedCharMovementComponentsCopy; // 0x4e8 (0x10)
	struct TArray<struct FOnTimeHitInfo> TimeOfDayCallbacks; // 0x4f8 (0x10)
	class AFortFXManager* FXManager; // 0x508 (0x8)
	class AFortWindManager* WindManager; // 0x510 (0x8)
	class AFortDestructionGraph* DestructionGraph; // 0x518 (0x8)
	struct TArray<class AFortTeamInfo*> Teams; // 0x520 (0x10)
	bool bSkipTeamReplication; // 0x530 (0x1)
	unsigned char unreflected_531[0x7]; // 0x531 (0x7) 
	struct TArray<struct FTeamChangeRequest> PendingTeamChangeRequests; // 0x538 (0x10)
	bool bAllowPendingTeamChangeRequests; // 0x548 (0x1)
	unsigned char unreflected_549[0x37]; // 0x549 (0x37) 
	struct FMulticastInlineDelegate OnPoiManagerReplicatedEvent; // 0x580 (0x10)
	unsigned char unreflected_590[0x48]; // 0x590 (0x48) 
	class AFortGlobalAbilityTargetingActor* GlobalAbilityTargetingActor; // 0x5d8 (0x8)
	unsigned char unreflected_5e0[0xa8]; // 0x5e0 (0xa8) 
	struct TArray<struct FAppliedHomebaseData> AppliedHomebaseDataArray; // 0x688 (0x10)
	unsigned char unreflected_698[0x48]; // 0x698 (0x48) 
	struct FMulticastInlineDelegate OnAllAdditionalPlaylistLevelsLoadedDynamicDelegate; // 0x6e0 (0x10)
	unsigned char unreflected_6f0[0x18]; // 0x6f0 (0x18) 
	struct FMulticastInlineDelegate OnAllAdditionalPlaylistLevelsVisibleDynamicDelegate; // 0x708 (0x10)
	struct FGameStateLootInfo LootInfo; // 0x718 (0x20)
	struct TArray<struct FBuildingContainerDebugInfo> TreasureChestInfos; // 0x738 (0x10)
	struct TArray<struct FBuildingContainerDebugInfo> AmmoBoxInfos; // 0x748 (0x10)
	unsigned char unreflected_758[0x8]; // 0x758 (0x8) 
	float UnplayableHitchThresholdInMs; // 0x760 (0x4)
	int MaxUnplayableHitchesToTolerate; // 0x764 (0x4)
	unsigned char unreflected_768[0x18]; // 0x768 (0x18) 
	class UCreativeQuestManager* CreativeQuestManager; // 0x780 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameState.SetPlayerRespawningBlocked_Temporarily (Underlying native function: SetPlayerRespawningBlocked_Temporarily 0x88fbfe4)
	void SetPlayerRespawningBlockedTemporarily(bool& bBlock); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameState.RunPerfMemCheatScript (Underlying native function: RunPerfMemCheatScript 0x88fb46c)
	void RunPerfMemCheatScript(bool& bStartStatFiles); // (Net | NetReliable | Native | Event | NetMulticast | Public)

	// Function /Script/FortniteGame.FortGameState.OnRep_WorldManager (Underlying native function: OnRep_WorldManager 0x2fd2d04)
	void OnRepWorldManager(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_WorldDaysElapsed (Underlying native function: OnRep_WorldDaysElapsed 0x2fc8180)
	void OnRepWorldDaysElapsed(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_Teams (Underlying native function: OnRep_Teams 0x88fae60)
	void OnRepTeams(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameState.OnRep_RecorderPlayerState (Underlying native function: OnRep_RecorderPlayerState 0x88fadb0)
	void OnRepRecorderPlayerState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_PoiManager (Underlying native function: OnRep_PoiManager 0x2da04ac)
	void OnRepPoiManager(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_PawnForReplayRelevancy (Underlying native function: OnRep_PawnForReplayRelevancy 0x24c01b4)
	void OnRepPawnForReplayRelevancy(class AFortPawn*& OldPawnForReplayRelevancy); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_MusicManagerSubclass (Underlying native function: OnRep_MusicManagerSubclass 0x88fad30)
	void OnRepMusicManagerSubclass(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_MusicManagerBank (Underlying native function: OnRep_MusicManagerBank 0x88facd0)
	void OnRepMusicManagerBank(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_MissionManager (Underlying native function: OnRep_MissionManager 0x88faca4)
	void OnRepMissionManager(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_GameSessionID (Underlying native function: OnRep_GameSessionID 0x2444858)
	void OnRepGameSessionID(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_GameplayState (Underlying native function: OnRep_GameplayState 0x2d7a1e0)
	void OnRepGameplayState(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_FeedbackManager (Underlying native function: OnRep_FeedbackManager 0x26daa0c)
	void OnRepFeedbackManager(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_CurrentWUID (Underlying native function: OnRep_CurrentWUID 0x88fabd4)
	void OnRepCurrentWUID(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_AnnouncementManager (Underlying native function: OnRep_AnnouncementManager 0x26daa0c)
	void OnRepAnnouncementManager(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameState.OnRep_AdditionalPlaylistLevelsStreamed (Underlying native function: OnRep_AdditionalPlaylistLevelsStreamed 0x88fab7c)
	void OnRepAdditionalPlaylistLevelsStreamed(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameState.OnFinishedStreamingAdditionalPlaylistLevel (Underlying native function: OnFinishedStreamingAdditionalPlaylistLevel 0x88fab50)
	void OnFinishedStreamingAdditionalPlaylistLevel(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameState.OnFinishedShowingAdditionalPlaylistLevel (Underlying native function: OnFinishedShowingAdditionalPlaylistLevel 0x88fab3c)
	void OnFinishedShowingAdditionalPlaylistLevel(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameState.GetWorldDaysElapsed (Underlying native function: GetWorldDaysElapsed 0x2d0130c)
	int GetWorldDaysElapsed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameState.GetPoiManager (Underlying native function: GetPoiManager 0x88f9bd0)
	class AFortPoiManager* GetPoiManager(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameState.GetPlayerRespawningBlocked_Temporarily (Underlying native function: GetPlayerRespawningBlocked_Temporarily 0x88f9b4c)
	bool GetPlayerRespawningBlockedTemporarily(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameState.GetMiniMapInterface (Underlying native function: GetMiniMapInterface 0x88f9aac)
	struct TScriptInterface<class IFortMiniMapInterface> GetMiniMapInterface(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameState.GetMatchTime (Underlying native function: GetMatchTime 0x88f9a80)
	float GetMatchTime(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameState.GetHUDElementsToShow (Underlying native function: GetHUDElementsToShow 0x88f99b0)
	struct FGameplayTagContainer GetHUDElementsToShow(class APawn*& Pawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameState.GetHUDElementsToHide (Underlying native function: GetHUDElementsToHide 0x88f98f8)
	struct FGameplayTagContainer GetHUDElementsToHide(class APawn*& Pawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameState.GetGameSessionID (Underlying native function: GetGameSessionID 0x88f9670)
	struct FString GetGameSessionID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameState.GetGameplayState (Underlying native function: GetGameplayState 0x88f97bc)
	struct TEnumAsByte<EFortGameplayState> GetGameplayState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameState.DemoEndOfDayRecap (Underlying native function: DemoEndOfDayRecap 0x88f9428)
	void DemoEndOfDayRecap(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortGameState.DBNOEnabledForGameMode (Underlying native function: DBNOEnabledForGameMode 0x88f8ac4)
	bool DBNOEnabledForGameMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameState.DbgSphereSendToAllInternal_DoNotCall (Underlying native function: DbgSphereSendToAllInternal_DoNotCall 0x88f91d4)
	void DbgSphereSendToAllInternalDoNotCall(struct FVector& Center, float& Radius, int& Segments, struct FColor& Color, bool& bPersistentLines, float& LifeTime, unsigned char& DepthPriority, float& Thickness); // (Net | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortGameState.DbgLineSendToAllInternal_DoNotCall (Underlying native function: DbgLineSendToAllInternal_DoNotCall 0x88f8fc8)
	void DbgLineSendToAllInternalDoNotCall(struct FVector& LineStart, struct FVector& LineEnd, struct FColor& Color, bool& bPersistentLines, float& LifeTime, unsigned char& DepthPriority, float& Thickness); // (Net | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortGameState.DbgCapsuleSendToAllInternal_DoNotCall (Underlying native function: DbgCapsuleSendToAllInternal_DoNotCall 0x88f8d30)
	void DbgCapsuleSendToAllInternalDoNotCall(struct FVector& Center, float& HalfHeight, float& Radius, struct FQuat& Rotation, struct FColor& Color, bool& bPersistentLines, float& LifeTime, unsigned char& DepthPriority, float& Thickness); // (Net | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortGameState.DbgBoxSendToAllInternal_DoNotCall (Underlying native function: DbgBoxSendToAllInternal_DoNotCall 0x88f8ae0)
	void DbgBoxSendToAllInternalDoNotCall(struct FVector& Center, struct FVector& Extent, struct FRotator& Rotation, struct FColor& Color, bool& bPersistentLines, float& LifeTime, unsigned char& DepthPriority, float& Thickness); // (Net | Native | Event | NetMulticast | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortGameState.CopyGameSessionIdToClipboard (Underlying native function: CopyGameSessionIdToClipboard 0x88f8a98)
	void CopyGameSessionIdToClipboard(); // (Final | Exec | Native | Protected)

	// Function /Script/FortniteGame.FortGameState.Client_RefreshEventCalendar (Underlying native function: Client_RefreshEventCalendar 0xed0df8)
	void ClientRefreshEventCalendar(); // (Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortGameState.Client_InitiateEndOfDayRecap (Underlying native function: Client_InitiateEndOfDayRecap 0x88f8a00)
	void ClientInitiateEndOfDayRecap(struct FEndOfDayRecap& EndOfDayRecap); // (Net | NetReliable | Native | Event | NetMulticast | Public)
};

