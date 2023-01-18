// Class /Script/LagerRuntime.FortAthenaLivingWorldConfigData
// Size: 0x230
class UFortAthenaLivingWorldConfigData : public UDataAsset
{
	struct TArray<struct FFortAthenaLivingWorldCategoryTableData> CategoryTableDatas; // 0x30 (0x10)
	struct FScalableFloat MaxActorCount; // 0x40 (0x28)
	struct FScalableFloat MaxEventSpawnPerTick; // 0x68 (0x28)
	struct FScalableFloat MaxActorDespawnPerTick; // 0x90 (0x28)
	struct FScalableFloat MinimumEventGenerationInterval; // 0xb8 (0x28)
	struct FScalableFloat MaxActorDensity; // 0xe0 (0x28)
	struct FScalableFloat MaxActorUpdatesPerTick; // 0x108 (0x28)
	struct FScalableFloat ActorDensityGridCellSize; // 0x130 (0x28)
	struct FScalableFloat PointClusterSize; // 0x158 (0x28)
	struct FScalableFloat MinNumberOfPlayerForAggressiveSpawning; // 0x180 (0x28)
	struct TArray<struct FFortAthenaLivingWorldTagDensityGridData> TagDensityGridData; // 0x1a8 (0x10)
	struct FGameplayTagQuery SingleUseSpawnerDataQuery; // 0x1b8 (0x48)
	class UClass* EQSActorHelperClass; // 0x200 (0x8)
	struct FScalableFloat DelayEventGeneration; // 0x208 (0x28)
};

