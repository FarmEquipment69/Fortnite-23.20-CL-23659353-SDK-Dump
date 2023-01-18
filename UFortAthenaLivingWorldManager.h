// Class /Script/LagerRuntime.FortAthenaLivingWorldManager
// Size: 0x970
class UFortAthenaLivingWorldManager : public UGameStateComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct TWeakObjectPtr<class UFortAthenaLivingWorldConfigData> DefaultLagerConfig; // 0xa8 (0x28)
	struct TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides; // 0xd0 (0x10)
	struct FScalableFloat LagerEnabled; // 0xe0 (0x28)
	struct TMap<struct FGameplayTag, class UClass*> TaggedSpawnActionClassMap; // 0x108 (0x50)
	struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>> PointProviders; // 0x158 (0x10)
	unsigned char unreflected_168[0x8]; // 0x168 (0x8) 
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0x170 (0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0x230 (0x10)
	struct FSlateBrush SpecialActorCompassIconBrush; // 0x240 (0xc0)
	struct FVector2D SpecialActorCompassIconScale; // 0x300 (0x10)
	struct TArray<class UClass*> SpawnedSingleUseSpawnerData; // 0x310 (0x10)
	class UWorld* CachedWorld; // 0x320 (0x8)
	class UFortAthenaLivingWorldConfigData* CachedConfig; // 0x328 (0x8)
	struct TArray<class UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances; // 0x330 (0x10)
	class UFortSeasonalEventManager* CachedSeasonalEventManager; // 0x340 (0x8)
	struct TArray<struct TWeakObjectPtr<class UClass>> ActorClassToPreloadOnClient; // 0x348 (0x10)
	struct FFortAthenaLivingWorldPlayerTracker PlayerTracker; // 0x358 (0xb0)
	struct FFortAthenaLivingWorldPreloader Preloader; // 0x408 (0xe0)
	unsigned char unreflected_4e8[0x1b0]; // 0x4e8 (0x1b0) 
	struct TArray<class AActor*> RuntimePointProviderList; // 0x698 (0x10)
	struct TSet<class AActor*> RuntimePointProviderOwners; // 0x6a8 (0x50)
	unsigned char unreflected_6f8[0x1f0]; // 0x6f8 (0x1f0) 
	struct TMap<class UClass*, class UFortAthenaLivingWorldSpawnAction*> SpawnActionCache; // 0x8e8 (0x50)
	class AActor* EQSHelper; // 0x938 (0x8)
	class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* DebugDensityMinimapIndicator; // 0x940 (0x8)
	unsigned char padding_948[0x28]; // 0x948 (0x28)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.UnregisterDensityReservoir (Underlying native function: UnregisterDensityReservoir 0x723c9c8)
	void UnregisterDensityReservoir(class AActor*& ActorDensityReservoir); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEvent (Underlying native function: TrySpawnEvent 0x723c7fc)
	bool TrySpawnEvent(struct FDataTableRowHandle& EventEntry, struct FTransform& SpawnLocation, struct FDelegate& OnRequestFinished, int& RequestId); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.StartEncounter (Underlying native function: StartEncounter 0x723c4e0)
	class UFortAthenaLivingWorldEncounterInstance* StartEncounter(struct TWeakObjectPtr<class UFortAthenaLivingWorldEncounter>& EncounterType, struct TArray<struct TScriptInterface<class IFortAthenaLivingWorldPointProviderInterface>>& EncounterPointProviders, class AActor*& ActorDensityReservoir); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.ResetEncounter (Underlying native function: ResetEncounter 0x723c06c)
	void ResetEncounter(class UFortAthenaLivingWorldEncounterInstance*& EncounterInstance); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration (Underlying native function: RequestEventGeneration 0x723c03c)
	void RequestEventGeneration(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RegisterDensityReservoir (Underlying native function: RegisterDensityReservoir 0x723bb74)
	void RegisterDensityReservoir(class AActor*& ActorDensityReservoir, float& Density, float& Range); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget (Underlying native function: QueryEventBudget 0x723ba94)
	int QueryEventBudget(struct FDataTableRowHandle& EventEntry, class AActor*& SpawnLocation); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization (Underlying native function: OnWorldFinishedInitialization 0x723b8a4)
	void OnWorldFinishedInitialization(struct FGameplayTagContainer& ContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy (Underlying native function: OnUnmanagedDensityReservoirActorDestroy 0x723b740)
	void OnUnmanagedDensityReservoirActorDestroy(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy (Underlying native function: OnSpawnedActorDestroy 0x723b578)
	void OnSpawnedActorDestroy(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator (Underlying native function: OnRep_DebugDensityMinimapIndicator 0x71a663c)
	void OnRepDebugDensityMinimapIndicator(class UFortAthenaLivingWorldDebugDensityMiniMapIndicator*& OldMapIndicator); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnRep_ActorClassToPreloadOnClient (Underlying native function: OnRep_ActorClassToPreloadOnClient 0x2f6524c)
	void OnRepActorClassToPreloadOnClient(); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded (Underlying native function: OnPatrolPathAdded 0x723b324)
	void OnPatrolPathAdded(class AFortAthenaPatrolPath*& PatrolPath); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnDebugSpawnEventSpawned (Underlying native function: OnDebugSpawnEventSpawned 0x723a99c)
	void OnDebugSpawnEventSpawned(struct TArray<class AActor*>& SpawnedActors, bool& bSuccess); // (Final | Native | Private | HasOutParms)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded (Underlying native function: OnCurrentPlaylistLoaded 0x723a790)
	void OnCurrentPlaylistLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | Native | Private | HasOutParms)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned (Underlying native function: OnActorSpawned 0x723a26c)
	void OnActorSpawned(class AActor*& Actor, int& RequestId); // (Final | Native | Private)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LWMTAM (Underlying native function: LWMTAM 0x5322de0)
	void LWMTAM(struct FString& Name); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LWMF (Underlying native function: LWMF 0x52f5710)
	void LWMF(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider (Underlying native function: LivingWorldManagerUnregisterPointProvider 0x72397a4)
	static void LivingWorldManagerUnregisterPointProvider(class AActor*& PointProvider); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging (Underlying native function: LivingWorldManagerToggleVerboseLogging 0x26daa0c)
	void LivingWorldManagerToggleVerboseLogging(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents (Underlying native function: LivingWorldManagerToggleGenerateEvents 0x26daa0c)
	void LivingWorldManagerToggleGenerateEvents(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleDensityDisplay (Underlying native function: LivingWorldManagerToggleDensityDisplay 0x26daa0c)
	void LivingWorldManagerToggleDensityDisplay(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap (Underlying native function: LivingWorldManagerToggleActorMinimap 0x723a0d4)
	void LivingWorldManagerToggleActorMinimap(struct FString& Name); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSetEventGenerationEnabled (Underlying native function: LivingWorldManagerSetEventGenerationEnabled 0x71a6cc4)
	void LivingWorldManagerSetEventGenerationEnabled(bool& bInGenerateEvents); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider (Underlying native function: LivingWorldManagerRegisterPointProvider 0x72397a4)
	static void LivingWorldManagerRegisterPointProvider(class AActor*& PointProvider); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor (Underlying native function: LivingWorldManagerProviderDebugActor 0x7239740)
	void LivingWorldManagerProviderDebugActor(int& ProviderIndex); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents (Underlying native function: LivingWorldManagerGenerateEvents 0x26daa0c)
	void LivingWorldManagerGenerateEvents(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush (Underlying native function: LivingWorldManagerFlush 0x26daa0c)
	void LivingWorldManagerFlush(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpSpawnCount (Underlying native function: LivingWorldManagerDumpSpawnCount 0x26daa0c)
	void LivingWorldManagerDumpSpawnCount(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpPrefabLevelBounds (Underlying native function: LivingWorldManagerDumpPrefabLevelBounds 0x26daa0c)
	void LivingWorldManagerDumpPrefabLevelBounds(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpEventInstances (Underlying native function: LivingWorldManagerDumpEventInstances 0x26daa0c)
	void LivingWorldManagerDumpEventInstances(); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDebugEvent (Underlying native function: LivingWorldManagerDebugEvent 0x7239120)
	void LivingWorldManagerDebugEvent(struct FString& EventName, int& DebugIndex, struct FString& RuntimeSpawnDataName, struct FString& EncounterName); // (Final | BlueprintAuthorityOnly | Exec | Native | Public)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.IsEncounterCategoryActive (Underlying native function: IsEncounterCategoryActive 0x7238fdc)
	bool IsEncounterCategoryActive(struct TWeakObjectPtr<class UFortAthenaLivingWorldEncounter>& EncounterType); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.GetOwningEncounter (Underlying native function: GetOwningEncounter 0x7238ce0)
	class UFortAthenaLivingWorldEncounterInstance* GetOwningEncounter(class AActor*& Actor); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.GetLivingWorldManager (Underlying native function: GetLivingWorldManager 0x7238c24)
	static class UFortAthenaLivingWorldManager* GetLivingWorldManager(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.EndEncounter (Underlying native function: EndEncounter 0x7238a34)
	void EndEncounter(class UFortAthenaLivingWorldEncounterInstance*& EncounterInstance); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.CancelSpawnRequest (Underlying native function: CancelSpawnRequest 0x7238814)
	void CancelSpawnRequest(int& RequestId); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.BuildDataRegistryResolverScope_Implementation (Underlying native function: BuildDataRegistryResolverScope_Implementation 0x72385c8)
	bool BuildDataRegistryResolverScopeImplementation(struct TArray<struct FName>& InOutResolverScopes, int& InOutPriority); // (Native | Public | HasOutParms | Const)
};

