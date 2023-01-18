// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x600
class UProceduralMeshComponent : public UMeshComponent
{
	unsigned char unreflected_580[0x8]; // 0x580 (0x8) 
	bool bUseComplexAsSimpleCollision; // 0x588 (0x1)
	bool bUseAsyncCooking; // 0x589 (0x1)
	unsigned char unreflected_58a[0x6]; // 0x58a (0x6) 
	class UBodySetup* ProcMeshBodySetup; // 0x590 (0x8)
	struct TArray<struct FProcMeshSection> ProcMeshSections; // 0x598 (0x10)
	struct TArray<struct FKConvexElem> CollisionConvexElems; // 0x5a8 (0x10)
	struct FBoxSphereBounds LocalBounds; // 0x5b8 (0x38)
	struct TArray<class UBodySetup*> AsyncBodySetupQueue; // 0x5f0 (0x10)

	/* Functions */

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor (Underlying native function: UpdateMeshSection_LinearColor 0x7de4258)
	void UpdateMeshSectionLinearColor(int& SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool& bSRGBConversion); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection (Underlying native function: UpdateMeshSection 0x7de3fa0)
	void UpdateMeshSection(int& SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible (Underlying native function: SetMeshSectionVisible 0x7de3c98)
	void SetMeshSectionVisible(int& SectionIndex, bool& bNewVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible (Underlying native function: IsMeshSectionVisible 0x7de3bf0)
	bool IsMeshSectionVisible(int& SectionIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections (Underlying native function: GetNumSections 0x7de34dc)
	int GetNumSections(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor (Underlying native function: CreateMeshSection_LinearColor 0x7de2d68)
	void CreateMeshSectionLinearColor(int& SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool& bCreateCollision, bool& bSRGBConversion); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection (Underlying native function: CreateMeshSection 0x7de2a10)
	void CreateMeshSection(int& SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool& bCreateCollision); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection (Underlying native function: ClearMeshSection 0x7de14f8)
	void ClearMeshSection(int& SectionIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes (Underlying native function: ClearCollisionConvexMeshes 0x7de14e4)
	void ClearCollisionConvexMeshes(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections (Underlying native function: ClearAllMeshSections 0x7de14d0)
	void ClearAllMeshSections(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh (Underlying native function: AddCollisionConvexMesh 0x7de11e8)
	void AddCollisionConvexMesh(struct TArray<struct FVector>& ConvexVerts); // (Final | Native | Public | BlueprintCallable)
};

