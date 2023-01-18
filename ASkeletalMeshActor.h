// Class /Script/Engine.SkeletalMeshActor
// Size: 0x308
class ASkeletalMeshActor : public AActor
{
	unsigned char bShouldDoAnimNotifies; // 0x288 (0x1)
	unsigned char bWakeOnLevelStart; // 0x288 (0x1)
	unsigned char unreflected_289[0x7]; // 0x289 (0x7) 
	class USkeletalMeshComponent* SkeletalMeshComponent; // 0x290 (0x8)
	class USkeletalMesh* ReplicatedMesh; // 0x298 (0x8)
	class UPhysicsAsset* ReplicatedPhysAsset; // 0x2a0 (0x8)
	class UMaterialInterface* ReplicatedMaterial0; // 0x2a8 (0x8)
	class UMaterialInterface* ReplicatedMaterial1; // 0x2b0 (0x8)
	unsigned char padding_2b8[0x50]; // 0x2b8 (0x50)

	/* Functions */

	// Function /Script/Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset (Underlying native function: OnRep_ReplicatedPhysAsset 0x22c0e58)
	void OnRepReplicatedPhysAsset(); // (Native | Public)

	// Function /Script/Engine.SkeletalMeshActor.OnRep_ReplicatedMesh (Underlying native function: OnRep_ReplicatedMesh 0x23eff98)
	void OnRepReplicatedMesh(); // (Native | Public)

	// Function /Script/Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1 (Underlying native function: OnRep_ReplicatedMaterial1 0x2646488)
	void OnRepReplicatedMaterial1(); // (Native | Public)

	// Function /Script/Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0 (Underlying native function: OnRep_ReplicatedMaterial0 0x8546790)
	void OnRepReplicatedMaterial0(); // (Native | Public)
};

