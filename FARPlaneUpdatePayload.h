// ScriptStruct /Script/AugmentedReality.ARPlaneUpdatePayload
// Size: 0xd0
struct FARPlaneUpdatePayload
{
	struct FARSessionPayload SessionPayload; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FTransform WorldTransform; // 0x20 (0x60)
	struct FVector Center; // 0x80 (0x18)
	struct FVector Extents; // 0x98 (0x18)
	struct TArray<struct FVector> BoundaryVertices; // 0xb0 (0x10)
	enum EARObjectClassification ObjectClassification; // 0xc0 (0x1)
	unsigned char padding_c1[0xf]; // 0xc1 (0xf)
};

