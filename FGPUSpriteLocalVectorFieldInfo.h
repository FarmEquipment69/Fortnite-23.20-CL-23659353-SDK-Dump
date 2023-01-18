// ScriptStruct /Script/Engine.GPUSpriteLocalVectorFieldInfo
// Size: 0xd0
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField* Field; // 0x0 (0x8)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Transform; // 0x10 (0x60)
	struct FRotator MinInitialRotation; // 0x70 (0x18)
	struct FRotator MaxInitialRotation; // 0x88 (0x18)
	struct FRotator RotationRate; // 0xa0 (0x18)
	float Intensity; // 0xb8 (0x4)
	float Tightness; // 0xbc (0x4)
	unsigned char bIgnoreComponentTransform; // 0xc0 (0x1)
	unsigned char bTileX; // 0xc0 (0x1)
	unsigned char bTileY; // 0xc0 (0x1)
	unsigned char bTileZ; // 0xc0 (0x1)
	unsigned char bUseFixDT; // 0xc0 (0x1)
	unsigned char padding_c1[0xf]; // 0xc1 (0xf)
};

