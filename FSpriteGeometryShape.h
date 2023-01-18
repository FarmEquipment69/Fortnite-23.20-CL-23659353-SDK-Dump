// ScriptStruct /Script/Paper2D.SpriteGeometryShape
// Size: 0x40
struct FSpriteGeometryShape
{
	enum ESpriteShapeType ShapeType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FVector2D> Vertices; // 0x8 (0x10)
	struct FVector2D BoxSize; // 0x18 (0x10)
	struct FVector2D BoxPosition; // 0x28 (0x10)
	float Rotation; // 0x38 (0x4)
	bool bNegativeWinding; // 0x3c (0x1)
	unsigned char padding_3d[0x3]; // 0x3d (0x3)
};

