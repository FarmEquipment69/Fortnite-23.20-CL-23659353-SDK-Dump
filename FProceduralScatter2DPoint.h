// ScriptStruct /Script/Procedural.ProceduralScatter2DPoint
// Size: 0x60
struct FProceduralScatter2DPoint
{
	struct FVector Location; // 0x0 (0x18)
	float Scale; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	class UProceduralScatterSettings* ScatterSettings; // 0x20 (0x8)
	struct FBox2D MaxAABB; // 0x28 (0x28)
	float CollisionRadius; // 0x50 (0x4)
	bool bBlocker; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	int RandomNumber; // 0x58 (0x4)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)
};

