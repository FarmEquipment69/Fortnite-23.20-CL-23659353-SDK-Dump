// Class /Script/FortniteGame.FortLightningActor
// Size: 0x2d8
class AFortLightningActor : public AFortClientOnlyActor
{
	int MaxBoltMeshes; // 0x290 (0x4)
	float MaxBoltWidth; // 0x294 (0x4)
	struct FName BoltMaterialParamTopPct; // 0x298 (0x4)
	struct FName BoltMaterialParamBottomPct; // 0x29c (0x4)
	class AActor* ActorToNotify; // 0x2a0 (0x8)
	struct TArray<struct FVector> BoltLocations; // 0x2a8 (0x10)
	struct TArray<class UStaticMeshComponent*> BoltMeshes; // 0x2b8 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> BoltMIDs; // 0x2c8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortLightningActor.OnLightingInitialized (Has no native function)
	void OnLightingInitialized(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortLightningActor.OnLightingCleanup (Has no native function)
	void OnLightingCleanup(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortLightningActor.InitializeLightning (Underlying native function: InitializeLightning 0x88626cc)
	void InitializeLightning(class AActor*& InActorToNotify); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortLightningActor.GenerateBoltLocations (Underlying native function: GenerateBoltLocations 0x88608c8)
	void GenerateBoltLocations(struct FVector& StartLocation, struct FVector& EndLocation, float& MinLength, float& MaxLength, float& RandomVectorContribution, float& MinSizeDecayRate, float& MaxSizeDecayRate, float& FalloffMultiplier); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortLightningActor.CleanupLightning (Underlying native function: CleanupLightning 0x88604a0)
	void CleanupLightning(); // (Final | Native | Public | BlueprintCallable)
};

