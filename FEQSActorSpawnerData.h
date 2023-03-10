// ScriptStruct /Script/FortniteGame.EQSActorSpawnerData
// Size: 0x268
struct FEQSActorSpawnerData
{
	struct FName NameId; // 0x0 (0x4)
	bool bEnabled; // 0x4 (0x1)
	enum EEQSActorSpawnerTriggerType SpawningTrigger; // 0x5 (0x1)
	enum EFortSafeZoneState SafeZoneStateToStartSpawning; // 0x6 (0x1)
	unsigned char unreflected_7[0x1]; // 0x7 (0x1) 
	int SafeZoneIndexToSpawnIn; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FScalableFloat DelayBeforeSpawning; // 0x10 (0x28)
	struct FScalableFloat TimeBetweenSpawnsMin; // 0x38 (0x28)
	struct FScalableFloat TimeBetweenSpawnsMax; // 0x60 (0x28)
	struct FScalableFloat TotalActorsToSpawnMin; // 0x88 (0x28)
	struct FScalableFloat TotalActorsToSpawnMax; // 0xb0 (0x28)
	struct FScalableFloat DelayBeforeSpawningBySafeZoneIndex; // 0xd8 (0x28)
	struct FScalableFloat TimeBetweenSpawnsMinBySafeZoneIndex; // 0x100 (0x28)
	struct FScalableFloat TimeBetweenSpawnsMaxBySafeZoneIndex; // 0x128 (0x28)
	struct FScalableFloat TotalActorsToSpawnMinBySafeZoneIndex; // 0x150 (0x28)
	struct FScalableFloat TotalActorsToSpawnMaxBySafeZoneIndex; // 0x178 (0x28)
	struct FScalableFloat bSpawnInCenterOfBuildingGridCell; // 0x1a0 (0x28)
	struct FVector SpawnLocationOffset; // 0x1c8 (0x18)
	struct TArray<class UClass*> SpawnerHelperDestroyActorsInAreaClasses; // 0x1e0 (0x10)
	struct FScalableFloat TotalRetryAttemptsOnSpawnFailure; // 0x1f0 (0x28)
	bool bAvoidRepeatClassSpawning; // 0x218 (0x1)
	unsigned char unreflected_219[0x7]; // 0x219 (0x7) 
	struct TArray<struct FEQSActorSpawnerClassToSpawnData> SpawnClassesData; // 0x220 (0x10)
	class UEnvQuery* BasePlacementQuery; // 0x230 (0x8)
	class UEnvQuery* SpawnActorPlacementQuery; // 0x238 (0x8)
	bool bIncludeMutatorBasePlacementQueryResults; // 0x240 (0x1)
	unsigned char unreflected_241[0x7]; // 0x241 (0x7) 
	struct TArray<struct FEnvNamedValue> SpawnActorPlacementQueryParams; // 0x248 (0x10)
	class UEnvQuery* SpawnedActorRemovalQuery; // 0x258 (0x8)
	float BaseQueryingAttemptIntervalTimeSeconds; // 0x260 (0x4)
	float SpawnedActorRemovalQueryInterval; // 0x264 (0x4)
};

