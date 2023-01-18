// Class /Script/FortniteGame.FortGameStateZone
// Size: 0x1000
class AFortGameStateZone : public AFortGameState_InGame
{
	int PawnIDCount; // 0x788 (0x4)
	int WaitingToLeaveZoneTimeLeft; // 0x78c (0x4)
	float HostilityMeterPercent; // 0x790 (0x4)
	float IntensityPercent; // 0x794 (0x4)
	int SpawnPointsCap; // 0x798 (0x4)
	int SpawnPointsAllocated; // 0x79c (0x4)
	int MaxTotalAI; // 0x7a0 (0x4)
	int MaxEncounterAI; // 0x7a4 (0x4)
	int MaxEncounterSP; // 0x7a8 (0x4)
	unsigned char unreflected_7ac[0x4]; // 0x7ac (0x4) 
	struct FReplicatedMontageMap ReplicatedMontageMap; // 0x7b0 (0x18)
	struct TArray<class UFortGameplayModifierItemDefinition*> AllSpawnGroupUpgradeModifierDefs; // 0x7c8 (0x10)
	enum EFortCompletionResult CompletionResult; // 0x7d8 (0x1)
	unsigned char unreflected_7d9[0x53]; // 0x7d9 (0x53) 
	float PlayerBuildingSkillLevel; // 0x82c (0x4)
	struct TArray<float> PlayerSharedMaxTrapAttributes; // 0x830 (0x10)
	struct TArray<class UObject*> GameplayMutatorObservers; // 0x840 (0x10)
	unsigned char unreflected_850[0x128]; // 0x850 (0x128) 
	struct FGameplayTagContainer ExplicitGloballyBlockedAbilityTags; // 0x978 (0x20)
	unsigned char unreflected_998[0xa0]; // 0x998 (0xa0) 
	bool bInvitesRestricted; // 0xa38 (0x1)
	bool bDBNODeathEnabled; // 0xa39 (0x1)
	unsigned char unreflected_a3a[0x2]; // 0xa3a (0x2) 
	uint32_t ServerGameplayTagIndexHash; // 0xa3c (0x4)
	bool bDisconnectOnServerGameplayTagIndexHashMismatch; // 0xa40 (0x1)
	unsigned char unreflected_a41[0x67]; // 0xa41 (0x67) 
	struct FMulticastInlineDelegate OnCompletionResultEvent; // 0xaa8 (0x10)
	unsigned char unreflected_ab8[0x4]; // 0xab8 (0x4) 
	int TotalPlayerStructures; // 0xabc (0x4)
	int MaxPlayerStructures; // 0xac0 (0x4)
	bool bGlobalCeaseFire; // 0xac4 (0x1)
	unsigned char unreflected_ac5[0x1b]; // 0xac5 (0x1b) 
	class AFortGlobalEnvironmentAbilityActor* GlobalEnvironmentAbilityActor; // 0xae0 (0x8)
	struct TArray<class UFortAbilitySystemComponent*> GlobalGameplayEventListeners; // 0xae8 (0x10)
	struct FActiveGameplayModifierArray ActiveGameplayModifiers; // 0xaf8 (0x130)
	bool bSupportRuntimeShutdownOfGameplayModifiers; // 0xc28 (0x1)
	unsigned char unreflected_c29[0x7]; // 0xc29 (0x7) 
	class UBuildingStructuralSupportSystem* StructuralSupportSystem; // 0xc30 (0x8)
	struct FDataTableRowHandle ZoneDifficultyInfoRow; // 0xc38 (0x10)
	class UFortZoneTheme* ZoneTheme; // 0xc48 (0x8)
	struct TWeakObjectPtr<class UClass> MissionGeneratorClass; // 0xc50 (0x28)
	struct TArray<struct FFortItemQuantityPair> MissionRewards; // 0xc78 (0x10)
	struct TArray<struct FFortZoneDifficultyIncreaseRewardData> DifficultyIncreaseRewards; // 0xc88 (0x10)
	struct FFortZoneMissionAlertData MissionAlertData; // 0xc98 (0x30)
	unsigned char unreflected_cc8[0x90]; // 0xcc8 (0x90) 
	struct TArray<struct FSoftObjectPath> ClientPreloadMissionClasses; // 0xd58 (0x10)
	class AFortThreatVisualsManager* ThreatVisualsManager; // 0xd68 (0x8)
	class AFortThreatParticleActor* ThreatParticleActor; // 0xd70 (0x8)
	bool bDrawRunVariationDebug; // 0xd78 (0x1)
	unsigned char unreflected_d79[0x7]; // 0xd79 (0x7) 
	struct TArray<struct TWeakObjectPtr<class AFortAIPawn>> PawnVariationList; // 0xd80 (0x10)
	int VariationIndex; // 0xd90 (0x4)
	float GameDifficulty; // 0xd94 (0x4)
	unsigned char unreflected_d98[0x4]; // 0xd98 (0x4) 
	bool bIsGroupContent; // 0xd9c (0x1)
	unsigned char unreflected_d9d[0x3]; // 0xd9d (0x3) 
	int DifficultyIncreaseRewardTier; // 0xda0 (0x4)
	unsigned char bAllowedToUpdateBackendDifficulty; // 0xda4 (0x1)
	unsigned char bAllowedToOverrideBackendRewards; // 0xda4 (0x1)
	unsigned char unreflected_da5[0x13]; // 0xda5 (0x13) 
	struct TArray<class UClass*> AllPlayerBuildableClasses; // 0xdb8 (0x10)
	struct TMap<class UClass*, int> AllPlayerBuildableClassesIndexLookup; // 0xdc8 (0x50)
	struct FPlayerBuildableClassContainer PlayerBuildableClasses[0x6]; // 0xe18 (0x10) (ARRAY) 
	class AFortInGameMapManager* UIMapManager; // 0xe78 (0x8)
	class UFortCharacterCosmeticManager* CharacterCosmeticManager; // 0xe80 (0x8)
	class UFortSkinWeightOverrideManager* SkinWeightManager; // 0xe88 (0x8)
	struct FMulticastInlineDelegate OnScoreTotalsChanged; // 0xe90 (0x10)
	struct FName ScoringTableRowName; // 0xea0 (0x4)
	int TotalCombatScore; // 0xea4 (0x4)
	int TotalBuildingScore; // 0xea8 (0x4)
	int TotalUtilityScore; // 0xeac (0x4)
	struct FString TheaterUniqueId; // 0xeb0 (0x10)
	struct FString MissionLogDebugString; // 0xec0 (0x10)
	unsigned char unreflected_ed0[0x18]; // 0xed0 (0x18) 
	unsigned char bAllowBuildingCostMods; // 0xee8 (0x1)
	unsigned char bFreeBuildingRepairs; // 0xee8 (0x1)
	unsigned char unreflected_ee9[0x3]; // 0xee9 (0x3) 
	bool bAllowBuildingAtLayoutRequirements; // 0xeec (0x1)
	bool bAllowBuildingWithoutLayoutRequirements; // 0xeed (0x1)
	bool bAllowLayoutRequirementsFeature; // 0xeee (0x1)
	unsigned char unreflected_eef[0x1]; // 0xeef (0x1) 
	bool bAllowBuildingThroughBlockingObjects; // 0xef0 (0x1)
	unsigned char unreflected_ef1[0x3]; // 0xef1 (0x3) 
	int NumSurvivorsSpawned; // 0xef4 (0x4)
	int NumSurvivorsDead; // 0xef8 (0x4)
	int NumSurvivorsRescued; // 0xefc (0x4)
	struct FMulticastInlineDelegate OnNumSurvivorsRescuedChangedDelegate; // 0xf00 (0x10)
	enum EServerStability ServerStability; // 0xf10 (0x1)
	unsigned char unreflected_f11[0x67]; // 0xf11 (0x67) 
	struct TArray<struct FVoteData> GameplayVotesArray; // 0xf78 (0x10)
	unsigned char unreflected_f88[0x50]; // 0xf88 (0x50) 
	class AFortCreativePortalManager* CreativePortalManager; // 0xfd8 (0x8)
	class AFortCreativeRealEstatePlotManager* CreativeRealEstatePlotManager; // 0xfe0 (0x8)
	bool bUseMaxBackpackSize; // 0xfe8 (0x1)
	unsigned char unreflected_fe9[0x7]; // 0xfe9 (0x7) 
	class UFortGameStateComponent_AffiliationManager* AffiliationManager; // 0xff0 (0x8)
	class UFortGameStateComponent_SurfaceOverride* SurfaceOverrideComponent; // 0xff8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateZone.UnregisterGameplayModifier (Underlying native function: UnregisterGameplayModifier 0x88fc3fc)
	void UnregisterGameplayModifier(struct FActiveGameplayModifierHandle& InHandleToUnregister); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.UnbindDelegateOnGameplayVoteUpdated (Underlying native function: UnbindDelegateOnGameplayVoteUpdated 0x88fc320)
	void UnbindDelegateOnGameplayVoteUpdated(enum EFortVoteType& VoteType, struct FDelegate& Delegate); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.ShouldDisablePlayerTeleportingDuringMissionResults (Underlying native function: ShouldDisablePlayerTeleportingDuringMissionResults 0x82e35f8)
	bool ShouldDisablePlayerTeleportingDuringMissionResults(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.SetZoneCompletionResult (Underlying native function: SetZoneCompletionResult 0x88fc1bc)
	void SetZoneCompletionResult(enum EFortCompletionResult& NewCompletionResult); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.SetWorldLootLevel (Underlying native function: SetWorldLootLevel 0x7239740)
	void SetWorldLootLevel(int& NewLootLevel); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.SetMissionRewardOverrideTag (Underlying native function: SetMissionRewardOverrideTag 0x88fbf48)
	void SetMissionRewardOverrideTag(struct FText& MissionRewardOverrideTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.SetMissionRewardLootLevelOverride (Underlying native function: SetMissionRewardLootLevelOverride 0x88fbea4)
	void SetMissionRewardLootLevelOverride(int& LootLevel); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.SetIsDBNODeathEnabled (Underlying native function: SetIsDBNODeathEnabled 0x88fbda0)
	void SetIsDBNODeathEnabled(bool& NewValue); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.SetDifficultyIncreaseRewardTier (Underlying native function: SetDifficultyIncreaseRewardTier 0x88fbc78)
	bool SetDifficultyIncreaseRewardTier(int& InDifficultyIncreaseTier); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.SetBuildingAllowed (Underlying native function: SetBuildingAllowed 0x88fbbb0)
	void SetBuildingAllowed(bool& bBuildingAtLayoutRequirementsAllowed, bool& bBuildingWithoutLayoutRequirementsAllowed); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.ServerSubmitGameplayVote (Underlying native function: ServerSubmitGameplayVote 0x88fba04)
	void ServerSubmitGameplayVote(enum EFortVoteType& VoteType, int& VoteDecision, struct FUniqueNetIdRepl& PlayerNetId); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.ServerFireAIDirectorEventBatch (Underlying native function: ServerFireAIDirectorEventBatch 0x88fb8ac)
	void ServerFireAIDirectorEventBatch(struct TArray<struct FFortAIDirectorEvent>& Payload); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortGameStateZone.ServerFireAIDirectorEvent (Underlying native function: ServerFireAIDirectorEvent 0x88fb734)
	void ServerFireAIDirectorEvent(enum EFortAIDirectorEvent& Event, class UObject*& EventSource, class UObject*& EventTarget, float& EventMultiplier); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortGameStateZone.ServerEndGameplayVote (Underlying native function: ServerEndGameplayVote 0x88fb644)
	void ServerEndGameplayVote(enum EFortVoteType& VoteType, struct FUniqueNetIdRepl& PlayerNetId); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.ServerBeginGameplayVote (Underlying native function: ServerBeginGameplayVote 0x88fb4f0)
	void ServerBeginGameplayVote(enum EFortVoteType& VoteType, struct FUniqueNetIdRepl& PlayerNetId, struct FFortVoteConfig& VoteConfig); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.RemovePlayerAbilityRestriction (Underlying native function: RemovePlayerAbilityRestriction 0x88fb440)
	void RemovePlayerAbilityRestriction(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.RegisterGameplayModifier (Underlying native function: RegisterGameplayModifier 0x88fb378)
	struct FActiveGameplayModifierHandle RegisterGameplayModifier(class UFortGameplayModifierItemDefinition*& InModifierToRegister, int& Expiration); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.OnWaveStart (Underlying native function: OnWaveStart 0x88fb1c4)
	void OnWaveStart(struct FText& LevelText, int& Level, struct FText& WaveText, int& WaveNum); // (Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnWaveEncounterStarted (Underlying native function: OnWaveEncounterStarted 0x88faf54)
	void OnWaveEncounterStarted(struct FTieredWaveSetData& WaveData, struct FText& LevelText, int& Level, struct FText& WaveText, int& WaveNum); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.OnWaveBasedModifiersAppliedMulticast (Underlying native function: OnWaveBasedModifiersAppliedMulticast 0x88faec0)
	void OnWaveBasedModifiersAppliedMulticast(struct TArray<class UFortGameplayModifierItemDefinition*>& ModifiersApplied); // (Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRepServerUnstableFramerate (Underlying native function: OnRepServerUnstableFramerate 0x285a404)
	void OnRepServerUnstableFramerate(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_ZoneDifficultyInfoRow (Underlying native function: OnRep_ZoneDifficultyInfoRow 0x88fae90)
	void OnRepZoneDifficultyInfoRow(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_TheaterUniqueId (Underlying native function: OnRep_TheaterUniqueId 0x88fae7c)
	void OnRepTheaterUniqueId(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_ServerGameplayTagIndexHash (Underlying native function: OnRep_ServerGameplayTagIndexHash 0x2bc673c)
	void OnRepServerGameplayTagIndexHash(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_PlayerStructuresChanged (Underlying native function: OnRep_PlayerStructuresChanged 0x267a61c)
	void OnRepPlayerStructuresChanged(); // (Native | Public)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_PlayerSharedTrapAttributes (Underlying native function: OnRep_PlayerSharedTrapAttributes 0x85dd904)
	void OnRepPlayerSharedTrapAttributes(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_PlayerBuildingSkillLevel (Underlying native function: OnRep_PlayerBuildingSkillLevel 0x85df93c)
	void OnRepPlayerBuildingSkillLevel(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_NumSurvivorsRescued (Underlying native function: OnRep_NumSurvivorsRescued 0x88fad9c)
	void OnRepNumSurvivorsRescued(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_MissionRewards (Underlying native function: OnRep_MissionRewards 0x88fac6c)
	void OnRepMissionRewards(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_MissionGenerator (Underlying native function: OnRep_MissionGenerator 0x88fac88)
	void OnRepMissionGenerator(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_MissionAlertData (Underlying native function: OnRep_MissionAlertData 0x88fac6c)
	void OnRepMissionAlertData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_GameplayVotes (Underlying native function: OnRep_GameplayVotes 0x88fac58)
	void OnRepGameplayVotes(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_GameDifficulty (Underlying native function: OnRep_GameDifficulty 0x88fac40)
	void OnRepGameDifficulty(); // (Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_ExplicitGloballyBlockedAbilityTags (Underlying native function: OnRep_ExplicitGloballyBlockedAbilityTags 0x88fac2c)
	void OnRepExplicitGloballyBlockedAbilityTags(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_DifficultyIncreaseRewardTier (Underlying native function: OnRep_DifficultyIncreaseRewardTier 0x88fabec)
	void OnRepDifficultyIncreaseRewardTier(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_DifficultyIncreaseRewards (Underlying native function: OnRep_DifficultyIncreaseRewards 0x88fac18)
	void OnRepDifficultyIncreaseRewards(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_CompletionResult (Underlying native function: OnRep_CompletionResult 0x88fabb8)
	void OnRepCompletionResult(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_ClientPreloadMissionClasses (Underlying native function: OnRep_ClientPreloadMissionClasses 0x88faba4)
	void OnRepClientPreloadMissionClasses(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_bGlobalCeaseFire (Underlying native function: OnRep_bGlobalCeaseFire 0x88faeac)
	void OnRepbGlobalCeaseFire(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_AllSpawnGroupUpgradeModifierDefs (Underlying native function: OnRep_AllSpawnGroupUpgradeModifierDefs 0x88fab90)
	void OnRepAllSpawnGroupUpgradeModifierDefs(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateZone.OnRep_ActiveGameplayModifiers (Underlying native function: OnRep_ActiveGameplayModifiers 0x2773234)
	void OnRepActiveGameplayModifiers(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.NotifySurvivorSpawned (Underlying native function: NotifySurvivorSpawned 0x88fab04)
	void NotifySurvivorSpawned(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.NotifySurvivorRescued (Underlying native function: NotifySurvivorRescued 0x88fa950)
	void NotifySurvivorRescued(class AFortPlayerController*& Rescuer, struct FString& SurvivorName); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.NotifySurvivorDead (Underlying native function: NotifySurvivorDead 0x88fa930)
	void NotifySurvivorDead(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.NotifyEndFailedGameplayVoteLockout (Underlying native function: NotifyEndFailedGameplayVoteLockout 0x88fa8ac)
	void NotifyEndFailedGameplayVoteLockout(enum EFortVoteType& VoteType); // (Net | NetReliable | Native | Event | NetMulticast | Protected)

	// Function /Script/FortniteGame.FortGameStateZone.IsRespawningAllowed (Underlying native function: IsRespawningAllowed 0x88fa7f0)
	bool IsRespawningAllowed(class AFortPlayerState*& PlayerState); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.IsGameplayVoteLocked (Underlying native function: IsGameplayVoteLocked 0x88fa764)
	bool IsGameplayVoteLocked(enum EFortVoteType& VoteType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.IsGameplayVoteInProgress (Underlying native function: IsGameplayVoteInProgress 0x88fa6b0)
	bool IsGameplayVoteInProgress(enum EFortVoteType& VoteType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.IsGameplayVoteActive (Underlying native function: IsGameplayVoteActive 0x88fa624)
	bool IsGameplayVoteActive(enum EFortVoteType& VoteType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.IsBuildingWithoutLayoutRequirementsAllowed (Underlying native function: IsBuildingWithoutLayoutRequirementsAllowed 0x88fa5e4)
	bool IsBuildingWithoutLayoutRequirementsAllowed(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.IsBuildingAtLayoutRequirementsAllowed (Underlying native function: IsBuildingAtLayoutRequirementsAllowed 0x88fa5cc)
	bool IsBuildingAtLayoutRequirementsAllowed(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.IsAnyGameplayVoteActive (Underlying native function: IsAnyGameplayVoteActive 0x88fa5ac)
	bool IsAnyGameplayVoteActive(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.HasActiveGameplayModifiers (Underlying native function: HasActiveGameplayModifiers 0x88fa590)
	bool HasActiveGameplayModifiers(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GloballyUnblockAbilitiesWithTags (Underlying native function: GloballyUnblockAbilitiesWithTags 0x88fa4d4)
	void GloballyUnblockAbilitiesWithTags(struct FGameplayTagContainer& TagsToUnblock); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.GloballyBlockAbilitiesWithTags (Underlying native function: GloballyBlockAbilitiesWithTags 0x88fa418)
	void GloballyBlockAbilitiesWithTags(struct FGameplayTagContainer& TagsToBlock); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.GetZoneCompletionResult (Underlying native function: GetZoneCompletionResult 0x88fa400)
	enum EFortCompletionResult GetZoneCompletionResult(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetVoteStartTime (Underlying native function: GetVoteStartTime 0x88fa32c)
	bool GetVoteStartTime(enum EFortVoteType& VoteType, float& VoteStartTime); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetVoteInstigator (Underlying native function: GetVoteInstigator 0x88fa228)
	bool GetVoteInstigator(enum EFortVoteType& VoteType, struct FUniqueNetIdRepl& InstigatorNetId); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetVoteEndTime (Underlying native function: GetVoteEndTime 0x88fa154)
	bool GetVoteEndTime(enum EFortVoteType& VoteType, float& VoteEndTime); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetVoteDuration (Underlying native function: GetVoteDuration 0x88fa0c4)
	float GetVoteDuration(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetVoteArbitratorType (Underlying native function: GetVoteArbitratorType 0x88f9ff4)
	bool GetVoteArbitratorType(enum EFortVoteType& VoteType, enum EFortVoteArbitratorType& ArbitratorType); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetUIMapManager (Underlying native function: GetUIMapManager 0x88f9fcc)
	class AFortInGameMapManager* GetUIMapManager(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.GetTotalScore (Underlying native function: GetTotalScore 0x88f9f0c)
	int GetTotalScore(enum EStatCategory& ScoreCategory); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetTimeRemainingToEndVote (Underlying native function: GetTimeRemainingToEndVote 0x88f9e7c)
	float GetTimeRemainingToEndVote(enum EFortVoteType& VoteType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetTimeRemainingToEndFailedVoteLockout (Underlying native function: GetTimeRemainingToEndFailedVoteLockout 0x88f9dec)
	float GetTimeRemainingToEndFailedVoteLockout(enum EFortVoteType& VoteType); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetTimeElapsedSinceEndVote (Underlying native function: GetTimeElapsedSinceEndVote 0x88f9d40)
	float GetTimeElapsedSinceEndVote(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetTimeElapsedSinceBeginVote (Underlying native function: GetTimeElapsedSinceBeginVote 0x88f9cb0)
	float GetTimeElapsedSinceBeginVote(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetThreatParticleActor (Underlying native function: GetThreatParticleActor 0x88f9c98)
	class AFortThreatParticleActor* GetThreatParticleActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetSupressedCraftingItemTypes (Has no native function)
	void GetSupressedCraftingItemTypes(struct TArray<enum EFortItemType>& OutItemTypes); // (Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetSupressedCraftingFilterNames (Has no native function)
	void GetSupressedCraftingFilterNames(struct TArray<struct FName>& OutNames); // (0x00000002 | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetSupressedCraftingDisplayText (Underlying native function: GetSupressedCraftingDisplayText 0x88f9be8)
	struct FText GetSupressedCraftingDisplayText(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetNumSurvivorsSpawned (Underlying native function: GetNumSurvivorsSpawned 0x88f9b34)
	int GetNumSurvivorsSpawned(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetNumSurvivorsRescued (Underlying native function: GetNumSurvivorsRescued 0x88f9b1c)
	int GetNumSurvivorsRescued(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetNumSurvivorsDead (Underlying native function: GetNumSurvivorsDead 0x88f9b04)
	int GetNumSurvivorsDead(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetNumAllowedDifficultyIncreases (Underlying native function: GetNumAllowedDifficultyIncreases 0x88f9ae0)
	int GetNumAllowedDifficultyIncreases(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetIsDBNODeathEnabled (Underlying native function: GetIsDBNODeathEnabled 0x88f9a68)
	bool GetIsDBNODeathEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetGameplayVotesForChoice (Underlying native function: GetGameplayVotesForChoice 0x88f97d4)
	struct TArray<struct FUniqueNetIdRepl> GetGameplayVotesForChoice(enum EFortVoteType& VoteType, int& VoteChoice); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetGameDifficulty (Underlying native function: GetGameDifficulty 0x88f9658)
	float GetGameDifficulty(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetFailedVoteLockOutDuration (Underlying native function: GetFailedVoteLockOutDuration 0x88f95c8)
	float GetFailedVoteLockOutDuration(enum EFortVoteType& VoteType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetCurrentVoters (Underlying native function: GetCurrentVoters 0x88f94dc)
	bool GetCurrentVoters(enum EFortVoteType& VoteType, struct TArray<struct FVoter>& Voters); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameStateZone.GetActiveModifiers (Underlying native function: GetActiveModifiers 0x88f943c)
	void GetActiveModifiers(struct TArray<class UFortGameplayModifierItemDefinition*>& OutActiveModifiers); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameStateZone.BindDelegateOnGameplayVoteUpdated (Underlying native function: BindDelegateOnGameplayVoteUpdated 0x88f8924)
	void BindDelegateOnGameplayVoteUpdated(enum EFortVoteType& VoteType, struct FDelegate& Delegate); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.ApplyPlayerAbilityRestriction (Underlying native function: ApplyPlayerAbilityRestriction 0x88f8910)
	void ApplyPlayerAbilityRestriction(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateZone.AddKillFeedEntry (Underlying native function: AddKillFeedEntry 0x88f877c)
	void AddKillFeedEntry(struct FText& KillFeedText, float& ExtraDisplaySeconds, struct FGameplayTag& tag); // (Native | Public | HasOutParms | BlueprintCallable)
};

