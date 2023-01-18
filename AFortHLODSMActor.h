// Class /Script/FortniteGame.FortHLODSMActor
// Size: 0x2f0
class AFortHLODSMActor : public AActor
{
	struct FName ActorFName; // 0x288 (0x4)
	unsigned char unreflected_28c[0x4]; // 0x28c (0x4) 
	struct FVector UniqueWorldLocation; // 0x290 (0x18)
	unsigned char bIsDynamic; // 0x2a8 (0x1)
	unsigned char bStartHidden; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x7]; // 0x2a9 (0x7) 
	float MaxDrawDistanceMultiplier; // 0x2b0 (0x4)
	unsigned char unreflected_2b4[0x4]; // 0x2b4 (0x4) 
	struct TWeakObjectPtr<class UStaticMesh> HLODStaticMesh; // 0x2b8 (0x28)
	class UStaticMeshComponent* StaticMeshComponent; // 0x2e0 (0x8)
	struct FName OverlayLevelName; // 0x2e8 (0x4)
	unsigned char padding_2ec[0x4]; // 0x2ec (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortHLODSMActor.GetActorFName (Underlying native function: GetActorFName 0x83915e4)
	struct FName GetActorFName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

