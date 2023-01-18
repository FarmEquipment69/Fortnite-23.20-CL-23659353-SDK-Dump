// Class /Script/FortniteAI.AthenaAISpawner
// Size: 0x108
class UAthenaAISpawner : public UAISubsystem
{
	struct FMulticastInlineDelegate OnPawnPreFinishSpawningEvent; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnPawnSpawnedEvent; // 0x48 (0x10)
	unsigned char padding_58[0xb0]; // 0x58 (0xb0)

	/* Functions */

	// Function /Script/FortniteAI.AthenaAISpawner.RequestSpawn (Underlying native function: RequestSpawn 0xa3e9dc8)
	int RequestSpawn(class UFortAthenaAISpawnerDataComponentList*& AISpawnerComponentList, struct FTransform& SpawnTransform, bool& bUrgentRequest); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAISpawner.QueueForDespawn (Underlying native function: QueueForDespawn 0xa3e99b4)
	void QueueForDespawn(class AActor*& ActorToDespawn); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.AthenaAISpawner.CancelRequest (Underlying native function: CancelRequest 0xa3e9614)
	bool CancelRequest(int& RequestId); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

