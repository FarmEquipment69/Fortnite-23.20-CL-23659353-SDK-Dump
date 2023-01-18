// Class /Script/FortniteGame.FortActorSpawner
// Size: 0x2b8
class AFortActorSpawner : public AActor
{
	struct TWeakObjectPtr<class UClass> ActorClassToSpawn; // 0x288 (0x28)
	enum EFortActorSpawnerAuthority SpawnerAuthority; // 0x2b0 (0x1)
	unsigned char bSpawnOnBeginPlay; // 0x2b1 (0x1)
	unsigned char bDestroyAfterSpawn; // 0x2b1 (0x1)
	unsigned char padding_2b2[0x6]; // 0x2b2 (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortActorSpawner.TrySpawnActor (Underlying native function: TrySpawnActor 0x71206f0)
	bool TrySpawnActor(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortActorSpawner.BP_OnActorSpawn (Has no native function)
	void BPOnActorSpawn(class AActor*& SpawnedActor); // (Event | Protected | BlueprintEvent)
};

