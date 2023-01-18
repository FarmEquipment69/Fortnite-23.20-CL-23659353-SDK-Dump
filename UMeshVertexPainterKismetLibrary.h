// Class /Script/Engine.MeshVertexPainterKismetLibrary
// Size: 0x28
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.MeshVertexPainterKismetLibrary.RemovePaintedVertices (Underlying native function: RemovePaintedVertices 0x9e6a8bc)
	static void RemovePaintedVertices(class UStaticMeshComponent*& StaticMeshComponent); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.MeshVertexPainterKismetLibrary.PaintVerticesSingleColor (Underlying native function: PaintVerticesSingleColor 0x9e6a57c)
	static void PaintVerticesSingleColor(class UStaticMeshComponent*& StaticMeshComponent, struct FLinearColor& FillColor, bool& bConvertToSRGB); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.MeshVertexPainterKismetLibrary.PaintVerticesLerpAlongAxis (Underlying native function: PaintVerticesLerpAlongAxis 0x9e69f80)
	static void PaintVerticesLerpAlongAxis(class UStaticMeshComponent*& StaticMeshComponent, struct FLinearColor& StartColor, struct FLinearColor& EndColor, enum EVertexPaintAxis& Axis, bool& bConvertToSRGB); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

