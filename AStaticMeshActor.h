// Class /Script/Engine.StaticMeshActor
// Size: 0x298
class AStaticMeshActor : public AActor
{
	class UStaticMeshComponent* StaticMeshComponent; // 0x288 (0x8)
	bool bStaticMeshReplicateMovement; // 0x290 (0x1)
	enum ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x291 (0x1)
	unsigned char padding_292[0x6]; // 0x292 (0x6)

	/* Functions */

	// Function /Script/Engine.StaticMeshActor.SetMobility (Underlying native function: SetMobility 0x9f8ddc0)
	void SetMobility(struct TEnumAsByte<EComponentMobility>& InMobility); // (Final | Native | Public | BlueprintCallable)
};

