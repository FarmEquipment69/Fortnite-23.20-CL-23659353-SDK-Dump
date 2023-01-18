// ScriptStruct /Script/FortniteAI.PendingSpawnInfo
// Size: 0x148
struct FPendingSpawnInfo
{
	class UClass* PawnClassToSpawn; // 0x0 (0x8)
	class AActor* SpawnPoint; // 0x8 (0x8)
	struct FVector SpawnLocation; // 0x10 (0x18)
	struct FRotator SpawnRotation; // 0x28 (0x18)
	class AActor* SpawnSource; // 0x40 (0x8)
	bool bSpawnedFromExternalSpawner; // 0x48 (0x1)
	enum EFortressAIType AIType; // 0x49 (0x1)
	unsigned char unreflected_4a[0x6]; // 0x4a (0x6) 
	class AFortPlayerController* TargetPlayer; // 0x50 (0x8)
	class UFortAIEncounterInfo* EncounterInfo; // 0x58 (0x8)
	float DifficultyLevel; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	class UFortAISpawnGroup* SpawnGroup; // 0x68 (0x8)
	struct FGuid SpawnGroupGuid; // 0x70 (0x10)
	int EnemyIndexInSpawnGroup; // 0x80 (0x4)
	float TimeToSpawn; // 0x84 (0x4)
	struct FGuid PendingSpawnInfoGuid; // 0x88 (0x10)
	bool bIgnoreCollision; // 0x98 (0x1)
	bool bKillBuildingActorsAtSpawnLocation; // 0x99 (0x1)
	unsigned char unreflected_9a[0x2]; // 0x9a (0x2) 
	float EncounterAILifespan; // 0x9c (0x4)
	float ScoreMultiplier; // 0xa0 (0x4)
	bool bDebugSpawnedAI; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	struct TArray<class UFortAbilitySet*> AbilitySetsToGrantOnSpawn; // 0xa8 (0x10)
	struct TArray<class UFortGameplayModifierItemDefinition*> ModifiersToApplyOnSpawn; // 0xb8 (0x10)
	struct FFortAISpawnGroupUpgradeUIData UpgradeUIData; // 0xc8 (0x70)
	struct FFortAIPawnLootDropData LootDropData; // 0x138 (0x10)
};

