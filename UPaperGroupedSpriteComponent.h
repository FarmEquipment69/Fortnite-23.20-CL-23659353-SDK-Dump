// Class /Script/Paper2D.PaperGroupedSpriteComponent
// Size: 0x5b0
class UPaperGroupedSpriteComponent : public UMeshComponent
{
	struct TArray<class UMaterialInterface*> InstanceMaterials; // 0x580 (0x10)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; // 0x590 (0x10)
	unsigned char padding_5a0[0x10]; // 0x5a0 (0x10)

	/* Functions */

	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform (Underlying native function: UpdateInstanceTransform 0x6d2e81c)
	bool UpdateInstanceTransform(int& InstanceIndex, struct FTransform& NewInstanceTransform, bool& bWorldSpace, bool& bMarkRenderStateDirty, bool& bTeleport); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor (Underlying native function: UpdateInstanceColor 0x6d2e708)
	bool UpdateInstanceColor(int& InstanceIndex, struct FLinearColor& NewInstanceColor, bool& bMarkRenderStateDirty); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis (Underlying native function: SortInstancesAlongAxis 0x6d2e660)
	void SortInstancesAlongAxis(struct FVector& WorldSpaceSortAxis); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Paper2D.PaperGroupedSpriteComponent.RemoveInstance (Underlying native function: RemoveInstance 0x6d2d8c4)
	bool RemoveInstance(int& InstanceIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform (Underlying native function: GetInstanceTransform 0x6d2c4d0)
	bool GetInstanceTransform(int& InstanceIndex, struct FTransform& OutInstanceTransform, bool& bWorldSpace); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceCount (Underlying native function: GetInstanceCount 0x6d2c4b8)
	int GetInstanceCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Paper2D.PaperGroupedSpriteComponent.ClearInstances (Underlying native function: ClearInstances 0x6d2c278)
	void ClearInstances(); // (Native | Public | BlueprintCallable)

	// Function /Script/Paper2D.PaperGroupedSpriteComponent.AddInstance (Underlying native function: AddInstance 0x6d2bdf4)
	int AddInstance(struct FTransform& Transform, class UPaperSprite*& Sprite, bool& bWorldSpace, struct FLinearColor& Color); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

