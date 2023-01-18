// ScriptStruct /Script/Engine.BlendSpaceTriangleEdgeInfo
// Size: 0x28
struct FBlendSpaceTriangleEdgeInfo
{
	struct FVector2D Normal; // 0x0 (0x10)
	int NeighbourTriangleIndex; // 0x10 (0x4)
	int AdjacentPerimeterTriangleIndices[0x2]; // 0x14 (0x4) (ARRAY) 
	int AdjacentPerimeterVertexIndices[0x2]; // 0x1c (0x4) (ARRAY) 
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

