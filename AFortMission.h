// Class /Script/FortniteGame.FortMission
// Size: 0x6e0
class AFortMission : public AFortMissionState
{
	unsigned char unreflected_2c0[0x10]; // 0x2c0 (0x10) 
	class UFortMissionInfo* MissionInfo; // 0x2d0 (0x8)
	class UClass* BotLogicClass; // 0x2d8 (0x8)
	class UFortBotMissionLogic* BotLogic; // 0x2e0 (0x8)
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> MissionPreloadAssets; // 0x2e8 (0x10)
	class UClass* AnnouncementClassOverride; // 0x2f8 (0x8)
	class UFortMissionGenerator* MissionGenerator; // 0x300 (0x8)
	struct TEnumAsByte<EMissionGenerationCategory> MissionCategory; // 0x308 (0x1)
	unsigned char unreflected_309[0x3]; // 0x309 (0x3) 
	int UIIndex; // 0x30c (0x4)
	struct FUniqueNetIdRepl QuestOwnerAccount; // 0x310 (0x30)
	struct TArray<struct FFortMissionEventName*> MissionEventNames; // 0x340 (0x10)
	unsigned char unreflected_350[0x18]; // 0x350 (0x18) 
	struct FMulticastInlineDelegate OnObjectivesUpdated; // 0x368 (0x10)
	struct FMulticastInlineDelegate OnMissionInfoSet; // 0x378 (0x10)
	struct TArray<struct FFortMissionPlacementActorPreferredTagInfo> PlacementActorPreferredTagData; // 0x388 (0x10)
	bool bLoadedFromRecord; // 0x398 (0x1)
	bool bFiredParTimeEvent; // 0x399 (0x1)
	bool bAreNonpublicMatchesLeecherExempt; // 0x39a (0x1)
	unsigned char unreflected_39b[0x1]; // 0x39b (0x1) 
	float LeecherPity; // 0x39c (0x4)
	float LeecherMinMultiplier; // 0x3a0 (0x4)
	float LeecherCutoff; // 0x3a4 (0x4)
	float LeecherTimeScalingCutoff; // 0x3a8 (0x4)
	float LeecherTimeScalingPenaltyMultipler; // 0x3ac (0x4)
	float LeecherCombatScoreMultiplier; // 0x3b0 (0x4)
	float LeecherBuildingScoreMultiplier; // 0x3b4 (0x4)
	float LeecherUtilityScoreMultiplier; // 0x3b8 (0x4)
	int LeecherCombatLowBar; // 0x3bc (0x4)
	int LeecherBuildingLowBar; // 0x3c0 (0x4)
	int LeecherUtilityLowBar; // 0x3c4 (0x4)
	float MissionActivationTime; // 0x3c8 (0x4)
	unsigned char unreflected_3cc[0x4]; // 0x3cc (0x4) 
	struct FFortMissionFocusDisplayData CurrentFocusData; // 0x3d0 (0x20)
	bool bSilentDestroyNextFrame; // 0x3f0 (0x1)
	unsigned char unreflected_3f1[0x7]; // 0x3f1 (0x7) 
	struct TArray<class AFortObjectiveBase*> ActiveObjectives; // 0x3f8 (0x10)
	struct TArray<struct FUniqueNetIdRepl> ParticipatingAccounts; // 0x408 (0x10)
	struct TArray<struct FUniqueNetIdRepl> ParticipatingButDisconnectedAccounts; // 0x418 (0x10)
	enum EFortMissionStatus MissionStatus; // 0x428 (0x1)
	unsigned char unreflected_429[0x7]; // 0x429 (0x7) 
	struct FGameplayTagContainer MissionCompletionTags; // 0x430 (0x20)
	bool bIsMissionVisible; // 0x450 (0x1)
	enum EFortMissionAudibility MissionAudibility; // 0x451 (0x1)
	unsigned char unreflected_452[0x2]; // 0x452 (0x2) 
	int CurrentObjectiveBlockIndex; // 0x454 (0x4)
	bool bIsMissionVisibleOverride; // 0x458 (0x1)
	unsigned char unreflected_459[0x3]; // 0x459 (0x3) 
	struct FGuid MissionGuid; // 0x45c (0x10)
	int StartingDay; // 0x46c (0x4)
	class UFortMissionTimerComponent* TimerComponent; // 0x470 (0x8)
	class UFortMissionTimerComponent* TimerElapsedComponent; // 0x478 (0x8)
	bool bObjectiveTimerExpireShouldFailObjectives; // 0x480 (0x1)
	bool bMissionTimerExpireShouldFailMission; // 0x481 (0x1)
	unsigned char unreflected_482[0x1]; // 0x482 (0x1) 
	bool bNeedsEnemyKilledEventForAllPawns; // 0x483 (0x1)
	int ChosenRewardIdx; // 0x484 (0x4)
	struct FFortBadgeCountArray PotentialBadgesArray; // 0x488 (0x118)
	unsigned char unreflected_5a0[0xb8]; // 0x5a0 (0xb8) 
	struct FFortGeneratedDifficultyOptions GeneratedMissionOptions; // 0x658 (0x40)
	class UAudioComponent* MissionCompletionStinger; // 0x698 (0x8)
	struct FFortMissionInstancedConfigData ConfigData; // 0x6a0 (0x10)
	unsigned char padding_6b0[0x30]; // 0x6b0 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortMission.StopMissionAIEncounter (Underlying native function: StopMissionAIEncounter 0x8b10478)
	void StopMissionAIEncounter(class UFortAIEncounterInfo*& EncounterToStop); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.StopEncounterSequence (Underlying native function: StopEncounterSequence 0x8b103fc)
	void StopEncounterSequence(class UFortAIEncounterSequence*& SequenceToStop); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.StartMissionAIEncounterFromGeneratedProfile (Underlying native function: StartMissionAIEncounterFromGeneratedProfile 0x8b0fe1c)
	class UFortAIEncounterInfo* StartMissionAIEncounterFromGeneratedProfile(int& GeneratedEncounterProfileIndex, struct TArray<class AActor*>& TargetActors, class UFortAIAssignmentSettings*& AssignmentSettings, struct FEncounterEnvironmentQueryInfo& EnvironmentQueryInfo, class AActor*& QueryActor, struct FGameplayTagContainer& InjectedTags, struct FFortEncounterSettings& EncounterSettings, int& ActivationDelay, bool& bUseAssignments); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.StartMissionAIEncounter (Underlying native function: StartMissionAIEncounter 0x8b0fb00)
	class UFortAIEncounterInfo* StartMissionAIEncounter(class UClass*& EncounterTemplate, struct TArray<class AActor*>& TargetActors, class UFortAIAssignmentSettings*& AssignmentSettings, struct FEncounterEnvironmentQueryInfo& EnvironmentQueryInfo, class AActor*& QueryActor, struct FGameplayTagContainer& InjectedTags, struct FFortEncounterSettings& EncounterSettings, int& ActivationDelay); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.SpawnAtPlacementActorsAsArray (Underlying native function: SpawnAtPlacementActorsAsArray 0x8b0f694)
	static struct TArray<class AActor*> SpawnAtPlacementActorsAsArray(class AFortMission*& Mission, bool& bSucceeded); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.SetUiVisibility (Underlying native function: SetUiVisibility 0x8b0f268)
	void SetUiVisibility(bool& bInIsMissionVisible); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.SetToSilentDestroy (Underlying native function: SetToSilentDestroy 0x8b0f01c)
	void SetToSilentDestroy(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.SetTimerElapsedComponent (Underlying native function: SetTimerElapsedComponent 0x8b0ef9c)
	void SetTimerElapsedComponent(class UFortMissionTimerComponent*& InTimerElapsedComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.SetTimerComponent (Underlying native function: SetTimerComponent 0x8b0ef1c)
	void SetTimerComponent(class UFortMissionTimerComponent*& InTimerComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.SetRespawnTextOverride (Underlying native function: SetRespawnTextOverride 0x8b0e63c)
	void SetRespawnTextOverride(struct FText& NewText); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.SetMissionGameDifficulty (Underlying native function: SetMissionGameDifficulty 0x8b0e2dc)
	void SetMissionGameDifficulty(float& GameDifficultyValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.SendBotLogicMessage (Underlying native function: SendBotLogicMessage 0x8b0db88)
	void SendBotLogicMessage(struct FString& EventName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.RemoveParticipantAccount (Underlying native function: RemoveParticipantAccount 0x8b0d6f8)
	bool RemoveParticipantAccount(struct FUniqueNetIdRepl& AbandoningPlayerId); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.RemoveGoalsFromEncounterAssignment (Underlying native function: RemoveGoalsFromEncounterAssignment 0x8b06760)
	void RemoveGoalsFromEncounterAssignment(struct FFortAIAssignmentIdentifier& AssignmentIdentifier, class UFortAIEncounterInfo*& Encounter, struct TArray<struct FFortAIGoalInfo>& GoalInfos); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.RemoveGoalFromEncounterAssignment (Underlying native function: RemoveGoalFromEncounterAssignment 0x8b06434)
	void RemoveGoalFromEncounterAssignment(struct FFortAIAssignmentIdentifier& AssignmentIdentifier, class UFortAIEncounterInfo*& Encounter, struct FFortAIGoalInfo& GoalInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.RegisterForContainerSearchedEvent (Underlying native function: RegisterForContainerSearchedEvent 0x8b0d468)
	void RegisterForContainerSearchedEvent(struct FDelegate& Delegate, struct FGameplayTagQuery& ContainerRequirements); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.RegisterForBuildingHarvestedByPlayerEvent (Underlying native function: RegisterForBuildingHarvestedByPlayerEvent 0x8b0d320)
	void RegisterForBuildingHarvestedByPlayerEvent(struct FDelegate& Delegate, struct FGameplayTagQuery& HarvestedBuildingRequirements); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.RecordResourceActorSpawn (Underlying native function: RecordResourceActorSpawn 0x8b0d040)
	void RecordResourceActorSpawn(class AActor*& SpawnedActor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.ProvideAllPotentialBadges (Underlying native function: ProvideAllPotentialBadges 0x8b0cfa4)
	void ProvideAllPotentialBadges(struct TArray<struct FGameplayTag>& BadgeTags); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.OnWaveCompleted (Underlying native function: OnWaveCompleted 0x8b0cd34)
	void OnWaveCompleted(int& Tier, int& Wave, enum EFortCompletionResult& Result); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.OnRep_UIIndex (Underlying native function: OnRep_UIIndex 0x8b0cd08)
	void OnRepUIIndex(); // (Native | Protected)

	// Function /Script/FortniteGame.FortMission.OnRep_QuestOwnerAccount (Underlying native function: OnRep_QuestOwnerAccount 0x14bfb28)
	void OnRepQuestOwnerAccount(); // (Native | Protected)

	// Function /Script/FortniteGame.FortMission.OnRep_PotentialBadgesArray (Underlying native function: OnRep_PotentialBadgesArray 0x8b0cc6c)
	void OnRepPotentialBadgesArray(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMission.OnRep_MissionStatus (Underlying native function: OnRep_MissionStatus 0x29876d0)
	void OnRepMissionStatus(); // (Native | Protected)

	// Function /Script/FortniteGame.FortMission.OnRep_MissionInfo (Underlying native function: OnRep_MissionInfo 0x8b0cc44)
	void OnRepMissionInfo(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMission.OnRep_CurrentFocusDisplayData (Underlying native function: OnRep_CurrentFocusDisplayData 0x8b0cb94)
	void OnRepCurrentFocusDisplayData(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMission.OnRep_bIsMissionVisible (Underlying native function: OnRep_bIsMissionVisible 0x2fd2cec)
	void OnRepbIsMissionVisible(); // (Native | Protected)

	// Function /Script/FortniteGame.FortMission.OnRep_ActiveObjectives (Underlying native function: OnRep_ActiveObjectives 0x8b0cb64)
	void OnRepActiveObjectives(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMission.OnEncounterEnemyAISpawned (Has no native function)
	void OnEncounterEnemyAISpawned(class UFortAIEncounterInfo*& Encounter, class AFortAIPawn*& SpawnedEnemy); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.MissionTimerVisibilityOverrideSet (Has no native function)
	void MissionTimerVisibilityOverrideSet(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.MissionTimerSet (Underlying native function: MissionTimerSet 0x72ed958)
	void MissionTimerSet(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.LoadPossibleMissionsManually (Underlying native function: LoadPossibleMissionsManually 0x8b0bc20)
	void LoadPossibleMissionsManually(struct TArray<struct FGuid>& OutAddedMissionGuids, struct TArray<struct FFortPossibleMission>& PossibleMissionsToLoad); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.LoadMissionsManually (Underlying native function: LoadMissionsManually 0x8b0b9bc)
	void LoadMissionsManually(struct TArray<struct FGuid>& OutAddedMissionGuids, struct TArray<class UFortMissionInfo*>& MissionsToLoad); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.IsPlayerParticipating (Underlying native function: IsPlayerParticipating 0x8b0b89c)
	bool IsPlayerParticipating(class AFortPlayerController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.InitializeModifiersRRV (Underlying native function: InitializeModifiersRRV 0x8b0b774)
	void InitializeModifiersRRV(int& Seed); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.InitializeActorsForMissionMatchingItemIdentifyingQuery (Underlying native function: InitializeActorsForMissionMatchingItemIdentifyingQuery 0x8b0b258)
	bool InitializeActorsForMissionMatchingItemIdentifyingQuery(class AFortMission*& Mission, struct FGameplayTagQuery& TagQuery, struct TArray<class AActor*>& OutActorsInitialized); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.InitializeActorsForMission (Underlying native function: InitializeActorsForMission 0x8b0b164)
	bool InitializeActorsForMission(class AFortMission*& Mission, struct TArray<class AActor*>& OutActorsInitialized); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.HasMissionPar (Underlying native function: HasMissionPar 0x8b0b12c)
	bool HasMissionPar(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.HandleEnemyKilled (Has no native function)
	void HandleEnemyKilled(class AFortPlayerController*& KilledBy, class AFortPawn*& KilledPawn, struct FGameplayTagContainer& SourceTags); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.HandleEncounterEnemyAISpawned (Underlying native function: HandleEncounterEnemyAISpawned 0x8b0ae98)
	void HandleEncounterEnemyAISpawned(class UFortAIEncounterInfo*& Encounter, class AFortAIPawn*& SpawnedEnemy); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMission.GrantRewardsByTag (Underlying native function: GrantRewardsByTag 0x8b0adf4)
	void GrantRewardsByTag(struct FGameplayTag& RewardTag, struct TEnumAsByte<EFortRewardType>& RewardType); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.GetTieredModifierSet (Underlying native function: GetTieredModifierSet 0x8b0a678)
	void GetTieredModifierSet(struct FName& TieredModifierSetName, struct TArray<struct FTieredModifierSetData>& OutModifierSetData); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMission.GetSpawnLocationsMatchingQuery (Underlying native function: GetSpawnLocationsMatchingQuery 0x8b09f3c)
	bool GetSpawnLocationsMatchingQuery(struct FGameplayTagQuery& TagQuery, struct TArray<struct FVector>& SpawnLocations); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetSpawnLocationActorsMatchingQuery (Underlying native function: GetSpawnLocationActorsMatchingQuery 0x8b09d9c)
	bool GetSpawnLocationActorsMatchingQuery(struct FGameplayTagQuery& TagQuery, struct TArray<class AActor*>& SpawnLocationActors); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetSpawningDistanceMinMaxOverrideForAIEncounter (Underlying native function: GetSpawningDistanceMinMaxOverrideForAIEncounter 0x8b0a0dc)
	void GetSpawningDistanceMinMaxOverrideForAIEncounter(class UFortAIEncounterInfo*& Encounter, float& OutSpawningDistanceMin, float& OutSpawningDistanceMax); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMission.GetRewardItemsByTag (Underlying native function: GetRewardItemsByTag 0x8b09930)
	void GetRewardItemsByTag(struct FGameplayTag& RewardTag, struct TArray<class UFortWorldItemDefinition*>& OutRewardItems); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.GetRespawnTextOverride (Underlying native function: GetRespawnTextOverride 0x8b098b0)
	struct FText GetRespawnTextOverride(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMission.GetPawnDamageLootTier (Underlying native function: GetPawnDamageLootTier 0x8b095a4)
	int GetPawnDamageLootTier(class AFortPlayerController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetParticipatingMissionControllers (Underlying native function: GetParticipatingMissionControllers 0x8b09530)
	struct TArray<class AFortPlayerController*> GetParticipatingMissionControllers(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetObjectiveStatusByHandle (Underlying native function: GetObjectiveStatusByHandle 0x8b09458)
	enum EFortObjectiveStatus GetObjectiveStatusByHandle(struct FGameplayTagContainer& ObjectiveHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetObjectiveHandlesWithTag (Underlying native function: GetObjectiveHandlesWithTag 0x8b09380)
	struct TArray<struct FGameplayTagContainer> GetObjectiveHandlesWithTag(struct FGameplayTag& ObjectiveTag, int& MaxNumberOfObjectives); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetObjectiveByHandle (Underlying native function: GetObjectiveByHandle 0x8b092b8)
	class AFortObjectiveBase* GetObjectiveByHandle(struct FGameplayTagContainer& ObjectiveHandle); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetMissionName (Underlying native function: GetMissionName 0x8b09220)
	struct FText GetMissionName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetMissionGuid (Underlying native function: GetMissionGuid 0x8b09204)
	struct FGuid GetMissionGuid(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetMissionCompletionResultText (Underlying native function: GetMissionCompletionResultText 0x8b09124)
	struct FText GetMissionCompletionResultText(enum EFortCompletionResult& Result); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.GetExpectedCompletionTime (Underlying native function: GetExpectedCompletionTime 0x8b08ca4)
	float GetExpectedCompletionTime(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetDaysRemainingBeforeOverPar (Underlying native function: GetDaysRemainingBeforeOverPar 0x8b08c80)
	int GetDaysRemainingBeforeOverPar(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetCurrentFocusPercentage (Underlying native function: GetCurrentFocusPercentage 0x2d781cc)
	float GetCurrentFocusPercentage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetCurrentFocusDisplayText (Underlying native function: GetCurrentFocusDisplayText 0x8b08c04)
	struct FText GetCurrentFocusDisplayText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetCurrentBluGloRewards (Underlying native function: GetCurrentBluGloRewards 0x8b08bdc)
	int GetCurrentBluGloRewards(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetConfigData (Underlying native function: GetConfigData 0x8b089f4)
	class UFortMissionConfigData* GetConfigData(struct FGameplayTag& InBucketTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.GetBuildingDamageLootTier (Underlying native function: GetBuildingDamageLootTier 0x8b08878)
	int GetBuildingDamageLootTier(class AFortPlayerController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetAnnouncementClassOverride (Underlying native function: GetAnnouncementClassOverride 0x8b087a4)
	class UClass* GetAnnouncementClassOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetAllObjectives (Underlying native function: GetAllObjectives 0x8b08730)
	struct TArray<class AFortObjectiveBase*> GetAllObjectives(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.GetAdditionalMissionSuccessBadges (Has no native function)
	bool GetAdditionalMissionSuccessBadges(struct TArray<class UFortWorldItemDefinition*>& SuccessItems); // (BlueprintAuthorityOnly | Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMission.GetAdditionalMissionCompletionMissionPoints (Has no native function)
	int GetAdditionalMissionCompletionMissionPoints(enum EFortMissionStatus& CompletionStatus); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMission.GetActorsSpawnedMatchingQuery (Underlying native function: GetActorsSpawnedMatchingQuery 0x8b08590)
	bool GetActorsSpawnedMatchingQuery(struct FGameplayTagQuery& TagQuery, struct TArray<class AActor*>& SpawnedActors); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMission.FocusThisMission (Underlying native function: FocusThisMission 0x8b08214)
	void FocusThisMission(struct FText& FocusDisplayText, float& FocusPercentage); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.FindGoalLocationsForEncounterAssignment (Underlying native function: FindGoalLocationsForEncounterAssignment 0x8b0805c)
	void FindGoalLocationsForEncounterAssignment(struct FFortAIAssignmentIdentifier& AssignmentIdentifier, class UFortAIEncounterInfo*& Encounter, struct TArray<struct FVector>& OutGoalLocations); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.CreateEncounterSequenceByIndex (Underlying native function: CreateEncounterSequenceByIndex 0x8b07d58)
	class UFortAIEncounterSequence* CreateEncounterSequenceByIndex(int& EncounterSequenceIndex); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.CreateEncounterSequence (Underlying native function: CreateEncounterSequence 0x8b07c90)
	class UFortAIEncounterSequence* CreateEncounterSequence(struct FGameplayTagContainer& SequenceTags); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.CreateEncounterAssignment (Underlying native function: CreateEncounterAssignment 0x8b07ac8)
	enum EAssignmentCreationResult CreateEncounterAssignment(struct FGameplayTagContainer& AssignmentTags, class UFortAIEncounterInfo*& Encounter, class UFortAIAssignmentSettings*& AssignmentSettings, class UClass*& GoalProvider, struct FFortAIAssignmentIdentifier& AssignmentIdentifier); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.ChooseRandomReward (Underlying native function: ChooseRandomReward 0x8b07844)
	struct FFortMissionWeightedReward ChooseRandomReward(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMission.BlueprintPostMissionLoad (Has no native function)
	void BlueprintPostMissionLoad(); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.BlueprintOnStartPlaying (Has no native function)
	void BlueprintOnStartPlaying(); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.BlueprintOnMissionEnd (Has no native function)
	void BlueprintOnMissionEnd(enum EFortMissionStatus& Status); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.BlueprintOnActivated (Has no native function)
	void BlueprintOnActivated(); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.BlueprintCustomHandleMissionEvent (Has no native function)
	void BlueprintCustomHandleMissionEvent(struct FGuid& InMissionGuid, struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams*& Params, bool& DONOTUSETHISORVARIABLESBELOW, class UObject*& EventFocus, class UDataAsset*& EventContent, class AActor*& EventInstigator, int& GenericInt, float& GenericFloat, struct FText& GenericText, struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.BlueprintCanPlayerParticipate (Underlying native function: BlueprintCanPlayerParticipate 0x8b075bc)
	bool BlueprintCanPlayerParticipate(class AFortPlayerController*& PlayerController); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortMission.AttemptMissionSave (Underlying native function: AttemptMissionSave 0x8b072a0)
	void AttemptMissionSave(struct FString& OptionalSaveName); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.ApplyTieredModifierSet (Underlying native function: ApplyTieredModifierSet 0x8b06f70)
	void ApplyTieredModifierSet(struct TArray<struct FTieredModifierSetData>& ModifierSetData, int& Tier, int& WaveNum, bool& bDeferTemporaryModifiers, struct TArray<struct FActiveGameplayModifierHandle>& OutAppliedModifiers); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.AddParticipantAccount (Underlying native function: AddParticipantAccount 0x8b06c74)
	bool AddParticipantAccount(class AFortPlayerController*& PlayerController); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.AddOrRemoveTimerTime (Underlying native function: AddOrRemoveTimerTime 0x8b06bec)
	void AddOrRemoveTimerTime(float& TimeToAdd); // (BlueprintAuthorityOnly | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortMission.AddGoalToEncounterAssignment (Underlying native function: AddGoalToEncounterAssignment 0x8b06434)
	void AddGoalToEncounterAssignment(struct FFortAIAssignmentIdentifier& AssignmentIdentifier, class UFortAIEncounterInfo*& Encounter, struct FFortAIGoalInfo& GoalInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.AddGoalToAssignment (Underlying native function: AddGoalToAssignment 0x8b06350)
	void AddGoalToAssignment(class UFortAIAssignment*& Assignment, struct FFortAIGoalInfo& GoalInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.AddGoalsToEncounterAssignment (Underlying native function: AddGoalsToEncounterAssignment 0x8b06760)
	void AddGoalsToEncounterAssignment(struct FFortAIAssignmentIdentifier& AssignmentIdentifier, class UFortAIEncounterInfo*& Encounter, struct TArray<struct FFortAIGoalInfo>& GoalInfos); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.AddGoalsToAssignment (Underlying native function: AddGoalsToAssignment 0x8b06594)
	void AddGoalsToAssignment(class UFortAIAssignment*& Assignment, struct TArray<struct FFortAIGoalInfo>& GoalInfos); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.AddCompletionTags (Underlying native function: AddCompletionTags 0x8b06294)
	void AddCompletionTags(struct FGameplayTagContainer& NewCompletionTagContainer); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission.AddCompletionTag (Underlying native function: AddCompletionTag 0x8b06214)
	void AddCompletionTag(struct FGameplayTag& NewCompletionTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

