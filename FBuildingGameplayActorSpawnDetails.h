// ScriptStruct /Script/FortniteGame.BuildingGameplayActorSpawnDetails
// Size: 0x1a0
struct FBuildingGameplayActorSpawnDetails
{
	class UClass* BuildingGameplayActorClass; // 0x0 (0x8)
	class UClass* TargetActorClass; // 0x8 (0x8)
	struct FScalableFloat SpawnHeight; // 0x10 (0x28)
	struct FScalableFloat GlobalMaxBGAs; // 0x38 (0x28)
	struct FScalableFloat MinNumToSpawnPerPhase; // 0x60 (0x28)
	struct FScalableFloat MaxNumToSpawnPerPhase; // 0x88 (0x28)
	struct FScalableFloat MinTimeToStartSpawnningBGAs; // 0xb0 (0x28)
	struct FScalableFloat MaxTimeToStartSpawnningBGAs; // 0xd8 (0x28)
	struct FScalableFloat MinTimeBetweenBGASpawns; // 0x100 (0x28)
	struct FScalableFloat MaxTimeBetweenBGASpawns; // 0x128 (0x28)
	struct FScalableFloat MinTimeToRepeatSpawningBGAs; // 0x150 (0x28)
	struct FScalableFloat MaxTimeToRepeatSpawningBGAs; // 0x178 (0x28)
};

