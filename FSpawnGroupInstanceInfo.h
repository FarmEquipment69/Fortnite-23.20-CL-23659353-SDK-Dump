// ScriptStruct /Script/FortniteAI.SpawnGroupInstanceInfo
// Size: 0x108
struct FSpawnGroupInstanceInfo
{
	class UFortAISpawnGroup* SpawnGroup; // 0x0 (0x8)
	int NumActiveAlive; // 0x8 (0x4)
	int TotalGroupCost; // 0xc (0x4)
	int SpawnPointsUsed; // 0x10 (0x4)
	int NumEngaged; // 0x14 (0x4)
	bool bReadyToSpawn; // 0x18 (0x1)
	bool bFinishedSpawning; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	struct FGuid GroupGuid; // 0x1c (0x10)
	int EnemySpawnDataIndex; // 0x2c (0x4)
	float TimeSelected; // 0x30 (0x4)
	int NextEnemyToSpawnIndex; // 0x34 (0x4)
	struct FGameplayTagContainer UpgradeTags; // 0x38 (0x20)
	struct FFortAISpawnGroupUpgradeUIData UpgradeUIData; // 0x58 (0x70)
	struct TArray<struct FFortAIPawnUpgradeData> PawnUpgrades; // 0xc8 (0x10)
	struct TArray<class UFortGameplayModifierItemDefinition*> ModifiersForAllPawns; // 0xd8 (0x10)
	struct TArray<class AFortAIPawn*> PawnList; // 0xe8 (0x10)
	struct TArray<class AFortAIPawn*> LifespanExpiredList; // 0xf8 (0x10)
};

