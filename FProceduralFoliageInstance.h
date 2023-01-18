// ScriptStruct /Script/Foliage.ProceduralFoliageInstance
// Size: 0x80
struct FProceduralFoliageInstance
{
	struct FQuat Rotation; // 0x0 (0x20)
	struct FVector Location; // 0x20 (0x18)
	float Age; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FVector Normal; // 0x40 (0x18)
	float Scale; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	class UFoliageType* Type; // 0x60 (0x8)
	unsigned char padding_68[0x18]; // 0x68 (0x18)
};

