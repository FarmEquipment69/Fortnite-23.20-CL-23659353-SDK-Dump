// ScriptStruct /Script/CustomizableObject.MutableModelImageProperties
// Size: 0x20
struct FMutableModelImageProperties
{
	struct FString TextureParameterName; // 0x0 (0x10)
	struct TEnumAsByte<TextureFilter> Filter; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	unsigned char SRGB; // 0x14 (0x1)
	unsigned char FlipGreenChannel; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	int LODBias; // 0x18 (0x4)
	struct TEnumAsByte<TextureGroup> LODGroup; // 0x1c (0x1)
	struct TEnumAsByte<TextureAddress> AddressX; // 0x1d (0x1)
	struct TEnumAsByte<TextureAddress> AddressY; // 0x1e (0x1)
	unsigned char padding_1f[0x1]; // 0x1f (0x1)
};

