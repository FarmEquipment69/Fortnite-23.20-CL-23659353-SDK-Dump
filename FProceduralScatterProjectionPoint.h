// ScriptStruct /Script/Procedural.ProceduralScatterProjectionPoint
// Size: 0xc0
struct FProceduralScatterProjectionPoint
{
	struct FVector GenerationLocation; // 0x0 (0x18)
	struct FRotator Rotation; // 0x18 (0x18)
	float Scale; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	class UProceduralScatterSettings* ScatterSettings; // 0x38 (0x8)
	int VariationIdx; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FVector StartTrace; // 0x48 (0x18)
	struct FVector EndTrace; // 0x60 (0x18)
	struct FProceduralHitPoint HitPoint; // 0x78 (0x40)
	unsigned char padding_b8[0x8]; // 0xb8 (0x8)
};

