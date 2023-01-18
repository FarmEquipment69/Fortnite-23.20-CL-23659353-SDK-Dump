// Class /Script/Engine.InstancedStaticMeshComponent
// Size: 0x750
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
	unsigned char unreflected_600[0x8]; // 0x600 (0x8) 
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x608 (0x10)
	struct TArray<struct FMatrix> PerInstancePrevTransform; // 0x618 (0x10)
	int NumCustomDataFloats; // 0x628 (0x4)
	unsigned char unreflected_62c[0x4]; // 0x62c (0x4) 
	struct TArray<float> PerInstanceSMCustomData; // 0x630 (0x10)
	int InstancingRandomSeed; // 0x640 (0x4)
	unsigned char unreflected_644[0x4]; // 0x644 (0x4) 
	struct TArray<struct FInstancedStaticMeshRandomSeed*> AdditionalRandomSeeds; // 0x648 (0x10)
	int InstanceStartCullDistance; // 0x658 (0x4)
	int InstanceEndCullDistance; // 0x65c (0x4)
	struct TArray<int> InstanceReorderTable; // 0x660 (0x10)
	unsigned char unreflected_670[0xc0]; // 0x670 (0xc0) 
	int NumPendingLightmaps; // 0x730 (0x4)
	unsigned char unreflected_734[0x4]; // 0x734 (0x4) 
	struct TArray<struct FInstancedStaticMeshMappingInfo*> CachedMappings; // 0x738 (0x10)
	unsigned char padding_748[0x8]; // 0x748 (0x8)

	/* Functions */

	// Function /Script/Engine.InstancedStaticMeshComponent.UpdateInstanceTransform (Underlying native function: UpdateInstanceTransform 0x9c0c080)
	bool UpdateInstanceTransform(int& InstanceIndex, struct FTransform& NewInstanceTransform, bool& bWorldSpace, bool& bMarkRenderStateDirty, bool& bTeleport); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.InstancedStaticMeshComponent.SetCustomDataValue (Underlying native function: SetCustomDataValue 0x9c0b490)
	bool SetCustomDataValue(int& InstanceIndex, int& CustomDataIndex, float& CustomDataValue, bool& bMarkRenderStateDirty); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.InstancedStaticMeshComponent.SetCullDistances (Underlying native function: SetCullDistances 0x9c0b3b4)
	void SetCullDistances(int& StartCullDistance, int& EndCullDistance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.InstancedStaticMeshComponent.RemoveInstances (Underlying native function: RemoveInstances 0x9c0b304)
	bool RemoveInstances(struct TArray<int>& InstancesToRemove); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.InstancedStaticMeshComponent.RemoveInstance (Underlying native function: RemoveInstance 0x1b65dd8)
	bool RemoveInstance(int& InstanceIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.InstancedStaticMeshComponent.IsValidInstance (Underlying native function: IsValidInstance 0x9c0aec8)
	bool IsValidInstance(int& InstanceIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InstancedStaticMeshComponent.GetInstanceTransform (Underlying native function: GetInstanceTransform 0x29e40e8)
	bool GetInstanceTransform(int& InstanceIndex, struct FTransform& OutInstanceTransform, bool& bWorldSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InstancedStaticMeshComponent.GetInstancesOverlappingSphere (Underlying native function: GetInstancesOverlappingSphere 0x9c0abec)
	struct TArray<int> GetInstancesOverlappingSphere(struct FVector& Center, float& Radius, bool& bSphereInWorldSpace); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InstancedStaticMeshComponent.GetInstancesOverlappingBox (Underlying native function: GetInstancesOverlappingBox 0x9c0aab0)
	struct TArray<int> GetInstancesOverlappingBox(struct FBox& Box, bool& bBoxInWorldSpace); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InstancedStaticMeshComponent.GetInstanceCount (Underlying native function: GetInstanceCount 0x2dce274)
	int GetInstanceCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.InstancedStaticMeshComponent.ClearInstances (Underlying native function: ClearInstances 0x9c09b28)
	void ClearInstances(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransforms (Underlying native function: BatchUpdateInstancesTransforms 0x9c09960)
	bool BatchUpdateInstancesTransforms(int& StartInstanceIndex, struct TArray<struct FTransform>& NewInstancesTransforms, bool& bWorldSpace, bool& bMarkRenderStateDirty, bool& bTeleport); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransform (Underlying native function: BatchUpdateInstancesTransform 0x9c09704)
	bool BatchUpdateInstancesTransform(int& StartInstanceIndex, int& NumInstances, struct FTransform& NewInstancesTransform, bool& bWorldSpace, bool& bMarkRenderStateDirty, bool& bTeleport); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace (Underlying native function: AddInstanceWorldSpace 0x9c07de4)
	int AddInstanceWorldSpace(struct FTransform& WorldTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.InstancedStaticMeshComponent.AddInstances (Underlying native function: AddInstances 0x9c07eec)
	struct TArray<int> AddInstances(struct TArray<struct FTransform>& InstanceTransforms, bool& bShouldReturnIndices, bool& bWorldSpace); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.InstancedStaticMeshComponent.AddInstance (Underlying native function: AddInstance 0x9c07ca0)
	int AddInstance(struct FTransform& InstanceTransform, bool& bWorldSpace); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

