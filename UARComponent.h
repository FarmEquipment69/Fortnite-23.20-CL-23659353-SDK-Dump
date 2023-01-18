// Class /Script/AugmentedReality.ARComponent
// Size: 0x320
class UARComponent : public USceneComponent
{
	struct FGuid NativeID; // 0x2a0 (0x10)
	unsigned char unreflected_2b0[0x30]; // 0x2b0 (0x30) 
	bool bUseDefaultReplication; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	class UMaterialInterface* DefaultMeshMaterial; // 0x2e8 (0x8)
	class UMaterialInterface* DefaultWireframeMeshMaterial; // 0x2f0 (0x8)
	class UMRMeshComponent* MRMeshComponent; // 0x2f8 (0x8)
	class UARTrackedGeometry* MyTrackedGeometry; // 0x300 (0x8)
	unsigned char padding_308[0x18]; // 0x308 (0x18)

	/* Functions */

	// Function /Script/AugmentedReality.ARComponent.UpdateVisualization (Underlying native function: UpdateVisualization 0x8d41e70)
	void UpdateVisualization(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/AugmentedReality.ARComponent.SetNativeID (Underlying native function: SetNativeID 0x97bf310)
	void SetNativeID(struct FGuid& NativeID); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/AugmentedReality.ARComponent.ReceiveRemove (Has no native function)
	void ReceiveRemove(); // (Event | Public | BlueprintEvent)

	// Function /Script/AugmentedReality.ARComponent.OnRep_Payload (Underlying native function: OnRep_Payload 0x8d41efc)
	void OnRepPayload(); // (Native | Protected)

	// Function /Script/AugmentedReality.ARComponent.GetMRMesh (Underlying native function: GetMRMesh 0x8b087a4)
	class UMRMeshComponent* GetMRMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

