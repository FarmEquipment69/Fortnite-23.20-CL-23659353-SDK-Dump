// Class /Script/FortniteGame.FortAthenaVehicleSpawner
// Size: 0x308
class AFortAthenaVehicleSpawner : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class USceneComponent* DummyRoot; // 0x290 (0x8)
	struct TWeakObjectPtr<class UFortVehicleItemDefinition> FortVehicleItemDef; // 0x298 (0x28)
	struct TArray<struct FVehicleWeightedDef> FortVehicleItemDefVariants; // 0x2c0 (0x10)
	bool bCanSpawnWithMod; // 0x2d0 (0x1)
	enum ESpawnActorCollisionHandlingMethod SpawnCollisionHandling; // 0x2d1 (0x1)
	struct TEnumAsByte<EVehicleInitialOverlapBehavior> InitialOverlapBehavior; // 0x2d2 (0x1)
	bool bForceSpawnAlways; // 0x2d3 (0x1)
	unsigned char unreflected_2d4[0x4]; // 0x2d4 (0x4) 
	class UFortVehicleItemDefinition* CachedFortVehicleItemDef; // 0x2d8 (0x8)
	bool bIsVehicleItemDefCached; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	struct FGameplayTagContainer GameplayTags; // 0x2e8 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaVehicleSpawner.SpawnVehicleWithConstruction (Underlying native function: SpawnVehicleWithConstruction 0x832fa0c)
	class AFortAthenaVehicle* SpawnVehicleWithConstruction(class UClass*& Class, struct FTransform& Transform); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaVehicleSpawner.SpawnVehicle (Underlying native function: SpawnVehicle 0x22c0e58)
	void SpawnVehicle(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicleSpawner.OnConstructVehicle (Underlying native function: OnConstructVehicle 0x720c64c)
	void OnConstructVehicle(class AFortAthenaVehicle*& Vehicle); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortAthenaVehicleSpawner.GetVehicleClass (Underlying native function: GetVehicleClass 0x832e25c)
	class UClass* GetVehicleClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaVehicleSpawner.GetForceSpawnAlways (Underlying native function: GetForceSpawnAlways 0x832e0f0)
	bool GetForceSpawnAlways(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

