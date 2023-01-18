// Class /Script/FortniteGame.FortAthenaExitCraftSpawner
// Size: 0x2e8
class AFortAthenaExitCraftSpawner : public AActor
{
	unsigned char unreflected_288[0x18]; // 0x288 (0x18) 
	class UCapsuleComponent* DestructionOverlapCapsule; // 0x2a0 (0x8)
	class UFortAthenaExitCraftInfo* ExitCraftInfo; // 0x2a8 (0x8)
	struct TArray<class ABuildingSMActor*> BuildingActorsToDestroy; // 0x2b0 (0x10)
	struct FName SpawnerSpecialActorID; // 0x2c0 (0x4)
	unsigned char padding_2c4[0x24]; // 0x2c4 (0x24)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaExitCraftSpawner.StartExitCraftSpawnTimer (Underlying native function: StartExitCraftSpawnTimer 0x82e4df4)
	void StartExitCraftSpawnTimer(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaExitCraftSpawner.DestroyBlockingActors (Underlying native function: DestroyBlockingActors 0x82e2ec8)
	void DestroyBlockingActors(); // (Final | Native | Protected | BlueprintCallable)
};

