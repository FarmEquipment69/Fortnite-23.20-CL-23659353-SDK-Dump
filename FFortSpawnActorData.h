// ScriptStruct /Script/FortniteGame.FortSpawnActorData
// Size: 0x20
struct FFortSpawnActorData
{
	class UFortSpawnActorInfo* SpawnActorInfo; // 0x0 (0x8)
	int NumSpawnsRemaining; // 0x8 (0x4)
	float TimeUntilNextSpawn; // 0xc (0x4)
	struct TArray<class AActor*> SpawnedFortSpawnActors; // 0x10 (0x10)
};

