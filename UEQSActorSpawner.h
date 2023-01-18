// Class /Script/FortniteGame.EQSActorSpawner
// Size: 0x318
class UEQSActorSpawner : public UObject
{
	unsigned char unreflected_28[0x278]; // 0x28 (0x278) 
	class AFortAthenaMutator_EQSActorSpawner* OwningActorSpawnerMutator; // 0x2a0 (0x8)
	struct TArray<class AActor*> SpawnedActors; // 0x2a8 (0x10)
	struct TArray<class UEQSActorSpawnerHelperDestroyActorsInArea*> SpawnerHelperDestroyActorsInAreaList; // 0x2b8 (0x10)
	unsigned char padding_2c8[0x50]; // 0x2c8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.EQSActorSpawner.OnFindActorSpawnLocationQueryFinished (Underlying native function: OnFindActorSpawnLocationQueryFinished 0x84a7cec)
	void OnFindActorSpawnLocationQueryFinished(class UEnvQueryInstanceBlueprintWrapper*& QueryInstance, struct TEnumAsByte<EEnvQueryStatus>& QueryStatus); // (Final | Native | Protected)

	// Function /Script/FortniteGame.EQSActorSpawner.GetSpawnerData (Underlying native function: GetSpawnerData 0x84a6708)
	struct FEQSActorSpawnerData GetSpawnerData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

