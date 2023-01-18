// Class /Script/Engine.LODActor
// Size: 0x310
class ALODActor : public AActor
{
	class UStaticMeshComponent* StaticMeshComponent; // 0x288 (0x8)
	struct TMap<struct FHLODInstancingKey, class UInstancedStaticMeshComponent*> InstancedStaticMeshComponents; // 0x290 (0x50)
	class UHLODProxy* Proxy; // 0x2e0 (0x8)
	struct FName Key; // 0x2e8 (0x4)
	float LODDrawDistance; // 0x2ec (0x4)
	int LODLevel; // 0x2f0 (0x4)
	unsigned char unreflected_2f4[0x4]; // 0x2f4 (0x4) 
	struct TArray<class AActor*> SubActors; // 0x2f8 (0x10)
	unsigned char CachedNumHLODLevels; // 0x308 (0x1)
	unsigned char padding_309[0x7]; // 0x309 (0x7)

	/* Functions */

	// Function /Script/Engine.LODActor.OnSubActorEndPlay (Underlying native function: OnSubActorEndPlay 0x9e3ee1c)
	void OnSubActorEndPlay(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& Reason); // (Final | Native | Private)
};

