// Class /Script/FortniteGame.FortAthenaMutator_EQSActorSpawner
// Size: 0x420
class AFortAthenaMutator_EQSActorSpawner : public AFortAthenaMutator
{
	struct FMulticastInlineDelegate OnEQSActorSpawningPhaseStarted; // 0x330 (0x10)
	struct FMulticastInlineDelegate OnEQSActorSpawningPhaseEnded; // 0x340 (0x10)
	struct FMulticastInlineDelegate OnActorSpawnedDelegate; // 0x350 (0x10)
	struct FMulticastInlineDelegate OnAISpawnedDelegate; // 0x360 (0x10)
	struct FMulticastInlineDelegate OnPrepareEQS; // 0x370 (0x10)
	class UEnvQuery* MutatorBasePlacementQuery; // 0x380 (0x8)
	float MutatorBaseQueryingAttemptIntervalTimeSeconds; // 0x388 (0x4)
	unsigned char unreflected_38c[0x4]; // 0x38c (0x4) 
	struct TArray<struct FEQSActorSpawnerData> ActorSpawningDatas; // 0x390 (0x10)
	struct TArray<class UEQSActorSpawner*> ActorSpawners; // 0x3a0 (0x10)
	unsigned char unreflected_3b0[0x20]; // 0x3b0 (0x20) 
	struct TMap<int, class UEQSActorSpawner*> AIPawnSpawnRequestIdToEQSActorSpawnerMap; // 0x3d0 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_EQSActorSpawner.StartSpawningManually (Underlying native function: StartSpawningManually 0x84a97bc)
	bool StartSpawningManually(struct FName& NameId, int& OptionalActivationId); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaMutator_EQSActorSpawner.ShouldOverrideClassesToSpawn (Underlying native function: ShouldOverrideClassesToSpawn 0x84a9694)
	bool ShouldOverrideClassesToSpawn(struct TArray<struct FEQSActorSpawnerClassToSpawnData>& OutOverrideClassesToSpawn, struct FEQSActorSpawnerData& SpawnerData); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_EQSActorSpawner.OnPrepareEQSRequest (Has no native function)
	void OnPrepareEQSRequest(class UEQSActorSpawner*& EQSActorSpawner, class UEnvQueryInstanceBlueprintWrapper*& EQSInstanceWrapper); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_EQSActorSpawner.OnActorSpawnPhaseStarted (Has no native function)
	void OnActorSpawnPhaseStarted(struct FEQSActorSpawnerData& EQSActorSpawnerData, int& ActivationIndex); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_EQSActorSpawner.OnActorSpawnPhaseEnded (Has no native function)
	void OnActorSpawnPhaseEnded(struct FEQSActorSpawnerData& EQSActorSpawnerData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_EQSActorSpawner.OnActorSpawned (Has no native function)
	void OnActorSpawned(class AActor*& SpawnedActor, struct FEQSActorSpawnerData& EQSActorSpawnerData, class UEQSActorSpawner*& EQSActorSpawner); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaMutator_EQSActorSpawner.GetEQSActorSpawnerByNameId (Underlying native function: GetEQSActorSpawnerByNameId 0x84a5abc)
	class UEQSActorSpawner* GetEQSActorSpawnerByNameId(struct FName& NameId); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

