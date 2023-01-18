// Class /Script/FortniteGame.FortAthenaMutator_SpawningPolicyBase
// Size: 0x490
class AFortAthenaMutator_SpawningPolicyBase : public AFortAthenaMutator
{
	struct TArray<struct FObjectiveSpecialActorContainer> SpecialActorIDList; // 0x330 (0x10)
	int CachedSpecialActorIdx; // 0x340 (0x4)
	unsigned char unreflected_344[0x1c]; // 0x344 (0x1c) 
	struct FScalableFloat MinRespawnTime; // 0x360 (0x28)
	struct FScalableFloat MaxRespawnTime; // 0x388 (0x28)
	float SpawnFailureLockoutTime; // 0x3b0 (0x4)
	enum EAthenaGamePhase GamePhaseToStartSpawning; // 0x3b4 (0x1)
	unsigned char unreflected_3b5[0x3]; // 0x3b5 (0x3) 
	unsigned char bShouldCenterGroundCheckAtFoundLocation; // 0x3b8 (0x1)
	unsigned char bShouldMaintainItemCount; // 0x3b8 (0x1)
	unsigned char bAllowedDespawnToMaintainItemCount; // 0x3b8 (0x1)
	unsigned char bWaitForNavmeshToBeLoaded; // 0x3b8 (0x1)
	unsigned char unreflected_3b9[0x7]; // 0x3b9 (0x7) 
	class UFortAthenaMutator_SpawningPolicyData* ItemDataRemovalQueryPending; // 0x3c0 (0x8)
	unsigned char unreflected_3c8[0x18]; // 0x3c8 (0x18) 
	struct TArray<struct FSpawningInfo> QueuedSpawnInfo; // 0x3e0 (0x10)
	struct TMap<class UFortAthenaMutator_SpawningPolicyData*, int> QueuedSpawnInfoCount; // 0x3f0 (0x50)
	struct TMap<class UFortAthenaMutator_SpawningPolicyData*, float> NextSpawnTime; // 0x440 (0x50)
};

