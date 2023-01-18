// ScriptStruct /Script/Engine.KConvexElem
// Size: 0xf0
struct FKConvexElem : FKShapeElem
{
	struct TArray<struct FVector> VertexData; // 0x28 (0x10)
	struct TArray<int> IndexData; // 0x38 (0x10)
	struct FBox ElemBox; // 0x48 (0x38)
	struct FTransform Transform; // 0x80 (0x60)
	unsigned char padding_e0[0x10]; // 0xe0 (0x10)
};

