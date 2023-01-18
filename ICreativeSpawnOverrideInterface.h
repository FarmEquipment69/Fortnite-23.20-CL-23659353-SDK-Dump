// Class /Script/FortniteGame.CreativeSpawnOverrideInterface
// Size: 0x28
class ICreativeSpawnOverrideInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.CreativeSpawnOverrideInterface.ShouldSpawnAtFirstSafeZonePhaseLocation (Underlying native function: ShouldSpawnAtFirstSafeZonePhaseLocation 0x8093908)
	bool ShouldSpawnAtFirstSafeZonePhaseLocation(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeSpawnOverrideInterface.OverridePlayerSpawnLocationAndRotation (Underlying native function: OverridePlayerSpawnLocationAndRotation 0x809392c)
	bool OverridePlayerSpawnLocationAndRotation(class AFortPlayerStateAthena*& PlayerState, struct FVector& OutLocation, struct FRotator& OutRotation); // (BlueprintAuthorityOnly | Native | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeSpawnOverrideInterface.GetInitialStormRadius (Underlying native function: GetInitialStormRadius 0x80938e0)
	float GetInitialStormRadius(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

