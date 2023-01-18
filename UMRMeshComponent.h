// Class /Script/MRMesh.MRMeshComponent
// Size: 0x5c0
class UMRMeshComponent : public UPrimitiveComponent
{
	unsigned char unreflected_540[0x8]; // 0x540 (0x8) 
	class UMaterialInterface* Material; // 0x548 (0x8)
	class UMaterialInterface* WireframeMaterial; // 0x550 (0x8)
	bool bCreateMeshProxySections; // 0x558 (0x1)
	bool bUpdateNavMeshOnMeshUpdate; // 0x559 (0x1)
	unsigned char unreflected_55a[0x1]; // 0x55a (0x1) 
	bool bNeverCreateCollisionMesh; // 0x55b (0x1)
	unsigned char unreflected_55c[0x44]; // 0x55c (0x44) 
	struct TArray<class UMRMeshBodyHolder*> BodyHolders; // 0x5a0 (0x10)
	unsigned char padding_5b0[0x10]; // 0x5b0 (0x10)

	/* Functions */

	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial (Underlying native function: SetWireframeMaterial 0x7a9d588)
	void SetWireframeMaterial(class UMaterialInterface*& InMaterial); // (Native | Public | BlueprintCallable)

	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor (Underlying native function: SetWireframeColor 0x979ed3c)
	void SetWireframeColor(struct FLinearColor& InColor); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe (Underlying native function: SetUseWireframe 0x979ecb4)
	void SetUseWireframe(bool& bUseWireframe); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion (Underlying native function: SetEnableMeshOcclusion 0x979ec34)
	void SetEnableMeshOcclusion(bool& bEnable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MRMesh.MRMeshComponent.RequestNavMeshUpdate (Underlying native function: RequestNavMeshUpdate 0x979ec10)
	void RequestNavMeshUpdate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MRMesh.MRMeshComponent.IsConnected (Underlying native function: IsConnected 0x979ebe4)
	bool IsConnected(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor (Underlying native function: GetWireframeColor 0x979ebc8)
	struct FLinearColor GetWireframeColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe (Underlying native function: GetUseWireframe 0x979ebb0)
	bool GetUseWireframe(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion (Underlying native function: GetEnableMeshOcclusion 0x979eb98)
	bool GetEnableMeshOcclusion(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate (Underlying native function: ForceNavMeshUpdate 0x979eb84)
	void ForceNavMeshUpdate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MRMesh.MRMeshComponent.Clear (Underlying native function: Clear 0x979e988)
	void Clear(); // (Final | Native | Public | BlueprintCallable)
};

