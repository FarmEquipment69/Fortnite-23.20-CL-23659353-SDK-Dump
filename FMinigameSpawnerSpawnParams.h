// ScriptStruct /Script/FortniteGame.MinigameSpawnerSpawnParams
// Size: 0xa0
struct FMinigameSpawnerSpawnParams
{
	struct TWeakObjectPtr<class UFortWorldItemDefinition> PickupToSpawn; // 0x0 (0x28)
	int PickupQuantity; // 0x28 (0x4)
	int PickupInstigatorHandle; // 0x2c (0x4)
	struct FGuid ItemVariantGuid; // 0x30 (0x10)
	struct FTransform SpawnTransform; // 0x40 (0x60)
};

