// ScriptStruct /Script/FortniteAI.FortSpawnAIRequest
// Size: 0x68
struct FFortSpawnAIRequest
{
	struct FGuid SpawnGroupInstanceGuid; // 0x0 (0x10)
	int EnemyIndex; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector SpawnLocation; // 0x18 (0x18)
	struct FRotator SpawnRotation; // 0x30 (0x18)
	class AActor* SpawnPoint; // 0x48 (0x8)
	struct TArray<class UFortAbilitySet*> AbilitySetsToGrantOnSpawn; // 0x50 (0x10)
	bool bIgnoreCollisionWhenSpawning; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	float SpawnDelay; // 0x64 (0x4)
};

