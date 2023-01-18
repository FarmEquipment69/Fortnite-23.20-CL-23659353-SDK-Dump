// ScriptStruct /Script/Landscape.LayerBlendInput
// Size: 0x80
struct FLayerBlendInput
{
	struct FName LayerName; // 0x0 (0x4)
	struct TEnumAsByte<ELandscapeLayerBlendType> BlendType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FExpressionInput LayerInput; // 0x8 (0x28)
	struct FExpressionInput HeightInput; // 0x30 (0x28)
	float PreviewWeight; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FVector ConstLayerInput; // 0x60 (0x18)
	float ConstHeightInput; // 0x78 (0x4)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

