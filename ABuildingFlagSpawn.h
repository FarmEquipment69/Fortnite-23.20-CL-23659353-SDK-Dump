// Class /Script/FortniteGame.BuildingFlagSpawn
// Size: 0xa48
class ABuildingFlagSpawn : public ABuildingGameplayActor
{
	unsigned char unreflected_9d8[0x8]; // 0x9d8 (0x8) 
	struct FVector HUDIndicatorRelativeOffset; // 0x9e0 (0x18)
	unsigned char bPickupOnTouch; // 0x9f8 (0x1)
	unsigned char unreflected_9f9[0x7]; // 0x9f9 (0x7) 
	class UClass* CarriedObjectClass; // 0xa00 (0x8)
	struct FVector RelativeTranslation; // 0xa08 (0x18)
	class AFortCarriedObject* SpawnedObject; // 0xa20 (0x8)
	float SpawnDelay; // 0xa28 (0x4)
	unsigned char padding_a2c[0x1c]; // 0xa2c (0x1c)

	/* Functions */

	// Function /Script/FortniteGame.BuildingFlagSpawn.SpawnCarriedObject (Underlying native function: SpawnCarriedObject 0x868cd7c)
	void SpawnCarriedObject(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingFlagSpawn.OnCarriedObjectDetachedEvent (Underlying native function: OnCarriedObjectDetachedEvent 0x8288dc4)
	void OnCarriedObjectDetachedEvent(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingFlagSpawn.OnCarriedObjectAttachedEvent (Underlying native function: OnCarriedObjectAttachedEvent 0x85df93c)
	void OnCarriedObjectAttachedEvent(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingFlagSpawn.IsSpawnedObjectAwayFromBase (Underlying native function: IsSpawnedObjectAwayFromBase 0x868c878)
	bool IsSpawnedObjectAwayFromBase(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

