// Class /Script/FortniteGame.FortAthenaMutator_SupplyDrop
// Size: 0x3d8
class AFortAthenaMutator_SupplyDrop : public AFortAthenaMutator
{
	unsigned char unreflected_330[0x8]; // 0x330 (0x8) 
	struct FScalableFloat SpawnFailureLockoutTime; // 0x338 (0x28)
	class UEnvQuery* BasePlacementQuery; // 0x360 (0x8)
	float BaseQueryingAttemptIntervalTimeSeconds; // 0x368 (0x4)
	unsigned char unreflected_36c[0x4]; // 0x36c (0x4) 
	struct TArray<struct FFortSupplyDropMutatorData> SafeZoneMutatorData; // 0x370 (0x10)
	struct TArray<struct FVector> BaseQueryResults; // 0x380 (0x10)
	struct TWeakObjectPtr<class UEnvQuery> SupplyDropRemovalQuery; // 0x390 (0x28)
	float SupplyDropRemovalQueryInterval; // 0x3b8 (0x4)
	unsigned char padding_3bc[0x1c]; // 0x3bc (0x1c)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_SupplyDrop.RemoveOutOfStormSupplyDrop (Underlying native function: RemoveOutOfStormSupplyDrop 0x8506140)
	void RemoveOutOfStormSupplyDrop(); // (Final | Native | Public)
};

