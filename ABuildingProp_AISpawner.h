// Class /Script/FortniteGame.BuildingProp_AISpawner
// Size: 0xf30
class ABuildingProp_AISpawner : public ABuildingProp
{
	class UClass* CreativeRiftClass; // 0xee8 (0x8)
	class UFortCreativeCreatureManagerComponent* CreatureManagerComponent; // 0xef0 (0x8)
	class UFortMinigameProgressComponent* MinigameProgress; // 0xef8 (0x8)
	class AAthenaCreativeRift* CreativeRift; // 0xf00 (0x8)
	class USceneComponent* SpawnLocation; // 0xf08 (0x8)
	float ActivationRangeLevel; // 0xf10 (0x4)
	bool bCanAIDespawnWhenTooFar; // 0xf14 (0x1)
	bool bUseDistanceToAI; // 0xf15 (0x1)
	unsigned char unreflected_f16[0x2]; // 0xf16 (0x2) 
	float DespawnRangeOverride; // 0xf18 (0x4)
	unsigned char padding_f1c[0x14]; // 0xf1c (0x14)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_AISpawner.SpawnRift (Underlying native function: SpawnRift 0x26daa0c)
	void SpawnRift(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.SetSpawnLocation (Underlying native function: SetSpawnLocation 0x860d9d8)
	void SetSpawnLocation(class USceneComponent*& SpawnLocation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.OnSpawnedRift (Has no native function)
	void OnSpawnedRift(class ABuildingRift*& SpawnedRift); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.MinigameEnded (Underlying native function: MinigameEnded 0x25a08dc)
	void MinigameEnded(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.DestroyRift (Underlying native function: DestroyRift 0x85be11c)
	void DestroyRift(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.BP_NotifyAIPawnSpawned (Has no native function)
	void BPNotifyAIPawnSpawned(class AFortAIPawn*& SpawnedAI, struct FVector& SpawnSlotLocation); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.BP_NotifyAIPawnKilled (Has no native function)
	void BPNotifyAIPawnKilled(class AFortAIPawn*& KilledAI, class AController*& KillingInstigator); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_AISpawner.AdjustCollision (Underlying native function: AdjustCollision 0x8606e0c)
	void AdjustCollision(bool& bIgnore, class UPrimitiveComponent*& Collision); // (Final | Native | Public | BlueprintCallable)
};

