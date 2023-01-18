// ScriptStruct /Script/Paper2D.SpriteGeometryCollection
// Size: 0x30
struct FSpriteGeometryCollection
{
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x0 (0x10)
	struct TEnumAsByte<ESpritePolygonMode> GeometryType; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	int PixelsPerSubdivisionX; // 0x14 (0x4)
	int PixelsPerSubdivisionY; // 0x18 (0x4)
	bool bAvoidVertexMerging; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	float AlphaThreshold; // 0x20 (0x4)
	float DetailAmount; // 0x24 (0x4)
	float SimplifyEpsilon; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

