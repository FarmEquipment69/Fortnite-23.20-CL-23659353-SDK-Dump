// Class /Script/FortniteGame.FortMission_RiftSpawners
// Size: 0x8b0
class AFortMission_RiftSpawners : public AFortMission
{
	bool bStartBasedOnAthenaGamePhases; // 0x6e0 (0x1)
	enum EAthenaGamePhase StartingGamePhase; // 0x6e1 (0x1)
	unsigned char unreflected_6e2[0x2]; // 0x6e2 (0x2) 
	float StartingDelay; // 0x6e4 (0x4)
	bool bUseAthenaSafeZonePhases; // 0x6e8 (0x1)
	bool bSynchronizeEncounterStartTimes; // 0x6e9 (0x1)
	unsigned char unreflected_6ea[0x2]; // 0x6ea (0x2) 
	int MinEncounterIndex; // 0x6ec (0x4)
	int MaxEncounterIndex; // 0x6f0 (0x4)
	unsigned char unreflected_6f4[0x4]; // 0x6f4 (0x4) 
	struct FFortEncounterSettings EncounterSettings; // 0x6f8 (0xc0)
	bool bAllowRiftIntensification; // 0x7b8 (0x1)
	unsigned char unreflected_7b9[0x7]; // 0x7b9 (0x7) 
	struct FScalableFloat MinDamageTriggerPercentage; // 0x7c0 (0x28)
	struct FScalableFloat MaxDamageTriggerPercentage; // 0x7e8 (0x28)
	struct FGameplayTagQuery RequiredRiftTagsQuery; // 0x810 (0x48)
	struct FString RequiredEventFlag; // 0x858 (0x10)
	struct TArray<struct FName> AssociatedSupplyDropIDs; // 0x868 (0x10)
	float SpawnerShutdownCheckInterval; // 0x878 (0x4)
	float BurstFallbackTime; // 0x87c (0x4)
	float CalendarRecheckInterval; // 0x880 (0x4)
	unsigned char unreflected_884[0x4]; // 0x884 (0x4) 
	struct TArray<struct FFortRiftSpawnerData> ActiveRiftSpawnerData; // 0x888 (0x10)
	int CurrentEncounterIndex; // 0x898 (0x4)
	bool bRiftSpawningInProgress; // 0x89c (0x1)
	unsigned char unreflected_89d[0x3]; // 0x89d (0x3) 
	float SyncedEncounterStartTime; // 0x8a0 (0x4)
	bool bCalendarAllowsSpawning; // 0x8a4 (0x1)
	unsigned char padding_8a5[0xb]; // 0x8a5 (0xb)

	/* Functions */

	// Function /Script/FortniteGame.FortMission_RiftSpawners.SetCalendarAllowsActive (Underlying native function: SetCalendarAllowsActive 0x8b2e520)
	void SetCalendarAllowsActive(bool& bInCanBeActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMission_RiftSpawners.OnFinalSpawnUsed (Underlying native function: OnFinalSpawnUsed 0x8b2d850)
	void OnFinalSpawnUsed(class UFortAIEncounterInfo*& Encounter); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMission_RiftSpawners.OnActiveEventsChanged (Underlying native function: OnActiveEventsChanged 0x8b2d76c)
	void OnActiveEventsChanged(struct TArray<struct FString>& ActiveEventFlags); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortMission_RiftSpawners.HandleRiftDamaged (Underlying native function: HandleRiftDamaged 0x8b2cb38)
	void HandleRiftDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/FortniteGame.FortMission_RiftSpawners.HandleRampStarted (Underlying native function: HandleRampStarted 0x8b2cab8)
	void HandleRampStarted(class UFortAIEncounterInfo*& Encounter); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMission_RiftSpawners.HandleEncounterAllBurstEnemiesSpawned (Underlying native function: HandleEncounterAllBurstEnemiesSpawned 0x8b2c914)
	void HandleEncounterAllBurstEnemiesSpawned(class UFortAIEncounterInfo*& Encounter); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMission_RiftSpawners.HandleAthenaSafeZonePhaseChanged (Underlying native function: HandleAthenaSafeZonePhaseChanged 0x8b2c900)
	void HandleAthenaSafeZonePhaseChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMission_RiftSpawners.HandleAthenaGamePhaseChanged (Underlying native function: HandleAthenaGamePhaseChanged 0x8b2c880)
	void HandleAthenaGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortMission_RiftSpawners.HandleAISpawned (Underlying native function: HandleAISpawned 0x70dc290)
	void HandleAISpawned(class UFortAIEncounterInfo*& Encounter, class AFortAIPawn*& SpawnedEnemy); // (Final | Native | Public)
};

