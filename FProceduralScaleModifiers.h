// ScriptStruct /Script/Procedural.ProceduralScaleModifiers
// Size: 0x20
struct FProceduralScaleModifiers
{
	bool bRandomScaleEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FFloatInterval* RandomScale; // 0x4 (0x8)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<class UProceduralScaleModifier*> Modifiers; // 0x10 (0x10)
};

