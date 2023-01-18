// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x28
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh (Underlying native function: SliceProceduralMesh 0x7de3d5c)
	static void SliceProceduralMesh(class UProceduralMeshComponent*& InProcMesh, struct FVector& PlanePosition, struct FVector& PlaneNormal, bool& bCreateOtherHalf, class UProceduralMeshComponent*& OutOtherHalfProcMesh, enum EProcMeshSliceCapOption& CapOption, class UMaterialInterface*& CapMaterial); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh (Underlying native function: GetSectionFromStaticMesh 0x7de38ec)
	static void GetSectionFromStaticMesh(class UStaticMesh*& InMesh, int& LODIndex, int& SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh (Underlying native function: GetSectionFromProceduralMesh 0x7de34f4)
	static void GetSectionFromProceduralMesh(class UProceduralMeshComponent*& InProcMesh, int& SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh (Underlying native function: GenerateBoxMesh 0x7de3240)
	static void GenerateBoxMesh(struct FVector& BoxRadius, struct TArray<struct FVector>& Vertices, struct TArray<int>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded (Underlying native function: CreateGridMeshWelded 0x7de24d8)
	static void CreateGridMeshWelded(int& NumX, int& NumY, struct TArray<int>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, float& GridSpacing); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles (Underlying native function: CreateGridMeshTriangles 0x7de22ac)
	static void CreateGridMeshTriangles(int& NumX, int& NumY, bool& bWinding, struct TArray<int>& Triangles); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit (Underlying native function: CreateGridMeshSplit 0x7de1a64)
	static void CreateGridMeshSplit(int& NumX, int& NumY, struct TArray<int>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector2D>& UV1s, float& GridSpacing); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent (Underlying native function: CopyProceduralMeshFromStaticMeshComponent 0x7de170c)
	static void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent*& StaticMeshComponent, int& LODIndex, class UProceduralMeshComponent*& ProcMeshComponent, bool& bCreateCollision); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles (Underlying native function: ConvertQuadToTriangles 0x7de1578)
	static void ConvertQuadToTriangles(struct TArray<int>& Triangles, int& Vert0, int& Vert1, int& Vert2, int& Vert3); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh (Underlying native function: CalculateTangentsForMesh 0x7de1288)
	static void CalculateTangentsForMesh(struct TArray<struct FVector>& Vertices, struct TArray<int>& Triangles, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector>& Normals, struct TArray<struct FProcMeshTangent>& Tangents); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

