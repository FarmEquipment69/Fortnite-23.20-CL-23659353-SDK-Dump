// Class /Script/FortniteGame.BGAConsumableSpawner
// Size: 0x800
class ABGAConsumableSpawner : public ABuildingActor
{
	unsigned char unreflected_780[0x10]; // 0x780 (0x10) 
	class USceneComponent* DummyRoot; // 0x790 (0x8)
	struct FName SpawnLootTierGroup; // 0x798 (0x4)
	unsigned char unreflected_79c[0x4]; // 0x79c (0x4) 
	class ABuildingActor* AssociatedBuildingActor; // 0x7a0 (0x8)
	class UEnvQuery* QueryTemplate; // 0x7a8 (0x8)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x7b0 (0x10)
	bool bAlignSpawnedActorsToSurface; // 0x7c0 (0x1)
	unsigned char unreflected_7c1[0x7]; // 0x7c1 (0x7) 
	struct TArray<struct FFortItemEntry> ConsumablesToSpawn; // 0x7c8 (0x10)
	unsigned char padding_7d8[0x28]; // 0x7d8 (0x28)
};

