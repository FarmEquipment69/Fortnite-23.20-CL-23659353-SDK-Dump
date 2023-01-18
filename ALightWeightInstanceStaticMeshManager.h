// Class /Script/Engine.LightWeightInstanceStaticMeshManager
// Size: 0x390
class ALightWeightInstanceStaticMeshManager : public ALightWeightInstanceManager
{
	unsigned char unreflected_328[0x8]; // 0x328 (0x8) 
	struct TWeakObjectPtr<class UStaticMesh> StaticMesh; // 0x330 (0x28)
	class UHierarchicalInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0x358 (0x8)
	struct TArray<int> RenderingIndicesToDataIndices; // 0x360 (0x10)
	struct TArray<int> DataIndicesToRenderingIndices; // 0x370 (0x10)
	unsigned char padding_380[0x10]; // 0x380 (0x10)

	/* Functions */

	// Function /Script/Engine.LightWeightInstanceStaticMeshManager.OnRep_StaticMesh (Underlying native function: OnRep_StaticMesh 0x9e3ee08)
	void OnRepStaticMesh(); // (Final | Native | Protected)
};

