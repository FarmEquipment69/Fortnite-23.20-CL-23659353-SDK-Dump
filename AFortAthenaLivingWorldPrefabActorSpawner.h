// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
// Size: 0x3b8
class AFortAthenaLivingWorldPrefabActorSpawner : public AActor
{
	struct FFortAthenaLivingWorldActorSpawnDescription ActorDescription; // 0x288 (0x100)
	struct FMulticastInlineDelegate OnActorSpawnedDelegate; // 0x388 (0x10)
	class AFortAthenaPatrolPath* PatrolPath; // 0x398 (0x8)
	struct FGuid Guid; // 0x3a0 (0x10)
	struct TWeakObjectPtr<class AActor> SpawnedActor; // 0x3b0 (0x8)

	/* Functions */

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnSnapCompleted (Underlying native function: OnSnapCompleted 0x723b3a4)
	void OnSnapCompleted(class UFortSnapOnSurfaceComponent*& Component, struct FTransform& OldTransform, struct FTransform& NewTransfom); // (Final | Native | Protected | HasOutParms | HasDefaults)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawnedDelegate__DelegateSignature (Has no native function)
	void OnActorSpawnedDelegateDelegateSignature(class AActor*& SpawnedActor); // (Public | Delegate)

	// DelegateFunction /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawned__DelegateSignature (Has no native function)
	void OnActorSpawnedDelegateSignature(class AActor*& SpawnedActor); // (MulticastDelegate | Public | Delegate)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.GetSpawnedActor (Underlying native function: GetSpawnedActor 0x7238f44)
	class AActor* GetSpawnedActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.CallWhenActorSpawned (Underlying native function: CallWhenActorSpawned 0x72386cc)
	void CallWhenActorSpawned(struct FDelegate& DelegateToCall); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)
};

