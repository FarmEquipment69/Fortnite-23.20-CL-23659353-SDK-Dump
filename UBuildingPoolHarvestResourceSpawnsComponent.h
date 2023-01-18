// Class /Script/FortniteGame.BuildingPoolHarvestResourceSpawnsComponent
// Size: 0x100
class UBuildingPoolHarvestResourceSpawnsComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct TMap<class AFortPlayerPawn*, struct FBuildingPoolHarvestResourceSpawnsData> PoolHarvestResourceSpawnsByInstigatorPawnMap; // 0xa8 (0x50)
	unsigned char padding_f8[0x8]; // 0xf8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingPoolHarvestResourceSpawnsComponent.SpawnResourcesTimerExpired (Underlying native function: SpawnResourcesTimerExpired 0x860daf0)
	void SpawnResourcesTimerExpired(class AFortPlayerPawn*& InstigatorPawn); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingPoolHarvestResourceSpawnsComponent.OnOwnerBuildingDied (Underlying native function: OnOwnerBuildingDied 0x860bc64)
	void OnOwnerBuildingDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.BuildingPoolHarvestResourceSpawnsComponent.HandleInstigatorPawnDestroyed (Underlying native function: HandleInstigatorPawnDestroyed 0x86098ec)
	void HandleInstigatorPawnDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingPoolHarvestResourceSpawnsComponent.DestroyUnusedComponentTimerExpired (Underlying native function: DestroyUnusedComponentTimerExpired 0x8607d2c)
	void DestroyUnusedComponentTimerExpired(); // (Final | Native | Private)
};

